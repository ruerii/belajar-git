#include <iostream>

using namespace std;

int main()
{
    string a;

    int o=0;
    int j=0;
    int m=0;
    int l=0;
    string c;
    cout <<"Input : ";getline(cin,a); 
    cout<<"Output : "<<endl;
    cout<<"Vokal : ";
    for (int z=0;z<a[z];z++) 
        {
            o++;
        }


            for (int g=0;g<o;g++) 
                {
                    if (a[g]=='a'||a[g]=='i'||a[g]=='u'||a[g]=='e'||a[g]=='o'||a[g]=='A'||a[g]=='I'||a[g]=='U'||a[g]=='E'||a[g]=='O')
                        {
                            j++;
                        }
                }

    if (j>0) 
        {
           cout<<j<<" = ";

            for (int g=0;g<o;g++)
                {
                   if (a[g]=='a'||a[g]=='i'||a[g]=='u'||a[g]=='e'||a[g]=='o'||a[g]=='A'||a[g]=='I'||a[g]=='U'||a[g]=='E'||a[g]=='O')
                        {
                            cout<<a[g]<<" ";
                        }
                }
        }
    else 
        {
            cout<<"Tak ada...";
        }
cout<<endl;
cout<<"Konsonan : ";
            for (int g=0;g<o;g++)
                {
                    if (a[g]=='b'||a[g]=='c'||a[g]=='d'||a[g]=='f'||a[g]=='g'||a[g]=='h'||
                        a[g]=='j'||a[g]=='k'||a[g]=='l'||a[g]=='m'||a[g]=='n'||a[g]=='p'||
                        a[g]=='q'||a[g]=='r'||a[g]=='s'||a[g]=='t'||a[g]=='v'||a[g]=='w'||
                        a[g]=='x'||a[g]=='y'||a[g]=='z'||a[g]=='B'||a[g]=='C'||a[g]=='D'||
                        a[g]=='F'||a[g]=='G'||a[g]=='H'||a[g]=='J'||a[g]=='K'||a[g]=='L'||
                        a[g]=='M'||a[g]=='N'||a[g]=='P'||a[g]=='Q'||a[g]=='R'||a[g]=='S'||
                        a[g]=='T'||a[g]=='V'||a[g]=='W'||a[g]=='X'||a[g]=='Y'||a[g]=='Z')
                        {
                            m++;
                        }
                }

if (m>0) 
    {
        cout<<m<<" = ";

            for (int g=0;g<o;g++)
                {
                    if (a[g]=='b'||a[g]=='c'||a[g]=='d'||a[g]=='f'||a[g]=='g'||a[g]=='h'||
                        a[g]=='j'||a[g]=='k'||a[g]=='l'||a[g]=='m'||a[g]=='n'||a[g]=='p'||
                        a[g]=='q'||a[g]=='r'||a[g]=='s'||a[g]=='t'||a[g]=='v'||a[g]=='w'||
                        a[g]=='x'||a[g]=='y'||a[g]=='z'||a[g]=='B'||a[g]=='C'||a[g]=='D'||
                        a[g]=='F'||a[g]=='G'||a[g]=='H'||a[g]=='J'||a[g]=='K'||a[g]=='L'||
                        a[g]=='M'||a[g]=='N'||a[g]=='P'||a[g]=='Q'||a[g]=='R'||a[g]=='S'||
                        a[g]=='T'||a[g]=='V'||a[g]=='W'||a[g]=='X'||a[g]=='Y'||a[g]=='Z')
                        {
                            cout<<a[g]<<" ";
                        }
                }

    }
else
    {
        cout<<"Tak ada...";
    }
cout<<endl;
cout<<"Masukkan data yang akan anda cari : ";cin>>c;
cout<<endl;
cout<<"Data yang anda cari adalah --> "<<c[0]<<endl;

for (int g=0;g<o;g++) 
        {
            if (a[g]==c[0])
            {
                            l++;
            }
        }
cout<<endl;
if (l>0)
    {
        cout<<"Data ditemukan, sebanyak "<<l<<" data";
    }
else 
    {
        cout<<"Data tak ditemukan.... ";
    }
    return 0;
}
