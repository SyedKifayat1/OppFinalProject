all: ./a.out

compRun:
	g++ -std=c++11 *.cpp -o r.out

compTest:
	g++ -std=c++11 *.cpp -o a.out

test: clean compTest; ./a.out; rm -f *.out

run: clean compRun; ./r.out; rm -f *.out

clean:
	rm -f *.out

