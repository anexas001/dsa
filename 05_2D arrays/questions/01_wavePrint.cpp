#include<bits/stdc++.h>
using namespace std;
 
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // 4 variables
    int startRow=0;
    int endRow=m-1;
    int startCol=0;
    int endCol=n-1;
    vector<int> answer;

    while(startCol<=endCol){

        for(int row=startRow;row<=endRow;row++){
            answer.push_back(arr[row][endCol]);
        }
        endCol--;
        for(int row=endRow;row>=startRow;row--){
            answer.push_back(arr[row][endCol]);
        }
        endCol--;
    }
    return answer;
    


}
int main(){
    vector<vector<int>> arr={{1,2,3,4},
                             {5,6,7,8},
                             {9,10,11,12},
                             {13,14,15,16}};
    vector<int> ans=WavePrint(4, 4, arr);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}