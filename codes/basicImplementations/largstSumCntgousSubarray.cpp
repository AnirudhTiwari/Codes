#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int largestSumSubArray(int array[], int size){

	int i, maxTillNow = 0, maxSum = 0;
	vector<int> v;

	for(i=0;i<size;i++){

		maxTillNow = maxTillNow + array[i];

		if(maxTillNow < 0){
			maxTillNow = 0;
			v.erase(v.begin(), v.end());
		}

		else
			v.push_back(i);

		if(maxTillNow > maxSum){
			maxSum = maxTillNow;
		}



	}
	for(i=0;i<v.size();i++){
		cout << v[i] << " " << array[v[i]] << endl;
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