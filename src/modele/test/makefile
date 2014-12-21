##############################
#MAKEFILE DE TEST MODELE
##############################

#Compilateur
CC=g++

#Options de compilation des .c
CFLAGS=-Wall

#Nom de l'executable final
EXEC=testModele

#Noms des dossiers dont le modèle a besoin pour compiler
SOURCE_FOLDER = ../source

###########################
#Résolutions des inclusions

#Dossiers où se trouvent les .h des sources /rapport à la position du makefile
INCLUDEPATH=-I ../header

#Import des librairies externes
###########################

#Nom du dossier de build (stockage des .o)
BUILD_DIR = ../../../build/source

#Recherche de tous les fichiers .c a tester
SRC = $(shell ls ../source)  
CMAIN = $(wildcard *.cpp)
MAIN = $(CMAIN:.cpp=.o)

#Création de la liste des dépendances (.o)
LST= $(foreach one, $(SRC), $(BUILD_DIR)/$(one))
OBJ= $(LST:.cpp=.o)

##############################
#COMMANDES DE COMPILATION
##############################

#Construction de l'exécutable de test
all: 					$(EXEC)

#construction des .o de test si c'est pas déja fais
$(EXEC):				$(OBJ) $(MAIN)
						@echo ----------LINKAGE----------
						@$(CC) -o $@ $^ $(LDFLAGS) 
						@echo ------------END------------

#procédure .c -> .o
%.o: 					%.cpp
						@$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDEPATH) 


#Procédure simple de compilation .c -> .o prise en charge des dossiers d'arrivée/départ
$(BUILD_DIR)/%.o: 		$(SOURCE_FOLDER)/%.cpp
						@echo ----------Compilation----------
						@echo $<
						@$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDEPATH) 
						@echo --------------END--------------

#pour nettoyer le .o du test
#Cas Windows
ifeq ($(OS),Windows_NT)
clean:
						@-del $(EXEC).o 
else
#Cas Linux	
clean:
						@-rm -rf $(EXEC).o
endif						

#pour lancer l'exécutable final
#Cas Windows
ifeq ($(OS),Windows_NT)
run:
						@$(EXEC)
else
#Cas Linux	
run:
						@./$(EXEC)
endif