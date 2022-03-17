/**
* @file Dosya ad�=Main.cpp
* @description Ana s�n�f�n�n bulundu�u yer
* @course Veri Yap�lar�- Sinan Tuncel
* @assignment 2.Odev
* @date Kodu olu�turdu�unuz 02.12.2015
* @author Mehmet Mert Yavuz(b141210019 -1/a) Eren Songur(b141210087-1/a)
*/
#include<iostream>
#include"Node.hpp"
#include"Stack.hpp"
#include"Karakter.hpp"
#include<string>
using namespace std;
int main()
{	
///////////////////////////////////
	Stack*newStack = new Stack();
	Node<Karakter>* newNode = new Node<Karakter>();
	for (int i = 0; i < 100; i++)
	{
		Karakter* kar = new Karakter();
		newNode->Push(kar);
	}
	Node<Karakter>*ekran = new Node<Karakter>();
	cout << endl;
	while (true)
	{
		cout << "*********************KARAKTER LISTESI VE STACK***************************" << endl;
		cout << "EKRAN" << endl;
		ekran->display();
		cout << endl;
		cout << "STACK" << endl;
		newStack->display();
		cout << endl;
		cout << "*************************************************************************" << endl;
		int number;
		cout << "1-Saga Ilerle" << endl;
		cout << "2-Sola Ilerle" << endl;
		cout << "3-Cikis" << endl;
		cout << "Lutfen numara giriniz..";
		cin >> number;
		switch (number)
		{

		case 1://SAGA �LERLE
		{
				   if (!newStack->isEmpty())
				   {
					   //Y���tta eleman var ise
					   char temp=newStack->Pop();
					   Karakter*x=new Karakter();
					   x->karakter = temp;
					   ekran->Push(x);
					   cout << "Yi�ittan Pop Edilen Karakter=" << temp << endl;
					   system("pause");
				   }
				   else
				   {
					   //y���tta eleman yok ise
					   //ba��l listeden bir eleman al�nacak
					   Node<Karakter>*temp = newNode->Pop();
					   ekran->Push(temp->data);
					   system("pause");
				   }
				   break;

		}
		case 2://SOLA �LERLE
		{
				   if (!ekran->isEmpty())
				   {
					   Node<Karakter>*temp = ekran->Pop();
					   newStack->Push(temp);
					   
				   }
				   else
				   {
					   cout << endl;
					   cout << "Ekranda Henuz karakter yok !" << endl;
					   system("pause");
				   }
				   break;
		}
		case 3://�IKI�
		{
				   return 0;
		}
		}
		system("cls");
	}
}