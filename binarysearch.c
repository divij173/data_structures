#include<stdio.h>
int main()
{
int n,a,i,k=0;
scanf("%d %d",&n,&a);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
} 
int l=0,r=n-1;
while(l<=r)
{
int b=(l+r)/2;
if(arr[b]==a)
{
printf("Element found at %d",b);
k=0;
break;
}
else if(arr[b]<a)
{
l=b+1;
k++;
}
else
{
r=b-1;
k++;
}
}
if(k>0)
{
printf("Element is not present");
}

return 0;
}
