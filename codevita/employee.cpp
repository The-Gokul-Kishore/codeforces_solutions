#include<bits/stdc++.h>

using namespace std;

int timeconverter(string time) {
    int hours = stoi(time.substr(0, time.find(':')));
    int minutes = stoi(time.substr(time.find(':') + 1, 2));
    string period = time.substr(time.size() - 2);

    if (period == "AM" && hours == 12) hours = 0;
    if (period == "PM" && hours != 12) hours += 12;

    return hours * 60 + minutes;
}
 
bool process_room_activity(string id, string act, string room, string time,
                           unordered_map<string, int>& worked,
                           unordered_map<string,unordered_map<string,vector<int>>>&personal_logs, unordered_map<string,stack<pair<string, int>>>& employee,
                           bool& badrecords, bool add_to_worked) {
    if (act == "exits") {
        if (employee[id].empty() || employee[id].top().first != room || employee[id].top().second == -1) {
            badrecords = true;
            if(!employee.empty()){
                if(employee[id].top().second!=timeconverter(time)){
                    return false;
                }else{
                    badrecords = 0;
                if (add_to_worked) {
                        worked[id] += timeconverter(time) - employee[id].top().second;
                    }
                    return true;
                }
            }else
            return false;
        }
        if (add_to_worked) {
            worked[id] += timeconverter(time) - employee[id].top().second;
        }
        employee[id].push({room, -1});

    } else {
        if (!employee[id].empty() && employee[id].top().second != -1) {
            if(personal_logs[id][employee[id].top().first][1] !=timeconverter(time)){
                
            
            badrecords = true;
            return false;
            }
        }
        employee[id].push({room, timeconverter(time)});
    }
    return true;
}

bool process_activity(string id, string act, string room, string time,
                      unordered_map<string, int>& worked,
                      unordered_map<string,unordered_map<string,vector<int>>>&personal_logs,
                      unordered_map<string, stack<pair<string, int>>>& employee,
                      bool& badrecords) {
    if (room[0] == 'r') {
        return process_room_activity(id, act, room, time, worked,personal_logs, employee, badrecords, true);
    } else {
        return process_room_activity(id, act, room, time, worked, personal_logs,employee, badrecords, false);
    }
}


int main() {
    int n;
    cin >> n;

    string suspect;
    bool badrecords = false;
    unordered_map<string, int> worked;
    unordered_map<string, stack<pair<string, int>>> employee;

    unordered_map<string,unordered_map<string,vector<int>>>personal_logs;
    vector<vector<string>> logs(n,vector<string>(4));

    for (int i = 0; i < n; i++) {
        cin >> logs[i][0] >> logs[i][1] >> logs[i][2] >> logs[i][3];
        cout<<"I"<<i<<endl;
        personal_logs[logs[i][0]][logs[i][2]][logs[i][1]=="enters"?0:1] = timeconverter(logs[i][3]);
        cout<<"HEE"<<endl;
    }
    cin>>suspect;
    sort(logs.begin(), logs.end(), [](const vector<string>& a, const vector<string>& b) {
        return timeconverter(a[3]) < timeconverter(b[3]); 
    });
        for (const auto& log : logs) {
        string id = log[0];
        string act = log[1];
        string room = log[2];
        string time = log[3];
        if (!process_activity(id, act, room, time, worked, personal_logs,employee, badrecords)) {
            break;
        }
    }
    if(badrecords){
        cout<<"Cannot be determined";
        return 0;
    }
    int min_time = INT_MAX;
    string min_id = "";
    for (auto& iter : worked) {
        if (min_time > iter.second) {
            min_time = iter.second;
            min_id = iter.first;
        } else if (min_time == iter.second && iter.first == suspect) {
            min_id = suspect;
        }
    }

    if (suspect == min_id) {
        cout << "Yes" ;
    } else {
        cout << "No";
    }

    return 0;
}
