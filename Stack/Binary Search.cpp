
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start=0, end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main() {
    // Write C++ code here
    int a[5]={1,2,3,4,5};
    int place=binarySearch(a, 5, 2);
    cout<<place;

    return 0;
}