#include "TextQuery.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>

void TextQuery::readFile(const std::string& fileName)
{
	std::ifstream ifs(fileName); 
	if (!ifs.good()) {
		std::cout << "ifstream error" << std::endl; 
		exit(-1); 
	}

	std::pair<size_t, std::string> line(0, ""); 
	std::stringstream ss; 
	std::string str; 
	while (getline(ifs, line.second)) {
		// text's line statistics 
		++line.first; 
		file_.insert(line); 

		ss.clear(); 
		ss << line.second; 
		while (ss >> str) {
			// word frequency statistics 
			++word_freq_[str]; 

			// line numbers statistics 
			word_line_[str].insert(line.first); 
		}
	}
}

void TextQuery::writeFile(const std::string& fileName)
{
	std::ofstream ofs(fileName); 
	if (!ofs.good()) {
		std::cout << "ofstream error" << std::endl; 
		exit(-1); 
	}

	for (auto const& i : word_freq_) {
		ofs << i.first << ": "
			<< i.second << std::endl; 
	}
}

void TextQuery::wordQuery(const std::string& word)
{
	std::cout << "Word: " << word << ' ' 
			  << "Freq: " << word_freq_[word] << '\n'; 

	for (auto const& i : word_line_[word]) {
		std::cout << ' ' << i 
				  << ' ' << file_[i] << '\n';
	}
	std::cout << std::endl; 
}
