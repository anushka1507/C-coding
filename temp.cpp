#include<iostream>
using namespace std;
int main()
{
    int S,E,W;
    cout<<"Enter Start Fahrenheit Value:"<<endl;
    cin>>S;
    cout<<"Enter End Fahrenheit Value:"<<endl;
    cin>>E;
    cout<<"Enter Step Size:"<<endl;
    cin>>W;
    int i;
    for(i=S;i<=E;i+=W)
    {
        int C;
        C=((i-32)*5)/9;
        cout<<i<<" "<<C<<endl;
    }
    return(0);
}