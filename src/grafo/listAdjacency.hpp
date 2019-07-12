#ifndef LISTADJACENCY_H
#define LISTADJACENCY_H

#include <iostream>
using namespace std;

class listAdjacency{
    private:
        int index;
        int size;
        int weight;
        int input;
        int type;
        listAdjacency* nextPtr;
    public:

        listAdjacency(int index, int size, int weight, int type, listAdjacency* nextPtr);

        void setIndex(int index);
        void setSize(int size);
        void setWeight(int weight);
        void setInput(int input);
        void setType(int type);
        void setNextPtr(listAdjacency* nextPtr);

        int getIndex();
        int getSize();
        int getWeight();
        int getInput();
        int getType();
        listAdjacency* getNextPtr();

};

#endif