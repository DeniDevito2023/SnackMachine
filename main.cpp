# include <iostream>
//# include "Snack.h"

using namespace std;

int bablo = 0;
int sumOrder = 0; // ����� ������

class Snack {
private:
	
	int price; // ���� ������
	int colories; // ������� �������� � ��������
	
public:

	int choice; // ����� ��� ������ ��� �������
	int payment; // ������� ���� ����� ����������

	// ������� ����� ������� ����� ��������� ���������� ������
	virtual int addSnack(int choice) {

	}
	// ����� �������� ����� ������
	virtual int summ() {

	
	};


	// ����� ������� ��������� ������� ����� � ���������� � ������� �����
	virtual int pay(int colory) {
		if (bablo < sumOrder) {
			cout << "����� ������ ����������� ��� ";
		}
	}
};



int main() {
	setlocale(LC_ALL, "rus");
	
	
}