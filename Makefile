all:
	gcc cryptor.c -o cryptor
	gcc -o rsa rsa2.c -lm
