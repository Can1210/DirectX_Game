#include <windows.h> //��{�I��Windows�w�b�_�[�t�@�C�����܂߂�

// Windows�v���O�����̃G���g���|�C���g
int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nShowCmd)
{
	//�uHello World�v���b�Z�[�W���쐬����MessageBox�i�j���g�p����{�b�N�X
	MessageBox(NULL,
			   "Hello World�I",
			   "Just another Hello World�v���O�����I",
			   MB_ICONEXCLAMATION | MB_OK);

// Windows��0��Ԃ�0��
return 0;
}