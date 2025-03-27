
#include <iostream>
using namespace std;
/*
string demanderNom()
{    
     cout << "Entrez votre nom : ";
     string nom;
     cin >> nom;
     return nom;
}
*/
/*
void direBonjour()
{
    cout << "Bonjour !" << endl;
    //Comme rien ne ressort, il n'y a pas de return !
}

int main()
{
    direBonjour();
    //Comme la fonction ne renvoie rien
    //On l'appelle sans mettre la valeur de retour dans une variable
    
    return 0;
}
*/
/*
double carre(double x)
{
    double resultat;
    resultat = x*x;
    return resultat;
}

int main()
{
    double nombre, carreNombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    carreNombre = carre(nombre); //On utilise la fonction

    cout << "Le carre de " << nombre << " est " << carreNombre << endl;
    return 0;
}
*/
/*
double carre(double x)
{
    double nombre;
    nombre = x*x;
    return nombre;
}

int main()
{
    double nombre, carreNombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    carreNombre = carre(nombre); //On utilise la fonction

    cout << "Le carre de " << nombre << " est " << carreNombre << endl;
    return 0;
}
*/
/*
void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        for(int colonne(0); colonne < l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    } 
}

int main()
{
    int largeur, hauteur;
    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;
    
    dessineRectangle(largeur, hauteur);
    return 0;
}
*/

int ajouteDeux(int a)
{
    a+=2;
    return a;
}

int main()
{
    int nombre(4), resultat;
    resultat = ajouteDeux(nombre);
    
    cout << "Le nombre original vaut : " << nombre << endl;
    cout << "Le resultat vaut : " << resultat << endl;
    return 0;
}