#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int version_number(string version, int level){

    int level_counter=0,i=0;
    string temp_1 = "";

    while(level_counter!=level-1){

        if(version[i]=='.')
            level_counter+=1;
        i+=1;
    }

    for(;i<version.size();i++){

        if(version[i]=='.')
            break;

        else
            temp_1 = temp_1 + version[i];

    }

    return stoi(temp_1);

}

int compareVersion(string version1, string version2) {

    int i;

    for(i=1;;i++){

        int num_1 = version_number(version1, i);
        int num_2 = version_number(version2, i);

        if(num_1 > num_2)
            return 1;

        else if( num_1 < num_2)
            return -1;
    }

    return 0;
}

int main(){

	string_1 = "01";
	stirng_2 = "1";

	compareVersion(string_1, stirng_2);
}