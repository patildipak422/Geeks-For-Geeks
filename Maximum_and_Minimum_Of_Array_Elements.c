#include<stdio.h>
int MaximumElement(int testarray[], int size);
int MinimumElement(int testarray[], int size);
int MaximumElement(int testarray[], int size){
	int i, max=testarray[0];
	for(i=0; i<size; i++){
			if(testarray[i]>max){
				max=testarray[i];
			}
	}
	return max;
}
int MinimumElement(int testarray[], int size){
	int i, min=testarray[0];
	for(i=0; i<size; i++){
			if(testarray[i]<min){
				min=testarray[i];
			}
	}
	return min;
}
void main(){
	int i, testcases, size, max, min;
	int testarray[100];
	printf("Enter the Testcases :");
	scanf("%d", &testcases);
	while(testcases>0){
		printf("Enter the size :");
		scanf("%d", &size);
		for(i=0; i<size; i++){
			printf("Enter the %d Element :", i);
			scanf("%d", &testarray[i]);
		}
		int max=MaximumElement(testarray, size);
		int min=MinimumElement(testarray, size);
		printf("The Maximum is %d and Minimum is %d\n", max, min);
		testcases--;
	}
}
