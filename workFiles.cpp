#include <iostream>
#include <fstream>

void fileIn(std::string path){

    std::ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        std::cout << "File not found" << std::endl;
    } else {
        std::string str; char ch;
        int cases = 1; //three types of reading file
        switch (cases){

            case 1:

                while (fin.get(ch)){ //extracts file char by char
                    std::cout << ch;
                }
                break;

            case 2:

                while (!fin.eof()){ //extracts file str by str
                    fin >> str; //writes chars in str until whitespace
                    std::cout << str << std::endl;
                    str = "";
                }
                break;

            case 3:

                while (!fin.eof()){ //extracts file str by str
                    getline(fin, str); //writes whole line
                    std::cout << str << std::endl;
                    str = "";
                }
                break;
        }
    }

    fin.close();
}

void fileOut(std::string path){

    std::ofstream fout; //ofstream - class name; fileOut - object name

    //fout.open(path) // in this case all information will be deleted from Myfile.txt
    fout.open(path, std::ofstream::app); //open method
    if (!fout.is_open()){ //is_open() method returns true or false
        std::cout << "Occured error: file cannot be opened" << std::endl;
    } else {
        std::string line;
        std::cout << "Enter text: ";
        std::getline(std::cin, line);
        //std::cin >> line;
        fout << line << std::endl;
        fout.close(); //close method
    }

}

void workFiles(){
    //fstrean - file stream (lib name)
    //ifstream - input file stream
    //ofstream - output file stream


    fileOut("MyFile.txt"); //write in file
    fileIn("MyFile.txt"); //extract from file
}