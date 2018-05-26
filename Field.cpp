#include "DxLib.h"
#include "Field.h"

void Field::Field_Init(int x, int y, int radian) {	
	this->x = x;
	this->y = y;
	this->radian = radian;
	image = LoadGraph("graphics/field.png");
}

void Field::Field_Draw(){
	//アルファチャンネルを用いた円形の画像を表示
	DrawGraph(0, 0, image,TRUE);
}

void Field::Field_Finalize(){

}