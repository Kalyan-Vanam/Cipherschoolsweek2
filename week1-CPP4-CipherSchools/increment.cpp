#include<bits/stdc++.h>
using namespace std;

void increment(int&a){
	a++;
	return ;
}

// -> Address;
//int i ;
//cout<<&i

int main(){
	int i = 11;
	//int &j = i;
//	j++;
	increment(i);
	cout<<i<<endl;
	
	return 0 ;
}
