// But : Demander a l'utilisateur deux nombres entiers et le programme calcule et affiche le r�sultat de la somme des deux nombres
// Auteur : Olivier Nadeau ;-)
// Date : 2021-08-30

#include<iostream>     // iostream contient la commande cout. C'est une caisse � outils pour communiquer avec l'utilisateur 

void main()
{
	// On veut utiliser une case de la m�moire vive d el'ordinateur qui a 32 milliards de cases. Il faut l'identifier
	// On lui donne un nom. Le contenu de la case m�moire peut changer, donc il varie.
	// On appelle cette espace m�moire une variable.
	// Il faut pr�ciser deux choses pour r�server une variable dans l'espace m�moire
	// 1. Dire quel type d'information sera m�moris� dans la variable.
	// (Des entiers (int) 4 octets, Des nombres � virgules(float,double) 4 Octets , Du texte (string) Minimum de 15 Octets,
	//  Un seul caract�res(char), Un bool�en-->(boul) 1 Octets ..(Oui,Non,)(Vrai,Faux)...)
	// 2. Donner un nom � la variable : Ne doit pas commencer par un chiffre, Ne doit pas contenir des espaces
	// On prendra l'habitude de commencer par une minuscule et les autres mots avec une Majuscule.


	// On d�clare deux variables de type entier qui vont prendre 4 octets chacune en m�moire vive
	int premierNombre;
	int deuxiemeNombre;
	int resultat;

	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrer votre premier nombre :";
	// Il va falloir mettre les touches tap�es sur le clavier dans la m�moire de l'ordinateur.
	std::cin >> premierNombre;
	// On va v�rifier le contenu de la variable : on peut l'afficher � l'�cran.
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer votre deuxi�me nombre :";
	// Il va falloir mettre les touches tap�es sur le claier dans la m�moire de l'ordinateur.
	std::cin >> deuxiemeNombre;
	// On va v�rifier le contenu de la variable : on peut l'afficher � l'�cran.
	//std::cout << deuxiemeNombre;

	// On demande au programme de faire l'addition et de m�moriser dans la variable r�sultat.
	resultat = premierNombre + deuxiemeNombre;

	// On affiche le r�sultat a l'�cran
	std::cout << resultat;


}