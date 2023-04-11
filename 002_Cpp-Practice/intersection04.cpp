#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num1,num2;
    cin>>num1;
    vector<int>arr1;
    arr1.resize(num1);
    for (int i=0; i<num1; i++)
        cin>>arr1[i];
    cin>>num2;
    vector<int>arr2;
    arr2.resize(num2);
    for (int i=0; i<num2; i++)
        cin>>arr2[i];
    for (int i=0; i<num1; i++){
        for (int j=0; j<num2; j++){
            if(arr1[i]==arr2[j])
                cout<<arr1[i]<<" ";
        }
    }
    return 0;
}