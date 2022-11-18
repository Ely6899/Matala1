COMPILER = gcc
COMPILE_FLAGS = -Wall -fPIC #fPIC for using compiled files for dynamic library.
LINK_FLAGS = -lm
AR = ar
MAINS = mains maindloop maindrec

all: $(MAINS)

mains: main.o recursives
	$(COMPILER) -Wall -g main.o libclassrec.a -o mains $(LINK_FLAGS)

maindloop: main.o loopd
	$(COMPILER) -Wall -g -o maindloop main.o ./libclassloops.so $(LINK_FLAGS)

maindrec: main.o recursived
	$(COMPILER) -Wall -g -o maindrec main.o ./libclassrec.so $(LINK_FLAGS)

#Loop libraries:
loops: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

loopd: basicClassification.o advancedClassificationLoop.o
	$(COMPILER) $(COMPILE_FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

#Recursion libraries:
recursives: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

recursived: basicClassification.o advancedClassificationRecursion.o
	$(COMPILER) $(COMPILE_FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

#Source file compilations
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
	rm -f *.o *.so *.a $(MAINS)

