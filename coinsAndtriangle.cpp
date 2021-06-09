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
	n= 8*n+1;
	n= sqrt(n);
	cout << (n-1)/2<<endl;
    }
    return 0;
}