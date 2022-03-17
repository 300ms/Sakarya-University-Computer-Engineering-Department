/**
* @file Source.cpp
* @description Node k�t�phanesi
* @course Veriyap�lar� A grubu
* @assignment 4.�dev
* @date Kodu 28.12.2015
* @author Mehmet Mert Yavuz(b141210019@sakarya.edu.tr), Eren Songur(b141210087@sakarya.edu.tr)
*/
#ifndef Node_hpp
#define Node_hpp
#include<iostream>
#include<fstream>
#include<string>
#include <cstring>
using namespace std;
class Dugum{
public:
	char karakter;
	int frekans;	// Dosyada ka� kez tekrarland���
	string kod; 	// 01 kod kar��l���
	Dugum* sol;
	Dugum* sag;
	Dugum(char kr, int frek, Dugum* sl = NULL, Dugum *sg = NULL){
		karakter = kr;
		frekans = frek;
		sol = sl;
		sag = sg;
		kod = "";
	}
	bool Yaprakmi() const{
		if (sol == NULL && sag == NULL) return true;
		return false;
	}
	bool operator==(Dugum& sag){
		if (this->karakter == sag.karakter) return true;
		else return false;
	}
	bool operator!=(Dugum& sag){
		if (this->karakter != sag.karakter) return true;
		else return false;
	}
	bool operator>(Dugum& sag){
		if (this->frekans > sag.frekans) return true;
		else return false;
	}
	bool operator<(Dugum& sag){
		if (this->frekans < sag.frekans) return true;
		else return false;
	}
};
#endif