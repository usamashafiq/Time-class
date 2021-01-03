#include<iostream>
#include<conio.h>
using namespace std;
class time {
private:
	int hours, minutes, seconds;

public:
	time(int = 0, int = 0, int = 0);
	void settime(int, int, int);
	void sethour(int);
	void setmin(int);
	void setsec(int);
	void printS();
	void print12h();

};
void main() {
	int h, m, s;
	cout << "enter the hours :";
	cin >> h;
	cout << "enter the minutes: ";
	cin >> m;
	cout << "enter the seconds: ";
	cin >> s;
	if (h>24 || m>60 || s>60) {
		cout << "sorry! you have entered wrong time" << endl;
	}
	else {
		time t(h, m, s);
	}
	_getch();
}
time::time(int h, int m, int s) {
	settime(h, m, s);
	printS();
	print12h();
}
void time::settime(int h, int m, int s) {
	sethour(h);
	setmin(m);
	setsec(s);
}
void time::sethour(int h) {
	hours = h;
}
void time::setmin(int m) {
	minutes = m;
}
void time::setsec(int s) {
	seconds = s;
}
void time::printS() {
	cout << "The standard time is: ";
	cout << hours << ":" << minutes << ":" << seconds << endl;
}
void time::print12h() {
	cout << "12 hours format time is: ";
	cout << hours % 12 << ":" << minutes << ":" << seconds << endl;
}
