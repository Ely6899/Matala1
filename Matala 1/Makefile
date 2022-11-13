.PHONY: clean all

all: maindloop maindrec

COMPILER = gcc
COMPILE_FLAGS = -Wall -fPIC #fPIC for using compiled files for dynamic library.
LINK_FLAGS = -lm

maindloop: main.o basicClassification.o advancedClassificationLoop.o
	$(COMPILER) main.o basicClassification.o advancedClassificationLoop.o -o maindloop $(LINK_FLAGS)

maindrec: main.o basicClassification.o advancedClassificationRecursion.o
	$(COMPILER) main.o basicClassification.o advancedClassificationRecursion.o -o maindrec $(LINK_FLAGS)

#Dynamic loops library
#loopsd: basicClassification.o advancedClassificationLoop.o
#	$(COMPILER) -shared basicClassification.o advancedClassificationLoop.o -o libclassloops.so

#Static loops library
#libclassloops.a: basicClassification.o advancedClassificationLoop.o
#	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

main.o: main.c NumClass.h
	$(COMPILER) -c -Wall main.c

basicClassification.o: basicClassification.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) advancedClassificationRecursion.c

clean:
	rm -f *.o *.so *.a maindloop maindrec

