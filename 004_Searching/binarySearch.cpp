#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,match;
    cin>>num>>match;
    
    vector<int>arr;
    arr.resize(num);
    
    for (int i=0; i<num; i++)
        cin>>arr[i];
    
    int low=0, high=num-1, mid;
    while (low <= high){
        mid = (low + high) / 2;
        cout<<"Low: "<<low<<", High: "<<high<<", Mid: "<<mid<<"\n";
        if(match==arr[mid]){
            cout<<"Yes! the number have index position : "<<mid<<"\n";
            return 0;
        }
        if(match < arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    
    cout<<"No! the number have not in the array ...\n";
    
    return 0;
}

/*  Input- (the given array must sorted...)
    10 3
    1 5 6 7 8 9 10 15 19 23
 */