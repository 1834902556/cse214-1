/* Insert a value �X� (take input X from user) in
    the array at the end of currently stored elements */

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i,  X;
    int size = 10;

    scanf("%d", &X);

    a[size] = X;

    size++;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
}
