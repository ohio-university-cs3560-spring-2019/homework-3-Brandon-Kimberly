#include <iostream>
#include <dlfcn.h>
#include <stdlib.h>
#include "stddev.h"
using namespace std;

int main()
{
	void* lib_handle;
	double (*fn)(int n,...);
	lib_handle = dlopen("./libstddev.so", RTLD_NOW);
	fn = dlsym(lib_handle,"stddev");
	std::cout << (*fn)(10,1,2,3,4,5,6,7,8,9,10) << std::endl;
	dlclose(lib_handle);
    return 0;
}
