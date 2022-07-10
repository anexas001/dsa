#include<iostream>
using namespace std;

int main()
{
    // char sentence[100];
    // cin.getline(sentence,100);
    // cout<<sentence<<endl;
    char paragraph[200];
    cin.getline(paragraph, 200, '#'); // '#' is the stopping character
    cout<<paragraph<<endl;
    return 0;
}