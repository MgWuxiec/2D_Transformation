#include "Node.h"

Node::Node() {
	z() = 1;
	next = nullptr;
}

Node::Node(Node* next) {
	z() = 1;
	this->next = next;
}

void Node::redefine(const Vector3d coord)
{
	x() = coord.x();
	y() = coord.y();
	z() = coord.z();
}

void Node::debug()
{
	std::cout << *this << "\n" << next << std::endl;
}

void Node::drawing()
{
	solidcircle(x(), y(), 2);
}
