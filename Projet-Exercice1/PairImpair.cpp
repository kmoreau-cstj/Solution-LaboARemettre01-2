// But : �crire un programme qui lit un entier, qui le d�termine et qui l'affiche � l'�cran s'il s'agit d'un entier pair ou impair. 
// Auteur : No�mie Lanct�t
// Date : 12/09/2020

#include <iostream>		//Inclus le coffre � outils pour communiquer avec l'utilisateur (cout, cin, etc.) 
// #include est la directive pour inclure les outils de la biblioth�que dans notre programme.

/* Pour commencer un programme il faut cr�er une premi�re fonction qui porte toujours le m�me nom : main pour principal - porte d'entr�e de la fonction
	Une fonction � 3 parties :
	1. Son nom : Ne dois pas commencer par un chiffre et dois avoir une lettre minuscule au commencement. On met les majuscules � la place des espaces et aucun accent
	2. Des parenth�ses obligatoires pour les param�tres
	3. Le titre de la valeur de retour - 2 possibilit�s pour le main
		- Void : Vide/rien, on ne retourne rien
		- Int : Valeur enti�re (integer) et dans ce cas, main retourne quelque chose comme return 0; si tout va bien*/

void main()		// Dans mon programme --> Void puisque ma fonction ne retournera rien		Main : Fonction principale/porte d�entr�e 
{				// Cette accolade ouvre mon bloc d'instruction.

	setlocale(LC_ALL, "");		// Convertir correctement les accents de Windows � la console
								// Chaque instruction dans mon programme doit se terminer par un ; 
	

	//Au d�but du programme on d�clare toujours nos variables. Je d�clare que ma variable est un entier 
	int entier;			//Entier = int. Si j'avais eu une cha�ne de texte comme variable, j'aurais choisi string au lieu de int 

	//Pour commencer, on invite l'utilisateur � entrer un entier
	std::cout << " Veuillez entrer un nombre entier : ";	// std::cout indique que la chaine de caract�res entre guillemets doit �tre affich�e � l'�cran 
															// << les becs de canards sont des caract�res de redirection, texte du c�t� large des becs est redirig� vers l'�cran out

	//Le programme doit ensuite lire l'entier fournis par l'utilisateur pour savoir si c'est un entier pair ou impair 
	std::cin >> entier;

	//Le programme d�termine si l'entier est pair ou impair
	if (entier%2 ==0)		// Si notre entier est un multiple de 2 et qu'il n'ya pas de reste, le nombre sera pair. Ma condition est toujours entre parenth�se suivi du if
	{
		std::cout << entier << " est un nombre pair ";			/*Tout texte doit �tre mis entre "guillemets" et ici, puisque l'entier rempli la conditiom, le programme affiche 
																� l'�cran que l'entier est pair*/
	}

	else			//Si l'entier ne rempli la condition, il sera un nombre impair. Pas besoin de r�p�ter la condition puisqu'elle est d�j� cit�e plus haut. 
	{
		std::cout << entier << " est un nombre impair ";		//Puisque l'entier ne rempli pas la condition, le programma affiche � l'�cran que l'entier est impair
	}

}	// Cette accolade ferme le bloc d'instruction de mon programme 

/*
PLAN DE TEST 

				Entier									Pair OU impair
	(Entier entr� par l'utilisateur)	(Message que mon programme affiche � l'�cran)
					0								0 est un nombre pair
					-6								-6 est un nombre pair
					-25								-25 est un nombre impair
					563								563 est un nombre impair
					718								718 est un nombre pair

*/