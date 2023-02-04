# include <iostream>
//# include "Snack.h"

using namespace std;

int bablo = 0;
int sumOrder = 0; // Сумма заказа

class Snack {
private:
	
	int price; // цена товара
	int colories; // сколько каллорий в шоколаде
	
public:

	int choice; // выбор или Баунти или Сникерс
	int payment; // сколько внес денег покупатель

	// Создаем метод который будет добавлять количество Снеков
	virtual int addSnack(int choice) {

	}
	// Метод подсчета суммы заказа
	virtual int summ() {

	
	};


	// Метод который проверяет сколько денег у покупателя и возврат сдачи
	virtual int pay(int colory) {
		if (bablo < sumOrder) {
			cout << "Чувак накопи бабусятушек или ";
		}
	}
};



int main() {
	setlocale(LC_ALL, "rus");
	
	
}