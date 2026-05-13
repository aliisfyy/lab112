#include <iostream>
#include "Class.H"
using namespace std;
GradedActivity::GradedActivity(){
	mark = 0;
}
GradedActivity::GradedActivity(int m){
	mark = m;
}
void GradedActivity::setMark(int m){
	mark = m;
}

int GradedActivity::getMark(){
	return mark;
}



