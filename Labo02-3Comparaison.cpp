/* But: Écrivez un programme qui demande à l’utilisateur deux nombres entiers, qui lit ces deux nombres
et qui affiche le nombre le plus élevé suivi des mots «est le plus grand ».Si les nombres sont égaux,
le programme affiche « Ces nombres sont égaux » */
// Auteur: Olivier Nadeau
// Date: 2021-09-03

#include<iostream>

void main()
{

   setlocale(LC_ALL, "");

   // Déclaration des variable
   int nb1;
   int nb2;

   // Entrez un nombre entier
   std::cout << "Entrez Un Nombre Entier : ";
   std::cin >> nb1;

   // Entrez un deuxième nombre entier
   std::cout << "Entrez Un Deuxième Nombre Entier : ";
   std::cin >> nb2;

   // Condition
   if (nb1 > nb2)
   {
      std::cout << nb1 << " Est Le Plus Grand\n ";
   }
   // On sait que nb1 est plus petit ou égal à nb2
   else if (nb1 < nb2)
   {
      std::cout << nb2 << " Est Le Plus Grand\n ";
   }
   else
   {
      std::cout << nb1 << " Est Égal À " << nb2;
      std::cout << "\n";
   }

   // Met en pause le system
   system("pause");
}