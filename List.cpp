/*@file List.cpp */

#include "List.h"

template <typename ItemType>
List<ItemType>::List() :itemCount(0), maxItems(CAPACITY) {  }

template <typename ItemType>
bool List<ItemType>::isEmpty() const {
	return itemCount == 0;
}

template <typename ItemType>
int List<ItemType>::getSize() const {
	return itemCount;
}

template <typename ItemType>
bool List<ItemType>::insert(int position, const ItemType& newElement) {
	bool ableToInsert = (position >= 1) && (position <= itemCount + 1) && (itemCount < maxItems);
	if(ableToInsert) {
		for(int ix = itemCount; ix >= position; --ix)
			items[ix] = items[ix - 1];

		items[position - 1] = newElement;
		++itemCount;
	}

	return ableToInsert;
}

template <typename ItemType>
ItemType List<ItemType>::getElement(int position) const throw(Error) {
	bool ableToGet = (position >= 1) && (position <= itemCount);
	
	if(ableToGet)
		return items[position - 1];
	else {
		std::string message = "getElement() called whit an empty list or invalid position";
		throw(Error(message));
	}
}

template <typename ItemType>
void List<ItemType>::setElement(int position, const ItemType& newElement) throw(Error) {
	bool ableToSet = (position >= 1) && (position <= itemCount);
	if(ableToSet)
		items[position - 1] = newElement;
	else {
		std::string message = "setElement() called with an empty list or invalid position";
		throw(Error(message));
	}
}

template <typename ItemType>
bool List<ItemType>::remove(int position) {
	bool ableToRemove = (position >= 1) && (position <= itemCount);
	if(ableToRemove) {
		for(int ix = position - 1; ix < getSize(); ++ix) 
			items[ix] = items[ix + 1];
		--itemCount;
	}		
	return ableToRemove;
}
