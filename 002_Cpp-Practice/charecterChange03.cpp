#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string name;
    cin >> name;
    cout<<name<<"\n";
    int len = name.length();
    for (int i = 0; i < len; i++){
        if (i%2 != 0){
            continue;
        }else{
            if(name[i]=='z')
                name[i]='a';
            else
                name[i]+=1;
        }
    }
    cout<<name<<"\n";
    return 0;
}