CXXFLAGS=-DNDEBUG -O3 -Wall -Wno-unused-variable -lm -std=c++11
LDFLAGS=
OBJS_CODE=maximo.o minimo.o reversa.o inrgesar.o eliminar.o suma.o

clearing_algo:  test2.o $(OBJS_CODE)
    $(CXX) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
    rm   *.o clearing_algo
