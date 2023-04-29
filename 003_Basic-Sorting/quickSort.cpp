#include<bits/stdc++.h>
using namespace std;
vector<int> quickSort(vector<int>ar){
    if(ar.size()<=1)
        return ar;
    int pivot = ar.size()-1;
    vector<int>l,r;
    for(int i=0; i<ar.size(); i++){
        if(i==pivot)
            continue;
        if(ar[i] <= ar[pivot])
            l.push_back(ar[i]);
        else
            r.push_back(ar[i]);
    }
    vector<int>sorted_l = quickSort(l);
    vector<int>sorted_r = quickSort(r);
    vector<int>sortedArr;
    for(int i=0; i<sorted_l.size(); i++)
        sortedArr.push_back(sorted_l[i]);
    sortedArr.push_back(ar[pivot]);
    for(int i=0; i<sorted_r.size(); i++)
        sortedArr.push_back(sorted_r[i]);
    return sortedArr;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num,ele;
    cin>>num;
    vector<int>ar;
    for(int i=0; i<num; i++){
        cin>>ele;
        ar.push_back(ele);
    }
    vector<int>sortedArr = quickSort(ar);
    for(int i=0; i<sortedArr.size(); i++){
        cout<<sortedArr[i]<<" ";
    }
    return 0;
}
