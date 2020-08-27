#include<stdio.h>
void main(){
	int a[100];
	int n, t, i;
	printf("Enter the testcase :");
	scanf("%d", &t);
	while(t>0){
		printf("Enter the size :");
		scanf("%d", &n);
		for(i=0; i<n; i++){
			printf("Enter the Element :");
			scanf("%d", &a[i]);
		}
		printf("The Alternative Elements in the array are :");
		for(i=0; i<n;){
			printf("%d ", a[i]);
			i+=2;
		}
		printf("\n");
	t--;
	}
}
