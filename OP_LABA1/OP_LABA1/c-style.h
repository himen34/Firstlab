#define LAB2_FUNCTIONS_H
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstring>
#include <errno.h>
using namespace std;

//������� ��� ��������� �� ������ � ����
const char* create_makenote_c(short mode);

//������� ��� ������������ ����� 
char* encrypt_c(char* line);

//������� ��� ���������� ������ �����
const char* checkevenchars_c(const char* filename);

//������� ��� ��������� �����, ��� �� ������� � ���������
void erase_letter_c(const char* filename);

//������� ��� ���������� �� ��������� ����� �����
void readFile_c(const char* filename);

//������� ��� ����������� ������ ������� 
void programprogress_c(short mode);