#include "RPN.hpp"

void calculation(std::string line)
{
    std::stack<int> mystack;
    for (size_t i = 0; i < line.size(); i++)
        {
            if (isdigit(line[i]))
                mystack.push((line[i] - '0'));
            else if (line[i] == ' ')
                continue;
            else if (line[i] == '+')
            {
                if (mystack.size() < 2)
                {
                    std::cout << "Error" << std::endl;
                    exit (1);
                }
                int a = mystack.top();
                mystack.pop();
                int b = mystack.top();
                mystack.pop();
                mystack.push(a + b);
            }
            else if (line[i] == '-')
            {
                if (mystack.size() < 2)
                {
                    std::cout << "Error" << std::endl;
                    exit (1);
                }
                int a = mystack.top();
                mystack.pop();
                int b = mystack.top();
                mystack.pop();
                mystack.push(b - a);
            }
            else if (line[i] == '*')
            {
                if (mystack.size() < 2)
                {
                    std::cout << "Error" << std::endl;
                    exit (1);
                }
                int a = mystack.top();
                mystack.pop();
                int b = mystack.top();
                mystack.pop();
                mystack.push(a * b);
            }
            else if (line[i] == '/')
            {
                if (mystack.size() < 2)
                {
                    std::cout << "Error" << std::endl;
                    exit (1);
                }
                int a = mystack.top();
                mystack.pop();
                int b = mystack.top();
                mystack.pop();
                if (a == 0)
                 {
                    std::cout << "Error div / 0" << std::endl;
                    exit (1);
                }
                mystack.push(b / a);
            }
            else 
            {
                std::cout << "Error" << std::endl;
                exit (1);
            }
        }
        if (mystack.size() != 1)
        {
            std::cout << "Error " << std::endl;
            exit (1);
        }
        std::cout << mystack.top() << std::endl;
}