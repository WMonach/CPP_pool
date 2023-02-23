# CPP_pool

C++ est un langage de programmation compilé permettant la programmation sous
de multiples paradigmes, dont la programmation procédurale, la programmation orientée
objet et la programmation générique. Ses bonnes performances, et sa compatibilité avec le
C en font un des langages de programmation les plus utilisés dans les applications où la
performance est critique (source : Wikipedia).


Ces modules ont pour but de vous introduire à la Programmation Orientée Objet.
Plusieurs langages sont recommandés pour l’apprentissage de l’OOP. Du fait qu’il soit
dérivé de votre bon vieil ami le C, nous avons choisi le langage C++. Toutefois, étant un
langage complexe et afin de ne pas vous compliquer la tâche, vous vous conformerez au
standard C++98.
Nous avons conscience que le C++ moderne est différent sur bien des aspects. Si vous
souhaitez pousser votre maîtrise du C++, c’est à vous de creuser après le tronc commun
de 42 !

CONSIGNES :

Compilation
• Compilez votre code avec c++ et les flags -Wall -Wextra -Werror
• Votre code doit compiler si vous ajoutez le flag -std=c++98
Format et conventions de nommage
• Les dossiers des exercices seront nommés ainsi : ex00, ex01, ... , exn
• Nommez vos fichiers, vos classes, vos fonctions, vos fonctions membres et vos attributs comme spécifié dans les consignes.
• Rédigez vos noms de classe au format UpperCamelCase. Les fichiers contenant
le code d’une classe porteront le nom de cette dernière. Par exemple :
NomDeClasse.hpp/NomDeClasse.h, NomDeClasse.cpp, ou NomDeClasse.tpp.
Ainsi, si un fichier d’en-tête contient la définition d’une classe "BrickWall", son
nom sera BrickWall.hpp.
• Sauf si spécifié autrement, tous les messages doivent être terminés par un retour
à la ligne et être affichés sur la sortie standard.
• Ciao Norminette ! Aucune norme n’est imposée durant les modules C++. Vous
pouvez suivre le style de votre choix. Mais ayez à l’esprit qu’un code que vos pairs
ne peuvent comprendre est un code que vos pairs ne peuvent évaluer. Faites donc
de votre mieux pour produire un code propre et lisible.
Ce qui est autorisé et ce qui ne l’est pas
Le langage C, c’est fini pour l’instant. Voici l’heure de se mettre au C++ ! Par conséquent :
• Vous pouvez avoir recours à quasi l’ensemble de la bibliothèque standard. Donc
plutôt que de rester en terrain connu, essayez d’utiliser le plus possible les versions
C++ des fonctions C dont vous avec l’habitude.
• Cependant, vous ne pouvez avoir recours à aucune autre bibliothèque externe.
Ce qui signifie que C++11 (et dérivés) et l’ensemble Boost sont interdits. Aussi,
certaines fonctions demeurent interdites. Utiliser les fonctions suivantes résultera
3
C++ - Module 05 Répétitions et exceptions
en la note de 0 : *printf(), *alloc() et free().
• Sauf si explicitement indiqué autrement, les mots-clés using namespace <ns_name>
et friend sont interdits. Leur usage résultera en la note de -42.
• Vous n’avez le droit à la STL que dans le Module 08. D’ici là, l’usage
des Containers (vector/list/map/etc.) et des Algorithmes (tout ce qui requiert
d’inclure <algorithm>) est interdit. Dans le cas contraire, vous obtiendrez la note
de -42.
Quelques obligations côté conception
• Les fuites de mémoires existent aussi en C++. Quand vous allouez de la mémoire
(en utilisant le mot-clé new), vous ne devez pas avoir de memory leaks.
• Du Module 02 au Module 08, vos classes devront se conformer à la forme canonique, dite de Coplien, sauf si explicitement spécifié autrement.
• Une fonction implémentée dans un fichier d’en-tête (hormis dans le cas de fonction
template) équivaudra à la note de 0.
• Vous devez pouvoir utiliser vos fichiers d’en-tête séparément les uns des autres.
C’est pourquoi ils devront inclure toutes les dépendances qui leur seront nécessaires. Cependant, vous devez éviter le problème de la double inclusion en les
protégeant avec des include guards. Dans le cas contraire, votre note sera de 0.
Read me
• Si vous en avez le besoin, vous pouvez rendre des fichiers supplémentaires (par
exemple pour séparer votre code en plus de fichiers). Vu que votre travail ne sera
pas évalué par un programme, faites ce qui vous semble le mieux du moment que
vous rendez les fichiers obligatoires.
• Les consignes d’un exercice peuvent avoir l’air simple mais les exemples contiennent
parfois des indications supplémentaires qui ne sont pas explicitement demandées.
• Lisez entièrement chaque module avant de commencer ! Vraiment.
• Par Odin, par Thor ! Utilisez votre cervelle ! ! !
