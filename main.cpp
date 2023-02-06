# include <iostream>
//# include "Snack.h"
//# include "Payment.h"

using namespace std;

int choice = 0; // выбор какой батончик хочет покупатель
int sumChocolateBars = 0; // количество выбранных шоколадных батончиков
int payment; // (оплата) сколько внес денег покупатель


class Snack {
public:
	string name; // название товара
	int price; // цена товара
	int colories; // сколько каллорий в шоколаде
	int availability = 20; // наличие товара в терминале (определим что их каждого товара по 20 штук)
	
	// создаем метод который будет добавлять количество Снеков
	virtual int addSnack(int choice) {
		std::cout << sumChocolateBars << endl;
		return sumChocolateBars;
	};
};

//class Bounty : public Snack {
//	Bounty(const string name, int price, int colories, int availability);
//	
//
//};
//
//class Snickers : public Snack {
//	Snickers(const string name, int price, int colories, int availability);
//
//};


// класс связанный с оплатой 
class Payment {
public:

	int sumOrder = 0; // сумма заказа
	int batton = 100; // цена батона
	int change = 0;
	 // метод подсчета суммы заказа
	void summ(int batton, int sumChocolateBars) {
		if (batton == 1) {
			sumOrder = batton * sumChocolateBars;
			cout << "Необходимо внести сумму: " << sumOrder;
		}
		if (batton == 2) {
		sumOrder = batton * sumChocolateBars;
		cout << "Необходимо внести сумму: " << sumOrder;
		}
		if (batton == 3) {
			sumOrder = batton * sumChocolateBars;
			cout << "Необходимо внести сумму: " << sumOrder;
		}
		
	};

	// метод который проверяет сколько денег у покупателя и возврат сдачи
	void pay(int payment) {
		if (payment < sumOrder) {
			std::cout << "Не достаточно денежных средств ";
			std::cout << "Повторите попытку!";
		}
		else if(payment > sumOrder) {
			change = payment - sumOrder;
			std::cout << "Ваша сдача: " << change << endl;
		}
	}
	
};


	// создаем функцию - интерфейс для покупателя
	// передаем ей объект с номером выбранного батончика
	void PayPal(int i, Payment *m) {
		cout << "Сколько батончиков будете брать? " << endl;
		cin >> sumChocolateBars;
		m->summ(i, sumChocolateBars);

		cout << endl << "Внесенная сумма: " << endl;
		cin >> payment;
		m->pay(payment);
}

int main() {
	setlocale(LC_ALL, "rus");
	Snack* X = new Snack;
	Snack* Y = new Snack;
	
	X->name = "Bounty";
	X->price = 120;
	X->colories = 400;
	X->availability = 25;

	
	Y->name = "Snickers";
	Y->price = 100;
	Y->colories = 460;
	Y->availability = 20;

	// запрос данных у покупателя
	cout << "Выберите Snack: Bounty, Snickers или Picknic" << endl;
	cout << "Bounty - 1" << endl;
	cout << "Snickers - 2" << endl;
	cout << "Picknic - 3" << endl;
	cout << "Ничего не выбрали (отмена операции) - 4" << endl;
	
	// покупатель вводит свой выбор Snack
	cin >> choice;

	// создаем класс оплаты товара
	Payment *m = new Payment;
	switch (choice) {
	case 1:
		PayPal(choice, m);
		break;
	case 2:
		PayPal(choice, m);
		break;
	case 3:
		PayPal(choice, m);
		break;
	case 4: break;
	default:
		cout << "Введено не верное значение";

	}
	
	
		
	delete m;
}