/*****************************************************************//**
 * \file   main.cpp
 * \brief  Fichier principal
 *
 * \author T3KTON1K
 * \version 0.2
 * \date   September 2024
 *
 * Programme principal qui utilise les objets et class d'autres fichiers
 *********************************************************************/

#include <iostream>
#include "entreprise.h"
#include "mission.h"

int main() {
    // Partie Entreprise (inchangée)
    std::cout << "-------------------------" << std::endl;

    Entreprise e1;
    std::cout << "Nom de l'entreprise : " << e1.getNomEntreprise() << std::endl;
    std::cout << "Ville de l'entreprise : " << e1.getVilleEntreprise() << std::endl;
    
    std::cout << "-------------------------" << std::endl;
    
    // Partie Mission
    Mission m1;
    std::cout << "Mission :" << std::endl;
    std::cout << "Nombre de personnes : " << m1.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m1.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m1.getNbHeure() << std::endl;

    std::cout << "-------------------------" << std::endl;

    Mission m2("1", "Changement de Poste", "1h/2h par poste");
    std::cout << "\nMission 1 :" << std::endl;
    std::cout << "Nombre de personnes : " << m2.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m2.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m2.getNbHeure() << std::endl;
    
    std::cout << "-------------------------" << std::endl;

    m1.setNbPersonne("2");
    m1.setDescriptifMission("Prise en main a Distance");
    m1.setNbHeure("~0,30min/jour");
    std::cout << "\nMission2 :" << std::endl;
    std::cout << "Nombre de personnes : " << m1.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m1.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m1.getNbHeure() << std::endl;

    std::cout << "-------------------------" << std::endl;

    Mission m3("2", "Brassage", "2");
    std::cout << "\nMission 1 :" << std::endl;
    std::cout << "Nombre de personnes : " << m2.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m2.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m2.getNbHeure() << std::endl;

    std::cout << "-------------------------" << std::endl;

    m1.setNbPersonne("2");
    m1.setDescriptifMission("Amenagement/Optimisation de l'espace de travail");
    m1.setNbHeure("~0,30min");
    std::cout << "\nMission2 :" << std::endl;
    std::cout << "Nombre de personnes : " << m1.getNbPersonne() << std::endl;
    std::cout << "Descriptif de la mission : " << m1.getDescriptifMission() << std::endl;
    std::cout << "Nombre d'heures : " << m1.getNbHeure() << std::endl;
    std::cout << "-------------------------" << std::endl;

    return 0;
}




