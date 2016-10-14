#pragma once  
#include <iostream> 
using namespace std; 

class Person 
{ 
public: 
Person(void); 
~Person(void); 
};


class Student : public Person 
{ 
private: 
int age; 
friend class Inspector; 
friend class Curator; 
public: 
void setage(){ 
cin>>age;} 
void setage(int age){this->age=age;} 
void getage(){cout<<this->age<<endl;}
void convert(){cout<<"Convert to char"<<endl;
	cout<<"||"<<static_cast<char>(age)<<"||";}
};

class Inspector
{
public:
	void iKnowAllAboutYou(Student& any){
	std::cout<<"Your age is  "<<any.age<<std::endl;
	}

};

class Curator 
{ 
public: 
void iCanModify(Student& any){ 
any.setage();} 

};