#include <iostream>
using namespace std;
 
int main() 
{
    long long t;
    cin>>t;
    
    if (t%2==0) 
        {
        cout<<t/2<<endl;
    } 
    else 
    {
        cout<<-(t+1)/2<<endl;
    }
    return 0;
}
