second: main2.cc libstddev.so
	g++ -Wall -fpermissive main2.cc -o second -ldl

libstddev.so: libdev.so.1
	ln -sf libdev.so.1 libstddev.so

libdev.so.1: libdev.so.1.0.1
	ln -sf libdev.so.1.0.1 libdev.so.1

libdev.so.1.0.1: stddev.o
	g++ -shared -Wl,-soname,libdev.so.1 -o libdev.so.1.0.1 stddev.o

stddev.o: stddev.cc stddev.h
	g++ -fpic -c stddev.cc
