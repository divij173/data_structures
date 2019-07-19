#include<stdio.h>
int main(int argc, char* argv[]){
int *ptr,i;
ptr=&argv;
for(i=argc-1;i>=0;i--)
{
printf("%d",*(ptr+i));
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
