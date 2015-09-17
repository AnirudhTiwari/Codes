#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<stack>
#include<math.h>

using namespace std;

int titleToNumber(string s) {

    int len = s.size(),i;
    int power = 0;
    int answer = 0;

    for(i=len-1;i>=0;i--){
        answer = answer + (int(s[i])-64)*pow(26,power);
        power = power + 1;
    }

    return answer;
}

int main(){

	printf("%d\n",titleToNumber("AB"));
}