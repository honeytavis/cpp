#ifndef TIME_H
#define TIME_H

#include <ctime>
#include <string>

class Time {
public: 
  Time() { std::time(&time); }

  std::tm* localtime() 
  {
    tmPtr = std::localtime(&time); 
    if (tmPtr == NULL) {
      return NULL; 
    }
    return tmPtr; 
  }

  std::tm* gmtime() 
  {
    tmPtr = std::gmtime(&time); 
    if (tmPtr == NULL) {
      return NULL; 
    }
    return tmPtr; 
  }

  int strftime()
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

  std::string get()
  {
    return str; 
  }

  int delta(const Time& st) const 
  {
    //return std::difftime(time, dt.time);
    return std::difftime(time, st.time);
  }

private: 
  std::time_t time; 
  std::tm* tmPtr; 
  std::string str; 
}; 
#endif
