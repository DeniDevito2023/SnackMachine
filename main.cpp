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
public:
	Snack(string n, int p, int c, int a) {
		name = n;
		price = p;
		colories = c;
		availability = a;
	};
	
	// ������� ����� ������� ����� ��������� ���������� ������
	virtual int addSnack(int choice) {
		std::cout << sumChocolateBars << endl;
		return sumChocolateBars;
	};
};

class Bounty : public Snack {
public:
	Bounty(const string n, int p, int c, int a, string o) : Snack(n, p, c, a) {
	
		additivis = o; // ������� � �������� (� ������ ������ ����)
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


// ����� ��������� � ������� 
class Payment {
public:

	int sumOrder = 0; // ����� ������
	int batton = 100; // ���� ������
	int change = 0; // ����� ����� �������

	 // ����� �������� ����� ������
	void summ(int batton, int sumChocolateBars) {
			sumOrder = batton * sumChocolateBars;
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

	// ������� ������� - ��������� ��� ����������
	// �������� �� ������ � ������� ���������� ���������
void PayPal(int i, Payment* m) {
	cout << "������� ���������� ������ �����? " << endl;
	cin >> sumChocolateBars;
	m->summ(i, sumChocolateBars);

	cout << endl << "��������� �����: " << endl;
	cin >> payment;
	m->pay(payment);
};

int main() {
	setlocale(LC_ALL, "rus");
	
	// ����������� ������ �������� 
	Bounty Boun("Bounty", 120, 400, 25, "nut");
	Snickers Snick("Snickers", 100, 460, 20);
	Picknic Pick("Picknic", 70, 356, 13);
	
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
		cout << "������� �� ������ ��������";

	}
	
	delete m;
}