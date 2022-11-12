all: program

COMPILER = gcc
COMPILE_FLAGS = -Wall
LINK_FLAGS = -lm


program: main.o basicClassification.o advancedClassificationLoop.o
	$(COMPILER) -o program main.o basicClassification.o advancedClassificationLoop.o $(LINK_FLAGS)

main.o: main.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) main.c

basicClassification.o: basicClassification.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) advancedClassificationLoop.c

.PHONY: clean all

clean:
	rm -f *.o program

