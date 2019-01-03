#include <iostream>
using namespace std;void linechar (char hehe){		for (int i = 1; i <=20; i++){	cout << hehe;	}	cout <<endl;}void linechar (char hehe, int num1) {	for (int i = 1; i<=num1; i++){		cout << hehe;	}	cout << endl;}	int main(){	linechar('*'), linechar ('@'), linechar('*',10), linechar('#',15);}
