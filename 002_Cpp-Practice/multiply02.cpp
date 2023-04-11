#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int size,multi=1;
    cin>>size;
    vector<int>arr;
    arr.resize(size);
    for (int i=0; i<size; i++)
        cin>>arr[i];
    for (int i=0; i<size; i++){
        if(i%2!=0)
            multi*=arr[i];
    }
    cout<<"Multiplication of array odd indices is= "<<multi<<"\n";
    return 0;
}