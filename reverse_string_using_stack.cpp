#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    //creating stack of string type
    stack<char> s;
    //pushing string into stack
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        s.push(ch);
    }
    
    string ans="";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    //printing the reverse of the string
    cout<<ans;
}
