#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n;
    for(int test=0;test<t;test++)
    {
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else if(n==2 || n==3)
    {
        cout<<2;
    }
    else
    {
	cout <<n/2<<endl;
    }
	// n= 8*n+1;
	// n= sqrt(n);
    }
    return 0;
}