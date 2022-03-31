#include "Geometric.h"
Geometric::Geometric() {
	length = 0;
}

Geometric::Geometric(int length) {
	this->length = length;

	Node* temp = this;
	for (int i = 0; i < length; i++) {
		temp->next = new Node;
		temp = temp->next;
	}
}

int Geometric::getLength() {
	return length;
}

void Geometric::debug() {
	Node* ptr = this->next;
	std::cout << "--------------" << std::endl;
	while (ptr != nullptr) {
		ptr->debug();
		std::cout << std::endl;
		ptr = ptr->next;
	}
	std::cout << "--------------" << std::endl;
}


Node& Geometric::at(int number) {
	Node* temp = this;
	for (int i = 0; temp->next->next != nullptr && i < number; i++) {
		temp = temp->next;
	}
	return *temp->next;
}

void Geometric::drawing(int aim)
{
	Node* ptr;

	if ((aim | Line) == aim) {
		ptr = this->next;
		while (ptr->next != nullptr) {
			line(ptr->x(), ptr->y(), ptr->next->x(), ptr->next->y());
			ptr = ptr->next;
		}
		line(ptr->x(), ptr->y(), this->next->x(), this->next->y());
	}
	if ((aim | Point) == aim) {
		ptr = this->next;
		while (ptr != nullptr) {
			ptr->drawing();
			ptr = ptr->next;
		}
	}
}

void Geometric::transformation(Matrix3d& trans)
{
	Node* ptr = this->next;
	while (ptr != nullptr) {
		ptr->redefine(trans * (*ptr));
		ptr = ptr->next;
	}
}

/**
	已弃用成员方法
*/
void Geometric::drawingLines()
{
	Node* ptr = this->next;
	while (ptr->next != nullptr) {
		line(ptr->x(), ptr->y(), ptr->next->x(), ptr->next->y());
		ptr = ptr->next;
	}
	line(ptr->x(), ptr->y(), this->next->x(), this->next->y());
}

void Geometric::drawingPoints()
{
	Node* ptr = this->next;
	while (ptr != nullptr) {
		ptr->drawing();
		ptr = ptr->next;
	}
}