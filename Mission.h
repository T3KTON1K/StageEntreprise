#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

class Mission 
{
    private:
        /**
         * Membre prive nomEntreprise : contient le nombre de personne qui y travaille
         */
        std::string nbPersonne;
        /**
         * Membre prive descriotifMission : contient la description de la mission
         */
        std::string descriptifMission;
        /**
         * Membre prive nbHeure : contient le nombre d'heure de travail
         */
        std::string nbHeure;


    protected:

    public:
        /*Classe sous forme canonique*/
        Mission();
        ~Mission();
        Mission(const Mission& entre);
        Mission& operator = (const Mission& entre);

        Mission(std::string personne, std::string descriptif, std::string heure);
        std::string getnbPersonne();
        void setnbPersonne(std::string personne);
        std::string getdescriptifMission();
        void setdescriptifMission(std::string descriptif);
        std::string getnbHeure();
        void setnbHeure(std::string heure);
        std::string getEntrepriseMission();
        void setEntrepriseMission(std::string missionentreprise);

};

#endif