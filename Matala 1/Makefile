all: program

COMPILER = gcc
COMPILE_FLAGS = -Wall
LINK_FLAGS = -lm


program: main.o basicClassification.o advancedClassificationLoop.o
	$(COMPILER) main.o basicClassification.o advancedClassificationLoop.o -o program $(LINK_FLAGS)

main.o: main.c NumClass.h
	$(COMPILER) -c main.c $(COMPILE_FLAGS)

basicClassification.o: basicClassification.c NumClass.h
	$(COMPILER) -c basicClassification.c $(COMPILE_FLAGS)

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(COMPILER) -c advancedClassificationLoop.c $(COMPILE_FLAGS)

clean:
	rm -f *.o program

