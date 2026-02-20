#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

FILE *fin, *fout;

class password{
public:

    void showpass()
    {
        int a;
        int num;
        string pass;
        string website, username, password;

        cout << "1- Enter info\n2- Show infos\n3- Exit\n";
        cin >> a;

        if(a==1)
        {
            fin = fopen("password.txt","a");

            cout <<"Enter how many info you will enter: ";
            cin >> num;

            for (int i=0; i<num; i++)
            {
                cout << i+1 << ". Website: ";
                cin >> website;

                cout << i+1 << ". Username: ";
                cin >> username;

                cout << i+1 << ". Password: ";
                cin >> password;

                fprintf(fin,"%s %s %s\n",
                        website.c_str(),
                        username.c_str(),
                        password.c_str());
            }

            fclose(fin);
        }

        else if(a==2)
        {
            cout << "Enter admin password: ";
            cin >> pass;

            if(pass==apassword)
            {
                cout << "Access approved\n";

                fout = fopen("password.txt","r");

                char line[256];

                while(fgets(line,sizeof(line),fout)!=NULL)
                {
                    printf("%s",line);
                }

                fclose(fout);
            }
            else
            {
                cout << "Access denied\n";
            }
        }

        else if(a==3)
        {
            cout << "Have a nice day\n";
        }

        else
        {
            cout << "Wrong number\n";
        }
    }

private:
    string apassword="admin";
};

int main()
{
    password p;
    p.showpass();

    return 0;
}
