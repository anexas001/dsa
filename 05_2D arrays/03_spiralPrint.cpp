#include<iostream>
using namespace std;

void print(int arr[][4],int n, int m){
    // 4 variables
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    // Outer loop (traverse array boundary)
    while(startCol<=endCol and startRow<=endRow){
        // start row
        for(int col=startCol;col<=endCol;col++){
            cout<< arr[startRow][col]<<" ";
        }
        // end col
        for(int row=startRow+1;row<=endRow;row++){
            cout<<arr[row][endCol]<<" ";
        }
        // end row
        for(int col=endCol-1;col>=startCol;col--){
            if(startRow==endRow){
                break;
            }
            cout<< arr[endRow][col]<<" ";
        }
        // start col
         for(int row=endRow-1;row>startRow;row--){
            // avoid duplicate printing of elements
            if(startCol==endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }
        // update the variable
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int arr[][4]={{1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  {13,14,15,16}};
    print(arr,4,4);
    return 0;
}