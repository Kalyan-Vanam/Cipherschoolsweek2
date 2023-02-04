#include<bits/stdc++.h>
using namespace std;

//code reusebility
//1.same name
//2.either diff num of parameters
//3.diff type of parameters
int maxi(int n1,int n2){
	if(n1>n2)return n1;
	return n2;
}

int maxi(int n1,int n2, int n3){
	if(n1>n2){
		if(n1>n3)return n1;
		return n3;
	}else{
		if(n2>n3)return n2;
		return n3;
		}
	}
	
int maxi(int n1,int n2,int n3,int n4){
	//int a = maxi(n1,n2);
	//int b = maxi(n3,n4);
	//return maxi(a,b);
	
	int a = maxi(n1,n2,n3);
	return maxi(a,n4);
	
}	
int main(){
	cout<<maxi(2,5)<<endl;
	cout<<maxi(50,5,10)<<endl;
	cout<<maxi(2,50,10,30);
	
	return 0 ;
}
