// Read N strings and print the largest string. Each string can have upto 1000 characters.
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[1000];
    char largest[1000];
    int largest_length=0;
    cin.get();
    while(n--){
        cin.getline(a,1000);
        int len=strlen(a);
        if(len>largest_length){
            strcpy(largest,a);
            largest_length=len;
        }
    }

    cout<<largest<<endl;
    cout<<largest_length;
    return 0;
}