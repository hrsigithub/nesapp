#include <conio.h>
#include <string.h>

const char message[] = "Hello cc65!";

int main(void)
{
    unsigned int frame = 0;

    // ��ʂ̏���
    clrscr();

    // �\���ʒu�̕ύX
    gotoxy((32-strlen(message))/2, 30/2);

    // ���b�Z�[�W�̕\��
    cprintf(message);

    // �������I��点�Ȃ����߂̖������[�v
    while(1) {
        gotoxy(0, 0);
        cprintf("%8d", frame++);
    }

    return 0;
}
