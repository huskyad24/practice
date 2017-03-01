/*
 * Michael Wu<huskyad24.vaio@gmail.com>
 */

#define SWAP(a,b) {int tmp; tmp = a; a = b; b = tmp;}

void print(int* arr, int len)
{
    int i;
    for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
    printf("\n");
}
