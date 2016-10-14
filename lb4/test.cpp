#include "StdAfx.h"
#include "test.h"
#include <iostream>
using namespace std;

test::test(void)
{cout<<"вызывается конструктор теста"<<endl;
}

void test::setnum(int number){
this->number=number;
}

void test::getnum(){
cout<<"Кол-во вопросов: "<<this->number<<endl;
}

test::~test(void)
{cout<<"вызывается деструктор теста"<<endl;
}

test::quest::quest(){
cout<<"вызывается конструктор вопрос"<<endl;}

void test::quest::setq(char* q){
this->q=q;
}

void test::quest::getq(){
cout<<"Вопрос: "<<this->q<<endl;
}

test::quest::~quest(){
cout<<"вызывается деструктор воспроса"<<endl;
}

void test::gethard(quest& x){
	x.fair();
}

void test::quest::fair(){
cout<<"helloooooo"<<endl;
}