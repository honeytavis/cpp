#include <iostream>
#include <memory>

class Parent; 
class Child; 

class Child {
public:
	Child()
	{
		std::cout << "Child()" << '\n'; 
	}

	~Child()
	{
		std::cout << "~Child()" << '\n'; 
	}

	std::weak_ptr<Parent> parent_; 

private:

}; 

class Parent {
public:
	Parent()
	{
		std::cout << "Parent()" << '\n'; 
	}

	~Parent()
	{
		std::cout << "~Parent()" << '\n'; 
	}

	std::weak_ptr<Child> child_; 

private:

}; 

int main()
{
	std::shared_ptr<Parent> parent(new Parent);
	std::shared_ptr<Child> child(new Child);

	std::cout << "parent's use count = " 
	          << parent.use_count() << '\n'; 
	std::cout << "child's use count = "
	          << child.use_count() << '\n'; 

	parent->child_ = child; 
	child->parent_ = parent; 

	std::cout << "parent's use count = " 
	          << parent.use_count() << '\n'; 
	std::cout << "child's use count = "
	          << child.use_count() << '\n'; 

	return 0; 
}
