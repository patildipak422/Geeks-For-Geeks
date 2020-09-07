#include<stdio.h>
main(){
	int testarray[100], duplicatearray[100], repeatedelements[100];
	int testcases, size, index=0, i, j, k;
	for(i=0; i<=100; i++){
		repeatedelements[i]='*';
	}
	printf("Enter the Testcases :");
	scanf("%d", &testcases);
	while(testcases>0){
		printf("Enter the Size : ");
		scanf("%d", &size);
		for(i=0; i<size; i++){
			printf("Enter the %d Element :", i);
			scanf("%d", &testarray[i]);
		}
		for(i=0; i<size; i++){
			duplicatearray[i]=testarray[i];
		}
		for(i=0; i<size; i++){
			for(i=0; i< size; i++){
				if(i==j){
					continue;
				}
				else if(testarray[i]==duplicatearray[j]){
						repeatedelements[index]=testarray[i];
				}
				index++;
			}
		}
/*	for(i=0; i<size; i++){
			if(repeatedelements[i]==NULL){
			printf("There are No duplicate")
		}
		
		}*/
		printf("The Duplicate Elements are :");
		for(i=0; i<size; i++){
			printf("%d ", repeatedelements[i]);
		}
	}
	return 0;
}
