#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>

#include "Word_Static.h"

Word_Static::Word_Static() {}

Word_Static::~Word_Static() {}

void Word_Static::Read_File(const std::string &file_name)
{
	std::ifstream ifs(file_name); 
	if (!ifs.good()) {
		std::cout << "ifstream error" << std::endl; 
		exit(-1); 
	}

	while (ifs >> str_) {
		vec_str_.push_back(str_); 
	}
	for (auto &i : vec_str_) {
		auto b = std::begin(vec_red_);
		auto e = std::end(vec_red_); 
		while (b != e) {
			if (b->word == i) {
				++(b->freq); 
				break; 
			} 
			++b;
		}
		if (b == e) {
			struct record tmp; 
			tmp.word = i; 
			tmp.freq = 1; 
			vec_red_.push_back(tmp); 
		}
	}

	ifs.close(); 
}

void Word_Static::Write_File(const std::string &file_name)
{
	std::ofstream ofs(file_name); 
	if (!ofs.good()) {
		std::cout << "ofstream error" << std::endl; 
		exit(-1); 
	}

	for (auto &i : vec_red_) {
		std::stringstream ss; 
		ss << i.word << ' ' << i.freq << std::endl; 
		str_ = ss.str(); 
		ofs << str_; 
		std::cout << str_; 
	}

	ofs.close(); 
}
