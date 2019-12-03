#include <windows.h> //基本的なWindowsヘッダーファイルを含める

// Windowsプログラムのエントリポイント
int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nShowCmd)
{
	//「Hello World」メッセージを作成するMessageBox（）を使用するボックス
	MessageBox(NULL,
			   "Hello World！",
			   "Just another Hello Worldプログラム！",
			   MB_ICONEXCLAMATION | MB_OK);

// Windowsに0を返す0を
return 0;
}