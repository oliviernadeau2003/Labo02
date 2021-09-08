// But : Le programme demande pour chaque op�ration (+ - * /) deux nombres entiers � l'utilisateur,
//  fait le calcule et l'affiche � l'�cran.
// Auteur : Olivier Nadeau
// Date : 2021-09-01

#include<iostream>

void main()
{
	setlocale(LC_ALL, "");

	// D�claration Des variables
		int premierNombre;
		int deuxiemeNombre;
		int resultat;
		int resteDivisionEntiere;

	// Demande � l'utilisateur deux nombres entiers
		std::cout << "veuillez entrer votre premier nombre :";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxi�me nombre :";
		std::cin >> deuxiemeNombre;

	// Le programme calcule le r�sultat de l'addition
		resultat = premierNombre + deuxiemeNombre;

	// Le programme affiche le r�sultat et passe � la ligne en utilisant
	// le caract�re d'�chappement "\" suivie de "n" pour new line
		std::cout << premierNombre << " + " << deuxiemeNombre << " = " << resultat << "\n";


		// Demande � l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxi�me nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le r�sultat de la soustraction
		resultat = premierNombre - deuxiemeNombre;

		// Le programme affiche le r�sultat
		std::cout << premierNombre << " - " << deuxiemeNombre << " = " << resultat << "\n";


		// Demande � l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxi�me nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le r�sultat de la multiplication
		resultat = premierNombre * deuxiemeNombre;

		// Le programme affiche le r�sultat et passe � la ligne en utilisant endl
		std::cout << premierNombre << " x " << deuxiemeNombre << " = " << resultat << std::endl;

		// Demande � l'utilisateur deux nombres entiers avec une alarme
		std::cout << "veuillez entrer votre premier nombre :\a";
		std::cin >> premierNombre;

		std::cout << "veuillez entrer votre deuxi�me nombre :\a";
		std::cin >> deuxiemeNombre;

		// Le programme calcule le r�sultat de la division
		// Avant de diviser il faut toujours s'assurer que le deuxi�me n'est pas �gal � 0
		// Si deuxi�meNombre est diff�rent de 0 ont affiche un message d'erreur
		if (deuxiemeNombre !=0)
		{
		resultat = premierNombre / deuxiemeNombre;
		resteDivisionEntiere = premierNombre % deuxiemeNombre;

		// Le programme affiche le r�sultat
		std::cout << premierNombre << " / " << deuxiemeNombre << " = " << resultat <<" reste "  << resteDivisionEntiere << std::endl;
		}

}