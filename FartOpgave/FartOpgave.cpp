#include <iostream>
using namespace std;

const float B�DE = 10;
const float KLIP_GR�NSE = 30.0;
const float DOMMER_GR�NSE = 50.0;
const float F�NGSEL_GR�NSE = 100.0;

// Funktion til at beregne hastighedsoverskridelse i procent
float beregnHastighedsoverskridelse(float tilladtHastighed, float aktuelHastighed) {
    return ((aktuelHastighed - tilladtHastighed) / tilladtHastighed) * 100;
}

int main() {
    float tilladtHastighed, aktuelHastighed;

    // Indtastning af den tilladte hastighed og aktuel hastighed
    cout << "Indtast den tilladte hastighed (i km/t): ";
    cin >> tilladtHastighed;
    cout << "Indtast den aktuelle hastighed (i km/t): ";
    cin >> aktuelHastighed;

    // Beregn hastighedsoverskridelse i procent
    float procentOverskridelse = beregnHastighedsoverskridelse(tilladtHastighed, aktuelHastighed);

    // Meld ud afh�ngigt af hastighedsoverskridelsen
    cout << "Hastighedsoverskridelse i procent: " << procentOverskridelse << "% i en " << tilladtHastighed << "'er zone\n" << endl;

    if (procentOverskridelse > F�NGSEL_GR�NSE) {
        cout << " > Personen rykker direkte i f\x91ngsel p""\x86"" vand og br""\x9B""d!\n" << endl;
    }
    else if (procentOverskridelse > DOMMER_GR�NSE) {
        cout << " > Personen skal indkaldes for en dommer!" << endl;
    }
    else if (procentOverskridelse > KLIP_GR�NSE) {
        cout << " > Personen f" << "\x86" << "r et klip i k""\x9B""rekortet.\n" << endl;
    }
    else if (procentOverskridelse > B�DE) {
        cout << " > Personen f""\x86""r en b""\x9B" << "de.\n" << endl;
    }
    else {
        cout << " > Hastigheden er inden for tilladte gr" << "\x91" << "nser.\n" << endl;
    }

    main();
}
