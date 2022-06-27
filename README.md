# Consignes LVGL

Ce projet a été fait avec SquareLine Studio (pour la partie GUI) et peut-être exporté en C/C++. 

## Pour commencer 
- Télécharger la version n°2 du projet : `git clone --single-branch --branch version2 https://github.com/oceaneplly/lvgl_connected_object_LA1.git`;
- Aller dans le dossier lvgl_connected_object_LA1 qui vient d'être crée : `cd lvgl_connected_object_LA1`;
- Créer un dossier build : `mkdir build`;
- Se mettre dans le dossier build : `cd build`;
- Exécuter la commande `cmake ..` pour avoir un fichier Makefile adapté à votre système embarqué;
- Pour avoir le fichier final (`display`), il faut taper la commande `make -j4`;
- Le fichier `display` se trouve dans le dossier `/bin`, pour l'exécuter il faut lancer la commande `./display`.
