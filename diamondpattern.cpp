#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int n1=(n+1)/2;
    int n2=n/2;
    for(int i=1;i<=n1;i++)
    {
        int k=1;
        for(k=1;k<=n1-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n2;i++)
    {
        int l=1;
        for(l=1;l<=i;l++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*(n2-i)+1;j++)
        {
            cout<<"*";
           
        }
        cout<<endl;
    }

}