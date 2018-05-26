#include "DxLib.h"
#include "Reflecter.h"
#include "Math.h"

void Reflecter::Reflecter_Init(int in_radian,int out_radian,float angle,float interval_angle) {
	this->angle = angle;
	this->next_angle = angle+interval_angle;
	this->in_radian = in_radian;
	this->out_radian = out_radian;

	if (cos(this->angle) < cos(this->next_angle)) {
		x_next_bigger = TRUE;
	}
	else {
		x_next_bigger = FALSE;
	}
	if (sin(this->angle)<sin(this->next_angle)) {
		y_next_bigger = TRUE;
	}
	else {
		y_next_bigger = FALSE;
	}
}
