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

		int size, chains,num,j,k,cuts=0,ones=0,multi=0;

		scanf("%d%d", &size, &chains);

		;

		for(j=0;j<chains;j++){
			scanf("%d", &num);
			if (num==1){
				ones+=1;
			}
			else
				multi+=1;

		}
		if(ones <=multi){
			multi = multi-ones;
			cuts = ones;
			if(multi>=2)
				cuts+=multi-1;

		}
		else{
			cuts = chains/2;
		}
		cout<<cuts<<endl;
		
	}
}