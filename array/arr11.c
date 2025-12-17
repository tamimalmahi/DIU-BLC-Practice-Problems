#include<stdio.h>

int main(){
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int sum[3];
    for(int i = 0; i < 3; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum[i] += arr[j][i];
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++) printf("Sum of Col %d is: %d\n", i + 1, sum[i]);
    return 0;
}