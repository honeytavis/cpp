# =========================================================================
# Source files, Object files, etc...
# =========================================================================

DIR_INC  := $(wildcard include)
DIR_SRC  := $(wildcard src)
DIR_OBJ  := $(wildcard obj)
DIR_BIN  := $(wildcard bin)

EXT      := cc
INCLUDE  := -I$(DIR_INC)

SRC      := $(wildcard $(DIR_SRC)/*.$(EXT))
OBJ      := $(patsubst %.$(EXT), $(DIR_OBJ)/%.o, $(notdir $(SRC)))

#SRC      := $(wildcard $(DIR_SRC)/*.$(EXT))
#OBJ      := $(patsubst $(DIR_SRC)/%.$(EXT), $(DIR_OBJ)/%.o, $(SRC))

EXE      := $(DIR_BIN)/main

# =========================================================================
# Make variables (CC, etc...)
# =========================================================================

CC         := clang 
CFLAGS     := -Wall
CXX        := clang++
CXXFLAGS   := -Wall -std=c++11

# =========================================================================
# Rules shared between targets and prerequisites
# =========================================================================

$(EXE): $(OBJ)
	$(CXX) $^ -o $@

#$(OBJ): /$(SRC) 
$(DIR_OBJ)/%.o: $(DIR_SRC)/%.c
	$(CXX) -c $< -o $@ $(INCLUDE) $(CXXFLAGS)

PHONY += clean
clean: 
	-rm -f $(EXE) $(OBJ)

.PHONY: PHONY
