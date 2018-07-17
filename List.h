/*@file List.h */

#ifndef _ARRAY_LIST
#define _ARRAY_LIST

#include "ListInterface.h"
#include "Error.h"

template <typename ItemType>
class List : public ListInterface<ItemType> {

private:
	static const int CAPACITY = 3;
	ItemType items[CAPACITY];
	int itemCount;
	int maxItems;	

public:
	List();
	bool isEmpty() const override;
	int getSize() const override;
	bool insert(int position, const ItemType& newElement);
	bool remove(int position) override;
	ItemType getElement(int position) const throw(Error);	
	void setElement(int position, const ItemType& newElement) throw(Error);

};

#include "List.cpp"
#endif
