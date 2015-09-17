#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){

	int cases;
	
	scanf("%d", &cases);
	int num;

	for(int j=0;j<cases;j++){

		scanf("%d", &num);
		if(num%2==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;
	}

}