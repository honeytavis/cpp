#include <cstring>
#include <iostream>
#include <vector>
#include <string>

class MetaData {
public:
	MetaData(const std::string& name, const int& size); 
	MetaData(const MetaData&); 
	MetaData(MetaData&&);
	std::string getName() const; 
	int getSize() const; 

private:
	std::string name_; 
	int size_; 
}; 

MetaData::MetaData(const std::string& name, const int& size)
: name_(name), size_(size) {}

MetaData::MetaData(const MetaData& rhs)
: name_(rhs.name_), size_(rhs.size_) {}

MetaData::MetaData(MetaData&& rhs) : name_(rhs.name_), size_(rhs.size_) 
{
	std::cout << "MetaData(MetaData&)" << '\n'; 
}

std::string MetaData::getName() const
{
	return name_; 
}

int MetaData::getSize() const
{
	return size_; 
}

class ArrayWrapper {
public:
	ArrayWrapper() 
	: pVals_(new int[64]), 
	  metadata_("ArrayWrapper", 64) 
	{}

	ArrayWrapper(int n) 
	: pVals_(new int[n]), 
	  metadata_("ArrayWrapper", n) 
	{}

	ArrayWrapper(const ArrayWrapper& rhs)
	: pVals_(new int[rhs.metadata_.getSize()]),
	  metadata_(rhs.metadata_)
	{
		memcpy(pVals_, rhs.pVals_, rhs.metadata_.getSize()); 
	}

	ArrayWrapper(ArrayWrapper&& rhs)
	: pVals_(rhs.pVals_),
	  metadata_(std::move(rhs.metadata_))
	{
		std::cout << "ArrayWrapper(ArrayWrapper&&)" << '\n'; 
		rhs.pVals_ = nullptr; 
	}

	~ArrayWrapper()
	{
		std::cout << "~ArrayWrapper()" << '\n'; 
		delete [] pVals_; 
	}

private:
	int* pVals_; 
	MetaData metadata_; 
}; 

int main()
{
	ArrayWrapper aw; 
	std::vector<ArrayWrapper> myVev; 
	//myVev.push_back(aw); 
	myVev.push_back(std::move(aw)); 

	return 0; 
}
