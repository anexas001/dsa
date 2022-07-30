// Given a long route containing N,S,E,W directions, find 
// the shortest path to reach the location.
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int x=0, y=0;
    char route[1000];
    cin.getline(route,1000);
    for(int i=0; route[i]!='\0';i++){
        switch(route[i]){
            case 'N' : y++;
                break;
            case 'S' : y--;
                break;
            case 'E' : x++;
                break;
            case 'W' : x--;
                break;
        }
    }
    cout<<"dispacement: "<<x<<", "<<y<<endl;
    if(x>0 && y>0){
        while(y--){
            cout<<"N";
        }
        while (x--)
        {
            cout<<"E";
        }
        
    }
    else if(x<0 && y>0){
        while(y--){
            cout<<"N";
        }
        while (x++)
        {
            cout<<"W";
        }
        
    }
    else if(x<0 && y<0){
        while(y++){
            cout<<"S";
        }
        while (x++)
        {
            cout<<"W";
        }
        
    }
    else if(x>0 && y<0){
        while(y++){
            cout<<"S";
        }
        while (x--)
        {
            cout<<"E";
        }
        
    }
    else{
        cout<<"no displacement";
    }

    return 0;
}