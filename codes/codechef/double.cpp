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

	for (int i = 0; i < cases; ++i){
		int num;

		scanf("%d", &num);

		if(num%2==0)
			cout<<num<<endl;
		else
			cout<<num-1<<endl;
	}
}