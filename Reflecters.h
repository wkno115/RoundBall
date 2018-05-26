#pragma once
#include "Reflecter.h"

class Reflecters {
private: int x,y,in_radian,out_radian,division;
private: int image;
private: Reflecter* ArrayReflecter;

public:
	Reflecters getReflecters();
	void Reflecters_Init(int x, int y, int in_radian,int out_radian,int division);

	bool Check_Reflecters();

	void Reflecters_Draw();

	int get_Division();

	void Reflecters_Finalize();
};