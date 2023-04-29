#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,ele;
    cin>>num;
    vector<int>arr;
    for (int i=0; i<num; i++){
        cin>>ele;
        arr.push_back(ele);
    }
    for(int i=0; i<num; i++){
        for(int j=0; j<num-i-1; j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j]-arr[j+1];
            }
        }
    }
    for(int i=0; i<num; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}