default:
	#gcc cryptor.c -o cryptor
	#g++ -o rsa rsa.cpp -fpermissive;./rsa
	g++ visio.cpp math.cpp -lX11 -lgmpxx  -lgmp -o enc;./enc
