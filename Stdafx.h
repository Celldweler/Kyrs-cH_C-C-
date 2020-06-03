#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <Windows.h>
/*
	2.������������ ���� ������, ���������� �������� � ������� ������� ������ ����� � �� ��������� �� ���������� ���������.
	������ ����-���:
-	�������� ��������;
-	��� �����;
-	������� (��� ������);
-	�������� ������;
-	����������;
-	���� �� �������;
-	�����.

   �������������:
	�) ������ �������� � ������� ��������� ������ � ��������� � ��� ����-������;
	�) � ������ �������� � ��������� ��������� ��������� ������ �� ���� ���������;
	�) ������ �������� � ���������� ��������, ��� �������� ����� ����� �������.
	�) �������� ���� ������� � ��������� ����� �� �������;
 */
using namespace std;
struct Product
{
	std::string ShopName, Address, VendorCode, ProductName, enter;

	int quantity, price, amount;

	void Print()
	{
		std::cout << "Name of the shop: ";
		std::cout << ShopName;
		std::cout << "\n";

		std::cout << "Address: ";
		std::cout << Address;
		std::cout << "\n";

		std::cout << "Vendor Code: ";
		std::cout << VendorCode;
		std::cout << "\n";

		std::cout << "Name of product: ";
		std::cout << ProductName;
		std::cout << "\n";

		std::cout << "Quantity: ";
		std::cout << quantity;
		std::cout << "\n";

		std::cout << "Price: ";
		std::cout << price;
		std::cout << "\n";

		std::cout << "Amount: ";
		std::cout << amount;
		std::cout << "\n";
	};
};
int Check_Number();
void menu(vector<Product>& product, int number, int password);
void Save(vector<Product>& product, int number, int password);
void Data_Read(vector<Product>& product, int number, int password);
void Data_product(vector<Product>& product, int number, int password);
void Amount_price(vector<Product>& product, int number, int password);
void Show_store(vector<Product>& product, int number, int password);
void Show_shop(vector<Product>& product, int number, int password);
void Show_address(vector<Product>& product, int number, int password);
void Show_price(vector<Product>& product, int number, int password);
void Add_Information(vector<Product>& product, int number, int password);
void Save_new_data(vector<Product>& product, vector<Product>& product2, int final_size, int number, int password);
void New_Data_Input(vector<Product>& product, int number, int password);
