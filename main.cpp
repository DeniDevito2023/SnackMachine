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
public:
	Snack(string n, int p, int c, int a) {
		name = n;
		price = p;
		colories = c;
		availability = a;
	};
	
	// создаем метод который будет добавлять количество Снеков
	virtual int addSnack(int choice) {
		std::cout << sumChocolateBars << endl;
		return sumChocolateBars;
	};
};

class Bounty : public Snack {
public:
	Bounty(const string n, int p, int c, int a, string o) : Snack(n, p, c, a) {
	
		additivis = o; // довабки в шоколаде (в данном случае орех)
	};
private:
	string additivis;
};

class Snickers : public Snack {
public:
	Snickers(const string n, int p, int c, int a) : Snack(n, p, c, a) {


	};
};

class Picknic : public Snack {
public:
	Picknic(const string n, int p, int c, int a) : Snack(n, p, c, a) {


	};
};


// класс связанный с оплатой 
class Payment {
public:

	int sumOrder = 0; // сумма заказа
	int batton = 100; // цена батона
	int change = 0; // сдача после покупки

	 // метод подсчета суммы заказа
	void summ(int batton, int sumChocolateBars) {
			sumOrder = batton * sumChocolateBars;
			cout << "Необходимо внести сумму: " << sumOrder;

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
void PayPal(int i, Payment* m) {
	cout << "Сколько батончиков будете брать? " << endl;
	cin >> sumChocolateBars;
	m->summ(i, sumChocolateBars);

	cout << endl << "Внесенная сумма: " << endl;
	cin >> payment;
	m->pay(payment);
};

int main() {
	setlocale(LC_ALL, "rus");
	
	// присваиваем данные объектам 
	Bounty Boun("Bounty", 120, 400, 25, "nut");
	Snickers Snick("Snickers", 100, 460, 20);
	Picknic Pick("Picknic", 70, 356, 13);
	
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
		PayPal(Boun.price, m);
		break;
	case 2:
		PayPal(Snick.price, m);
		break;
	case 3:
		PayPal(Pick.price, m);
		break;
	case 4: break;
	default:
		cout << "Введено не верное значение";

	}
	
	delete m;
}