# 🧮 Calculatrice en C++

Une calculatrice en ligne de commande simple et élégante développée en C++ avec interface ASCII stylée.

## 📋 Description

Ce projet est une calculatrice console permettant d'effectuer les quatre opérations mathématiques de base (addition, soustraction, multiplication, division) avec une interface utilisateur propre et intuitive.

## ✨ Fonctionnalités

- ➕ **Addition** : Additionne deux nombres
- ✖️ **Multiplication** : Multiplie deux nombres
- ➖ **Soustraction** : Soustrait deux nombres
- ➗ **Division** : Divise deux nombres avec protection contre la division par zéro
- 🔄 **Menu interactif** : Boucle continue jusqu'à ce que l'utilisateur choisisse de quitter
- ⚠️ **Gestion d'erreurs** : Validation des choix et protection division par zéro
- 🎨 **Interface ASCII stylée** : Affichage propre avec bordures

## 🛠️ Technologies utilisées

- **Langage** : C++
- **Concepts** : Fonctions avec return, boucles do-while, conditions, gestion d'erreurs
- **Bibliothèques** : iostream, string

## 📦 Installation et Compilation

### Prérequis
- Un compilateur C++ (g++, clang++, ou MSVC)
- macOS, Linux ou Windows

### Compilation

**Sur macOS/Linux :**
```bash
g++ -std=c++11 main.cpp -o calculatrice
./calculatrice
```

**Sur Windows :**
```bash
g++ -std=c++11 main.cpp -o calculatrice.exe
calculatrice.exe
```

## 🎯 Comment utiliser

1. Lancez le programme
2. Choisissez une opération dans le menu (1-5)
3. Entrez les deux nombres
4. Le résultat s'affiche
5. Le menu réapparaît pour une nouvelle opération
6. Choisissez 5 pour quitter

## 🎥 Exemple d'utilisation
```
                |——————————————|
                | CALCULATRICE |
                |______________|

             |—————————————————————|
             |1: Addition..........|
             |2: Multiplication....|
             |3: Soustraction......|
             |4: Division..........|
             |5: Quitter...........|

 > 1
 > 10
 > 5

|–––––––––––––––––––––––––––––|
|Resultat : 15
|–––––––––––––––––––––––––––––|
```

## 🔒 Sécurités implémentées

- ✅ Protection contre la division par zéro
- ✅ Gestion des choix invalides dans le menu
- ✅ Boucle continue jusqu'à une sortie explicite

## 🚀 Améliorations futures

- [ ] Validation des entrées (char/string dans les choix)
- [ ] Ajout d'opérations avancées (puissance, racine carrée, modulo)
- [ ] Historique des calculs

## 👨‍💻 Auteur

**athohck** - Projet d'apprentissage C++ (Décembre 2024)

## 📝 Licence

Ce projet est libre d'utilisation à des fins éducatives.

---

⭐ N'hésitez pas à laisser une étoile si ce projet vous plaît !
