#include <iostream>
#include "Class.h"
#include "Essay.h"
using namespace std;

int main(){
	int i1, i2, i3, i4;
	cin >> i1 >> i2 >> i3 >> i4;
	Essay stu1(i1, i2, i3, i4);
	
	int mark = stu1.getMark();
	
	cout << mark;
}
