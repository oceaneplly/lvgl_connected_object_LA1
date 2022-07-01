EXE=game_pc game_pi game_default
all: $(EXE)

PATH_CCROISE=/home/oceane/Documents/LPE/Module2/tools-master/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian-x64/bin
CCC=$(PATH_CCROISE)/arm-linux-gnueabihf-gcc

game_pc: game.c
	gcc -D'TARGET="PC"' $< -o $@

game_pi: game.c
	$(CCC) -D'TARGET="PI"' $< -o $@

game_default: game.c
	gcc $< -o $@
