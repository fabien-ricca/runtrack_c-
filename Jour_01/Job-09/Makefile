# Nom du compilateur
CC=gcc

# Options de compilation
CFLAGS=-Wall -Wextra -std=c++17

# Nom de l'exécutable à générer
EXEC=app

# Dossier contenant les fichiers sources
SRCDIR=src

# Dossier pour les fichiers objets compilés
OBJDIR=obj

# Trouve tous les fichiers .cpp dans SRCDIR (par exemple, src/*.cpp)
SOURCES=$(wildcard $(SRCDIR)/*.cpp)

# Remplace le dossier et l'extension des sources par OBJDIR et .o pour les fichiers objets
OBJECTS=$(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Cible principale
all: $(EXEC)

# Règle pour lier l'exécutable
$(EXEC): $(OBJECTS)
	$(CC) $^ -o $@ -lstdc++

# Règle pour compiler les fichiers sources en fichiers objets
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie le projet (supprime les fichiers objets et l'exécutable)
clean:
	rm -rf $(OBJDIR) $(EXEC)
