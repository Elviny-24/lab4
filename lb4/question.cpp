#include "StdAfx.h"
#include "question.h"
#include <iostream>
using namespace std;

question::question(void)
{
	cout<<"���������� ����������� �������"<<endl;
}

void question::setQuestion(char *quest){
this->quest=quest;
}

void question::getQuestion(){
cout<<"������: "<<this->quest<<endl;
}


question::~question(void)
{cout<<"���������� ���������� �������..."<<endl;
}
