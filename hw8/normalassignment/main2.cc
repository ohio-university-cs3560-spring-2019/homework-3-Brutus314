#include <iostream>
#include <cstdarg>
#include <dlfcn.h>
using namespace std;

int main(){
	void* lib_handle;
	double (*fn)(int n, ...);
	lib_handle = dlopen("./libstddev.so", RTLD_LAZY);
	if (lib_handle == NULL) cout << dlerror() << endl;
	else {
		fn = dlsym(lib_handle, "stddev");
		if (fn == NULL) cout << dlerror() << endl;
		else cout << (*fn)(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10) << endl;
		dlclose(lib_handle);
	}
	return 0;
}
