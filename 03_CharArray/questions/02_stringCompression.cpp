#include <bits/stdc++.h>
using namespace std;

int compress(vector<char> &chars)
{
    int count_ = 1;
    string ans;

    for (int i = 0; i < chars.size(); i++){
        while (i < chars.size() - 1 && chars[i + 1] == chars[i]){
            count_++;
            i++;
        }
        ans += chars[i];
        if (count_ == 1){
            continue;
        }
        ans += to_string(count_);
        count_ = 1;
    }
    chars.clear();
    for (int i = 0; i < ans.size(); i++){
        chars.push_back(ans[i]);
    }
    return chars.size();
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << "length of the updated array " << compress(chars)<< endl;
    for(int i=0;i<chars.size();i++){
        cout<<chars[i]<<", ";
    }
    return 0;
}