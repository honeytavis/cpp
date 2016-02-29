# ========================================================================
# Make variables (CC, etc...)
CC		= gcc
CXX		= g++
#CC		= clang 
#CXX		= clang++ 
CFLAGS	= -Wall -std=c++11

EXE		:= main
OBJ 	:= main.o 
SRC 	:= *.c*

# ========================================================================
# Rules shared between targets and prerequisites

$(EXE): $(OBJ) 
	$(CXX) $^ -o $@ 
	rm -f $(OBJ)

$(OBJ): $(SRC)
	$(CC) -c $< -o $@ $(CFLAGS)

PHONY += clean
clean: 
	@rm -f $(EXE) 

.PHONY: PHONY
