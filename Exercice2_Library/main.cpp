#include "Library.hpp"
#include <iostream>

int main() {
    Library biblio;

    biblio.ajouterLivre(Book("Le Petit Prince", "Saint-Exupery", "978-2070612758", 1943));
    biblio.ajouterLivre(Book("L'Etranger", "Albert Camus", "978-2070360024", 1942));
    biblio.ajouterLivre(Book("Doublon", "X", "978-2070612758", 2000)); // ISBN mkarrar

    biblio.listerLivres();

    const Book* b = biblio.trouverParISBN("978-2070360024");
    if (b != nullptr) {
        std::cout << "\nTrouve : ";
        b->afficher();
    } else {
        std::cout << "\nLivre introuvable.\n";
    }

    return 0;
}
