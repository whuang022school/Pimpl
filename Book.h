#ifndef BOOK_H
#define BOOK_H

class Book{
	public:
		Book();
		~Book();
		void print();
		void setID(int id);
		int getID();
	private:
		class BookImpl;//private members & member fuctions
		BookImpl * pImpl;//pointer to class BookImpl
};

#endif
