#include "stdafx.h"
#include "exam.h"
#include "finexam.h"
#include "test.h"
#include "Person.h"
#include "answer.h"
#include "result.h"
#include "ispytanie.h"
#include "question.h"
#include <iostream>
#include "Printer.h"
#include "conio.h"
using namespace std;

void demo(exam *a){ //������� ��������������
	test* d=dynamic_cast<test*>(a);
	if(d){cout<<"Success!"<<endl;}
	else {cout<<"Not success!"<<endl;}}

int _tmain(int argc, _TCHAR* argv[])
{
setlocale(LC_ALL,"rus");

//ispytanie a; //������� �����
//cout<<ispytanie::getCounter()<<")"<<endl;
////���������
//a.setObject("����������");
//a.getObject();
//cout<<endl;


exam b;
cout<<ispytanie::getCounter()<<")"<<endl;
//���������
b.setObject("������");
b.getObject();
//�������
b.setdate(21,3);
b.getdate();
b.setstud(200);
b.getstud();
cout<<endl;
system("pause");cout<<endl;


test c;
cout<<ispytanie::getCounter()<<")"<<endl;
//���������
c.setObject("�������");
c.getObject();
//�������
c.setdate(1,8);
c.getdate();
c.setnum(2);
c.getnum();
c.D.setq("�����������");//��������� ����� ������
c.D.getq();
cout<<endl;
system("pause");cout<<endl;


exam zq(12,45);
cout<<zq.days<<" . "<<zq.months<<endl;
system("pause");cout<<endl;

cout<<"������ � �������������� ��������"<<endl;
Student a;//������������� ������
a.setage(3);

Inspector zz;
zz.iKnowAllAboutYou(a);


system("pause");
Curator ss; //��������� ���� � ������� �������������� ������
ss.iCanModify(a);
a.convert();//�������������� � char
cout<<"��������� � ������� �������������� ������"<<endl;
a.getage();
system("pause");cout<<endl;

cout<<"������ � ����������"<<endl;
result yy;//������ � ����������
yy.getre();
system("pause");cout<<endl;

//��������������
test *d=new test;
demo(d);
system("pause");cout<<endl;



exam *some = new exam(5,6);
Printer alluse;
alluse.iAmPrinting(some);
//answer y;
//y.setnum(10); ��� ������� � "test::setnum", ��������� "answer" ���������� "protected" ��� ������������ �� "test"
//y.setansw(6);
//y.getansw(9);
//y.setmm(4);answer::setmm: ���������� ���������� � protected ����, ������������ � ������ "answer"	

//result z;
//z.setansw(12);
//z.setnum(20); ��� ������� � "test::setnum", ��������� "answer" ���������� "protected" ��� ������������ �� "test"
//z.setansw(9);

//������������� ���������� ���������� ����

return 0;
}



