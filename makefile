all: Gacha_exe

Gacha_exe: Character.o Gacha.o Main.o
	g++ Character.o Gacha.o Main.o -o Gacha_exe

Character.o: Common.hpp Character.hpp Character.cpp
	g++ -c Character.cpp -o Character.o

Gacha.o: Common.hpp Gacha.hpp Gacha.cpp
	g++ -c Gacha.cpp -o Gacha.o

Main.o: Common.hpp Main.cpp
	g++ -c Main.cpp -o Main.o

run: 
	./Gacha_exe

clean: 
	rm -r -f Character.o
	rm -r -f Gacha.o
	rm -r -f Main.o
	rm -r -f Gacha_exe

