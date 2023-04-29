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
    for (int i=0; i<num; i++){
        int big = a[i], j=i;
        while (j<num){
            if(big<a[j]){
                big = a[j];
                swap(a[i], a[j]);
            }
            j++;
        }
    }
    cout<<"After the selection sort the array elements: ";
    for(int i=0; i<num; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";    
    return 0;
}