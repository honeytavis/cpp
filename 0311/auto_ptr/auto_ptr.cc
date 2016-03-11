#include <iostream>
using std::cout; 
using std::endl; 

#include <memory>
using std::auto_ptr; 

int main()
{
	double* pd = new double(77.77); 
	auto_ptr<double> apd(pd); 
	cout << "*apd = " << *apd << endl; 

	cout << "ap.get = " << apd.get() << endl; 
	cout << "pd = " << pd << endl; 

	cout << endl; 
	int* pi = new int(10); 
	cout << "pi = " << static_cast<void *>(pi) << endl; 
	auto_ptr<int> api(pi); 
	auto_ptr<int> api2(api); 
	cout << "*api2 = " << *api2 << endl; 
	//cout << "*api = " << *api << endl; 
	cout << "api2.get() = " << api2.get() << endl; 

	return 0; 
}
