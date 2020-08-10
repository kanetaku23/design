#include "iteretor.hpp"


//BookShelfIteretor::BookShelfIteretor(BookShelf bookShelf) {
//	BookShelfIteretor::bookShelf = bookShelf;
//	index = 0;
//}




BookShelf::BookShelf(int maxSize) {
	std::vector<Book> books;
	maxSize = maxSize;
	
}

BookShelf::~BookShelf() {
	
}
//Book BookShelf::getBookAt(int index) {
//	return books.at(index);
//}


//void BookShelf::appendBook(Book book) {
//	books.push_back(book);
//}
//
//
//int BookShelf::getLength() {
//	return books.size();
//}



Book::Book(std::string name) {
	Book::name = name;
}

std::string Book::getName(void) {
	return Book::name;
}