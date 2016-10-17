# FTP
logiciel de communication serveur/client

Os :Macosx

comment sa fonctionne:

-make

-./serveur <port>

-./client <ip> <port>     ip = 127.0.0.1 en localhost

-ls : liste le répertoire courant du serveur

• cd : change le répertoire courant du serveur

• get _file_ : récupère le fichier _file_ du serveur vers le client

• put _file_ : envoi le fichier _file_ du client vers le serveur

• pwd : affiche le chemin du répertoire courant sur le serveur

• quit : coupe la connection + sort du programme

