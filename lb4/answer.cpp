#include "stdafx.h"
#include "answer.h"
#include <iostream>
using namespace std;


answer::answer(void)
{
}

void answer::setansw(int answ){
this->answ=answ;
}

void answer::getansw(){
cout<<"Ответ: "<<this->answ<<endl;
}


answer::~answer(void)
{
}

void answer::setmm(int mm){
this->mm=mm;
}