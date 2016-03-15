#include <iostream>
#include <memory>

class Fclose {
public:
	void operator() (FILE* fp) 
	{
		if (fp) {
			std::cout << "Fclose()" << '\n'; 
			fclose(fp); 
		}
	}
}; 

int main()
{
	FILE* fp = fopen("shared_delete.cc", "r"); 
	std::shared_ptr<FILE> p(fp, Fclose()); // Fclose() 生成匿名对象

	return 0; 
}
