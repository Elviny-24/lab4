#include "StdAfx.h"
#include "test.h"
#include <iostream>
using namespace std;

test::test(void)
{cout<<"���������� ����������� �����"<<endl;
}

void test::setnum(int number){
this->number=number;
}

void test::getnum(){
cout<<"���-�� ��������: "<<this->number<<endl;
}

test::~test(void)
{cout<<"���������� ���������� �����"<<endl;
}

test::quest::quest(){
cout<<"���������� ����������� ������"<<endl;}

void test::quest::setq(char* q){
this->q=q;
}

void test::quest::getq(){
cout<<"������: "<<this->q<<endl;
}

test::quest::~quest(){
cout<<"���������� ���������� ��������"<<endl;
}

void test::gethard(quest& x){
	x.fair();
}

void test::quest::fair(){
cout<<"helloooooo"<<endl;
}