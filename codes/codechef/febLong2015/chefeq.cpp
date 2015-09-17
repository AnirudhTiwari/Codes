#include <iostream>
#include <vector>
#include <stdio.h>
#include <map>

using namespace std;

map<int, int> hash_map;
map<int, int>::iterator it;

int main() {
	// your code goes here
	int cases, piles, coins,i,j,maxi=0;
	scanf("%d",&cases);

	for(i=0;i<cases;i++){

		scanf("%d", &piles);
		maxi = 0;
		hash_map.clear();

		int temp;

		for(j=0;j<piles;j++){
			scanf("%d", &temp);

			it = hash_map.find(temp);

			if(it==hash_map.end())
				hash_map[temp] = 1;
			else
				hash_map[temp] += 1;

		}

		for(it=hash_map.begin();it!=hash_map.end();it++){

			//    	cout << it->first << it->second << endl;
			if(it->second >= maxi)
				maxi = it->second;
		}

		cout << piles - maxi << endl;

	}
	return 0;
}
