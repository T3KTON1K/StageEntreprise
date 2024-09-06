/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Entreprise
 *
 * \author T3KTON1K
 * \version 0.2
 * \date   September 2024
 *
 * Programme Cpp permettant de creer des objets pour décrire les stages
 *********************************************************************/

#include "mission.h"

using namespace std;


/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Ville = inconnu
 *
 */
Mission::Mission() {

    this->nbPersonne = "5";
    this->descriptifMission = "Maintenance du groupe CHBA (Auray & Vannes)";
    this->nbHeure = "150h";

}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'Mission
 */
Mission::Mission(std::string personne, std::string descriptif, std::string heure); {
    this->nbPersonne = personne;

    this->descriptifMission = descriptif;

    this->nbHeure = heure;
}


/**
 * \brief Destructeur
 *
 */
Mission::~Mission() {

    cout << "Destrcution de l'entreprise " << this->nbPersonne << " " << this->descriptifMission << " " << this->nbHeure << endl;

}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Mission::Mission(const Mission& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->nbPersonne = entre.nbPersonne;
    this->descriptifMission = entre.descriptifMission;
    this->nbHeure = entre.nbHeure;

}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Mission& Mission::operator = (const Mission& entre)
{
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nbPersonne = entre.nbPersonne;
        this->descriptifMission = entre.descriptifMission;
        this->nbHeure = entre.nbHeure;
    }
    return *this;
}



/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
std::string Mission::getnbPersonne()
{
    return this->nbPersonne;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */
void Mission::setnbPersonne(std::string nouveauPersonnel) {
    this->nbPersonne = nouveauPersonnel;
}

/**
 * \brief Accesseur de l'attribut villeEntreprise
 *
 * \return Nom de l'entreprise
 */
std::string Mission::getdescriptifMission() {
    return this->descriptifMission;
}


/**
 * \brief Mutateur de l'attribut villeEntreprise
 *
 * \param nouvelleVille nouvelle ville de l'entreprise
 */
void  Mission::setdescriptifMission(std::string nouvelleMission) {
    this->descriptifMission = nouvelleMission;
}


/**
 * \brief Accesseur de l'attribut villeEntreprise
 *
 * \return Nom de l'entreprise
 */
std::string Mission::getnbHeure() {
    return this->nbHeure;
}


/**
 * \brief Mutateur de l'attribut villeEntreprise
 *
 * \param nouvelleVille nouvelle ville de l'entreprise
 */
void  Mission::setnbHeure(std::string nouvelleHeure) {
    this->nbHeure = nouvelleHeure;
}
