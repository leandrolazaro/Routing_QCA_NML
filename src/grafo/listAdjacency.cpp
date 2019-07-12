#include "listAdjacency.hpp"

listAdjacency::listAdjacency(int index, int size, int weight, int type, listAdjacency* nextPtr){
    listAdjacency::index=index;
    listAdjacency::size=size;
    listAdjacency::weight=weight;
    listAdjacency::type=type;
    listAdjacency::nextPtr=nextPtr;
}

void listAdjacency::setIndex(int index){
    listAdjacency::index=index;
}
void listAdjacency::setSize(int size){
    listAdjacency::size=size;
}
void listAdjacency::setWeight(int weight){
    listAdjacency::weight=weight;
}
void listAdjacency::setInput(int input){
    listAdjacency::input=input;
}
void listAdjacency::setType(int type){
    listAdjacency::type=type;
}
void listAdjacency::setNextPtr(listAdjacency* nextPtr){
    listAdjacency::nextPtr=nextPtr;
}

int listAdjacency::getIndex(){
    return listAdjacency::index;
}
int listAdjacency::getSize(){
    return listAdjacency::size;
}
int listAdjacency::getWeight(){
    return listAdjacency::weight;
}
int listAdjacency::getInput(){
    return listAdjacency::input;
}
int listAdjacency::getType(){
    return listAdjacency::type;
}
listAdjacency* listAdjacency::getNextPtr(){
    return listAdjacency::nextPtr;
}