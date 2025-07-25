#include <iostream>
#include <fstream>

void	replace(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
	std::string	line;
	size_t		pos;

	while (std::getline(ifs, line))
	{
		if (!s1.empty())
		{
			pos = line.find(s1, 0);
			while (pos != std::string::npos)
			{
				line = line.erase(pos, s1.size());
				line.insert(pos, s2);
				pos += s2.length();
				pos = line.find(s1, pos);
			}
		}
		ofs << line;
		if (ifs.good())
			ofs << std::endl;
	}
	std::cout << "\e[1;32mSed is for losers\e[0m" << std::endl;
}

int	main(int ac, char **av)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		name;

	if (ac != 4)
	{
		std::cout << "\e[1;31mInvalid amount of arguments\e[0m" << std::endl;
		return (1);
	}

	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "\e[1;31mInvalid file name\e[0m" << std::endl;
		return (1);
	}

	name = av[1];
	name += ".replace";
	ofs.open(name.c_str());

	replace(ifs, ofs, av[2], av[3]);
	return (0);
}
