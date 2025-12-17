#include<stdio.h>
#include<stdbool.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n], search;
    bool available = false;
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &search);
    for(int i = 0; i < n; i++) if(arr[i] == search) available = true;
    printf("%s\n", (available) ? "Included" : "Not_Included");
    return 0;
}