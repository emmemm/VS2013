// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int global_n = -1;
static int static_n = -2;

class Class1
{
private:
	int privat_n;
protected:
	int protected_n;
public:
	int public_n;
	Class1() {
		privat_n = 1;
		protected_n = 2;
		public_n = 3;
	}
};

Class1 global_c1;

int _tmain(int argc, _TCHAR* argv[])
{
	Class1 c1;
	int n1 = global_n = c1.public_n;
	int n2 = static_n;
	int n3 = argc;
	printf("Hello World\n");
	return 0;
}

