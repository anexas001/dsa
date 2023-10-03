#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int i=0,j=0,mx=0;
    unordered_map<char,int> mp;
    while(j<s.length()){
        mp[s[j]]++;
        if(mp.size()<2){
            j++;
        }
        else if(mp.size()==2){
            mx = max(mx,j-i+1);
            j++;
        }
        else if(mp.size()>2){
            while(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }

    }
    cout<<mx;
    return 0;
}