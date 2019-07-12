#include<iostream>
#include "../grafo/vetorAdjacency.hpp"
#include "../grafo/itemVetorAdjacency.hpp"
#include "../grafo/listAdjacency.hpp"
using namespace std;

void setGrafoWeights(vetorAdjacency* vetor){
    for(int i=vetor->getSize(); i>=0; i--){
        if(vetor->getVetor(i)->getType==2){
            setGrafoWeightsAux(vetor->getVetor, vetor);        
        }
    }
}

int setGrafoWeightsAux(itemVetorAdjacency* item, vetorAdjacency* vetor){
    listAdjacency* listAux=item->getlist(0);
    int biggerWeight=0;
    while(listAux!=nullptr){
        if(listAux->getInput()){
            listAux->setWeight(setGrafoWeightsAux(vetor->getVetor(listAux->getIndex), vetor));
            if(listAux->getWeight>biggerWeight){
                biggerWeight=listAux->getWeight();
            }
        }
        listAux=listAux->getNextPtr();
    }

    item->setWeight(biggerWeight);

    return item->getWeight()+1;
}


