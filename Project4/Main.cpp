#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

//�������� ��������� ����� ������� �������������� � ��� ��� ����� ����� Lucida Console)

class Test {
public:
	string getQuestions(int i) {
		return questions[i];
	}
	void setAnswers(int i, string answer) {
		answers[i] = answer;
	}
	string getAnswers(int i) {
		return answers[i];
	}
private:
	string questions[18]{
		"��� ��� �����?",
		"����� ��� ������� ������?",
		"�������� ���� ������� �����(�� �����!:)",
		"�������� �������� ������ � ������� ������.",
		"���������� � ����� ������� � ����� ������� �����(�������)",
		"�������� �������� ������ ��������",
		"������ ������� ����� ������� � ������������ ������� ��������, ������� �� ������ �� ��������� � ����� �����",
		"�������� ����� ��� �������� ���������������� ����",
		"��������� �����-������ ��� ��� ��������",
		"�������� ����� ������� ���",
		"��� ���� ������� ���,�� ������",
		"� ��� ����,�� �������� ������� ��� ������",
		"������� ����� � ���������� � ����� � �������� � ��������",
		"��������� ����� � ��������� ��������� ��� ������� ������ �������� � �������� � ��������",
		"��������� ����� �� ���������� ���������� � �����-�������,�������� � ��������",
		"�������� ����� �����",
		"��� ���� ����� �����,���������� ������",
		"��� ���� ����� ������ �����"
	};
	string answers[18];
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "����� ���������� � ����-���� ����� � �����!" << endl;
	Test t1;
	for (int i = 0; i < 18; ++i) {
		string temp;
		cout << t1.getQuestions(i) << endl;
		getline(cin, temp);
		t1.setAnswers(i,temp);
	}
	cout << t1.getAnswers(13) << " " << t1.getAnswers(0) << endl;
	cout << t1.getAnswers(7) << " ����� ���� " << t1.getAnswers(1) << endl;
	cout << t1.getAnswers(8) << " " << t1.getAnswers(2) << endl;
	cout << t1.getAnswers(14) << " " << t1.getAnswers(3) << endl;
	cout << t1.getAnswers(6) << " ���� " << t1.getAnswers(4) << endl;
	cout << t1.getAnswers(12) << " " << t1.getAnswers(5) << endl;
	cout << t1.getAnswers(15) << " ����������� " << t1.getAnswers(9) << endl;
	cout << t1.getAnswers(16) << " ����������� " << t1.getAnswers(10) << endl;
	cout << t1.getAnswers(17) << " ����������� " << t1.getAnswers(11) << endl;
	return 0;
}
