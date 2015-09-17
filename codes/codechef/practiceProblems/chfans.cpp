#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int findGCD(int a,int b){
	
	int low, high, quotient, rmnder;

	if(a<b){
		low = a;
		high = b;
	}
	else{
		low = b;
		high = a;
	}

	while(high%low!=0){
		quotient = high/low;
		rmnder = high - quotient*low;
		high = low;
		low = rmnder;
	}
	return low;
}

int main(){
	int cases;

	scanf("%d", &cases);

	for (int i = 0; i < cases; ++i){

		int s1,s2,ans,rel_speed,gcd,min;

		double t, theta1, theta2;

		scanf("%d%d", &s1,&s2);

		rel_speed = abs(s1-s2);

		ans = rel_speed/findGCD(abs(s1), abs(s2));

		cout<<ans<<endl;

	}
}