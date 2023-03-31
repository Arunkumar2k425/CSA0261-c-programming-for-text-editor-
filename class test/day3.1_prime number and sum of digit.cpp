#include<stdio.h>
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
	return 0;}


int sumDigits(int n) {
    if (n == 0) { 
        return 0;
    }
    else {
        return (n % 10) + sumDigits(n / 10);
    }
}

 main() {
    int num;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumDigits(num));
    return 0;
}

