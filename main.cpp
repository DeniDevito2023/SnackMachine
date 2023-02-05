# include <iostream>
//# include "Snack.h"

using namespace std;



// класс связанный с оплатой 
class Payment {
public:
static int* sumChocolateBars; // количество выбранных шоколадных батончиков
int sumOrder = 0; // сумма заказа
int payment; // (оплата) сколько внес денег покупатель

	// метод подсчета суммы заказа
	virtual int summ() {
	};

	// метод который проверяет сколько денег у покупателя и возврат сдачи
	virtual int pay(int colory) {
		if (payment < sumOrder) {
			cout << "Не достаточно денежных средств ";
		}
	}
	~Payment();
};

class Snack {
private:
	char name; // название товара
	int price; // цена товара
	int colories; // сколько каллорий в шоколаде
	int availability; // наличие товара в терминале
public:

	int choice; // выбор или Баунти или Сникерс
	
	Snack(const char* name, int* sumChocolateBars);
	// создаем метод который будет добавлять количество Снеков
	virtual int addSnack(int choice) {
		cout << sumChocolateBars << endl;
	}
	~Snack();
};



int main() {
	setlocale(LC_ALL, "rus");
	
	cout << "Выберите Snack: Bounty, Snickers или Picknic" << endl;
	cout << "Bounty - 1" << endl;
	cout << "Snickers - 2" << endl;
	cout << "Picknic - 3" << endl;
	cout << "Ничего не выбрали (отмена операции) - 4" << endl;

}