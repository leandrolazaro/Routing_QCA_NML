#ifndef ITEMVETORADJACENCY_H
#define ITEMVETORADJACENCY_H

#include <iostream>
#include "listAdjacency.hpp"
using namespace std;

class itemVetorAdjacency{
    private:
        int index;
        int weight;
        int type;
        listAdjacency* list;
    public:

        void inicializa(int index, int weight, int type, listAdjacency* list);

        void setIndex(int index);
        void setWeight(int weight);
        void setType(int type);
        void setList(listAdjacency* list);

        int getIndex();
        int getWeight();
        int getType();
        listAdjacency* getlist(int position);

};

#endif