#include <stdio.h> 
int main()
{ 
int n,a,i,k=0,l=0;
scanf("%d %d",&n,&a);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
} 

for(i=0;i<n;i++)
{
if(arr[i]==a)
{
l=i;
k=0;
break;
}
else
{
k++;
}
}

if(k==0)
{
printf("%d",l);
}
else
{
printf("NOT FOUND");
}
return 0; 
}  
