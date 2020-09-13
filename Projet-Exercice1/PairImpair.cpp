// But : Écrire un programme qui lit un entier, qui le détermine et qui l'affiche à l'écran s'il s'agit d'un entier pair ou impair. 
// Auteur : Noémie Lanctôt
// Date : 12/09/2020

#include <iostream>		//Inclus le coffre à outils pour communiquer avec l'utilisateur (cout, cin, etc.) 
// #include est la directive pour inclure les outils de la bibliothèque dans notre programme.

/* Pour commencer un programme il faut créer une première fonction qui porte toujours le même nom : main pour principal - porte d'entrée de la fonction
	Une fonction à 3 parties :
	1. Son nom : Ne dois pas commencer par un chiffre et dois avoir une lettre minuscule au commencement. On met les majuscules à la place des espaces et aucun accent
	2. Des parenthèses obligatoires pour les paramètres
	3. Le titre de la valeur de retour - 2 possibilités pour le main
		- Void : Vide/rien, on ne retourne rien
		- Int : Valeur entière (integer) et dans ce cas, main retourne quelque chose comme return 0; si tout va bien*/

void main()		// Dans mon programme --> Void puisque ma fonction ne retournera rien		Main : Fonction principale/porte d’entrée 
{				// Cette accolade ouvre mon bloc d'instruction.

	setlocale(LC_ALL, "");		// Convertir correctement les accents de Windows à la console
								// Chaque instruction dans mon programme doit se terminer par un ; 
	

	//Au début du programme on déclare toujours nos variables. Je déclare que ma variable est un entier 
	int entier;			//Entier = int. Si j'avais eu une chaîne de texte comme variable, j'aurais choisi string au lieu de int 

	//Pour commencer, on invite l'utilisateur à entrer un entier
	std::cout << " Veuillez entrer un nombre entier : ";	// std::cout indique que la chaine de caractères entre guillemets doit être affichée à l'écran 
															// << les becs de canards sont des caractères de redirection, texte du côté large des becs est redirigé vers l'écran out

	//Le programme doit ensuite lire l'entier fournis par l'utilisateur pour savoir si c'est un entier pair ou impair 
	std::cin >> entier;

	//Le programme détermine si l'entier est pair ou impair
	if (entier%2 ==0)		// Si notre entier est un multiple de 2 et qu'il n'ya pas de reste, le nombre sera pair. Ma condition est toujours entre parenthèse suivi du if
	{
		std::cout << entier << " est un nombre pair ";			/*Tout texte doit être mis entre "guillemets" et ici, puisque l'entier rempli la conditiom, le programme affiche 
																à l'écran que l'entier est pair*/
	}

	else			//Si l'entier ne rempli la condition, il sera un nombre impair. Pas besoin de répéter la condition puisqu'elle est déjà citée plus haut. 
	{
		std::cout << entier << " est un nombre impair ";		//Puisque l'entier ne rempli pas la condition, le programma affiche à l'écran que l'entier est impair
	}

}	// Cette accolade ferme le bloc d'instruction de mon programme 

/*
PLAN DE TEST 

				Entier									Pair OU impair
	(Entier entré par l'utilisateur)	(Message que mon programme affiche à l'écran)
					0								0 est un nombre pair
					-6								-6 est un nombre pair
					-25								-25 est un nombre impair
					563								563 est un nombre impair
					718								718 est un nombre pair

*/