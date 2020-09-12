#include<stdio.h>
void multiply(int testcases);
int main(){
	int testcases;
	printf("Enter the number of testcases : ");
	scanf("%d", &testcases);
	multiply(testcases);
	return 0;
}
void multiply(int testcases){
	int i, size, multiplication, testarray[100];
	while(testcases!=0){
	multiplication=1;
	printf("Enter the Number of Elements : ");
	scanf("%d", &size);
	for(i=0; i<size; i++){
		printf("Enter the Element : ");
		scanf("%d", &testarray[i]);
		multiplication=multiplication*testarray[i];
	}
	printf("%d\n", multiplication);
	testcases--;
	}
}
