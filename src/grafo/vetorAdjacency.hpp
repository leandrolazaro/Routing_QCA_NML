#ifndef VETORADJACENCY_H
#define VETORADJACENCY_H

#include <iostream>
#include "itemVetorAdjacency.hpp"
#include "listAdjacency.hpp"
using namespace std;

class vetorAdjacency{
    private:
        int size;
        itemVetorAdjacency** vetor;
    public:

        vetorAdjacency(int size, itemVetorAdjacency** vetor);

        void setSize(int size);
        void setVetor(itemVetorAdjacency** list);

        int getSize();
        itemVetorAdjacency* getVetor(int position);
};

#endif