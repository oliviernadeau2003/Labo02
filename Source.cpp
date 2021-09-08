// But : Demander a l'utilisateur deux nombres entiers et le programme calcule et affiche le résultat de la somme des deux nombres
// Auteur : Olivier Nadeau ;-)
// Date : 2021-08-30

#include<iostream>     // iostream contient la commande cout. C'est une caisse à outils pour communiquer avec l'utilisateur 

void main()
{
	// On veut utiliser une case de la mémoire vive d el'ordinateur qui a 32 milliards de cases. Il faut l'identifier
	// On lui donne un nom. Le contenu de la case mémoire peut changer, donc il varie.
	// On appelle cette espace mémoire une variable.
	// Il faut préciser deux choses pour réserver une variable dans l'espace mémoire
	// 1. Dire quel type d'information sera mémorisé dans la variable.
	// (Des entiers (int) 4 octets, Des nombres à virgules(float,double) 4 Octets , Du texte (string) Minimum de 15 Octets,
	//  Un seul caractères(char), Un booléen-->(boul) 1 Octets ..(Oui,Non,)(Vrai,Faux)...)
	// 2. Donner un nom à la variable : Ne doit pas commencer par un chiffre, Ne doit pas contenir des espaces
	// On prendra l'habitude de commencer par une minuscule et les autres mots avec une Majuscule.


	// On déclare deux variables de type entier qui vont prendre 4 octets chacune en mémoire vive
	int premierNombre;
	int deuxiemeNombre;
	int resultat;

	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrer votre premier nombre :";
	// Il va falloir mettre les touches tapées sur le clavier dans la mémoire de l'ordinateur.
	std::cin >> premierNombre;
	// On va vérifier le contenu de la variable : on peut l'afficher à l'écran.
	//std::cout << premierNombre;

	std::cout << "Veuillez entrer votre deuxième nombre :";
	// Il va falloir mettre les touches tapées sur le claier dans la mémoire de l'ordinateur.
	std::cin >> deuxiemeNombre;
	// On va vérifier le contenu de la variable : on peut l'afficher à l'écran.
	//std::cout << deuxiemeNombre;

	// On demande au programme de faire l'addition et de mémoriser dans la variable résultat.
	resultat = premierNombre + deuxiemeNombre;

	// On affiche le résultat a l'écran
	std::cout << resultat;


}