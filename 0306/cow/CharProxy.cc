#include "CharProxy.h"
#include "String.h"

CharProxy::CharProxy(String& str, unsigned index)
	: str_(str), index_(index) {}

/*
CharProxy& CharProxy::operator=(const CharProxy& rhs)
{
	if (str_.pstr_->refCount_ > 1) {
		str_.pstr_ = new String::RefChar(str_.pstr_->pchar_); 
	}
	str_.pstr_->pchar_[index_] = rhs.str_.pstr_->pchar_[rhs.index_]; 

	return *this; 
}
*/

CharProxy& CharProxy::operator=(const char c)
{
	if (str_.pstr_->refCount_ > 1) {
		str_.pstr_ = new String::RefChar(str_.pstr_->pchar_); 
	}
	str_.pstr_->pchar_[index_] = c;  

	return *this; 
}

CharProxy::operator char() const
{
	return str_.pstr_->pchar_[index_]; 
}
