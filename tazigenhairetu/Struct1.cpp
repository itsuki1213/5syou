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
	cout << "名前 : " << student.name << endl
		<< "  国語 : " << student.scoreJapanese << " 点"
		", 数学 : " << student.scoreMath << " 点"
		", 英語 : " << student.scoreEnglish << " 点"
		", 合計 : " << student.goukei << " 点" << endl;
}

int main()
{
	Student student[] =
	{
		{"後藤ひとり" , 73, 98, 86, },
		{"喜多郁代"   , 64, 45, 40, },
		{"伊地知虹夏" , 76, 78, 69, },
		{"山田リョウ" , 54, 38, 72, },
	};

	int size = sizeof student / sizeof *student;
	
	for (int i = 0; i < size; ++i)
	{
		Show(student[i]);
	}
}