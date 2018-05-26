#pragma once

class Field {
private: int x, y, radian;
private: int image;

public:void Field_Init(int x, int y, int radian);

public: void Field_Draw();

public: void Field_Finalize();
};