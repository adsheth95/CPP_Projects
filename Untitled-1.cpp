#include <iostream>
using namespace std;

main()
{
	int p1, p2, p3;
	cout<<"Enter the score of 3 players: ";
	cin>>p1>>p2>>p3;
	
	if(p1 > p2 && p1 > p3)
	{
		cout<<"Player 1 has scored the most runs!";
	}
	else
	{
		if(p2 > p1 && p2 > p3)
		{
			cout<<"Player 2 has scored the most runs!";
		}
		else
		{
			cout<<"Player 3 has scored the most runs!";
		}
	}
}