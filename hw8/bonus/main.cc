#include <iostream>
#include <cstdarg>
#include <dlfcn.h>
#include <fstream>
#include <string>
using namespace std;

int main(){
	void* lib_handle;
	string currentFile;
	int (*fn)();
	int total = 0;
	ifstream instream;
	instream.open("libs.txt");
	if (!instream.fail()){
		instream >> currentFile;
		while (!instream.eof()){
			currentFile = "./" + currentFile;
			lib_handle = dlopen(currentFile.c_str(), RTLD_LAZY);
			if (lib_handle == NULL) cout << dlerror() << endl;
			else {
				fn = dlsym(lib_handle, "f");
				if (fn == NULL) cout << dlerror() << endl;
				total += (*fn)();
				dlclose(lib_handle);
			}
			instream >> currentFile;
		}
	}
	cout << total << endl;
	return 0;
}
