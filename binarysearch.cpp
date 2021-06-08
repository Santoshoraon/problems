#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int first=0;
    int last=n;
    while(first<=last)
    {
        int mid;
        mid=(first+last)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            first=mid+1;
        }
        else
        {
            last=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr,n,key);
}