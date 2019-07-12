#include "vetorAdjacency.hpp"

vetorAdjacency::vetorAdjacency(int size, itemVetorAdjacency** vetor){
    vetorAdjacency::size=size;
    vetorAdjacency::vetor=vetor;
}

void vetorAdjacency::setSize(int size){
    vetorAdjacency::size=size;
}   

void vetorAdjacency::setVetor(itemVetorAdjacency** vetor){
    vetorAdjacency::vetor=vetor;
}

int vetorAdjacency::getSize(){
    return vetorAdjacency::size;
}

itemVetorAdjacency* vetorAdjacency::getVetor(int position){
    if(position<vetorAdjacency::size && position>=0){
        return vetorAdjacency::vetor[position];
    }

    return nullptr;
}

