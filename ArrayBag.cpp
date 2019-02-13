//
// Created by Henry on 2/12/2019.
//
#include "BagInterface.h"
#include "ArrayBag.h"
#include <iostream>
using namespace std;

template <typename ItemType>
std::vector<ItemType> ArrayBag<ItemType>::toVector() const {
    std::vector<ItemType>bagContents;
    for(int i(0); i<itemCount; ++i){
        bagContents.push_back(items[i]);
    }
    return bagContents;
}

template <typename ItemType>
int ArrayBag<ItemType>::getCurrentSize() const {
return itemCount;
}

template <typename ItemType>
bool ArrayBag<ItemType>::isEmpty() const {
for (int i(0); i<itemCount; ++i){
    if(items[i] != ""){
        return true;
    }
    else{
        return false;
    }
}
}

template <typename ItemType>
bool ArrayBag<ItemType>::add(const ItemType& newEntry){

}

template <typename ItemType>
bool ArrayBag<ItemType>::remove(const ItemType& anEntry){

}

template <typename ItemType>
void ArrayBag<ItemType>::clear() {

}

template <typename ItemType>
int ArrayBag<ItemType>::getFrequencyOf(const ItemType& anEntry) const {

}

template <typename ItemType>
bool ArrayBag<ItemType>::contains(const ItemType& anEntry) const {

}

