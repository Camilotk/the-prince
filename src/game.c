#include "game.h"

char CityList[6][15] = { "Papal State", "Florence", "Genoa", "Veneza", "Milan", "Naples" };
char Titles[8][15] = { "Noble", "Patrician", "Consigliere", "Podestà", "Condottiero", "Doge", "Princeps", "Rex" };
char VaticanTitles[8][25] = { "Subdeacon", "Deacon", "Archdeacon", "Apostolic Protonotary", "Bishop", "Cardinal", "Papal Legate", "Pope" };

void InitializePlayer(Player *Me, int year, int city, int level, char* name, bool isVatican) {
        Me->Cathedral = 0;

    strcpy(Me->City, CityList[city]);

    if(isVatican == true) {
        Me->Clergy = 5;
    } else {
        Me->Clergy = 10;
    };

    Me->CustomsDuty = 25;
    Me->Difficulty = level;
    Me->GrainPrice = 25;
    Me->GrainReserve = 5000;
    Me->IncomeTax = 5;
    Me->IsBankrupt = false;
    Me->IsDead = false;
    Me->IWon = false;
    Me->Justice = 2;
    Me->Land = 10000;
    Me->LandPrice = 10.0;
    Me->FromVatican = isVatican;
    Me->Marketplaces = 0;
    Me->Merchants = 25;
    Me->Mills = 0;

    strcpy(Me->Name, name);

    Me->Nobles = 4;
    Me->OldTitle = 1;
    Me->Palace = 0;
    Me->PublicWorks = 1.0;
    Me->SalesTax = 10;
    Me->Citizens = 2000;
    Me->Soldiers = 25;
    Me->Title = 1;

    if (Me->FromVatican == true) {
        strcpy(Me->TitleName, VaticanTitles[0]);
    } else {
        strcpy(Me->TitleName, Titles[0]);
    };

    Me->Treasury = 1000;
    Me->WhichPlayer = city;
    Me->Year = year;
    Me->YearOfDeath = year + 20 + 35;
}
