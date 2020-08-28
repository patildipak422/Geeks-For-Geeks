#inlude<stdio.h>
main(){
	int testarray[100];
	int testcases, size;
	printf("Enter the Testcases :");
	scanf("%d", &testcases);
	while(testcases>0){
		printf("Enter the Size ; ");
		scanf("%d", &size);
		for(int i=0; i<size; i++){
			printf("Enter the %d Element :", i);
			scanf("%d", &testarray[i]);
		}
	}
	return 0;
}
