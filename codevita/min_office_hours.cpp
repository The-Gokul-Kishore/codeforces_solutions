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
 struct Activity {
    string room;
    int entry_time;
    int exit_time;
};
int main(){
    int n;
    cin >> n;
unordered_map<string, unordered_map<string, pair<int, int>>> emp_log;
unordered_map<string, unordered_map<string, vector<int>>> precleanedlogs;

for (int i = 0; i < n; i++) {
    string id, act, room, time;
    cin >> id >> act >> room >> time;
    int time_m = timeconverter(time);
    precleanedlogs[id][room].push_back(time_m*(act=="enters"?1:-1));
}
    string sus;
    cin>>sus;
    bool falser = 0;
    for (auto& user_log : precleanedlogs) {
        string id = user_log.first;
        unordered_map<string, vector<int>> room_logs = user_log.second;

        for (auto& room_log : room_logs) {
            string room = room_log.first;
            vector<int>& logs = room_log.second;

            sort(logs.begin(), logs.end(), [](int a, int b) { return abs(a) < abs(b); });

            vector<pair<int, int>> session_pairs;
            int entry_time = -1;

            for (int log : logs) {
                if (log > 0) {  
                    entry_time = log;
                } else {  
                    if (entry_time != -1) {
                        session_pairs.push_back({entry_time, -log});
                        entry_time = -1;  
                    }else{
                        falser = 1;
                        break;
                    }
                }
            }

            int counter = 1;
            for (auto& session : session_pairs) {
                string new_room = room + "a" + to_string(counter++);
                emp_log[id][new_room] = session;
            }
        }
    }  
    
    vector<pair<string, vector<Activity>>> workers;

    string lazy_id = "";
    int min_work_done = INT_MAX;
    for(auto&iter:emp_log){
        string id = iter.first;
        vector<Activity>acts;
        for(auto time_room:iter.second){
            int entry_time = time_room.second.first;
            int exit_time = time_room.second.second;
            string room = time_room.first;
            if(entry_time>exit_time){
                falser = 1;
                break;   
            
            }   
            acts.push_back({room, entry_time, exit_time});
        }
        if(falser){
            break;
        }
        workers.push_back({id,acts});
    }
    unordered_map<string, int> worked;
    for(auto worker:workers){
        string id = worker.first;

        vector<Activity>acts = worker.second;
        int total_work = 0;
        int time = 0;
        sort(acts.begin(),acts.end(),[](Activity& a , Activity&b){
            return a.entry_time < b.entry_time;
        });
        for(auto act:acts){
            if(act.entry_time==-1||act.exit_time==-1){
                falser= 1;
                break;
            }
            if(act.entry_time<time){
                falser = 1;
                break;
            }
            time = act.exit_time;

            if(act.room[0]!='r'){
                continue;
            }
            total_work += act.exit_time-act.entry_time;
        }
        if(falser){


            break;
        }
        
        if(min_work_done>total_work){
            min_work_done= total_work;
            
            lazy_id = id;
        }else if(id==sus&&min_work_done==total_work){
            
            lazy_id = id;
        }
    }
    if(falser){
        cout<<"Cannot be determined";
    }
    else if(sus==lazy_id){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}