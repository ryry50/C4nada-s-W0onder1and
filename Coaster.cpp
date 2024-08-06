#include <iostream>

using namespace std;

int main()
{
    int ride;
    cout << "Hello fellow user, Name a ride at" << endl;
    cout << "Canada's Wonderland and I will describe/opinionate on it" << endl;


    while (ride != 20) {
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "Rides: 1: Leviathan, 2: Behemoth, 3: YukonStriker, 4: DragonFyre," << endl;
    cout << "5: FlightDeck, 6: Minebuster, 7: MountainGuardian, 8: Bat, 9: Vortex," << endl;
    cout << "10: ThunderRun, 11: TimeWarp, 12: StuntCoaster, 13: WildBeast, 14: Fly," << endl;
    cout << "15: TaxiJam, 16: SilverStreak, 17: SnoopysRacingRailway, 18: GhosterCoaster" << endl;
    cout << "Type '20' when done" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
        cout << "name a ride: " << endl;
        cin >> ride;
        cout << "-------------------------------------------------------------------------------------------" << endl;

        switch(ride){
        case 1:
            cout << "Leviathan" << endl;
            cout << "Leviathan's drop changed my life as a coaster fan" << endl;
        break;

        case 2:
            cout << "Behemoth" << endl;
            cout << "A MUST-ride in Canada's wonderland, especially the endless amount of airtime hills" << endl;
        break;

        case 3:
            cout << "Yukon Striker" << endl;
            cout << "The tallest dive coaster has some very cool things going with it," << endl;
            cout << "The pause before dropping, the inversions, the conveyor belt item boxes, so cool" << endl;
        break;

        case 4:
            cout << "Dragon Fyre" << endl;
            cout << "Classic corkscrew! also, ow my back!" << endl;
        break;
        case 5:
            cout << "Flight deck" << endl;
            cout << "Not the smoothest coaster, but it serves a good enough experience, especially at night." << endl;
            cout << "(every coaster enthusiast is gonna hate me)" << endl;
        break;
        case 6:
            cout << "Mighty Canadian Minebuster" << endl;
            cout << "A classic wooden coaster with a lot of airtime hills but its a spine buster" << endl;
            cout << "and loud" << endl;
        break;
        case 7:
            cout << "Mountains Guardian" << endl;
            cout << "The shooting kinda sucks because its not always that easy to know where you're shooting, even with different colors." << endl;
            cout << "The <deducted> is cool though." << endl;
        break;
        case 8:
            cout << "bat" << endl;
            cout << "Nice and spooky experience, but the cobra roll could be smoother" << endl;
        break;
        case 9:
            cout << "Vortex" << endl;
            cout << "SWINGING ON A COSTER IS CRAZY!" << endl;
        break;
        case 10:
            cout << "Thunder Run" << endl;
            cout << "Is that a roller coaster?" << endl;
        break;
        case 11:
            cout << "TimeWarp" << endl;
            cout << "The flying feeling is cool but" << endl;
            cout << "BRO, FIX THE RIDE IT IS A HEADACHE AND IT CHOKED ME!" << endl;
        break;
        case 12:
            cout << "Backlot Stunt coaster" << endl;
            cout << "Great launch coaster, but I wish it still had effects" << endl;
            cout << "also the only launch coaster in the park I could go on" << endl;
        break;
        case 13:
            cout << "Wilde Beast" << endl;
            cout << "It has airtime..... But At the cost of roughness" << endl;
        break;
        case 14:
            cout << "Fly" << endl;
            cout << "A wild mouse.....or wild fly...turns are fun" << endl;
        break;
        case 15:
            cout << "Taxi Jam" << endl;
            cout << "LACK OF RIDE" << endl;
        break;
        case 16:
            cout << "SilverStreak" << endl;
            cout << "LACK OF RIDE" << endl;
        break;
        case 17:
            cout << "Snoopy's Racing Railway" << endl;
            cout << "LACK OF RIDE" << endl;
        break;
        case 18:
            cout << "Ghoster Coaster" << endl;
            cout << "LACK OF RIDE" << endl;
        break;
        case 19:
            cout << "Beware!" << endl;
        break;
        case 20:
            cout << "" << endl;
        break;
        default:
            cout << "NOT A RIDE!" << endl;
        break;
        }
    }

    cout << "Thank you for playing!" << endl;


    return 0;
}