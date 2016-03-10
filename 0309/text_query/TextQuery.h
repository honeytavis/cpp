#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <cstddef>

class TextQuery {
public:
	void readFile(const std::string& fileName); 
	void writeFile(const std::string& fileName); 
	void wordQuery(const std::string& word); 

private:
	std::map<size_t, std::string> file_;  					// file 
	std::map<std::string, std::set<size_t>> word_line_;  	// word line number 
	std::map<std::string, size_t> word_freq_;  				// word frequence 
}; 

#endif
