#ifndef BOOK_PRIVATE_H
#define BOOK_PRIVATE_H

#include "Book.h"
#include <iostream>

class Book::BookImpl{
	public:
		void print();
		void setID(int id);
		int getID();
	private:
		int id;
};

#endif
