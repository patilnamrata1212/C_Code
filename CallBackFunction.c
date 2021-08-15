#include <stdio.h>
typedef void(*callbackPtr)(int ,int);

typedef struct
{
	int i32Id;
	callbackPtr callbackFun;
}stCallbackTableEntry;

callbackPtr ArrayCallBack[5] = {0};

void registerCallBack(stCallbackTableEntry callbackTableEntry)
{
	ArrayCallBack[callbackTableEntry.i32Id] = 
				  callbackTableEntry.callbackFun;
}

void deregisterCallBack(stCallbackTableEntry callbackTableEntry)
{
	ArrayCallBack[callbackTableEntry.i32Id] = NULL;
}
void ADD(int a,int b)
{
	printf("Add : %d\n",a+b);
}
void SUB(int a,int b)
{
	printf("Sub : %d\n",a-b);
}
void MUL(int a,int b)
{
	printf("MUL : %d\n",a*b);
}
void DIV(int a,int b)
{
	printf("DIV : %d\n",a/b);
}
void processCallback()
{
    for(int i=1;i<5;i++)
	    ArrayCallBack[i](20,10);
}
int main()
{
	stCallbackTableEntry CallbackTableEntry[] =
	{
		{ 1 , ADD},
		{ 2 , SUB},
		{ 3 , MUL},
		{ 4 , DIV},
		{ 10, NULL}
	};
	for(int i=0; NULL != CallbackTableEntry[i].callbackFun;i++)
	{
		registerCallBack(CallbackTableEntry[i]);
	}
	processCallback();
}

