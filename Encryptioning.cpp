#include <iostream>

class Encryption
{
    public:
        Encryption() {std::cout << "Enter a message to encrypt: ";}
        ~Encryption() {std::cout << "Encrypted message: " << message << " ";}
        void set_message();
        char* get_message();
        void set_key();
        int get_key();
        void realization();
        
    private:
        char message[100];
        char ch;
        int key;
};


void Encryption::set_message()
{
    std::cin.getline(message, 100);
}

char* Encryption::get_message()
{
    return message;
}

void Encryption::set_key()
{
    std::cout << "Enter key: ";
    std::cin >> key;
}

int Encryption::get_key()
{
    return key;
}


void Encryption::realization()
{
    for(int i = 0; message[i] != '\0'; ++i)
{
    ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch + key;
            if(ch > 'z')
            {
                ch = ch - 'z' + 'a' - 1;
            }   
                    message[i] = ch;
        }else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + key;
            if(ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                    message[i] = ch;
        }
}
}

void Start_Encryption()
{
    Encryption obj;
    obj.set_message();
    obj.set_key();
    obj.realization();
}

int main()
{
  Start_Encryption();
}