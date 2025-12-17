#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], idx, element;
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Elter index(0 based) to delete: ");
    scanf("%d", &idx);
    for(int i = idx; i < n; i++) arr[i] = arr[i + 1];
    n--;
    printf("Result after delete: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;    
}