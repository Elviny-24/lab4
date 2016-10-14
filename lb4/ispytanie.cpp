#include "StdAfx.h"
#include "ispytanie.h"
#include <iostream>
using namespace std;

int ispytanie::counter=0;

ispytanie::ispytanie(void){
	cout<<"вызывается конструктор испытания"<<endl;
	counter++;
}

void ispytanie::setObject(char *object)
{
this->object=object;
}
void ispytanie::getObject()
{
cout<<"Название предмета: "<<this->object<<endl;
}

ispytanie::~ispytanie(void){
	cout<<"вызывается деструктор испытания"<<endl;
	counter--;}


