#include<bits/stdc++.h>
using namespace std;
unordered_map<string ,char>operators,operands;

int main(){
    string q ;
    cin>>q;
    operators["add"] = '+';
    operators["sub"] = '-';
    operators["mul"] = '*';
    operators["rem"] = '%';
    operators["pow"] = '^';
    
    operands["one"] = '1';
    operands["two"] ='2';
    operands["three"] ='3';
    operands["four"] = '4';
    operands["five"] = '5';
    operands["six"] = '6';
    operands["seven"] = '7';
    operands["eight"] = '8';
    operands["nine"] = '9';
    operands["zero"] = '0';
    string part = "";
    
    string operand = "";
    bool invalid = false;
    vector<string> prefix;
    for(int i=0;i<q.length();i++){
        if(q[i]==' '){
            if(find(operators.begin(),operators.end(),part)!=operators.end()){
                prefix.push_back(""+operators[part]);
            }
            else if(find(operands.begin(),operands.end(),part)!=operands.end()){
                operand.push_back(operands[part]);
                prefix.push_back(operand);
            }else{
                invalid = true;
            }
            part = "";
        }
        else if(q[i]=='c'){
            if(find(operands.begin(),operands.end(),part)!=operands.end()){
                operand+= operands[part];
            }
            part = "";
        }else
        part += q[i];
    }

    if(invalid){
        cout<<"expression is not complete or invalid";
        return 0;
    }
    int ans = prefixanswer(prefix);
    if(ans==-1){
        cout<<"expression is not complete or invalid";
        return 0;
    }
    cout<<ans;
    
}
int prefixanswer(vector<string>prefix){
    stack<int>ans;
    for(int i=prefix.size()-1;i>=0;i--){
        if(find(operators.begin(),operators.end(),prefix[i])==operators.end()){
            ans.push(stoi(prefix[i]));
        }
        else{
            if(ans.empty())return -1;
            int o1 = ans.top();
            ans.pop();
            if(ans.empty())return -1;
            int o2 =ans.top();
            ans.pop();
           if(prefix[i]=="+"){
                ans.push(o1+o2);
           }else if(prefix[i]=="-"){
            ans.push(o1-o2);
           }
           else if(prefix[i]=="*"){
            ans.push(o1*o2);
           }else if(prefix[i]=="%"){
            ans.push(o1%o2);
           }
           else if(prefix[i]=="^"){
            ans.push(pow(o1,o2));
           }else{
            return -1;
           }
        }
        if(ans.size()>1)return -1;
        return ans.top();
    }
}