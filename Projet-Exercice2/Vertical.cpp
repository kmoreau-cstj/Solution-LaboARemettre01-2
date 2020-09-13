/*But : Le programme lira le nombre donn� par un utilisateur et pourra v�rifier qu'il y a 5 chiffres. S'il est bien compos� de 5 chiffres, le programme l'affichera �
l'�cran verticalement sinon il mentionnera que ce n'est pas un nombre � 5 chiffres.*/
// Auteur : No�mie Lanct�t
// Date : 12/09/2020

#include <iostream>		//Ici, on inclu la biblioth�que qui nous permettra de communiquer avec l'utilisateur (cin, cout, etc.)

int main()	// Dans mon programme --> Valeur enti�re (integer) et dans ce cas ma fonctione retournera quelque chose,	Main : Fonction principale/porte d�entr�e 
{
	//Je d�clare ma ou mes variables au d�but de mon programme. Ici, je d�clare que ma variable est un nombre, il sera donc d�clarer avec int
	int nombre; 
	// Je d�clare aussi mes variables que j'aurai dans ma condition (if) 
	int dizaineDeMille;
	int mille; 
	int centaine;
	int dizaine;
	int unite; 

	setlocale(LC_ALL, "");		// Convertir correctement les accents de Windows � la console et on fini l'instruction par un ; 

	//Au d�but, je veux que mon programme invite l'utilisateur � donner un nombre � 5 chiffres
	std::cout << " Veuillez inscrir un nombre compos� de 5 chiffres : ";

	//Le programme lit le nombre donn� par l'utilisateur et r�serve de l'espace pour le m�moriser
	std::cin >> nombre; 

	// Le programme doit d�terminer si le nombre rempli la condition (5 chiffres)
	if ((nombre >= 10000 && nombre < 100000)|| (nombre <= -10000 && nombre > -100000)) 
	// La condition � remplir est plus grand ou �gal � 10000 ET plus petit que 100000 et aussi pour inclure les nombres n�gatif il doit �tre plus petit ou �gal � 10000 et plus grand que 100000
	// && (et)	|| (ou)		>= (Plus grand ou �gal)		< (Plus petit)		<= (Plus petit ou �gal)		>(Plus grand)
	// Je mets toujours ma condition dans ma parenth�se et j'ai deux conditions alors elles seront chacune dans une parenth�se � l'int�rieur de ma parenth�se principale. 
	{
		//Mettre la condition que le nombre doit remplir afin d'�tre affich� � l'�cran
		// J'ai d�cid� de prendre une solution avec des math�matiques pour facilit� l'affichage vertical
		dizaineDeMille = nombre / 10000;
		mille = nombre / 1000 - dizaineDeMille * 10;
		centaine = nombre / 100 - dizaineDeMille * 100 - mille * 10;
		dizaine = nombre / 10 - dizaineDeMille * 1000 - mille * 100 - centaine * 10;
		unite = nombre / 1 - dizaineDeMille * 10000 - mille * 1000 - centaine * 100 - dizaine * 10;

		// Afficher de fa�on vertical le nombre � 5 chiffres choisi par l'utilisateur
		std::cout << dizaineDeMille << std::endl;	//Le programme affiche � l'�cran le 1er chiffre et un ajout de endl pour pouvoir faire un saut de ligne
		std::cout << mille << std::endl;			// Affiche le 2e chiffre
		std::cout << centaine << std::endl;			// Affiche le 3e chiffre
		std::cout << dizaine << std::endl;			// Affiche le 4e nombre
		std::cout << unite;							// Affiche le 5e nombre
	}

	// Si le nombre ne rempli pas la condition, afficher � l'�cran que le nombre ne contient pas 5 chiffres 
	else
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres ";		
	}

	return 0;	//ma fonction main retourne � 0 si le programme fonctionne. 


} // Accolade qui ferme le bloc d'instruction 



/*
									PLAN DE TEST 
[Nombre choisi par l'utilisateur]						[Ce que le programme affiche � l'�cran]

			-58746													-5																
																	-8
																	-7
																	-4
																	-6

			5428										Ce nombre ne contient pas 5 chiffres

			12589													1
																	2
																	5
																	8
																	9

*/