main: main.o funcs.o caesar.o vigenere.o decrypt.o
    g++ -o main main.o funcs.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
    g++ -o test-ascii test-ascii.o

tests: tests.o funcs.o
    g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp 

main.o: main.cpp funcs.h 

caesar.o: caesar.cpp caesar.h

tests.o: tests.cpp doctest.h funcs.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

clean:
    rm -f *.o