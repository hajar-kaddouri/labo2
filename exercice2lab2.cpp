


#include <iostream>
using namespace std;

int main()
{
     int n;
     int a=n-1;
     int b = 1;
    cout<<"Tapez un nombre de ligne n";
    cin>>n;
   
    for (int i=1;i<=n;i++){

        for (int j=1;j<=a;j++)
            {
            cout<<" ";
            }
        a=a-1;
        for (int j=1;j<=b;j++)
            {
            cout<<"*";
        }
        b=b+2;  
        cout<<endl;
        }
    return 0;
 }   