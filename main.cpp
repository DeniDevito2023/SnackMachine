# include <iostream>
//# include "Snack.h"

using namespace std;



// ����� ��������� � ������� 
class Payment {
public:
static int* sumChocolateBars; // ���������� ��������� ���������� ����������
int sumOrder = 0; // ����� ������
int payment; // (������) ������� ���� ����� ����������

	// ����� �������� ����� ������
	virtual int summ() {
	};

	// ����� ������� ��������� ������� ����� � ���������� � ������� �����
	virtual int pay(int colory) {
		if (payment < sumOrder) {
			cout << "�� ���������� �������� ������� ";
		}
	}
	~Payment();
};

class Snack {
private:
	char name; // �������� ������
	int price; // ���� ������
	int colories; // ������� �������� � ��������
	int availability; // ������� ������ � ���������
public:

	int choice; // ����� ��� ������ ��� �������
	
	Snack(const char* name, int* sumChocolateBars);
	// ������� ����� ������� ����� ��������� ���������� ������
	virtual int addSnack(int choice) {
		cout << sumChocolateBars << endl;
	}
	~Snack();
};



int main() {
	setlocale(LC_ALL, "rus");
	
	cout << "�������� Snack: Bounty, Snickers ��� Picknic" << endl;
	cout << "Bounty - 1" << endl;
	cout << "Snickers - 2" << endl;
	cout << "Picknic - 3" << endl;
	cout << "������ �� ������� (������ ��������) - 4" << endl;

}