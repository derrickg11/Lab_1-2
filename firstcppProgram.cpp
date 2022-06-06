/*
 * firstcppProgram.cpp
 *
 *  Created on: May 21, 2022
 *      Author: derrick
 */

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	//quadratic formula calc

	cout << "_____________________________________________" << endl;
	cout << "\tQuadtratic Formula Calculator"<< endl;
	cout << "\t_____________________________"<<endl<<endl<<endl;

	double a, b, c;


int again;
	int answer;

	do{
	cout << "Enter an a, b, and c value:"<<endl;
	cout <<" a: ";
	cin >> a;
	cout <<" b: ";
	cin >> b;
	cout <<" c: ";
	cin >> c;


	cout << "\t    ___________________" << endl;
	cout << "  -(" << b << ") +/- √ ((" << b << ")^2) - 4(" << a << ")(" << c << ")"<<endl;;
	cout << "  -------------------------- ------"<< endl;
	cout << "\t\t  2(" << a << ")"<<endl<<endl;
	cout << " Is this correct(1 or 0) (Y1)/(N0): ";
	cin >> answer;


	if(answer > 0)
	{
		int A = 4*a*c;
		int B = b*b;
		int C = 2*a;
		int D = (-1)*(b);
		int E = B - A;
		if (E < 0)
		{
			cout << " The function is undefined\n It has a negative value inside the radical"<< endl;
		}
		else
		{
			int F = sqrt(E);
			int G = (D + F) / C;
			int H = (D - F) / C;
			cout << " Your answers are x = " << G << " and x = " << H << endl;
		}
	}
	else
	{
		cout << " Would you like to try again?(1 or 0)(Y1/N0)" << endl;
	}
	cout << " Would you like to calculate another function? (1 or 0)(Y1/N0): " << endl;
	cin >> again;
	}
while (again > 0);

	return 0;

}





