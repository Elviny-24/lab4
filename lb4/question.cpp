#include "StdAfx.h"
#include "question.h"
#include <iostream>
using namespace std;

question::question(void)
{
	cout<<"вызывается конструктор вопроса"<<endl;
}

void question::setQuestion(char *quest){
this->quest=quest;
}

void question::getQuestion(){
cout<<"Вопрос: "<<this->quest<<endl;
}


question::~question(void)
{cout<<"вызывается деструктор вопроса..."<<endl;
}
