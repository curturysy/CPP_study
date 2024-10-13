//第二个C++程序
#include <iostream>
using namespace std;


/*
int main()
{
	double num_1, num_2, sum;

	cout << "请输入第一个数字:";
	cin >> num_1;

	cout << "请输入第二个数字:";
	cin >> num_2;

	double addtion(double num_1, double num_2);
	sum = addtion(num_1, num_2);

	cout << "这两个数的和为:" << sum<<endl;

	system("pause");
}

double addtion(double num_1, double num_2)
{
	double sum = num_1 + num_2;

	return sum;
}



int main()
{
	bool use = true;

	int i = 0;

	while (use)
	{
		i++;

		if (i > 100)
		{
			cout << i;
			break;
		}
	}

	return 0;
}

int player_HP = 100;

int main()
{

	class monster
	{
	public:

		int HP,damage = 10;

		void attack()
		{
			player_HP -= damage;
		}
	};

	monster zombie;

	zombie.attack();

	cout << player_HP;
}
*/

/*
int main()
{
	int a = 10;

	double b = 1.03;

	char d = 'A';

	char c[] = "wcnmahskdhsakdhaskdhaskhdkajhdkas";

	cout << sizeof(d);

	return 0;
}
*/


int main()
{
	class Human
	{

	public:
		int human_age;

		Human(int age)
		{
			human_age = age;
		}
		Human()
		{
			human_age = 10;
		}

		void eat()
		{
			cout << "吃东西"<<endl;
		}
		
		void drink()
		{
			cout << "喝东西"<<endl;
		}
	};

	int input_num;

	cout << "请输入人类的年龄:";

	cin >> input_num;

	Human human_1;

	cout << "这名人类的年龄是:"<<human_1.human_age<<endl;

	human_1.eat();

	human_1.drink();

	return 0;
}

