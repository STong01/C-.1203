#include <iostream>
#include <vector>
using namespace std;

class Gift //����һ���������Ƿ��г���һ��������������ݣ������ֱ�����
{
public:
	int getValue(vector<int> gifts, int n) 
	{
		if (gifts.size() == 0)
		{
			return 0;
		}


		else if (gifts.size() < n)
		{
			return 0;
		}

		else
		{
			for (int i = 0; i < n - 1; i++)//ð������
			{
				for (int j = 0; j < n - 1 - i; j++)
				{
					if (gifts[j] > gifts[j + 1])
					{
						int tmp = gifts[j];
						gifts[j] = gifts[j + 1];
						gifts[j + 1] = tmp;
					}
				}
			}

			int sum = 0;
			for (int p = 0; p < n; p++)//�������
			{
				if (gifts[p] == gifts[n / 2])
				{
					sum += 1;
				}
			}
			if (sum >= (n / 2))
			{
				return gifts[n / 2];
			}
			else
			{
				return 0;
			}
		}
	}
};

int main()
{

	system("pause");
	return 0;
}