#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], idx, element;
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter index(0 Based) and element: ");
    scanf("%d%d", &idx, &element);
    for (int i = n - 1; i >= idx; i--) arr[i + 1] = arr[i];
    arr[idx] = element;
    for(int i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}