#pragma once
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iostream>
// Ham thay doi kich co man hinh console.
void ConsoleResize(short sWidth, short sHeight);
// Xóa màn hình
void Clrscr();

// Hàm dịch chuyển con trỏ đến tọa độ x, y
void GotoXY(short sRow, short sColumn);

// Trả về vị trí x hiện tại
int WhereX();

// Trả về vị trí y hiện tại
int WhereY();

// Hàm ẩn hiện con trỏ
void ShowCur(bool CursorVisibility);

// Hàm tô màu chữ
void SetColor(WORD color);

void ResetTextAttr();

// Hàm in màu chữ và thay đổi mãi nền hiển thị theo vị trí x, y, có ký tự đặc biệt
void SetBackgroundColorTextXY(
    SHORT sX, SHORT sY,
    WORD background,
    LPSTR str,
    std::string strIcon,
    WORD colors,
    WORD bgColor
);

// Hàm in màu chữ và thay đổi mãi nền hiển thị theo vị trí x, y
void SetBackgroundColorTextXY2(
    SHORT sX, SHORT sY,
    WORD color,
    WORD background,
    LPSTR str,
    ...
);

// Hàm tô màu nền
void SetBackgroundColor(WORD color);

// Xóa số lượng dòng,
// sStartPos – Vị trí bắt đầu xóa,
// sNumberRow – Số lượng dòng cần xóa
void DeleteRow(SHORT sStartPos, SHORT sNumberRow);