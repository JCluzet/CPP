/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:46:14 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/18 17:09:28 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

std::string replace_line(std::string line, std::string old, std::string _new)
{
    int i = 0;
    while (line[i])
    {
        if (line[i] == old[0])
        {
            if (line.substr(i, old.size()) == old)
            {
                line.erase(i, old.size());
                line.insert(i, _new);
                i += _new.size();
            }
        }
        i++;
    }
    return(line);
}

int main(int argc, char **argv)
{
    std::fstream my_file;
    std::fstream newfile;
    std::string line;

    if (argc != 4 || argv[1] == NULL || argv[2] == NULL || argv[3] == NULL) 
    {
        std::cout << "Usage: ./ex03 [FILENAME] [REPLACE_THIS] [REPLACE_BY]" << std::endl;
        return (1);
    }
    my_file.open(argv[1], std::ios::in);
    if (!my_file)
        std::cout << "Error: file " << argv[1] << " not found" << std::endl;
    if (!my_file)
        return (1);
    newfile.open(argv[1] + std::string(".replace"), std::ios::out);
    if (!newfile)
        std::cout << "Error: file " << argv[1] << ".replace" << "can't be create" << std::endl;
    if (!newfile)
        return (1);
    while (!my_file.eof())
    {
        getline(my_file, line);
        newfile << replace_line(line, argv[2], argv[3]) << std::endl;
    }
    std::cout << argv[1] << " has been replaced !" << std::endl;
    my_file.close();
    newfile.close();
    return(0);
}