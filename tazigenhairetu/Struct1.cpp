#include<iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
	int goukei = scoreJapanese + scoreMath + scoreEnglish;
};

void Show(const Student& student)
{
	cout << "���O : " << student.name << endl
		<< "  ���� : " << student.scoreJapanese << " �_"
		", ���w : " << student.scoreMath << " �_"
		", �p�� : " << student.scoreEnglish << " �_"
		", ���v : " << student.goukei << " �_" << endl;
}

int main()
{
	Student student[] =
	{
		{"�㓡�ЂƂ�" , 73, 98, 86, },
		{"�쑽���"   , 64, 45, 40, },
		{"�ɒn�m����" , 76, 78, 69, },
		{"�R�c�����E" , 54, 38, 72, },
	};

	int size = sizeof student / sizeof *student;
	
	for (int i = 0; i < size; ++i)
	{
		Show(student[i]);
	}
}