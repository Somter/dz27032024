// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);	

class Figure abstract {
protected:
	string arr[4][4];		
public:
	virtual void FillingArray() = 0;	
	virtual void ShowArray() = 0;	
};

class FigureO : public Figure 
{
public:
	void FillingArray() override 
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i >= 1 && i <= 2) && (j >= 1 && j <= 2)) {
					arr[i][j] = '$';
				}
				else {
					arr[i][j] = '#';	
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i >= 1 && i <= 2) && (j >= 1 && j <= 2)) {
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);	
					cout << arr[i][j] << "  ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);	
					cout << arr[i][j] << "  ";	
				}
			}
			cout << "\n\n";
		}
	}
};

class FigureI : public Figure	
{
public:
	void FillingArray() override	
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 2) {	
					arr[i][j] = '$';
				}
				else {
					arr[i][j] = '#';
				}
			}
		}
	}
	void ShowArray() override	
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (j == 2) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);	
					cout << arr[i][j] << "  ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);
					cout << arr[i][j] << "  ";
				}
			}
			cout << "\n\n";
		}
	}
};

class FigureS : public Figure	
{
public:
	void FillingArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i == 1) && (j >= 2 && j <= 3)) {
					arr[i][j] = '$';	
				}
				else if ((i == 2) && (j >= 0 && j <= 1)) {
					arr[i][j] = '$';	
				}
				else {
					arr[i][j] = '#';
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i == 1) && (j >= 2 && j <= 3)) {
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);	
					cout << arr[i][j] << "  ";	
				}
				else if ((i == 2) && (j >= 0 && j <= 1)) {
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED);		
					cout << arr[i][j] << "  ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);		
					cout << arr[i][j] << "  ";
				}
			}
			cout << "\n\n";	
		}

	}
};

class FigureZ : public Figure	
{
public:
	void FillingArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i == 1) && (j >= 0 && j <= 1)) {
					arr[i][j] = '$';
				}
				else if ((i == 2) && (j >= 2 && j <= 3)) {
					arr[i][j] = '$';
				}
				else {
					arr[i][j] = '#';
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i == 1) && (j >= 0 && j <= 1)) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);	
					cout << arr[i][j] << "  ";	
				}
				else if ((i == 2) && (j >= 2 && j <= 3)) {
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);	
					cout << arr[i][j] << "  ";	
				}	
				else {
					SetConsoleTextAttribute(hConsole, 7);
					cout << arr[i][j] << "  ";
				}
			}
			cout << "\n\n";
		}

	}
};

class FigureL : public Figure
{
public:
	void FillingArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i >= 0 && i <= 1) && (j == 0)) {	
					arr[i][j] = '$';	
				}
				else if ((i == 2) && (j >= 0 && j <= 1)) {	
					arr[i][j] = '$';
				}
				else {
					arr[i][j] = '#';	
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {	
			for (int j = 0; j < 4; j++) {		
				if ((i >= 0 && i <= 1) && (j == 0)) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE);	
					cout << arr[i][j] << "  ";		
				}
				else if (i == 2 && j >= 0 && j <= 1) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE);	
					cout << arr[i][j] << "  ";	
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);		
					cout << arr[i][j] << "  ";			
				}
			}
			cout << "\n\n";	
		}

	}
};

class FigureJ : public Figure	
{
public:
	void FillingArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i >= 0 && i <= 1) && (j == 3)) {
					arr[i][j] = '$';
				}
				else if ((i == 2) && (j >= 2 && j <= 3)) {	
					arr[i][j] = '$';
				}
				else {
					arr[i][j] = '#';
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i >= 0 && i <= 1) && (j == 3)) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE);	
					cout << arr[i][j] << "  ";
				}
				else if ((i == 2) && (j >= 2 && j <= 3)) {	
					SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE);		
					cout << arr[i][j] << "  ";	
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);	
					cout << arr[i][j] << "  ";
				}
			}
			cout << "\n\n";
		}

	}
};
	
class FigureT : public Figure		
{
public:
	void FillingArray() override	
	{
		for (int i = 0; i < 4; i++) {	
			for (int j = 0; j < 4; j++) {
				if ((i == 0) && (j >= 0 && j <= 2)) {			
					arr[i][j] = '$';			
				}	
				else if ((i == 1) && (j == 1)) {		
					arr[i][j] = '$';		
				}
				else {
					arr[i][j] = '#';		
				}
			}
		}
	}
	void ShowArray() override
	{
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ((i == 0) && (j >= 0 && j <= 2)) {	
					SetConsoleTextAttribute(hConsole, 14);
					cout << arr[i][j] << "  ";
				}
				else if ((i == 1) && (j == 1)) {	
					SetConsoleTextAttribute(hConsole, 14);	
					cout << arr[i][j] << "  ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 7);
					cout << arr[i][j] << "  ";
				}
			}
			cout << "\n\n";
		}

	}
};	

class Creator abstract 
{
public:
	virtual Figure* FactoryMethod() = 0;	
};

class CreatFigureO : public Creator
{
public:
	Figure* FactoryMethod() override
	{
		Figure *fg = new FigureO();		
		fg->FillingArray();
		fg->ShowArray();
		return fg;		
	}
};

class CreatFigureI : public Creator
{
public:
	Figure* FactoryMethod() override
	{
		Figure* fg = new FigureI();	
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

class CreatFigureS : public Creator
{
public:
	Figure* FactoryMethod() override
	{
		Figure* fg = new FigureS();	
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

class CreatFigureZ : public Creator	
{
public:
	Figure* FactoryMethod() override
	{
		Figure* fg = new FigureZ();	
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

class CreatFigureL : public Creator
{
public:
	Figure* FactoryMethod() override
	{
		Figure* fg = new FigureL();	
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

class CreatFigureJ : public Creator	
{
public:
	Figure* FactoryMethod() override
	{
		Figure* fg = new FigureJ();	
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

class CreatFigureT : public Creator	
{
public:
	Figure* FactoryMethod() override	
	{
		Figure* fg = new FigureT();		
		fg->FillingArray();
		fg->ShowArray();
		return fg;
	}
};

void main()
{
	cout << "1) O " << "\n\n";
	Creator	*pCreat = new CreatFigureO();	
	pCreat->FactoryMethod();	
	delete pCreat;	

	cout << endl;	
	cout << "2) I " << "\n\n";
	pCreat = new CreatFigureI();	
	pCreat->FactoryMethod();	
	delete pCreat;	

	cout << endl;	
	cout << "3) S " << "\n\n";
	pCreat = new CreatFigureS();	
	pCreat->FactoryMethod();	
	delete pCreat;	
		
	cout << endl;	
	cout << "4) Z " << "\n\n";		
	pCreat = new CreatFigureZ();	
	pCreat->FactoryMethod();	
	delete pCreat;	

	cout << endl;	
	cout << "5) L " << "\n\n";	
	pCreat = new CreatFigureL();	
	pCreat->FactoryMethod();	
	delete pCreat;	

	cout << endl;	
	cout << "6) J " << "\n\n";
	pCreat = new CreatFigureJ();		
	pCreat->FactoryMethod();	
	delete pCreat;	

	cout << endl;	
	cout << "7) T " << "\n\n";
	pCreat = new CreatFigureT();		
	pCreat->FactoryMethod();	
	delete pCreat;	




	system("pause");
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
