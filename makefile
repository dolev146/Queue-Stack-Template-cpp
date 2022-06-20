all:main

main:
	@echo "Compiling a.cpp"
	@g++ -o main a.cpp -std=c++2a -Wall -Wextra -Werror -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function




clean:
	rm -f *.o
	rm -f *.a
	rm -f *.so
	rm -f *.lo
	rm -f *.la
	rm -f *.lai
	rm -f *.al
	rm -f *.exe
	rm -f *.dll
	rm -f *.dylib
	rm -f a.out
	rm -f main