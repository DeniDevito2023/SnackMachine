# include <iostream>
//# include "Snack.h"
//# include "Payment.h"

using namespace std;

// ����� ��������� � ������� 
class Payment {
public:

	int sumOrder = 0; // ����� ������
	int baton = 100; // ���� ������
	int change = 0;
	 // ����� �������� ����� ������
	void summ(int sumChocolateBars) {
		sumOrder = baton * sumChocolateBars;
		cout << "���������� ������ �����: " << sumOrder;
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

int main() {
	setlocale(LC_ALL, "rus");
	int choice = 0; // ����� ����� �������� ����� ����������
	int sumChocolateBars = 0; // ���������� ��������� ���������� ����������
	int payment; // (������) ������� ���� ����� ����������

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
		cout << "������� ���������� ������ �����? " << endl;
		cin >> sumChocolateBars;
		m->summ(sumChocolateBars);

		cout << endl << "��������� �����: " << endl;
		cin >> payment;
		m->pay(payment);

		break;
	case 2:
		cout << "������� ���������� ������ �����? " << endl;
		cin >> sumChocolateBars;
		break;
	case 3:
		cout << "������� ���������� ������ �����? " << endl;
		cin >> sumChocolateBars;
		break;
	case 4: break;
	default:
		cout << "������� �� ������ ��������";

	}
	//Obnova 4
	delete m;
}