#include <iostream>

using namespace std;

int main()
{
int i,j,k,p;
    for(i=1;i<=5;i++)
    {
        cout<<"\n";
        for(j=5;j>i;j--)
            cout<<"  ";
        for(k=1;k<=i;k++)
            cout<<k<<" ";
        for(p=k-1;p>1;p--)
            cout<<p-1<<" ";
    }

    for(i=1;i<=5;i++)
    {
        cout<<"\n";
        for(j=1;j<i;j++)
            cout<<"  ";
        for(k=i;k<=5;k++)
            cout<<k<<" ";
        for(p=4;p>=i;p--)
            cout<<p<<" ";

    }







}
