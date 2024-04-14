#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> Descifrar(string f);
void MostrarVector(vector<int> des);
int main()
{
    string frase;
    vector<int> descifrado;
    cout << "Ingresa la frase a descifrar: ";
    getline(cin, frase);
    descifrado = Descifrar(frase);
    cout << "La frase descifrada: " << endl;
    MostrarVector(descifrado);
    return 0;
}

vector<int> Descifrar(string f)
{
	vector<int> des;
	int n = 0;
    for (int i = 1; i <= f.size(); i++)
    {
    	if (f[i] == '*' && n > 0)
    	{
    		des.push_back(n);
    		n = 0;
    		i++;
		}
		if (i > 2)
		{
			n++;
		}
    }
    return des;
}
void MostrarVector(vector<int> des)
{
    for (int i = 0; i < des.size(); i++)
    {
        cout << des[i] << endl;
    }
    cout << endl;
}