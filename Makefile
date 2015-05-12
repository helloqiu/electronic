build: main.cpp Button.cpp Circuit.cpp Fan.cpp Lamp.cpp element.h
	g++ -o main main.cpp element.h Button.cpp Circuit.cpp Lamp.cpp Fan.cpp
clean: main
	rm main