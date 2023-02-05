# include <iostream>
//# include "Snack.h"
//# include "Payment.h"

using namespace std;

// класс св€занный с оплатой 
class Payment {
public:

	int sumOrder = 0; // сумма заказа
	int baton = 100; // цена батона
	int change = 0;
	 // метод подсчета суммы заказа
	void summ(int sumChocolateBars) {
		sumOrder = baton * sumChocolateBars;
		cout << "Ќеобходимо внести сумму: " << sumOrder;
	};

	// метод который провер€ет сколько денег у покупател€ и возврат сдачи

	void pay(int payment) {
		if (payment < sumOrder) {
			std::cout << "Ќе достаточно денежных средств ";
			std::cout << "ѕовторите попытку!";
		}
		else if(payment > sumOrder) {
			change = payment - sumOrder;
			std::cout << "¬аша сдача: " << change << endl;
		}
	}
	
};

int main() {
	setlocale(LC_ALL, "rus");
	int choice = 0; // выбор какой батончик хочет покупатель
	int sumChocolateBars = 0; // количество выбранных шоколадных батончиков
	int payment; // (оплата) сколько внес денег покупатель

	// запрос данных у покупател€
	cout << "¬ыберите Snack: Bounty, Snickers или Picknic" << endl;
	cout << "Bounty - 1" << endl;
	cout << "Snickers - 2" << endl;
	cout << "Picknic - 3" << endl;
	cout << "Ќичего не выбрали (отмена операции) - 4" << endl;
	
	// покупатель вводит свой выбор Snack
	cin >> choice;

	// создаем класс оплаты товара
	Payment *m = new Payment;
	switch (choice) {
	case 1:
		cout << "—колько батончиков будете брать? " << endl;
		cin >> sumChocolateBars;
		m->summ(sumChocolateBars);

		cout << endl << "¬несенна€ сумма: " << endl;
		cin >> payment;
		m->pay(payment);

		break;
	case 2:
		cout << "—колько батончиков будете брать? " << endl;
		cin >> sumChocolateBars;
		break;
	case 3:
		cout << "—колько батончиков будете брать? " << endl;
		cin >> sumChocolateBars;
		break;
	case 4: break;
	default:
		cout << "¬ведено не верное значение";

	}
	//Obnova 4
	delete m;
}