#include <stdio.h>
int main(int argc, char *argv[])
{
int count;
for(count=0;count<argc;count++)
{
printf("argv[%2d]:%s\n",count,argv[count]);
}
return 0;
}

