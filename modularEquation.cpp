#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
    int n,m;
    cin>>n;
    cin>>m;
    int sum=0;
    for(int b=2;b<=n;b++)
    {
        for(int a=1;a<b;a++)
        {
            if((m%a)%b==(m%b)%a)
            {
                sum++;
            }
        }
        
    }
    cout<<sum;
    }
    return 0;
    

}