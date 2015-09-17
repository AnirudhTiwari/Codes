#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<math.h>
#include<vector>

using namespace std;

int majorityElement(vector<int> &num) {

 	int n = num.size(),i;

    int map[2][n],j,flag=0;

    for(i=0;i<n;i++)
        map[1][i] = 0;

    int map_length = 0;

    int cut_value = ceil(1.0*n/2);

    printf("cut alue is %d\n", cut_value);

    for(i=0;i<n;i++){
        flag=0;

        for(j=0;j<map_length;j++){

            if(map[0][j]==num[i]){
                map[1][j]+=1;
                flag = 1;

                if(map[1][j] >= cut_value)
                    return map[0][j];
            }
     	}

        if(flag==0){
            map[0][map_length]=num[i];
            map[1][map_length]+=1;
            map_length+=1;
            if(map[1][j] > cut_value)
                return map[0][j];
    	}

    }

}


int main(){

	vector<int> x(5);


	int a = majorityElement(x);

	printf("%d\n", a );
}