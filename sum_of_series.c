#include<stdio.h>
int main(){
	int i, no_of_testcases, element, size, sum;
	int series[100];
	printf("Enter the Number of testcases :");
	scanf("%d", &no_of_testcases);
	
	while(no_of_testcases>0){
		sum=0;
		printf("Enter the Size :");
		scanf("%d", &size);
		for(i=0; i<size; i++){
			printf("Enter the Element :");
			scanf("%d", &series[i]);
			sum=sum+series[i];
		}
		printf(" sum is %d\n", sum);
		no_of_testcases--;		
	}
	return 0;
}
