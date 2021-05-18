#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int m, n;
    int mine_counter = 0;                                                       // �ֺ� ���� ī����
    int i, j;

    scanf("%d %d", &m, &n);                                                     // ����� ũ�� �Է�

    char** minesweeper = malloc(sizeof(char*) * m);                            // ����� ����(������) �Ҵ�

    for (i = 0; i < m; i++) {                                                     // ���� ũ�⸸ŭ �ݺ�
        minesweeper[i] = malloc(sizeof(char) * (n + 1));                        // ���� ũ�⸸ŭ �ݺ�
        memset(minesweeper[i], 0, sizeof(char) * (n + 1));                      // �� ��Ҹ� 0���� �ʱ�ȭ
    }

    for (i = 0; i < m; i++) {                                                     // ���ڿ� �Է�
        scanf("%s", minesweeper[i]);
    }

    for (i = 0; i < m; i++) {                                                     // �迭�� ��Ҹ� �˻� �� '*' �� ������ �Ѿ
        for (j = 0; j < n; j++) 
        {
            if (minesweeper[i][j] == '*') 
            {
                printf("%c", minesweeper[i][j]);
                continue;
            }
            else {                                                               // '*'�� ���� ������ ���� ��ġ �ֺ� 8��
                for (int y = i - 1; y <= i + 1; y++) {                            // (���� �� �밢��, ��, ������ �� �밢��,
                    for (int x = j - 1; x <= j + 1; x++) {                        //  ����, ������
                        if (y < 0 || x < 0 || y >= m || x >= n) 
                            continue;        //  ���� �Ʒ� �밢��, �Ʒ�, ������ �Ʒ� �밢��)
                        else if (minesweeper[y][x] == '*') 
                            mine_counter += 1;    // ������ ����� �Ѿ��, �˻������� '*'�� ���ٸ� mine_counter�� 1�� �߰�
                    }
                }
                minesweeper[i][j] = mine_counter;                 // �ش� ��ġ�� ���� ���� ǥ�� �� mine_counter�� 0���� �ʱ�ȭ
                printf("%d", minesweeper[i][j]);
                mine_counter = 0;
            }
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {                                                 // �Ҵ��� �޸� ����
        free(minesweeper[i]);
    }

    free(minesweeper);

    return 0;
}