CFLAGS = -Wall

#target exe
all: fileio.o utils.o proj_refactor_file.o
	g++ $(CFLAGS) -o fileio.o utils.o proj_refactor_file.o

fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
	g++ $(CFLAGS) -c ../fileio/fileio.cpp

#rebuild if either of the files below change
utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
	g++ $(CFLAGS) -c ../utils/utils.cpp
	
#rebuild if either of the files below change	
proj_refactor_file.o: proj_refactor_file.cpp ../includes/utils.h ../includes/constants.h ../includes/fileio.h
	g++ $(CFLAGS) -c proj_refactor_file.cpp

#type 'make clean' to remove following	
clean:
	rm -f *.o myexe