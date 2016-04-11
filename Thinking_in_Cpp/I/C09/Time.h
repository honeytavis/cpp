#ifndef TIME_H
#define TIME_H

#include <ctime>
#include <string>

class Time {
public: 
  Time(); 

  std::tm* localtime(); 
  std::tm* gmtime(); 

  int strftime(); 
  std::string get(); 
  int delta(const Time& st) const; 

private: 
  std::time_t time; 
  std::tm* tmPtr; 
  std::string str; 
}; 

inline Time::Time() { std::time(&time); }

inline std::tm* Time::localtime() 
{
  tmPtr = std::localtime(&time); 
  if (tmPtr == NULL) {
    return NULL; 
  }
  return tmPtr; 
}

inline std::tm* Time::gmtime() 
{
  tmPtr = std::gmtime(&time); 
  if (tmPtr == NULL) {
    return NULL; 
  }
  return tmPtr; 
}

inline int Time::strftime()
{
  char buf[16] = {0}; 
  //int ret = std::strftime(buf, sizeof(buf), "%b %-2d %R", tmPtr); 
  int ret = std::strftime(buf, sizeof(buf), "%b %-2d %T", tmPtr); 
  if (!ret) {
    return ret; 
  }
  str = buf; 
  return ret; 
}

inline std::string Time::get()
{
  return str; 
}

inline int Time::delta(const Time& st) const 
{
  //return std::difftime(time, dt.time);
  return std::difftime(time, st.time);
}

#endif
