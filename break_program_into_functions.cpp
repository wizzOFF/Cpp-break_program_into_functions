
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