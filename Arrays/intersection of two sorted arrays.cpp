vector<int> intersection(int arr1[], int arr2[], int n, int m){
    vector<int> ans;
    int i=0; int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return ans;
}
