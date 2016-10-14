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

void demo(exam *a){ //функция преобразования
	test* d=dynamic_cast<test*>(a);
	if(d){cout<<"Success!"<<endl;}
	else {cout<<"Not success!"<<endl;}}

int _tmain(int argc, _TCHAR* argv[])
{
setlocale(LC_ALL,"rus");

//ispytanie a; //базовый класс
//cout<<ispytanie::getCounter()<<")"<<endl;
////испытание
//a.setObject("Математика");
//a.getObject();
//cout<<endl;


exam b;
cout<<ispytanie::getCounter()<<")"<<endl;
//испытание
b.setObject("Физика");
b.getObject();
//экзамен
b.setdate(21,3);
b.getdate();
b.setstud(200);
b.getstud();
cout<<endl;
system("pause");cout<<endl;


test c;
cout<<ispytanie::getCounter()<<")"<<endl;
//испытание
c.setObject("История");
c.getObject();
//экзамен
c.setdate(1,8);
c.getdate();
c.setnum(2);
c.getnum();
c.D.setq("Определение");//вложенный класс вопрос
c.D.getq();
cout<<endl;
system("pause");cout<<endl;


exam zq(12,45);
cout<<zq.days<<" . "<<zq.months<<endl;
system("pause");cout<<endl;

cout<<"Работа с дружественными классами"<<endl;
Student a;//дружественный классы
a.setage(3);

Inspector zz;
zz.iKnowAllAboutYou(a);


system("pause");
Curator ss; //изменение поля с помощью дружественного класса
ss.iCanModify(a);
a.convert();//преобразование в char
cout<<"изменение с помощью дружественного класса"<<endl;
a.getage();
system("pause");cout<<endl;

cout<<"Работа с константой"<<endl;
result yy;//работа с константой
yy.getre();
system("pause");cout<<endl;

//преобразования
test *d=new test;
demo(d);
system("pause");cout<<endl;



exam *some = new exam(5,6);
Printer alluse;
alluse.iAmPrinting(some);
//answer y;
//y.setnum(10); нет доступа к "test::setnum", поскольку "answer" использует "protected" для наследования из "test"
//y.setansw(6);
//y.getansw(9);
//y.setmm(4);answer::setmm: невозможно обратиться к protected член, объявленному в классе "answer"	

//result z;
//z.setansw(12);
//z.setnum(20); нет доступа к "test::setnum", поскольку "answer" использует "protected" для наследования из "test"
//z.setansw(9);

//использование операторов приведения типа

return 0;
}



