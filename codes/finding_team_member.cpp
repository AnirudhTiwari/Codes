#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){

	int teams,i,combos,num,x=2,y=1,a,b;
	map< int, vector<int> > answer;

	scanf("%d", &teams);

	vector<int> final(2*teams+1);

	combos = teams*(2*teams-1);

	for(i=0;i<combos;i++){
		scanf("%d",&num);
		answer[num].push_back(x);
		answer[num].push_back(y);

		if(x-y==1){
			y=1;
			x+=1;
		}
		else
			y+=1;
	}


	for (map<int, vector<int> >::reverse_iterator it = answer.rbegin(); it != answer.rend(); it++){

		a = count(final.begin(), final.end(),it->second[0]);
		b = count(final.begin(), final.end(),it->second[1]);

    	if((a==0) && (b==0)){
    		final[it->second[0]] = it->second[1];
    		final[it->second[1]] = it->second[0];
    	}
    }

	for(i=1;i<=2*teams;i++)
		if(i==2*teams)
			cout<<final[i]<<endl;
		else
			cout<<final[i]<<" ";
}