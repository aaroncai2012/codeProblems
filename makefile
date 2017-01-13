.PHONY: clean

game: game.exe

game.exe: exec_game.cc		\
		game_session.cc \
		player.cc \
		game_configuration.cc
	@if [ ! -d "./bin" ]; then mkdir ./bin; fi
	g++  -std=c++11 $^ -o bin/game.exe 

phoneNumberWords: phoneNumberWords.exe

phoneNumberWords.exe: phoneNumberWords.cc
	@if [ ! -d "./bin" ]; then mkdir ./bin; fi
	g++  -std=c++11 $^ -o bin/phoneNumberWords.exe 
	

clean:
	@if [ -d "./bin" ]; then rm -rf ./bin; fi
	@echo "Removed bin directory."
