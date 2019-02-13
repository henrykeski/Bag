//
// Created by Henry on 2/12/2019.
//

#ifndef CS2PROJECT2_BAGARRAY_H
#define CS2PROJECT2_BAGARRAY_H

#include <vector>

#include "BagInterface.h"

/** @class ArrayBag ArrayBag.h "ArrayBag.h"
 *
 *  Specification of an array-based ADT bag. */
template <typename ItemType>
class ArrayBag : public BagInterface<ItemType> {
private:
    /** Maximum capacity of this bag. */
    static const int DEFAULT_CAPACITY = 6;

    /** Data storage. */
    ItemType items[DEFAULT_CAPACITY];

    /** Number of items in this bag. */
    int itemCount = 0;

    /** Maximum capacity of this bag. */
    int maxItems = DEFAULT_CAPACITY;

    /** Gets the index of target in the array 'items' in this bag.
     *
     * @param target The ItemType value to retrieve the index of.
     *
     * @return The index of the element in the array 'items' that
     *         contains 'target' or -1 if the array does not contain
     *         'target'. */
    int getIndexOf(const ItemType& target) const;

public:
    /** Default constructor. */
    ArrayBag() = default;

    /** Virtual destructor. */
    virtual ~ArrayBag() = default;

    virtual int getCurrentSize() const;

    virtual bool isEmpty() const;

    virtual bool add(const ItemType& newEntry);

    virtual bool remove(const ItemType& anEntry);

    virtual void clear();

    virtual int getFrequencyOf(const ItemType& anEntry) const;

    virtual bool contains(const ItemType& anEntry) const;

    virtual std::vector<ItemType> toVector() const;
};

#include "ArrayBag.cpp"

#endif //CSPROJECT2_BAGARRAY_H
