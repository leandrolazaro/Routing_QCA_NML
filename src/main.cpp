#include<iostream>
#include "grafo/vetorAdjacency.hpp"
#include "grafo/itemVetorAdjacency.hpp"
#include "grafo/listAdjacency.hpp"

using namespace std;

int main(){

    vetorAdjacency* vetor1=new vetorAdjacency(1, nullptr);
    itemVetorAdjacency *itens=new itemVetorAdjacency[1];
    itens->inicializa(2, 0, 0, nullptr);
    vetor1->setVetor(&itens);
    printf("\n%d\n",vetor1->getVetor(0)->getIndex());

    cout<<"\n\nHello World,\nWelcome to my first C ++ program on Ubuntu Linux\n\n"<<endl;

    return 0;

}