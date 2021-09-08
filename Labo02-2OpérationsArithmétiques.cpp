// But : Le programme demande pour chaque opération (+ - * /) deux nombres entiers à l'utilisateur,
//  fait le calcule et l'affiche à l'écran.
// Auteur : Olivier Nadeau
// Date : 2021-09-01

#include<iostream>

void main()
{
	setlocale(LC_ALL, "");

	// Déclaration Des variables
		int premierNombre;
		int deuxiemeNombre;
		int resultat;
		int resteDivisionEntiere;

	// Demande à l'utilisateur deux nombres entiers
		std::cout << "veuillez entrer votre premier nombre :";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxième nombre :";
		std::cin >> deuxiemeNombre;

	// Le programme calcule le résultat de l'addition
		resultat = premierNombre + deuxiemeNombre;

	// Le programme affiche le résultat et passe à la ligne en utilisant
	// le caractère d'échappement "\" suivie de "n" pour new line
		std::cout << premierNombre << " + " << deuxiemeNombre << " = " << resultat << "\n";


		// Demande à l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxième nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le résultat de la soustraction
		resultat = premierNombre - deuxiemeNombre;

		// Le programme affiche le résultat
		std::cout << premierNombre << " - " << deuxiemeNombre << " = " << resultat << "\n";


		// Demande à l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxième nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le résultat de la multiplication
		resultat = premierNombre * deuxiemeNombre;

		// Le programme affiche le résultat et passe à la ligne en utilisant endl
		std::cout << premierNombre << " x " << deuxiemeNombre << " = " << resultat << std::endl;

		// Demande à l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxième nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le résultat de la division
		// Avant de diviser il faut toujours s'assurer que le deuxième n'est pas égal à 0
		// Si deuxièmeNombre est différent de 0 ont affiche un message d'erreur
		if (deuxiemeNombre !=0)
		{
		resultat = premierNombre / deuxiemeNombre;
		resteDivisionEntiere = premierNombre % deuxiemeNombre;

		// Le programme affiche le résultat
		std::cout << premierNombre << " / " << deuxiemeNombre << " = " << resultat <<" reste "  << resteDivisionEntiere << std::endl;
		}

}