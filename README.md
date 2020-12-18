# Übungen zu Arrays in C++

[The Fearless Engineer : `C++`](https://www.thefearlessengineer.com/cpp-kurs)

##
## Worum geht es?

Dieses Projekt ist Teil eines Online-Kurses zur Programmiersprache C++. Hier geht es um die Verwendung von Arrays in einer und in zwei Dimensionen. In der Datei `main.cpp` sind zwei größere Aufgaben enthalten, die dich im Umgang mit Arrays sicher werden lassen.

Wenn du alle Aufgaben gelöst hast, dann kannst du ASCII-Art wie diese im Terminal ausgeben:

```text
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@///@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/////////////@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/////////////////////@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@///////////////////////////////@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@///////////////////////////////////////@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@///////////////////////////////////////////////@@@@@@@@@@@@@@@@
@@@@@@@@@@@@/////////////////////////////////////////////////////////@@@@@@@@@@@
@@@@@@@@/////////////////////////////////////////////////////////////////@@@@@@@
@@@@///////////////////////////                   ///////////////////////////@@@
@/////////////////////////                             ////////////////////////@
@//////////////////////                                   /////////////////%%%%%
////////////////////                                         //////////%%%%%%%%%
//////////////////                                            .///#%%%%%%%%%%%%%
/////////////////                   /////////                 %%%%%%%%%%%%%%%%%%
////////////////                /////////////////         %%%%%%%%%%%%%%%%%%%%%%
///////////////              //////////////////////. *%%%%%%%%%%%%%%%%%%%%%%%%%%
//////////////              /////////////////////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//////////////             //////////////////%%%%%%%%%%%%%%%%   %%%%%%%%   %%%%%
//////////////             /////////////(%%%%%%%%%%%%%%%%%         %%         %%
//////////////             /////////%%%%%%%%%%%%%%%%%%%%%%%%%   %%%%%%%%   %%%%%
//////////////              ////%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
///////////////              %%%%%%%%%%%%%%%%%%%%%%/ #%%%%%%%%%%%%%%%%%%%%%%%%%%
////////////////                %%%%%%%%%%%%%%%%%         %%%%%%%%%%%%%%%%%%%%%%
/////////////////                   %%%%%%%%%                 %%%%%%%%%%%%%%%%%%
//////////////(%%%                                            .%%%%%%%%%%%%%%%%%
//////////%%%%%%%%%%                                         %%%%%%%%%%%%%%%%%%%
@/////%%%%%%%%%%%%%%%%%                                   %%%%%%%%%%%%%%%%%%%%%%
@/%%%%%%%%%%%%%%%%%%%%%%%%                             %%%%%%%%%%%%%%%%%%%%%%%%%
@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%                   %%%%%%%%%%%%%%%%%%%%%%%%%%%@@@
@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@
@@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@
@@@@@@@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%%%%%%%%%%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
```

Falls du nicht mehr weiter kommst, dann findest du im Ordner `solution` eine ZIP-Datei, in der die Musterlösung enthalten ist. Du kannst die Datei mit den folgenden Befehlen im Terminal entpacken:

```text
cd solution/
unzip solution.zip 
```

Nach dem Entpacken findest du im Ordner `solutions` die entpackte Quellcode-Datei mit den Lösungen.

*Hinweis*: Das zugehörige Begleitheft inkl. der Links zu den Videos findest du [hier](https://go.tfe.academy/2012047).

---

## Wie kann ich den Code im Projekt nutzen?

### **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. Um die jeweiligen Programme zu kompilieren und auszuführen, musst du nur den jeweiligen Befehl im Terminal eingeben.

1. **Kompilieren** (`main.cpp`) :  
`g++ -std=c++17 -o binaries/main main.cpp`

2. **Ausführen** :
`./binaries/main

*Hinweis:* Dateinamen für ASCII-Art können im Terminal im Format `./data/ascii-art-1.txt` eingegeben werden.

### *Variante B* : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen.

Dazu sind die folgenden Schritte erforderlich:

0. Nur für Windows: Installation des "Windows Terminal" --> [go.tfe.academy/2008278](https://go.tfe.academy/2008278)

1. Klonen des GitHub-Repos oder Download als ZIP (`master` branch)--> [go.tfe.academy/2011156](https://go.tfe.academy/2011156)

2. Installation von Entwicklerwerkzeugen : Die Anleitungen für die erforderlichen Tools `Visual Studio Code` und `gcc` findest du unter [Tools für die lokale Installation](#Tools-für-die-lokale-Installation).

3. Datei mit dem gewünschten Quellcode in VS Code öffnen und mit CodeRunner ausführen

**Hinweis:** Da die lokale Installation schnell zu Fehlern führen kann, wird Einsteigern die Variante A empfohlen.

## Tools für die lokale Installation

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum lokalen Ausführen des Codes wie in **Variante B** beschrieben erforderlich sind.

* **gcc/g++** >= 5.4 
	* Linux: gcc / g++ ist standardmäßig auf den meisten Linux-Distributionen installiert. 
	* Mac: [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: empfohlen wird die Installation von [MinGW](http://www.mingw.org/) 

* **Visual Studio Code**
	* Download [VS Code](https://code.visualstudio.com/download)
	* In VS Code unter "Extensions" die PlugIns "C/C++" und "Code Runner" installieren


Copyright 2020, Dr. Andreas Haja
www.thefearlessengineer.com
