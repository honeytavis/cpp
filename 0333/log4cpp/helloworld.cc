#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/BasicLayout.hh>
#include <log4cpp/Priority.hh>

int main(int argc, char **argv)
{
	log4cpp::OstreamAppender *osAppender = 
		new log4cpp::OstreamAppender("osAppender", &std::cout); 
	osAppender->setLayout(new log4cpp::BasicLayout()); 

	log4cpp::Category& root = log4cpp::Category::getRoot(); 
	root.addAppender(osAppender); 
	root.setPriority(log4cpp::Priority::CRIT); 
	//root.setPriority(log4cpp::Priority::DEBUG); 

	root.error("Hello log4cpp in a Error Message!"); 
	root.warn("Hello log4cpp in a Warning Message!"); 
	root.crit("Hello log4cpp in a CRIT Message!"); //Priority 低的信息不回输出来

	log4cpp::Category::shutdown(); 

	return 0; 
}
