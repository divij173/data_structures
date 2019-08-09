#include <iostream>
using namespace std;
int main()
{   int a,i,j,b,temp;
cin>>a;
int arr[a];
for(i=0;i<a;i++)
{
cin>>arr[i];
}
for(i=0;i<a-1;i++)  
{
b=i;  
for(j=i+1;j<a;j++)  
if(arr[j]<arr[b])  
{
b=j;
}
temp=arr[b];
arr[b]=arr[i];
arr[i]=temp;
}
    
    for(i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
