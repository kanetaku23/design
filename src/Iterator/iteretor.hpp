#pragma once

#include <iostream>
#include <string>
#include <vector>


//class Aggregate {
//private:
//
//};
//
//class Iteretor {
//public:
//
//};
//
//
//class BookShelfIteretor {
//private:
//	int index;
//	BookShelf bookShelf;
//
//public:
//	BookShelfIteretor(BookShelf bookShelf);
//	bool hasNext();
//
//};


class BookShelf{
private:
	
	int maxSize;
	int last = 0;
	

public:
	BookShelf(int maxSize);
	~BookShelf(void);
	//Book getBookAt(int index);
	//void appendBook(Book book);
	//int getLength();
};


class Book {
private:
	std::string name;

public:
	Book(std::string name);
	std::string getName(void);
};