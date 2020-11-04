#include "TextPrint.cpp"

extern const char Test[];

extern "C" void _start() {
	SetCursorPosition(PositionFromCoords(0, 0));
	PrintString("Cherry Cola\n\rOperating System\n\r", BACKGROUND_BLINKINGRED | FOREGROUND_CYAN);
	PrintString(HexToString(0x1234abcd));
	ClearScreen();

	PrintString(Test);

	return;
}