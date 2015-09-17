#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main(){
	int a,b,c;
	int *p, *q;

	a=1;b=2;c=3;

	p = &a;
	q = &b;


	cout<<"P is "<<p<<endl;
	cout<<"Q is "<<q<<endl;

	cout<<"Value in p is "<<*p<<endl;
	cout<<"Value in q is "<<*q<<endl;
	cout<<"Value of c is "<<c<<endl;

	c  = *p;

	p = q;
	
	cout<<"P is "<<p<<endl;
	cout<<"Q is "<<q<<endl;

	cout<<"Value in p is "<<*p<<endl;
	cout<<"Value in q is "<<*q<<endl;

	cout<<"Value of c is"<<c<<endl;



}