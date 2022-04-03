# Project: Gym management System 
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = "../Multifile\ c/StepIn_JaiKishan/03_Implementation/getdata.o" "../Multifile\ c/StepIn_JaiKishan/03_Implementation/main.o"
LINKOBJ  = "../Multifile c/StepIn_JaiKishan/03_Implementation/getdata.o" "../Multifile c/StepIn_JaiKishan/03_Implementation/main.o"
LIBS     = -L"D:/Dev-Cpp/MinGW64/lib" -L"D:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"D:/Dev-Cpp/MinGW64/include" -I"D:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"D:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"D:/Multifile c/StepIn_JaiKishan/03_Implementation/inc"
CXXINCS  = -I"D:/Dev-Cpp/MinGW64/include" -I"D:/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -I"D:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"D:/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++" -I"D:/Multifile c/StepIn_JaiKishan/03_Implementation/inc"
BIN      = "Gym management System .exe"
CXXFLAGS = $(CXXINCS) 
CFLAGS   = $(INCS) 
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

"../Multifile\ c/StepIn_JaiKishan/03_Implementation/getdata.o": ../Multifile\ c/StepIn_JaiKishan/03_Implementation/getdata.c
	$(CC) -c "../Multifile c/StepIn_JaiKishan/03_Implementation/getdata.c" -o "../Multifile c/StepIn_JaiKishan/03_Implementation/getdata.o" $(CFLAGS)

"../Multifile\ c/StepIn_JaiKishan/03_Implementation/main.o": ../Multifile\ c/StepIn_JaiKishan/03_Implementation/main.c
	$(CC) -c "../Multifile c/StepIn_JaiKishan/03_Implementation/main.c" -o "../Multifile c/StepIn_JaiKishan/03_Implementation/main.o" $(CFLAGS)
