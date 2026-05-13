#ifndef CLASS_H
#define CLASS_H

class GradedActivity{
	private :
		int mark;
		
	public :
		GradedActivity();
		GradedActivity(int m);
		~GradedActivity(){}		
		void setMark(int m);
		int getMark();
};

#endif
