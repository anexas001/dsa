#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin>>str;
    string pat; cin>>pat;
    int n = str.length();
    int k = pat.length();
    int i=0,j=0;
    int count = 0;
    string ans = "";
    while(j<n){
        ans+=str[j];
        if(j-i+1<k) j++;
        else if(j-i+1==k){
            if(ans==pat){
                count++;
            }
            ans.erase(ans.begin());
            i++;j++;
        }
    }
    cout<<count<<"\n";
    return 0;
}