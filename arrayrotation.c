#include <stdio.h>  
int main()  
{  
    int n,i,j,last,num;
    scanf("%d %d",&n,&num);   
    int arr[num];    
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }  
    printf("Original array: \n");  
    for(i=0;i<num;i++) 
    {   
        printf("%d ",arr[i]);   
    }     
    for(i=0;i<n;i++)
    {   
        last=arr[num-1];        
        for(j=num-1;j>0;j--)
        {  
            arr[j]=arr[j-1];  
        }    
        arr[0]=last;  
    }
  
    for(i=0;i<num;i++)
    {  
        printf("%d ",arr[i]);  
    }  
    return 0;  
}  


