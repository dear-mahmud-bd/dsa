#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,ele;
    cin>>num;
    vector<int>a;
    for(int i=0; i<num; i++){
        cin>>ele;
        a.push_back(ele);
    }
    for (int i=1; i<num; i++){
        int key = a[i];
        int j = i-1;
        while (j>=0 && a[j]<key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    cout<<"After the insertion sort the array elements: ";
    for(int i=0; i<num; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";    
    return 0;
}