#include <stdio.h>

int main(){
	int num[]={33 ,10, 70, 15, 29};
	int n=5;
	int swapped;
	int i,j;
		
		
	for( i=0; i< n-1; i++){
		swapped =0;
		for ( j=0; j<n-i-1; j++ ){
			if(num[j]> num[j+1]) {
				//swap num[j] and num[j+1];
				
				int temp =num[j];
				num[j]= num[j+1];
				num[j+1]= temp;
				swapped=1;
			}
		}
		//if no element were swapped, the array is already sorted
		
		if (swapped == 0){
		
		break;
		}
	}
	printf("sorted array:");
	for ( i=0; i<n; i++){
		printf(" %d ", num[i]);
	}
	printf("\n");
	return 0;}
