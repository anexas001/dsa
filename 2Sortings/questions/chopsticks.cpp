//Expected Complexity: O(N logN)


#include<bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());
    int res = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= D) { res++; i++;}
    }

    return res;
}
int main(){
    vector<int> arr = {3,4,1,5,12,5,1,3};
    int d = 2;
    cout<<pairSticks(arr, d)<<endl;
    
    return 0;
}