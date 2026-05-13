#ifndef ESSAY_H
#define ESSAY_H
#include "Class.h"
class Essay : public GradedActivity{
	private :
		int grammar;
		int spelling;
		int length;
		int content;
		
	public :
		Essay();
		Essay(int g, int s, int l, int c) : GradedActivity(calcMark(g, s, l, c)){
			grammar = g;
			spelling = s;
			length = l;
			content = c;			
		}
		~Essay(){}
		int calcMark(int,int,int,int);
//		void setSpelling;
//		void setLength;
//		void setContent;
};

#endif
