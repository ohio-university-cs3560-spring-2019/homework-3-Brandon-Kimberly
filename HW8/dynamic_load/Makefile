second : main2.o libstddev.so

main2.o : main2.cc
	g++ -fpermissive -ldl -g main2.cc

libstddev.so : stddev.cc stddev.h
	g++ -fpic -c stddev.cc
	g++ -shared -Wl,-soname,libstddev.so.1 -o libstddev.so stddev.o
	ln -sf libstddev.so libstddev.so.1
	ln -sf libstddev.so.1 libstddev.so