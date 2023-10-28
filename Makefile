
bin/juego : src/juego.cpp include/*
	c++ src/juego.cpp -o bin/juego -lcurses -I include

run : bin/juego
	./bin/juego