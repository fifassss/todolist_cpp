#include <iostream>
#include <vector>
#include <string>

/*
подключение из стандартной библиотеки вектора,строки и вывод\вввод.
*/

int main()
{

    /*
    объявление вектора и переменной которая будет заполнять вектор,также тип вектора,выборной переменной.
    
    */

    std::string work;
    std::string worked_usl;
    std::vector<std::string> todolist;

    std::cout << "Hi,I am program 'todolist'." << std::endl; // представление программы и ее работы для удобства пользователя

    std::cout << "pls choose,you want,add something in todolist or delete something?" << std::endl;

    std::cout << "if add,write 'add' or delete, wtire 'delete' - delete,in end vector" << std::endl;

    std::cout << "pls,write something,if you stoped this,write,'std::stop_work'" << std::endl;

    std::cout << "WARNING - pls,dont add too much in todolist,else program can stoped or begin work slower" << std::endl;

    std::cout << "WARNING - do not start by deleting anything, because you cannot delete anything in an empty vector, if you do this, the program will crash" << std::endl << std::endl;

    while (true) // начало цикла программы
    {

        std::cin >> worked_usl; // ввод действия

        if (worked_usl == "add")
        {

            std::cin >> work; // ввод в вектор чего либо

            todolist.push_back(work); // добавление чего либо в вектор

            for (int i = 0; i < todolist.size(); i++) // вывод всех элементов вектора, путем переборки всех элементов вектора
            {

                std::cout << i << ' ' << todolist[i] << std::endl;

            }

        }

        if (worked_usl == "delete")
        {

                todolist.pop_back(); // удаление с конца вектора

                for (int i = 0; i < todolist.size(); i++) // вывод всех элементов вектора, путем переборки всех элементов вектора
                {

                    std::cout << i << ' ' << todolist[i] << std::endl;

                }

        }

        if (worked_usl == "std::stop_work") // останавливает цикл
        {

            break;

        }

    }

    return 0; // оповещение что программа закончилась
    
}
