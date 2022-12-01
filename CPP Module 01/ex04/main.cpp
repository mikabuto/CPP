#include <iostream>
#include <fstream>

int	replace(std::string filename, std::string str1, std::string str2, std::string buff) {
	std::ofstream	outfile;

	outfile.open((filename + ".replace").c_str(), std::ofstream::trunc);
	if (outfile.fail())
		return (1);
	for (int i = 0; i < (int)buff.size(); i++) {
		if (buff.substr(i, str1.size()).compare(str1)) {
			outfile << buff[i];
		} else {
			outfile << str2;
			i += str1.size() - 1;
		}
	}
	outfile.close();
	return 0;
}

int	main(int argc, char **argv) {
	std::string		buff;
	std::fstream	infile;
	char			c;

	if (argc != 4) {
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error: " << argv[1] << ":" << \
		" no such file or directory" << std::endl;
		return (1);
	}
	while(!infile.eof() && infile >> std::noskipws >> c)
		buff += c;
	infile.close();
	return (replace(argv[1], argv[2], argv[3], buff));
}