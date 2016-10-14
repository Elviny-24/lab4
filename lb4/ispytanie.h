#pragma once
class ispytanie
{private: static int counter;
	char *object;

public:
	ispytanie(void);
	
virtual void setObject(char *object)=0;
virtual void getObject()=0;
virtual void toConsole()=0;
static int getCounter(){
return counter;}
	virtual ~ispytanie(void);
};
