#include<bits/stdc++.h>
using namespace std;

class student{
	
	string passcode;
	friend class bestfriend;
	
	protected:
		
	int age;
	//int,char,string,float...
	public :
	string name;
	int id;
	
	void into(){
		cout<<"My name is "<<name<<" , my id is "<<id<<"passcode is "<<passcode<<endl;	
	}
	
	void setpass(string s,int a){
		passcode = s;
		age = a;
	}
	
	//friend class bestfriend;
	
};

void hacker(student s){
	cout<<s.passcode<<" "<<s.age<<endl;
}

class bestfriend{
	
	public:
		
	void sharingsecret(student s){
		cout<<s.passcode<<" "<<s.age<<endl;
	}
	
};

int main(){
	
	student s1;
	s1.setpass("ooo1",10);
	
	bestfriend bff;
	//bff.sharingsecret(s1);
	hacker(s1);
	
	//s1.passcode = "001";
	
	return 0 ;
}
