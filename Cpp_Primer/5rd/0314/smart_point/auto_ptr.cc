#include <iostream>
#include <memory>

int main()
{
	double* pd = new double(77.77); 
	std::auto_ptr<double> apd(pd); 

	std::cout << "*apd = " << *apd << '\n'; 
	//std::cout << "apd = " << apd << '\n';  // error
	std::cout << "apd.get() = " << apd.get() << '\n'; 
	std::cout << "pd = " << pd << '\n'; 

	int *pi = new int(7); 
	std::auto_ptr<int> api1(pi); 
	std::auto_ptr<int> api2(api1); 
	std::cout << "*api2 = " << *api2 << '\n'; 
	//std::cout << "*api1 = " << *api1 << '\n';  //error

	float *pf = new float(static_cast<float>(0.77)); 
	std::auto_ptr<float> apf; 
	apf.reset(pf); 
	std::cout << "*apf = " << *apf << '\n'; 

	return 0; 
}
