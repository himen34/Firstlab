#ifndef LAB1_FUNCTIONS_H
#define LAB1_FUNCTIONS_H
#endif //LAB1_FUNCTIONS_H
#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

//������� ��� ��������� �� ������ � ����
string create_makenote(short mode); 

//������� ��� ������������ ����� 
string encrypter(string &g);

//������� ��� ���������� ������ �����
string checkevenstring(string& firstfile);

//������� ��� ��������� �����, ��� �� ������� � ���������
void eraseletter(string &filename);

//������� ��� ���������� �� ��������� ����� �����
void readFile(string &filename);

//������� ��� ������ '0' ��� '1'
short picker();

//������� ��� ����������� ������ ������� 
void programprogress(short mode);
