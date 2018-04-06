#PLD-COMP  H4111

##Guide d'installation
**A ce jour, la compilation sous Windows ne fonctionne pas. Veuillez utiliser sous macOS ou distribution Linux.**

L'ensemble des librairies sont incluses dans ce projet. Veuillez utiliser le répertoire du projet comme répertoire courant d'exécution.

La compilation du projet utilise CMake. Pour compiler selon les paramètres par défaut du projet, veuillez utiliser la commande

`cmake --build cmake-build-debug --target cmm -- -j 2`

Pour lancer l'exécutable, utilisez la commande

`./cmm <nom fichier à compiler> <options>`

##Guide d'utilisation
Nous avons 