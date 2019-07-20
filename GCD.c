#include<stdio.h>
int main ()
{
  int a,k,c,i,j,res;
  printf ("Enter No. =  ");
  scanf ("%d", &a);
  int arr[a];
  for (i = 0; i < a; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (i = 1; i<arr[a-1]; i++)
    {
        k=0;
      for(j=0;j<a;j++)
      {
        if(arr[j]%i==0)   
        {
            k++;
        }
      }
      if(k==a)
      {
          res=i;
      }
    }
    printf("%d",res);
  return 0;
}

