//Clab5 task2

/* �������� ��������� ������������, ��������� �� ����� �����������, ������������ �� ����������� ������������� ��������� �*�.
   ����������� ����������� � ��������� ���������� �������, � ����� ��� ����� � ����������� ���������� � ��������� ��� �����.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define M 48

void clearMatrix(char(*arr)[M]); // ���������� ���������� �������(�������) ���������
void fillMatrix(char(*arr)[M]); // ���������� �������� ������ ��������� ������� �����������
void setMatrix(char(*arr)[M]); // ����������� ��������� � ������ ������� �������
void printMatrix(char(*arr)[M]); // ������ �������