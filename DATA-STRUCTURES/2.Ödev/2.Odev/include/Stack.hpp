/**
* @file Dosya ad�=Stack.hpp
* @description Stack s�n�f�n�n bulundu�u yer
* @course Veri Yap�lar�- Sinan Tuncel
* @assignment 2.Odev
* @date Kodu olu�turdu�unuz 02.12.2015
* @author Mehmet Mert Yavuz(b141210019 -1/a) Eren Songur(b141210087-1/a)
*/
#ifndef Stack_hpp
#define Stack_hpp
#define STACK_MAX 100
#include<iostream>
#include<string>
#include"Karakter.hpp"
#include"Node.hpp"
using namespace std;
class Stack{
	private:
		unsigned int Top;//Y���na eklenecek eleman�n hangi indise eklenece�ini tutar.
		char D[STACK_MAX];
	public:
		Stack()
		{
			Top = 0;//�lk ba�ta �uvalda hi� kitap olmad��� i�in top=0 ve bu bo� oldu�u anlam�nada gelir.
		}
		void Push(Node<Karakter>* Item)
		{
			if (isFull())
			{

			}
			else
			{
				D[Top] =Item->data->karakter;
				Top++;
			}
		}
		bool isFull()
		{
			if (Top == STACK_MAX)
				return true;
			else
				return false;
		}
		char Pop()//Son eklenen eleman� ��karacakt�r.
		{
			if (!isEmpty())
			{

				//Top biliyoruz ki eklenecek eleman�n indeksini tutuyor o zaman son eleman top-1
				Top--;
				return D[Top];
			}
			else
				return 0;
		}
		bool isEmpty()
		{
			if (Top == 0)
				return true;
			else return false;
		}
		char TopRet()//Son eleman� ��karmadan kopyas�n� al�p bize getirir.
		{
			if (isEmpty()) return 0;
			else{
				char item = D[Top - 1];
				return item;
			}
		}
		void display()
		{
			for (int i = 0; i < Top; i++)
			{
				cout << D[i] << " ";
			}
		}
};
#endif