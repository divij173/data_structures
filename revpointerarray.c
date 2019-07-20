#include<stdio.h>
int main(){
int i,n,j=0;
printf("Enter no of Elements = ");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int *ptr=&arr;
int arr2[n];
for(i=n-1;i>=0;i--)
{
    arr2[j]=*(ptr+i);
j++;
}
for(i=0;i<n;i++)
{
    printf("%d",arr2[i]);
}
return 0;
}


//Code of Sir
/*while(*ptr!='\0')
{
    printf("%d",*ptr);
ptr++;
    
}
return 0;
}*/
