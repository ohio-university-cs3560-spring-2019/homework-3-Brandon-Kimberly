second: main2.o stddev.o libstddev.so

stddev.o: stddev.cc stddev.h
	g++ -fpic -c stddev.cc

libdev.so.1: libdev.so.1.0
	ln -sf libdev.so.1.0 libdev.so.1

libdev.so.1.0: stddev.o
	g++ -shared -Wl,-soname,libdev.so.1 -o libdev.so.1.0 stddev.o

libstddev.so: libdev.so.1
	ln -sf libdev.so.1 libstddev.so

main2.o: main2.cc
	g++ -ldl -fpermissive main2.cc
