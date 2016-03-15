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

	std::shared_ptr<Parent> parent_; // 循环引用导致内存泄漏

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

	std::shared_ptr<Child> child_; 

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
