#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;

//Запуская программу через консоль удостоверьтесь в том что стоит шрифт Lucida Console)

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
		"Как вас зовут?",
		"Каков ваш любимый цветок?",
		"Назовите ваше любимое блюдо(не вслух!:)",
		"Напишите название города в котором живете.",
		"Расскажите о своей главной и самой большой мечте(коротко)",
		"Напишите название любого предмета",
		"Кратко опишите самый смешной и одновременно ужасный поступок, который вы смогли бы совершить в своей жизни",
		"Назовите любое имя человека противоположного пола",
		"Вспомните какую-нибудь оду или дифирамб",
		"Напишите самое любимое имя",
		"Еще одно любимое имя,но другое",
		"И ещё одно,не повторяя прошлые два ответа",
		"Любимая песня с признанием в любви и напишите её название",
		"Вспомните песню с описанием характера или внешних данных человека и напишите её название",
		"Вспомните песню из известного кинофильма о людях-дикарях,напишите её название",
		"Название любой песни",
		"Ещё одна любая песня,повторятся нельзя",
		"Ещё одна любая другая песня"
	};
	string answers[18];
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Добро пожаловать в тест-игру цифра к цифре!" << endl;
	Test t1;
	for (int i = 0; i < 18; ++i) {
		string temp;
		cout << t1.getQuestions(i) << endl;
		getline(cin, temp);
		t1.setAnswers(i,temp);
	}
	cout << t1.getAnswers(13) << " " << t1.getAnswers(0) << endl;
	cout << t1.getAnswers(7) << " дарит тебе " << t1.getAnswers(1) << endl;
	cout << t1.getAnswers(8) << " " << t1.getAnswers(2) << endl;
	cout << t1.getAnswers(14) << " " << t1.getAnswers(3) << endl;
	cout << t1.getAnswers(6) << " ради " << t1.getAnswers(4) << endl;
	cout << t1.getAnswers(12) << " " << t1.getAnswers(5) << endl;
	cout << t1.getAnswers(15) << " посвящается " << t1.getAnswers(9) << endl;
	cout << t1.getAnswers(16) << " посвящается " << t1.getAnswers(10) << endl;
	cout << t1.getAnswers(17) << " посвящается " << t1.getAnswers(11) << endl;
	return 0;
}
