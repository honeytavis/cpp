# ===========================================================================
# Make variables (CC, etc...)
CC		= gcc
CXX		= g++
CFLAGS	= -Wall

EXE		:= main
OBJ 	:= main.o 
SRC 	:= *.cpp 

# ===========================================================================
# Rules shared between targets and prerequisites

$(EXE): $(OBJ) 
	$(CXX) $^ -o $@ 

$(OBJ): $(SRC)
	$(CC) -c $< -o $@ $(CFLAGS)

PHONY += clean
clean: 
	@rm -f $(EXE) $(OBJ)

.PHONY: PHONY
