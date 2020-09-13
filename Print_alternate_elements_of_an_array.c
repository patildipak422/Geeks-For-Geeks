#include<stdio.h>
void main(){
	int testcases;
	printf("Enter the testcases :");
	scanf("%d", &testcases);
	while(testcases>0){
	code();
	testcases--;
	}
}
int code(){
	int testarray[100];
	int i, size;
	printf("Enter the size :");
	scanf("%d", &size);
	for(i=0; i<size; i++){
		printf("Enter the Element :");
		scanf("%d", &testarray[i]);
	}
	printf("The Alternative Elements in the array are :");
	for(i=0; i<size;){
		printf("%d ", testarray[i]);
		i+=2;
	}
	printf("\n");
}
