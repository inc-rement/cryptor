default:
	#gcc cryptor.c -o cryptor
	#g++ -o rsa rsa.cpp -fpermissive;./rsa
	#g++ visio.cpp math.cpp -lX11 -lgmpxx  -lgmp -o enc;./enc
	#gcc -o factor factor.c `pkg-config --libs  --cflags python-3.11-embed`
	#./factor1.py
	#./pq.py 10 30|./ed.py |./factor.py
	g++ gmp.cpp -lgmpxx -lgmp;./a.out
	#cat << end|./cryptor.py 1 2 3 4 5 end
	#./pq.py >> pq.txt
	#cat pq.txt | ./ed.py >> ed.txt
	#cat ed.txt | ./factor.py
