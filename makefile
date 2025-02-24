DEPS= IDK
compile: main.c 
	 gcc main.c -o $(DEPS)

run: $(DEPS)
	 ./$(DEPS) 7 6 3 13 14 10 7 4 1 9

clean: $(DEPS)
	 rm $(DEPS)