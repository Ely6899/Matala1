COMPILER = gcc
COMPILE_FLAGS = -Wall -fPIC #fPIC for using compiled files for dynamic library.
LINK_FLAGS = -lm
AR = ar

all: maindloop maindrec libclassloops.a

maindloop: main.o basicClassification.o advancedClassificationLoop.o
	$(COMPILER) main.o basicClassification.o advancedClassificationLoop.o -o maindloop $(LINK_FLAGS)

maindrec: main.o basicClassification.o advancedClassificationRecursion.o
	$(COMPILER) main.o basicClassification.o advancedClassificationRecursion.o -o maindrec $(LINK_FLAGS)

#dynamic libraries:
libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(COMPILER) $(COMPILE_FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(COMPILER) $(COMPILE_FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

#Static libraries:
libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

main.o: main.c NumClass.h
	$(COMPILER) -c -Wall main.c

basicClassification.o: basicClassification.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(COMPILER) -c $(COMPILE_FLAGS) advancedClassificationRecursion.c

.PHONY: clean all

clean:
	rm -f *.o *.so *.a maindloop maindrec

