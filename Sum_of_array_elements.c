#include <stdio.h>

int main() {
    int iterations, size, i, sum=0;
    int array[100];
    printf("Enter the Number of Iterations :");
    scanf("%d", &iterations);
    while(iterations>0){
    	sum=0;
        printf("\nEnter the Size of Array : ");
        scanf("%d", &size);
        for(i=0; i<size; i++){
        	printf("\nEnter the Elements :");
            scanf("%d", &array[i]);
            sum+=array[i];
        }
        printf("The sum of all Elements of Array is : %d", sum);
    	iterations--;
	}
	return 0;
}
