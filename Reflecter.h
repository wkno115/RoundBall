#pragma once
#include "Math.h"

class Reflecter {
private:float angle,next_angle;
private:bool x_next_bigger,y_next_bigger;
private:int in_radian, out_radian;

public:void Reflecter_Init(int in_radian,int out_radian,float angle,float interval_angle);

public:bool Clicked(int x,int y) {	//クリックされたか？
	if (x_next_bigger) {
		if (cos(angle)<x&&x<cos(next_angle)) {
		}
		else {
			return FALSE;
		}
	}
	else {
		if (cos(next_angle)<x&&x<cos(angle)) {
		}
		else {
			return FALSE;
		}
	}
	if (y_next_bigger) {
		if (sin(angle)<y&&y<sin(next_angle)) {
		}
		else {
			return FALSE;
		}
	}
	else {
		if (sin(next_angle) < y&&y<sin(angle)) {
		}
		else {
			return FALSE;
		}
	}
	return TRUE;
}
};