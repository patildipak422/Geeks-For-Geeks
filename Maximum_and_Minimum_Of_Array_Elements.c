#include<stdio.h>
int MaximumElement();
int MinimumElement();
int main(){
	int i, testcases, size, max, min;
	int testarray[100], duplicatearray[100];
	printf("Enter the Testcases :");
	scanf("%d", &testcases);
	while(testcases>0){
		printf("Enter the size :");
		scanf("%d", &size);
		for(i=0; i<size; i++){
			printf("Enter the Element :");
			scanf("%d", &testarray[i]);
		}
		max=testarray[0];
		min=testarray[0];
		for(i=0; i<size; i++){
			if(testarray[i]>max){
				max=testarray[i];
			}
		}
		for(i=0; i<size; i++){
			if(testarray[i]<min){
				min=testarray[i];
			}
		}
		printf("The Maxinum is %d and Minimum is %d\n", max, min);
		testcases--;
	}
	return 0;
}
