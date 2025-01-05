// Guess100.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
#include <locale.h> 
#include <cstdlib>

using namespace std;
int TryToGuess(int minNumber, int maxNumber)
{
    int predictNumber;
    char responce;
    predictNumber = (maxNumber + minNumber) / 2;
    cout << predictNumber << "? (<=>)\n";
    cin >> responce;
    switch (responce)
    {
    case '<':
    {
        return(TryToGuess(minNumber, predictNumber) + 1);
    }
    break;
    case '>':
    {
        return(TryToGuess(predictNumber, maxNumber) + 1);
    }
    break;
    case '=':
    {
        return(1);
    }
    break;
    default:
    {
        cout << "�� �������!";
        exit(0);
    }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian"); // ����� ������� �����
    system("chcp 1251"); // ����������� ��������� �������
    cout << "���� \"������ �����\"\n";
    cout << "������� � " << TryToGuess(1, 100) << " ������� \n";
}

// ������ ���������: CTRL+F5 ��� ���� "�������" > "������ ��� �������"
// ������� ���������: F5 ��� ���� "�������" > "��������� �������"

// ������ �� ������ ������ 
//   1. � ���� ������������ ������� ����� ��������� ����� � ��������� ���.
//   2. � ���� Team Explorer ����� ������������ � ������� ���������� ��������.
//   3. � ���� "�������� ������" ����� ������������� �������� ������ ������ � ������ ���������.
//   4. � ���� "������ ������" ����� ������������� ������.
//   5. ��������������� �������� ������ ���� "������" > "�������� ����� �������", ����� ������� ����� ����, ��� "������" > "�������� ������������ �������", ����� �������� � ������ ������������ ����� ����.
//   6. ����� ����� ������� ���� ������ �����, �������� ������ ���� "����" > "�������" > "������" � �������� SLN-����.
