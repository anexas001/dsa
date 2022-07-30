#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[1000]="apple";
    char b[100];

    // calculate length
    cout<<strlen(a)<<endl;
    // it shows 5, as it has 5 letters
    // storage is 6 as it is also null terminated


    // string copy
    strcpy(b,a);   //O(n)
    cout<<b<<endl;
    //  copy a to b


    // compare, returns 0 when both strings are same 



     // string concatinate
     char name[]="himani ";
     char surname[]="saxena";
     cout<<strcat(name,surname)<<endl;

     cout<<strcmp(surname,name)<<endl;

    return 0;
}