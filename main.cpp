# include <iostream>
//# include "Snack.h"
//# include "Payment.h"

using namespace std;

int choice = 0; // ����� ����� �������� ����� ����������
int sumChocolateBars = 0; // ���������� ��������� ���������� ����������
int payment; // (������) ������� ���� ����� ����������


class Snack {
public:
	string name; // �������� ������
	int price; // ���� ������
	int colories; // ������� �������� � ��������
	int availability = 20; // ������� ������ � ��������� (��������� ��� �� ������� ������ �� 20 ����)
	
	// ������� ����� ������� ����� ��������� ���������� ������
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


// ����� ��������� � ������� 
class Payment {
public:

	int sumOrder = 0; // ����� ������
	int batton = 100; // ���� ������
	int change = 0;
	 // ����� �������� ����� ������
	void summ(int batton, int sumChocolateBars) {
		if (batton == 1) {
			sumOrder = batton * sumChocolateBars;
			cout << "���������� ������ �����: " << sumOrder;
		}
		if (batton == 2) {
		sumOrder = batton * sumChocolateBars;
		cout << "���������� ������ �����: " << sumOrder;
		}
		if (batton == 3) {
			sumOrder = batton * sumChocolateBars;
			cout << "���������� ������ �����: " << sumOrder;
		}
		
	};

	// ����� ������� ��������� ������� ����� � ���������� � ������� �����
	void pay(int payment) {
		if (payment < sumOrder) {
			std::cout << "�� ���������� �������� ������� ";
			std::cout << "��������� �������!";
		}
		else if(payment > sumOrder) {
			change = payment - sumOrder;
			std::cout << "���� �����: " << change << endl;
		}
	}
	
};


	// ������� ������� - ��������� ��� ����������
	// �������� �� ������ � ������� ���������� ���������
	void PayPal(int i, Payment *m) {
		cout << "������� ���������� ������ �����? " << endl;
		cin >> sumChocolateBars;
		m->summ(i, sumChocolateBars);

		cout << endl << "��������� �����: " << endl;
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

	// ������ ������ � ����������
	cout << "�������� Snack: Bounty, Snickers ��� Picknic" << endl;
	cout << "Bounty - 1" << endl;
	cout << "Snickers - 2" << endl;
	cout << "Picknic - 3" << endl;
	cout << "������ �� ������� (������ ��������) - 4" << endl;
	
	// ���������� ������ ���� ����� Snack
	cin >> choice;

	// ������� ����� ������ ������
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
		cout << "������� �� ������ ��������";

	}
	
	
		
	delete m;
}