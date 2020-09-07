#include<stdio.h>
void enterstring();
int main(){
	int i, testarray1[100];
	enterstring();
	for(i=0; i<10; i++){
		printf("%d\n", testarray1[i]);
	}

}
void enterstring(){
	int i, length, testarray1[100], testarray2[100], testarray3[100], testarray4[100], testarray5[100];
	printf("Enter the length of string : ");
	scanf("%d", &length);
	for(i=0; i<length; i++){
		printf("Enter the letter : ");
		scanf("%d", &testarray1[i]);
	}
	printf("Enter the length of string : ");
	scanf("%d", &length);
	for(i=0; i<length; i++){
		printf("Enter the letter : ");
		scanf("%c", &testarray2[i]);
	}
	printf("Enter the length of string : ");
	scanf("%d", &length);
	for(i=0; i<length; i++){
		printf("Enter the letter : ");
		scanf("%c", &testarray3[i]);
	}
	printf("Enter the length of string : ");
	scanf("%c", &length);
	for(i=0; i<length; i++){
		printf("Enter the letter : ");
		scanf("%c", &testarray4[i]);
	}
	printf("Enter the length of string : ");
	scanf("%c", &length);
	for(i=0; i<length; i++){
		printf("Enter the letter : ");
		scanf("%d", &testarray5[i]);
	}
	return 0;
}
