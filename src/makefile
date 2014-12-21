##############################
#OPTIONS DE COMPILATION
##############################

#Compilateur
export CC=g++

#Options de compilation des .c
export CFLAGS=-Wall

#Nom de l'executable final
export EXEC=AudioRampage

#Noms des sous dossiers
export MODEL_DIR=modele
export VIEW_DIR=vue
export CONTROLLER_DIR=controleur

###########################
#Résolutions des inclusions

#Dossiers où se trouvent les .h des sources /rapport à la position des sous makefiles
export INCLUDEPATH=-I header -I ../modele/header -I ../vue/header -I ../controleur/header 

#Import des librairies externes
export LIBINCLUDEPATH=-I ../../include/SDL
###########################

#Nom du dossier de build (stockage des .o)
export BUILD_DIR=../build

#Nom du dossier de stockage de l'exécutable
export RUN_DIR=../bin

#Les options pour l'éditions des liens (IMPORTANT LIBRAIRIE DYNAMIQUE)
export LDFLAGS= -I ../include/SDL -Wl,-R ../lib -L ../lib -lSDL2 

#Cas Windows
ifeq ($(OS),Windows_NT)
    CFLAGS += -D WIN32
    EXEC = AudioRampage.exe
endif

##############################
#COMMANDES DE COMPILATION
##############################

#Construction de l'exécutable
all: 		$(EXEC)

#Appels des sous makefiles pour build les .o puis editer les liens
$(EXEC):	
			@(cd $(MODEL_DIR) && $(MAKE))
			@# @(cd $(VIEW_DIR) && $(MAKE))
			@(cd $(CONTROLLER_DIR) && $(MAKE))
			@# @(cd $(MAIN_DIR) && $(MAKE))
	 		@(cd $(BUILD_DIR) && $(MAKE))

#commande de nettoyage du projet (suppr les .o et executable)
mrproper:	
			@(cd $(BUILD_DIR) && $(MAKE) $@)

#Nettoie les .o du projet
clean:
			@(cd $(BUILD_DIR) && $(MAKE) $@)

#pour lancer l'exécutable final
#Cas Windows
ifeq ($(OS),Windows_NT)
run:
			@cd $(RUN_DIR) && $(EXEC)
else
#Cas Linux	
run:
			@cd $(RUN_DIR); ./$(EXEC)
endif