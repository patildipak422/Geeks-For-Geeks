#include<stdio.h>
int main(){
	int testcases, i, size, multiplication, testarray[100];
//	printf("Enter the number of testcases : ");
	scanf("%d", &testcases);
	while(testcases!=0){
		multiplication=1;
		//printf("Enter the Number of Elements : ");
		scanf("%d", &size);
		for(i=0; i<size; i++){
		//	printf("Enter the Element : ");
			scanf("%d", &testarray[i]);
			multiplication=multiplication*testarray[i];
		}
		printf("%d\n", multiplication);
		testcases--;
	}
	return 0;
}
