#include<iostream>
using namespace std;

pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key){
    // if the element is not present in array return {-1, -1}
    if(key<arr[0][0] or key>arr[n-1][m-1]){
        return {-1, -1};
    }

    // staircase search
    int i = 0;
    int j = m-1;
    while(i<n and j>=0){
        if(arr[i][j]==key){
            return {i,j};
        }
        else if(arr[i][j]>key){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    // 2D Row & column wise sorted array
    int arr[][4]={{1, 2, 3, 4},
                  {5,  6, 7, 8},
                  {9, 10, 11, 12},
                  {13, 14, 15, 16}};
    int n = 4, m = 4;
    pair<int, int> coordinates = staircaseSearch(arr,n,m,15);
    cout<<coordinates.first<<" "<<coordinates.second<<endl;
    return 0;
}
// brute force approach
// linear search on a 2d array
// n*m time

// another approach is binary search
// O(nlogm)

// staircase search
// O(m+n)

