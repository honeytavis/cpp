# ========================================================================
# Make variables (CC, etc...)
CC		= gcc
CXX		= g++
CFLAGS	= -Wall -std=c++11

EXE		:= main
OBJ 	:= main.o 
SRC 	:= *.c*

# ========================================================================
# Rules shared between targets and prerequisites

$(EXE): $(OBJ) 
	$(CXX) $^ -o $@ 

$(OBJ): $(SRC)
	$(CXX) -c $< -o $@ $(CFLAGS)

PHONY += clean
clean: 
	@rm -f $(EXE) $(OBJ)

.PHONY: PHONY
