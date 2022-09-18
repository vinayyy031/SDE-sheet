//delete middle node of the stack
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s,int count, int size){
    //base case
    if(count==size/2){
        s.pop();
        return ;
    }
    int num = s.top();
    s.pop();
    //recursive call
    solve(s, count+1, size);
    //pushing elements back
    s.push(num);
}

int main(){
    int count=0, size, element;
    stack<int> s;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>element;
        s.push(element);
    }
    //calling function
    solve(s, count, size);
}
