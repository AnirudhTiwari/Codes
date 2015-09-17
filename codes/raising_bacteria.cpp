#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){

	int num,ans=1,count=0;
	scanf("%d", &num);

	while(num>=1){
		ans = 1;
		while(ans <= num){
			ans = ans*2;
		}
		num = num-(ans/2);
		count+=1;
	}
	cout<<count<<endl;

}