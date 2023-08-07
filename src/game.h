#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
    int Cathedral, Clergy, CustomsDuty, CustomsDutyRevenue, DeadCitizens;
    int Difficulty, FleeingCitizens, GrainDemand, GrainPrice, GrainReserve;
    int Harvest, IncomeTax, IncomeTaxRevenue, RatsAte;
    int Justice, JusticeRevenue, Land, Marketplaces, MarketRevenue;
    int Merchants, MillRevenue, Mills, NewCitizen, Nobles, OldTitle, Palace;
    int Rats, SalesTax, SalesTaxRevenue, Citizens, SoldiersPay, Soldiers, Title;
    int TransplantedCitizens, Treasury, WhichPlayer, Year, YearOfDeath;
    char City[15], Name[25], TitleName[25];
    float PublicWorks, LandPrice;
    bool InvadeMe, IsBankrupt, IsDead, IWon, FromVatican, NewTitle;
} Player;

// Prototipes
int main(void);
void InitializePlayer(Player *Me, int year, int city, int level, char* name, bool isVatican);
