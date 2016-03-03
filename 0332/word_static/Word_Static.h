#ifndef WORD_Static_H
#define WORD_Static_H

#include <vector>
#include <string>
#include <sstream>

struct record {
	std::string word; 
	int freq; 
}; 

class Word_Static {
public:
	Word_Static(); 
	~Word_Static(); 
	void Read_File(const std::string &file_name); 
	void Write_File(const std::string &file_name); 

private:
	std::string str_; 
	std::vector<std::string> vec_str_; 
	std::vector<struct record> vec_red_; 
}; 

#endif
