#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
	int cases;
	scanf("%d", &cases);

	for(int i=0;i<cases;i++){

		int size, num=0,j,k;
		scanf("%d", &size);
		map<int, vector<int> > points;

		for (j=0;j<size;j++){
			for(k=0;k<size;k++){
				scanf("%d", &num);
				points[num].push_back(j);
				points[num].push_back(k);
			}
		}
		int steps = 0;
		for (j=2;j<size*size+1;j++){
			steps = steps + abs(points[j][0]-points[j-1][0]) + abs(points[j][1]-points[j-1][1]);
		}
		cout<<steps<<endl;
	}
}