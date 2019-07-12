#include "itemVetorAdjacency.hpp"
#include "listAdjacency.hpp"

void itemVetorAdjacency::inicializa(int index, int weight, int type, listAdjacency* list){
    itemVetorAdjacency::index=index;
    itemVetorAdjacency::weight=weight;
    itemVetorAdjacency::type=type;
    itemVetorAdjacency::list=list;        
}

void itemVetorAdjacency::setIndex(int index){
    itemVetorAdjacency::index=index;
}

void itemVetorAdjacency::setWeight(int weight){
    itemVetorAdjacency::weight=weight;
}

void itemVetorAdjacency::setType(int type){
    itemVetorAdjacency::type=type;
}

void itemVetorAdjacency::setList(listAdjacency* list){
    itemVetorAdjacency::list=list;
}

int itemVetorAdjacency::getIndex(){
    return itemVetorAdjacency::index;
}

int itemVetorAdjacency::getWeight(){
    return itemVetorAdjacency::weight;
}

int itemVetorAdjacency::getType(){
    return itemVetorAdjacency::type;
}

listAdjacency* itemVetorAdjacency::getlist(int position){

    listAdjacency* listAux=itemVetorAdjacency::list;
    int count=0;

    while(listAux!=NULL && count!=position){
        listAux=(*listAux).getNextPtr();
    }

    return listAux;

}
