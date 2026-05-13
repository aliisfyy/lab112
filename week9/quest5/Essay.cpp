#include <iostream>
#include "Essay.H"
#include "Class.H"
using namespace std;

Essay::Essay(){
	grammar = 0;
	spelling = 0;
	length = 0;
	content = 0;			
}
//Essay::Essay(int g, int s, int l, int c) : GradedActivity(calcMark(g, s, l, c){
//	grammar = g;
//	spelling = s;
//	length = l;
//	content = c;			
//}
int Essay::calcMark(int g, int s, int l, int c){
	return g +s +l +c;
}
