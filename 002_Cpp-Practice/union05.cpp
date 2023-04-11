#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // To make easy ...
    int uNum=100;
    vector<int>un;
    un.resize(uNum);
    for (int i=0; i<uNum; i++)
        un[i]=0;
    // Get input two array ...
    int num1,num2;
    cin>>num1;
    vector<int>arr1;
    arr1.resize(num1);
    for (int i=0; i<num1; i++){
        cin>>arr1[i];
        un[arr1[i]]=1;
    }
    cin>>num2;
    vector<int>arr2;
    arr2.resize(num2);
    for (int i=0; i<num2; i++){
        cin>>arr2[i];
        un[arr2[i]]=1;
    }
    // Print array after union two array...
    for (int i=0; i<uNum; i++){
        if(un[i]==1)
            cout<<i<<" ";
    }
    return 0;
}