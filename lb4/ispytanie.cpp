#include "StdAfx.h"
#include "ispytanie.h"
#include <iostream>
using namespace std;

int ispytanie::counter=0;

ispytanie::ispytanie(void){
	cout<<"���������� ����������� ���������"<<endl;
	counter++;
}

void ispytanie::setObject(char *object)
{
this->object=object;
}
void ispytanie::getObject()
{
cout<<"�������� ��������: "<<this->object<<endl;
}

ispytanie::~ispytanie(void){
	cout<<"���������� ���������� ���������"<<endl;
	counter--;}


