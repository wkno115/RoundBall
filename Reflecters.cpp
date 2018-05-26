#include "DxLib.h"
#include "Reflecters.h"
#include "Reflecter.h"

Reflecters Reflecters::getReflecters() {
	static Reflecters reflecters;
	return reflecters;
};

void Reflecters::Reflecters_Init(int x, int y, int in_radian, int out_radian,int division) {
	this->x = x;
	this->y = y;
	this->in_radian = in_radian;
	this->out_radian = out_radian;
	this->division = division;	//•ªŠ„”
	this->image = LoadGraph("graphics/Reflecters.png");
	this->ArrayReflecter= new Reflecter[division];

	for (int i = 0; i < division; i++) {
		this->ArrayReflecter[i].Reflecter_Init(this->in_radian,this->out_radian,i*(360 / division),360/division);
	}
}

bool Reflecters::Check_Reflecters() {
	int x,y;
	GetMousePoint(&x, &y);
	for (int i = 0; i < this->division; i++) {
		if (this->ArrayReflecter[i].Clicked(x,y)) {
			return TRUE;
		}
	}
	return FALSE;
}

void Reflecters::Reflecters_Draw() {
	DrawGraph(0,0,this->image,TRUE);
}

int Reflecters::get_Division(){
	return this->division;
}

void Reflecters::Reflecters_Finalize() {

}