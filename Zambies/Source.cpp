#include <iostream>
#include <SDKDDKVer.h>


struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int Fight(Zambie &z, Ninja &n)
{
	std::cout << "Zambie is Roasting that Ninja" << std::endl;
	n.health -= 10;
	std::cout << "The Ninja took 10 Damage his health is now ->" << n.health << std::endl;
	z.spirit -= 1;
	std::cout << "The Zambie Attacked so his spirit is now" << z.spirit << std::endl;

	//fighting is when a zambie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zambie
	//"damage" is when we decrement the health variable of a ninja or zambie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
	return 1;
}
int Quackscope(Ninja &n, Zambie&z)
{
	std::cout << "Ninja hits a 360 No scope off the ladder stall!!" << std::endl;
	z.health -= 20;
	std::cout << "The zombie took 20 damage his health is now->" << z.health << std::endl;
	n.chi -= 2;
	std::cout << "The Ninja attacked so his chi is now" << n.chi << std::endl;
	return 1;






}
int Ninjie(Ninja &n, Zambie&z)
{
	std::cout << "Regi is busting The Zambie" << std::endl;

	z.health -= 10;

	std::cout << "the Zambie took 10 damage and is about to get wrekt ->" << z.health << std::endl;

	n.chi -= 1;

	std::cout << "the Regi attacked so his chi is now" << n.chi << std::endl;

	return 1;
}
int main()
{
	std::cout << "                             -MENU-" << std::endl;

	std::cout << "        ========>   LETS FIGHT SOME ZOMBIE!!!" << std::endl;

	std::cout << "        ========>   LETS FIGHT SOME NINJAS!!!" << std::endl;

	std::cout << "        ========>   Press A to fight as Chris vs Regi!!" << std::endl;

	std::cout << "        ========>   Press S to fight as Regi vs Chris!!" << std::endl;

	std::cout << "        ========>   Press Z to Quackscope as 'Regi The Quackscopin Ninja!!'" << std::endl;

	std::cout << "        ========>   Press Q to Quit This Awesome Game You don't Want To Quit Playing!!'" << std::endl;
	Zambie chris = { 90, true, 15 };
	Zambie matthew = { 100, true, 15 };
	Ninja regi = { 150, true, 25 };
	Ninja wilson = { 100, true, 20 };
	char input = '0';

	while (input != 'q')
	{
		std::cin >> input;

		if (input == 'a')
		{
			std::cout << "CHRIS VS REGI" << std::endl;
			Fight(chris, regi);
		}

		if (chris.spirit <= 0)

		{
			printf("SEE YA Regi!!! ");
		}

		if (regi.health <= 0)
		{
			printf(".... CHRIS WINS!!!\n");
			printf("lol ur trash... \n \a");
			break;
		}

		if (input == 's')

		{
			std::cout << "REGI VS CHRIS" << std::endl;
			Ninjie(regi, chris);
		}


		if (input == 'z')
		{
			std::cout << "REGI VS CHRIS" << std::endl;
			Quackscope(regi, chris);

		}


		{

			if (regi.chi <= 0)


			{
				printf("See Ya Regi!!!");
			}

			if (chris.health <= 0)
			{
				printf("How You do Dat?!?\n");
				printf("lol ur trash.... \n \a");
				break;
			}

		}
	}
	printf(" \n");
	system("pause");

	return 0;

}
