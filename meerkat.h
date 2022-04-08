# include <iostream>
# include <string>
# ifndef MEERKAT_H
# define MEERKAT_H

// Define a class "meerkat"

class meerkat {
    std::string name;
    int age;

    public:
        meerkat();

        void setName(std::string meerName);
        std::string getName();

        void setAge(int meerAge);
        int getAge();

        meerkat(std::string _name, int _age);
        //~meerkat();

};
# endif