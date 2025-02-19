# Makefile para compilar un proyecto C++

# Compilador
CXX = g++

# Flags de compilación
CXXFLAGS = -Wall -g

# Archivos fuente y objetos
SOURCES = main.cc Programa.cc add.cc dup.cc instruccion.cc jumpif.cc mul.cc over.cc push.cc read.cc swap.cc write.cc
OBJECTS = $(SOURCES:.cc=.o)

# Ejecutable
EXEC = main

# Regla por defecto
all: $(EXEC)

# Compilación del ejecutable
$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilar archivos .cc a .o
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos compilados
clean:
	rm -f $(OBJECTS) $(EXEC)

# Ejecutar el programa
run: $(EXEC)
	./$(EXEC)
