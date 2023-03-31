#include <stdio.h>

void sort(int *arr, int n, int (*cmp)(int a, int b)) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (cmp(arr[i], arr[j])) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}#include<stdio.h>
main(){
	int a,i,c=0;
	printf("enter the number :");
	scanf(("%d"), &a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			c++;
			}
	}	
	if (c==2){
		printf("%d",a);
		printf(" is a prime number:");
	}
	else{
		printf("%d",a);
		printf(" is not a prime number:");
	}
	return 0;
}

int ascending(int a, int b) {
    return a > b;
}

int descending(int a, int b) {
    return a < b;
}

int main() {
    int n, i, arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, n, ascending);
    printf("Ascending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sort(arr, n, descending);
    printf("Descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
