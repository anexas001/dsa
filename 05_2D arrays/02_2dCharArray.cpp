#include<iostream>
using namespace std;

int main()
{
    char numbers[][10]={
        "one",
        "two",
        "three",
        "forty"
    };
    // int i=3;
    // cout<<numbers[i][1]<<endl;
    // cout<<numbers[i]<<endl;
    for(int i=0;i<4;i++){
        cout<<numbers[i]<<", "; //print rows
    }
    //cout treats char array differently
    cout<<endl;
    int num[][5]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        cout<<num[i]<<", "; //will print address
    }

    return 0;
}



