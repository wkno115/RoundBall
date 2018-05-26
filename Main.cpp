#include "DxLib.h"
#include "Field.h"
#include "Reflecters.h"

enum Constant
{
	WINDOW_SIZE_X = 800,
	WINDOW_SIZE_Y = 800,
	WINDOW_COLORBIT = 16,
	CENTER_POSITION_X = WINDOW_SIZE_X / 2,
	CENTER_POSITION_Y = WINDOW_SIZE_Y / 2,
	FIELD_RADIAN = (WINDOW_SIZE_Y / 2) - 50,
	REFLECTER_IN_RADIAN = (WINDOW_SIZE_Y / 2) - 100,
	REFLECTER_OUT_RADIAN = (WINDOW_SIZE_Y / 2) - 50,
	REFLECTER_DIVISION = 6,
};

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	ChangeWindowMode(TRUE), DxLib_Init(), 
		SetGraphMode(WINDOW_SIZE_X, WINDOW_SIZE_Y, WINDOW_COLORBIT) ,SetDrawScreen(DX_SCREEN_BACK); //�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�
	Field field;
	Reflecters reflecters;
	
	field.Field_Init(CENTER_POSITION_X, CENTER_POSITION_Y,FIELD_RADIAN);
	reflecters.Reflecters_Init(CENTER_POSITION_X,CENTER_POSITION_Y,REFLECTER_IN_RADIAN,REFLECTER_OUT_RADIAN,REFLECTER_DIVISION);
										  // while( ����ʂ�\��ʂɔ��f, ���b�Z�[�W����, ��ʃN���A )
	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0) {
		field.Field_Draw();
		reflecters.Reflecters_Draw();
		

	}

	DxLib_End(); // DX���C�u�����I������
	return 0;
}

