#include<stdio.h>
int main()
{
    int ar[10], size, i;
    int *ptr
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter %d numbers: ", size);
    for (i = 0; i<size; i++)
        scanf("%d", &ar[i]);
    rReverseAr(ar, size);
    printf("rReverseAr(): ");
    for (i = 0; i<size; i++)
        printf("%d ", ar[i]);
    return 0;
}

void rReverseAr(int ar[], int size) {
    int start = 0, end = size - 1, temp;
    if (start < end) {
        temp = ar[start];
        ar[start] = ar[end];
        ar[end] = temp;
        start++;
        end--;

        rReverseAr(ar, size - 1);
    }       
}

