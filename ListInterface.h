/*@file ListInterface.h */

#ifndef _LIST_INTERFACE
#define _LIST_INTERFACE

template <typename ItemType>
class ListInterface {

public:
	/*Sees wheater this List is empty
	 @return true if List is empty, false if not */
	virtual bool isEmpty() const = 0;
	
	/* Gets the size of the List
 	 @return The length of the List */
	virtual int getSize() const = 0;

	/*Insert new element into the list at given position
	 * @post If 1 <= position <= getLength + 1 and the isertion is successfull, new elemenet is inserted
	 * @param position at which to insert element
	 * @param newElement The element value
	 * @return true if operation was successfull, otherwise false*/
	virtual bool insert(int position, const ItemType& newElement) = 0;	
	/* Removes Element at a given position
	 * @post if 1 <= position <= getLength() and teh removal is successfull, element is removed and other elements has been shifted;
	 * @param position the list poisition which element has to been removed
	 * @return true if removal is successfull, otherwise false*/
	virtual bool remove(int position) = 0; 
	
	/* Gets the lement at given position
	 * @post The desired element has been returned
	 * @position the list pelement position of  desired element
	 * @return The element at a given position*/
	virtual ItemType getElement(int position) const = 0;
		
	/* Replaces element at given position
	 * @pre 1 <= position <= getLengt()
	 * @param position The list position of the element to replace
	 * @param replaced element value */
	virtual void setElement(int position, const ItemType& newElement)  = 0;
};


#endif
