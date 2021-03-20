#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;

void draw_stack(int*);

int main()
{
	string str = "";
	int num = 0;
	int arr[5] = { -9999, -9999, -9999, -9999, -9999 };
	stack<int> st;

	while (1)
	{
		cin >> str;
		if (str == "exit") break;
		else if (str == "push")
		{
			cin >> num;
			if (st.size() >= 5)
			{
				printf("pull stack!!!\n");
				continue;
			}
			st.push(num);
			arr[st.size() - 1] = num;
			draw_stack(arr);
		}
		else if (str == "pop")
		{
			if (!st.empty()) {
				st.pop();
				arr[st.size()] = -9999;
				draw_stack(arr);
			}
			else {
				printf("empty stack!!!\n");
				continue;
			}
		}
	}


	return 0;
}

void draw_stack(int* arr)
{
	for (int i = 4; i >= 0; i--)
	{
		if (arr[i] == -9999) printf("[         ]\n");
		else printf("[    %d    ]\n", arr[i]);
	}
	printf("\n");
}
