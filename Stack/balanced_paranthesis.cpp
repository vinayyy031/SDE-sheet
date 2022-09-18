#include<bits/stdc++.h>
using namespace std;
bool balanced(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(s.empty()){
            //if stack is empty push first character(bracket)
            s.push(str[i]);
        }else if((s.top()=='(' && str[i]==')') ||
                 (s.top()=='{' && str[i]=='}') ||
                 (s.top()=='[' && str[i]==']') 
                ){
                     s.pop();
        }
        else{
            s.push(str[i]);
        }
    }
    if(s.empty()){
            return true;
        }
        else{
            return false;
        }
}
int main(){
    string expr = "{()}[]";
 
    // Function call
    if (balanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
} 
