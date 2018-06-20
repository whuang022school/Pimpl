#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "Book.h"
int main(int argc, char** argv) {
	Book book;
    book.print();
	std::cout<<book.getID();
	return 0;
}
