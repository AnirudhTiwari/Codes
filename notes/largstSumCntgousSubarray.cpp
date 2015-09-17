#include <stdio.h>
#include <iostream>

int largestSumSubArray(int array[], int size){

	int i, maxTillNow = 0, maxSum = 0;

	for(i=0;i<size;i++){

		maxTillNow = maxTillNow + array[i];

		if(maxTillNow < 0)
			maxTillNow = 0;

		else if(maxTillNow > maxSum){
			maxSum = maxTillNow;
		}
	}
	return maxSum;
}

int main(){

	int cases,size,i,j;

	scanf("%d\n", &cases);

	for(i=0;i<cases;i++){

		scanf("%d",&size);
		int array[size];

		for(j=0;j<size;j++){

			scanf("%d", &array[j]);

		}

		int largestSum = largestSumSubArray(array, size);

		cout << largestSum << endl;

	}

}