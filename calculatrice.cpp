#include <iostream>
#include <string>


void afficheNom(){// Affiche CALCULATRICE nom de l'app
    std::cout<<"                |——————————————|" << std::endl;
    std::cout<<"                | CALCULATRICE |" << std::endl;
    std::cout<<"                |______________|" << std::endl;
}

void choixOperation(){
    std::cout<<"             |—————————————————————|" << std::endl;
    std::cout<<"             |1: Addition..........|" << std::endl;
    std::cout<<"             |2: Multiplication....|" << std::endl;
    std::cout<<"             |3: Soustraction......|" << std::endl;
    std::cout<<"             |4: Division..........|" << std::endl;
    std::cout<<"             |5: Quitter...........|" << std::endl;
  


}

float addition(float nombre1, float nombre2){
    float resultat = nombre1 + nombre2;
    return resultat;
}

float multiplication(float nombre1, float nombre2){
    float resultat = nombre1 * nombre2;
    return resultat;
}

float soustraction(float nombre1, float nombre2){
    float resultat = nombre1 - nombre2;
    return resultat;
}

float division(float nombre1, float nombre2){
    //If qui permet de proteger en cas de division par 0
    if(nombre2 == 0) {
        std::cout << "Erreur : Division par zéro !\n";
        return 0;
    }
    return nombre1 / nombre2;

}

int main(){
    afficheNom();
    int choix;
    float nombre1, nombre2;
    
    do
    {
        choixOperation();
        std::cout << " > ";
        std::cin >> choix;

        if (choix == 1) // Addition
        {
            //Demande d'entrer les deux nombres
            std::cout << " > ";
            std::cin >> nombre1;
            std::cout << " > ";
            std::cin >> nombre2;
            //Appel de la fonction et retourne le resultat
            float resultat = addition(nombre1, nombre2);
            std::cout << "\n";
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
            std::cout << "|Resultat : " << resultat << std::endl;
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
        }
        else if (choix == 2)// Multiplication
        {
            //Demande d'entrer les deux nombres
            std::cout << " > ";
            std::cin >> nombre1;
            std::cout << " > ";
            std::cin >> nombre2;
            //Appel de la fonction et retourne le resultat
            float resultat = multiplication(nombre1, nombre2);
            std::cout << "\n";
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
            std::cout << "|Resultat : " << resultat << std::endl;
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
        }
        else if (choix == 3)// Soustraction
        {
            //Demande d'entrer les deux nombres
            std::cout << " > ";
            std::cin >> nombre1;
            std::cout << " > ";
            std::cin >> nombre2;
            //Appel de la fonction et retourne le resultat
            float resultat = soustraction(nombre1, nombre2);
            std::cout << "\n";
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
            std::cout << "|Resultat : " << resultat << std::endl;
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
        }
        else if (choix == 4)// Division
        {
            //Demande d'entrer les deux nombres
            std::cout << " > ";
            std::cin >> nombre1;
            std::cout << " > ";
            std::cin >> nombre2;
            //Appel de la fonction et retourne le resultat
            float resultat = division(nombre1, nombre2);
            std::cout << "\n";
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
            std::cout << "|Resultat : " << resultat << std::endl;
            std::cout << "|–––––––––––––––––––––––––––––|" << std::endl;
        }
        else if(choix == 5) {

            std::cout << "Au revoir !\n";
        }
        else {
            std::cout << "Choix invalide !\n";
        }
    
    } while (choix != 5);


    return 0;
}