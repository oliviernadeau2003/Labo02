// But : Le programme demande 3 entier et lequel est le plus grand
// Auteur : Olivier Nadeau
// Date : 2021-09-03

#include<iostream>

void main()
{

   setlocale(LC_ALL, "");

   int nb1;
   int nb2;
   int nb3;

   std::cout << "Entrez Un Nombre Entier : ";
   std::cin >> nb1;

   std::cout << "Entrez Un Deuxième Nombre Entier : ";
   std::cin >> nb2;

   std::cout << "Entrez Un Troisième Nombre Entier : ";
   std::cin >> nb3;

   // Déterminer lequelles est le plus grand
      if (nb1 > nb2 && nb1 > nb3)
      {
         std::cout << nb1 << " Est Le Plus Grand Des Trois \n";
      }
      else
      {
         if (nb2 > nb1 && nb2 > nb3)
         {
            std::cout << nb2 << " Est Le Plus Grand Des Trois \n";
         }
         else
         {
            if (nb3 > nb1 && nb3 > nb2)
            {
               std::cout << nb3 << " Est Le Plus Grand Des Trois \n";
            }
            else  // Si tous sont égaux
            {
               std::cout << "Les Trois Sont Égaux\n";
            }
         }
      }
 
   system("pause");
}