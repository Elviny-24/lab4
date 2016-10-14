#pragma once
#include "ispytanie.h"
#include <iostream>
using namespace std;

class Printer
{
	int Number;

public:
	Printer(): Number(5){};

	void iAmPrinting(ispytanie *any){
	cout<<"Type: "<<typeid(any).name()<<endl;
	any->toConsole();
	
	}
	
};

