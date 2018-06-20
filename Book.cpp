#include "Book.h"
#include "Book_Private.h"

Book::Book(){
	pImpl = new BookImpl();
}

Book::~Book(){
	delete pImpl;
}

void Book::print(){
  pImpl->print();
}

int Book::getID(){
	return pImpl->getID();
}

int Book::BookImpl::getID(){
  return 2;
}

void Book::BookImpl::print(){
  std::cout << "print from BookImpl" << std::endl;
}
