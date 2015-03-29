#include <stdio.h>
#include <iostream>

using namespace std;

int runLength(char*org, char*enc);

int main(){
	char org[80];
	char enc[80];

	//run stop array 
	char stop[10];

	cout << "character string" <<endl;
	cin >> org ;
	cout << "start runlength" << endl;
	runLength(org, enc);
	cout << "org=" << org << endl;
	cout << "enc=" << enc << endl;

	cout << "stop point" << endl;
	cin >> stop;

	return 0;

}

//Ranlength function
int runLength(char*org, char*enc){
	char *p, *q;
	int count;

	count = 0;

	for (p = q = org;; q++){
		if (*q == *p){ count++; }
		else{
			*enc = *p;
			*enc++;
			*enc ++= '0'+ count;
			//exit a loop
			if (*q == '\0') break;
			p = q;
			count = 1;
		}
	}

	*enc = '\0';

	return 0;
}
