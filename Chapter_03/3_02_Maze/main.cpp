//��Stack��Ӧ��---�������Թ�
//�������Զ�ջ����ʽ�洢��0Ϊû�߹��ģ�1Ϊ��ǽ�塯��2Ϊ�߹���·��

#include "Maze.h"


int main()
{
	Stack_self<Pos> path;
	Pos current = { 1,1 };    //��ǰ�Թ�����
	cout << "the Maze's layout following" << endl;
	for (auto &hang : maze)
	{
		for (int elem : hang)
			cout << elem << " ";
		cout << endl;
	}

	while (current.x <= ExitX && current.y <= ExitY)
	{
		maze[current.x][current.y] = 2;
		if (UP == 0)
		{
			current.x -= 1;
			path.Push(current);
		}
		else if (DOUWN == 0)
		{
			current.x += 1;
			path.Push(current);
		}
		else if (LEFT == 0)
		{
			current.y -= 1;
			path.Push(current);
		}
		else if (RIGHT == 0)
		{
			current.y += 1;
			path.Push(current);
		}
		else if (current.x == ExitX && current.y == ExitY)   break;

		else current = path.Pop();
	}

	cout << "the ultimate of layout following" << endl;

	for (auto &hang : maze)
	{
		for (int elem : hang)
			cout << elem << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}