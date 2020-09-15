/*But : Le programme lira le nombre donné par un utilisateur et pourra vérifier qu'il y a 5 chiffres. S'il est bien composé de 5 chiffres, le programme l'affichera à
l'écran verticalement sinon il mentionnera que ce n'est pas un nombre à 5 chiffres.*/
// Auteur : Noémie Lanctôt
// Date : 12/09/2020

#include <iostream>		//FR : Ici, on inclu la bibliothèque qui nous permettra de communiquer avec l'utilisateur (cin, cout, etc.)

int main()	// Dans mon programme --> Valeur entière (integer) et dans ce cas ma fonctione retournera quelque chose,	Main : Fonction principale/porte d’entrée 
{
	//Je déclare ma ou mes variables au début de mon programme. Ici, je déclare que ma variable est un nombre, FR : il sera donc déclarer avec int
	int nombre; 
	// Je déclare aussi mes variables que j'aurai dans ma condition (if) 
	int dizaineDeMille;
	int mille; 
	int centaine;
	int dizaine;
	int unite; 

	setlocale(LC_ALL, "");		// Convertir correctement les accents de Windows à la console et on fini l'instruction par un ; 

	//Au début, je veux que mon programme invite l'utilisateur à donner un nombre à 5 chiffres
	std::cout << " Veuillez inscrir un nombre composé de 5 chiffres : ";

	//Le programme lit le nombre donné par l'utilisateur et réserve de l'espace pour le mémoriser
	std::cin >> nombre; 

	// FR : Le programme doit déterminer si le nombre rempli la condition (5 chiffres)
	if ((nombre >= 10000 && nombre < 100000)|| (nombre <= -10000 && nombre > -100000)) 
	// KM : Excellentes explications qui me montrent que tu comprends bien ce que tu fais, mais essaie d'utiliser juste les notions vues jusqu'à présent.
	// La condition à remplir est plus grand ou égal à 10000 ET plus petit que 100000 et FR : aussi pour inclure les nombres négatif il doit être plus petit ou égal à 10000 et plus grand que 100000
	// && (et)	|| (ou)		>= (Plus grand ou égal)		< (Plus petit)		<= (Plus petit ou égal)		>(Plus grand)
	// Je mets toujours ma condition dans ma parenthèse et j'ai deux conditions alors elles seront chacune dans une parenthèse à l'intérieur de ma parenthèse principale. 
	{
		//Mettre la condition que le nombre doit remplir afin d'être affiché à l'écran
		// FR : J'ai décidé de prendre une solution avec des mathématiques pour facilité l'affichage vertical
		// KM : C'est parfait comme calcul ! Cela fonctionne !!!
		dizaineDeMille = nombre / 10000;
		mille = nombre / 1000 - dizaineDeMille * 10;
		centaine = nombre / 100 - dizaineDeMille * 100 - mille * 10;
		dizaine = nombre / 10 - dizaineDeMille * 1000 - mille * 100 - centaine * 10;
		unite = nombre / 1 - dizaineDeMille * 10000 - mille * 1000 - centaine * 100 - dizaine * 10;

		// FR : Afficher de façon vertical le nombre à 5 chiffres choisi par l'utilisateur
		std::cout << dizaineDeMille << std::endl;	//Le programme affiche à l'écran le 1er chiffre et un ajout de endl pour pouvoir faire un saut de ligne
		std::cout << mille << std::endl;			// Affiche le 2e chiffre
		std::cout << centaine << std::endl;			// Affiche le 3e chiffre
		std::cout << dizaine << std::endl;			// Affiche le 4e nombre
		std::cout << unite;							// Affiche le 5e nombre
	}

	// FR : Si le nombre ne rempli pas la condition, afficher à l'écran que le nombre ne contient pas 5 chiffres 
	else
	{
		std::cout << " Ce nombre ne contient pas 5 chiffres ";		
	}

	return 0;	//ma fonction main retourne à 0 si le programme fonctionne. 


} // Accolade qui ferme le bloc d'instruction 



/*
									PLAN DE TEST 
[Nombre choisi par l'utilisateur]						[Ce que le programme affiche à l'écran]

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
