#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int size,sum=0;
    cin>>size;
    vector<int>arr;
    arr.resize(size);
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    for (int i=0; i<size; i++){
        sum+=arr[i];
    }
    cout<<"Sum of array element is= "<<sum<<"\n";
    return 0;
}