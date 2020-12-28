#ifndef TIMECHANGERULES_CPP
#define TIMECHANGERULES_CPP

//  Timezones source:
//  https://www.timeanddate.com/time/zones/


#include <Timezone.h>

//  Hawaii
TimeChangeRule HST = {"HST", Fourth, Sun, Mar, 2, -600};
Timezone Hawaii(HST);

//  Alaska
TimeChangeRule AKDT = { "AKDT", Second, Sun, Mar, 2, -480 };
TimeChangeRule AKST = { "AKST", First, Sun, Nov, 2, -540 };
Timezone Alaska(AKDT, AKST);

//  Pacifica
TimeChangeRule PDT = { "PDT", Second, Sun, Mar, 2, -420 };
TimeChangeRule PST = { "PST", First, Sun, Nov, 2, -480 };
Timezone Pacifica(PDT, PST);

//  Central US
TimeChangeRule CDT = { "CDT", Second, Sun, Mar, 2, -300 };
TimeChangeRule CST = { "CST", First, Sun, Nov, 2, -360 };
Timezone CentralUS(CDT, CST);

//  Mountain US
TimeChangeRule MDT = { "MDT", Second, Sun, Mar, 2, -360 }; 
TimeChangeRule MST = { "MST", First, Sun, Nov, 2, -420 }; 
Timezone MountainUS(MDT, MST);

//  Eastern US
TimeChangeRule EDT = { "EDT", Second, Sun, Mar, 2, -240 };
TimeChangeRule EST = { "EST", First, Sun, Nov, 2, -300 };
Timezone EasternUS(EDT, EST);

//  Cayman Islands
TimeChangeRule CIST = { "CIST", First, Sun, Nov, 2, -300 };
Timezone CaymanIslands(CIST);

//  Cuba
TimeChangeRule CubaCDT = {"CDT", Second, Sun, Mar, 0, -240};
TimeChangeRule CubaCST = {"CST", First,  Sun, Nov, 0,  -300};
Timezone Cuba(CubaCDT, CubaCST);

//  Argentina
TimeChangeRule ART = {"ART", First, Sun, Apr, 3, -180};
Timezone Argentina(ART);

//  Brasilia
TimeChangeRule BRT = {"BRT", First, Sun, Apr, 3, -180};
Timezone Brasilia(BRT);

//  Azores
TimeChangeRule AZOST = {"AZOST", Fourth, Sun, Mar, 0, 0};
TimeChangeRule AZOT = {"AZOT", Fourth,  Sun, Oct, 1,  -60};
Timezone Azores(AZOST, AZOT);

//  Western Europe
TimeChangeRule WEST = {"WEST", Fourth, Sun, Mar, 2, 60};
TimeChangeRule WET = {"WET", Fourth,  Sun, Oct, 2,  0};
Timezone WesternEurope(WEST, WET);

//  Central Europe
TimeChangeRule CEST = {"CEST", Fourth, Sun, Mar, 2, 120};
TimeChangeRule CET = {"CET", Fourth,  Sun, Oct, 2,  60};
Timezone CentralEurope(CEST, CET);

//  Eastern Europe
TimeChangeRule EEST = {"EEST", Fourth, Sun, Mar, 2, 180};
TimeChangeRule EET = {"EET", Fourth,  Sun, Oct, 2,  120};
Timezone EasternEurope(EEST, EET);

//  Further-Eastern Europe
TimeChangeRule FET = {"FET", Fourth, Sun, Mar, 2, 180};
Timezone FurtherEasternEurope(FET);

//  Moscow
TimeChangeRule MSK = {"MSK", Fourth, Sun, Mar, 2, 240};
TimeChangeRule MSD = {"MSD", Fourth,  Sun, Oct, 2,  180};
Timezone Moscow(MSK, MSD);

//  Turkey
TimeChangeRule TRT = {"TRT", Fourth, Sun, Mar, 2, 180};
Timezone Turkey(TRT);

//  Maldives
TimeChangeRule MVT = {"MVT", First, Sun, Apr, 3, 300};
Timezone Maldives(MVT);

//  Pakistan
TimeChangeRule PKT = {"PKT", First, Sun, Apr, 3, 300};
Timezone Pakistan(PKT);

//  India
TimeChangeRule IST = {"IST", First, Sun, Apr, 3, 330};
Timezone India(PKT);

//  Western Indonesia
TimeChangeRule WIB = {"WIB", First, Sun, Apr, 3, 420};
Timezone WesternIndonesia(WIB);

//  Central Indonesia
TimeChangeRule WITA = {"WITA", First, Sun, Apr, 3, 480};
Timezone CentralIndonesia(WITA);

//  Eastern Indonesia
TimeChangeRule WIT = {"WIT", First, Sun, Apr, 3, 540};
Timezone EasternIndonesia(WIT);

//  Hong Kong
TimeChangeRule HKT = {"HKT", First, Sun, Apr, 3, 480};
Timezone HongKong(HKT);

//  Malaysia 
TimeChangeRule MYT = {"MYT", First, Sun, Apr, 3, 480};
Timezone Malaysia(MYT);

//  Philippines 
TimeChangeRule PHT = {"PHT", First, Sun, Apr, 3, 480};
Timezone Philippines(PHT);

//  Singapore 
TimeChangeRule SGT = {"SGT", First, Sun, Apr, 3, 480};
Timezone Singapore(SGT);

//  Japan 
TimeChangeRule JST = {"JST", First, Sun, Apr, 3, 540};
Timezone Japan(JST);

//  Korea 
TimeChangeRule KST = {"KST", First, Sun, Apr, 3, 540};
Timezone Korea(KST);

//  Eastern Australia
TimeChangeRule AEST = {"AEST", First, Sun, Apr, 3, 600};
TimeChangeRule AEDT = {"AEDT", First,  Sun, Oct, 2,  660};
Timezone EasternAustralia(AEST, AEDT);

//  New Zealand
TimeChangeRule NZDT = {"NZDT", First, Sun, Apr, 3, 780};
TimeChangeRule NZST = {"NZST", First,  Sun, Oct, 2,  720};
Timezone NewZealand(NZDT, NZST);


Timezone* timezones[] = {
    &Hawaii, &Alaska, &Pacifica, &CentralUS, &MountainUS, &EasternUS, &CaymanIslands, &Cuba, &Argentina, &Brasilia, &Azores,
    &WesternEurope, &CentralEurope, &EasternEurope, &FurtherEasternEurope, &Moscow,
    &Turkey, &Maldives, &Pakistan, &India, &WesternIndonesia, &CentralIndonesia, &EasternIndonesia, 
    &HongKong, &Malaysia, &Philippines, &Singapore, &Japan, &Korea, &EasternAustralia, &NewZealand
    };
String tzDescriptions[] = {
    "Hawaii", "Alaska", "Pacifica", "Central US", "Mountain US", "Eastern US", "Cayman Islands", "Cuba", "Argentina", "Brasilia", "Azores",
    "Western Europe", "Central Europe", "Eastern Europe", "Further Eastern Europe", "Moscow",
    "Turkey", "Maldives", "Pakistan", "India", "Western Indonesia", "Central Indonesia", "Eastern Indonesia",
    "HongKong", "Malaysia", "Philippines", "Singapore", "Japan", "Korea", "Eastern Australia", "New Zealand"   
    };

#endif