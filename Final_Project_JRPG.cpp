

#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <random>
using namespace std;
//Party Stuff
int Karma = 0;
int PartyLevel = 0;
int TotalGold;
int GoldSpent;
string CurrentArea;
//Leader Stuff
string LeaderName;
string LeaderClass;
string LeaderRace = "Human";
string LeaderAbility1;
string LeaderAbility2;
string LeaderWeapon;
int LWDamage = 0;
//Second Stuff
string SecondName;
string SecondClass;
string SecondRace = "Elf";
string SecondAbility1;
string SecondAbility2;
string SecondWeapon;
int SWDamage = 0;
//Third Stuff
string ThirdName;
string ThirdClass;
string ThirdRace = "Demon";
string ThirdAbility1;
string ThirdAbility2;
string ThirdWeapon;
int TWDamage = 0;
//Fourth Stuff
string FourthName;
string FourthClass;
string FourthRace = "Minotaur";
string FourthAbility1;
string FourthAbility2;
string FourthWeapon;
int FWDamage = 0;
//______________________
bool Breakout = false;
string choice = "";
bool YN = false;
//Inventory Stuff
int potionamount = 0;
int shurikenamount = 0;
string Inventory[] = {"Potions","Shurikens","","","","","","","","", };
//Strength,Toughness,Wisdom,Speed
int LeaderStats[] = { 4,4,4,4 };
int SecondStats[] = { 1,2,6,5 };
int ThirdStats[] = { 6,1,5,3 };
int FourthStats[] = { 6,7,0,2 };
//Race Methods
void Human(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 4;
        LeaderStats[1] = 4;
        LeaderStats[2] = 4;
        LeaderStats[3] = 4;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 4;
        SecondStats[1] = 4;
        SecondStats[2] = 4;
        SecondStats[3] = 4;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 4;
        ThirdStats[1] = 4;
        ThirdStats[2] = 4;
        ThirdStats[3] = 4;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 4;
        FourthStats[1] = 4;
        FourthStats[2] = 4;
        FourthStats[3] = 4;
    }
}
void Elf(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 1;
        LeaderStats[1] = 2;
        LeaderStats[2] = 6;
        LeaderStats[3] = 5;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 1;
        SecondStats[1] = 2;
        SecondStats[2] = 6;
        SecondStats[3] = 5;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 1;
        ThirdStats[1] = 2;
        ThirdStats[2] = 6;
        ThirdStats[3] = 5;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 1;
        FourthStats[1] = 2;
        FourthStats[2] = 6;
        FourthStats[3] = 5;
    }

}
void Lizard(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 5;
        LeaderStats[1] = 2;
        LeaderStats[2] = 0;
        LeaderStats[3] = 6;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 5;
        SecondStats[1] = 2;
        SecondStats[2] = 0;
        SecondStats[3] = 6;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 5;
        ThirdStats[1] = 2;
        ThirdStats[2] = 0;
        ThirdStats[3] = 6;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 5;
        FourthStats[1] = 2;
        FourthStats[2] = 0;
        FourthStats[3] = 6;
    }

}
void Demon(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 6;
        LeaderStats[1] = 1;
        LeaderStats[2] = 5;
        LeaderStats[3] = 3;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 6;
        SecondStats[1] = 1;
        SecondStats[2] = 5;
        SecondStats[3] = 3;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 6;
        ThirdStats[1] = 1;
        ThirdStats[2] = 5;
        ThirdStats[3] = 3;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 6;
        FourthStats[1] = 1;
        FourthStats[2] = 5;
        FourthStats[3] = 3;
    }
}
void Minotaur(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 6;
        LeaderStats[1] = 7;
        LeaderStats[2] = 0;
        LeaderStats[3] = 2;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 6;
        SecondStats[1] = 7;
        SecondStats[2] = 0;
        SecondStats[3] = 2;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 6;
        ThirdStats[1] = 7;
        ThirdStats[2] = 0;
        ThirdStats[3] = 2;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 6;
        FourthStats[1] = 7;
        FourthStats[2] = 0;
        FourthStats[3] = 2;
    }
}
void Dryad(string Character)
{
    if (Character == "Leader")
    {
        LeaderStats[0] = 1;
        LeaderStats[1] = 5;
        LeaderStats[2] = 7;
        LeaderStats[3] = 1;
    }
    else if (Character == "Second")
    {
        SecondStats[0] = 1;
        SecondStats[1] = 5;
        SecondStats[2] = 7;
        SecondStats[3] = 1;
    }
    else if (Character == "Third")
    {
        ThirdStats[0] = 1;
        ThirdStats[1] = 5;
        ThirdStats[2] = 7;
        ThirdStats[3] = 1;
    }
    else if (Character == "Fourth")
    {
        FourthStats[0] = 1;
        FourthStats[1] = 5;
        FourthStats[2] = 7;
        FourthStats[3] = 1;
    }
}
// Ability 1 Methods
int Heavy_Swing(int attack)
{
    return attack * 2;
}
int Flame_Blast(int wisdom)
{
    return wisdom * 2;
}
int Heal(int wisdom)
{
    //amount healed
    return wisdom * 5;
}

//both Ability 1 and 2
int Steal_Health(int damage_dealt)
{
    //returns the health drained
    return round(damage_dealt / 2);
}
//Ability 2 Methods
 int Guardian_Blade(int toughness, int strength)
{
    return toughness + strength;
}
 int Flashstrike(int speed, int strength)
 {
     return speed * strength;
 }
 int Tri_Element(int wisdom, int speed, int strength)
 {
     return (wisdom + speed + strength) * 2;
 }
 int Heavenly_Rain(int wisdom)
 {
     return wisdom * 3;
 }
//Tool Methods
bool YesorNo()
{
    bool yn = false;
    bool escape = false;
    do
    {
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
        {
            yn = true;
            escape = true;
        }
        else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
        {
            yn = false;
            escape = true;
        }
        else
        {
            cout << "Please type a correct option." << endl;
            escape = false;
        }
    } while (escape = false);
    if (yn == true)
    {
        return true;
    }
    else if (yn == false)
    {
        return false;
    }
}
bool Equipabble(string character, string Item)
{
    string Sword = "Sword";
    string Dagger = "Dagger";
    string Staff = "Staff";
    string Rod = "Rod";
    string Axe = "Axe";

    if (character == "Leader")
    {
        if (LeaderClass == "Knight")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Sword.size())) == Sword || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (LeaderClass == "Cleric")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (LeaderClass == "Thief")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Sword.size())) == Sword)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (LeaderClass == "Mage")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Dagger.size())) == Dagger)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (LeaderClass == "Paladin")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (LeaderClass == "Magic Rogue")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    else if (character == "Second")
    {
        if (SecondClass == "Knight")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Sword.size())) == Sword || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (SecondClass == "Cleric")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (SecondClass == "Thief")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Sword.size())) == Sword)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (SecondClass == "Mage")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Dagger.size())) == Dagger)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (SecondClass == "Paladin")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (SecondClass == "Magic Rogue")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

        }
    }
    else if (character == "Third")
    {
        if (ThirdClass == "Knight")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Sword.size())) == Sword || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (ThirdClass == "Cleric")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (ThirdClass == "Thief")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Sword.size())) == Sword)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (ThirdClass == "Mage")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Dagger.size())) == Dagger)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (ThirdClass == "Paladin")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (ThirdClass == "Magic Rogue")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    else if (character == "Fourth")
    {
        if (FourthClass == "Knight")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Sword.size())) == Sword || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (FourthClass == "Cleric")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (FourthClass == "Thief")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Sword.size())) == Sword)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (FourthClass == "Mage")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Dagger.size())) == Dagger)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (FourthClass == "Paladin")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Rod.size())) == Rod || Item.substr(i, (i + Axe.size())) == Axe)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else if (FourthClass == "Magic Rogue")
        {
            for (int i = 0; i < Item.size(); i++)
            {
                if (Item.substr(i, (i + Dagger.size())) == Dagger || Item.substr(i, (i + Staff.size())) == Staff)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}

//Information
void ReadRaces()
{
    cout << "In this world there are several races." << endl;
    cout << "These races benefit each individual and provide perks." << endl;
    cout << "Humans are average at everything, this means they have no weaknesses but also don't having anything that stands out." << endl;
    cout << "Elves are excellent with wisdom and speed but lack in strength and toughness." << endl;;
    cout << "Lizardmen are excel in speed and strength but severely lack in wisdom." << endl;
    cout << "Demons excel at strength, and wisdom but have horrible toughness." << endl;
    cout << "Minotaurs have great strength and toughness but they have small amounts of wisdom." << endl;
    cout << "Dryads have wisdom and toughness on their side but lack strength and speed" << endl;
    cin;
}
void ReadClasses()
{
    cout << "These are the classes that are common in this world." << endl;
    cout << "Knights|| Strengths: Physical Damage || Weaknesses: Poor Magic" << endl;
    cout << "Equipment: Swords and Axes || Special Abilities: Heavy Swing (Attack that deals double damage but takes MP to use)" << endl;
    cout << "Second Ability: Guardian Blade (Attack that combines Toughness and Strength for huge damage but takes alot of MP to use)" << endl;
    cout << "Clerics|| Strengths: Healing Magic and Decent Attacking Magic || Weaknesses: Poor Physical Damage " << endl;
    cout << "Equipment: Staffs and Rods|| Special Abilities: Heal (Heals a party member based on the clerics Wisdom using a little MP)" << endl;
    cout << "Second Ability: Heavenly Rain (Strong Magic damage based on Wisdom using MP)" << endl;
    cout << "Thieves|| Strengths: Quick Damage, Supportive Abilities || Weaknesses: Lowered Toughness" << endl;
    cout << "Equipment: Daggers and Swords || Special Abilities: Steal Health(Attack that drains health from an enemy and gives it to the user, this uses MP) " << endl;
    cout << "Second Ability: Flashstrike (Attack that combines Speed and Strength for the insane damage, uses a lot of MP)" << endl;
    cout << "Mage|| Strengths: Magical Damage || Weaknesses: Poor Strength" << endl;
    cout << "Equipment: Rods and Daggers || Special Abilities: Flame Blast( Magic Damage based on Wisdom that costs little MP to use)" << endl;
    cout << "Second Ability: Tri-Element (Combiines Wisdom, Speed, and Strength together then doubles it dealing massive, costs a huge amount of MP)" << endl;
    cout << "Paladin|| Strengths: Decent Physical Damage and Support Capabilities || Weaknesses: Poor Speed" << endl;
    cout << "Equipment: Axes and Rods|| Special Abilities: Heal (Heals a party member based on the paladins Wisdom using a little MP) " << endl;
    cout << "Second Ability: Guardian Blade (Attack that combines Toughness and Strength for huge damage but takes alot of MP to use)" << endl;
    cout << "Magic Rogue|| Strengths: Good Physical Damage and Magic Damage || Weaknesses: No insane Abilities" << endl;
    cout << "Equipment: Daggers and Staffs|| Special Abilities: Special Abilities: Flame Blast( Magic Damage based on Wisdom that costs little MP to use)" << endl;
    cout << "Second Ability: Steal Health(Attack that drains health from an enemy and gives it to the user, this uses MP)" << endl;
    cin;
}
void Creation()
{
    bool Leave = false;
    bool Selected = false;
    //LeaderCreation
    cout << "What would you like your Leaders name to be?" << endl;
    cin >> LeaderName;
    do
    {
        cout << "Do you want a list of what the Races are before you select your Leaders race?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadRaces();
                Leave = true;
                cout << "Press enter to pick your Leaders Race." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        do
        {
            cout << "Your Leaders race performs a vital role in the story" << endl;
            cout << "Please choose a race for your Leader." << endl;
            cout << "1.Human 2. Elf 3. Lizardman(or Lizardwomen) 4. Demon 5. Minotaur 6. Dryad." << endl;
            cin >> choice;
            if (choice == "1" || choice == "human" || choice == "Human")
            {
                Human("Leader");
                LeaderRace = "Human";
                Selected = true;
            }
            else if (choice == "2" || choice == "elf" || choice == "Elf")
            {
                Elf("Leader");
                LeaderRace = "Elf";
                Selected = true;
            }
            else if (choice == "3" || choice == "Lizardman" || choice == "lizardman" || choice == "Lizardwomen" || choice == "lizardwomen")
            {
                Lizard("Leader");
                LeaderRace = "Lizard Person";
                Selected = true;
            }
            else if (choice == "4" || choice == "demon" || choice == "Demon")
            {
                Demon("Leader");
                LeaderRace = "Demon";
                Selected = true;
            }
            else if (choice == "5" || choice == "Minotaur" || choice == "minotaur" || choice == "mino" || choice == "Mino")
            {
                Minotaur("Leader");
                LeaderRace = "Minotaur";
                Selected = true;
            }
            else if (choice == "6" || choice == "Dryad" || choice == "dryad")
            {
                Dryad("Leader");
                LeaderRace = "Dryad";
                Selected = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Selected = false;
            }
        } while (Selected == false);
        cout << "Your Leaders Race is: " << LeaderRace << ". Are you happy with this selection?" << endl;
        YN = YesorNo();
        if (YN == true)
        {
            Breakout = true;
        }
        else if (YN == false)
        {
            Breakout = false;
        }
    } while (Breakout == false);
    choice == "";
    Breakout == false;
    //Second Creation
    cout << "What would you like your second characters name to be?" << endl;
    cin >> SecondName;
    do
    {
        cout << "Do you want a list of what the Races are before you select your second characters race?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadRaces();
                Leave = true;
                cout << "Press enter to pick your second characters Race." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        do
        {
            cout << "Please choose a race for your second character." << endl;
            cout << "1.Human 2. Elf 3. Lizardman(or Lizardwomen) 4. Demon 5. Minotaur 6. Dryad." << endl;
            cin >> choice;
            if (choice == "1" || choice == "human" || choice == "Human")
            {
                Human("Second");
                SecondRace = "Human";
                Selected = true;
            }
            else if (choice == "2" || choice == "elf" || choice == "Elf")
            {
                Elf("Second");
                SecondRace = "Elf";
                Selected = true;
            }
            else if (choice == "3" || choice == "Lizardman" || choice == "lizardman" || choice == "Lizardwomen" || choice == "lizardwomen")
            {
                Lizard("Second");
                SecondRace = "Lizard Person";
                Selected = true;
            }
            else if (choice == "4" || choice == "demon" || choice == "Demon")
            {
                Demon("Second");
                SecondRace = "Demon";
                Selected = true;
            }
            else if (choice == "5" || choice == "Minotaur" || choice == "minotaur" || choice == "mino" || choice == "Mino")
            {
                Minotaur("Second");
                SecondRace = "Minotaur";
                Selected = true;
            }
            else if (choice == "6" || choice == "Dryad" || choice == "dryad")
            {
                Dryad("Second");
                SecondRace = "Dryad";
                Selected = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Selected = false;
            }
        } while (Selected == false);
        cout << "Your second characters Race is: " << SecondRace << ". Are you happy with this selection?" << endl;
        YN = YesorNo();
        if (YN == true)
        {
            Breakout = true;
        }
        else if (YN == false)
        {
            Breakout = false;
        }
    } while (Breakout == false);
    Breakout = false;
    choice = "";
    //Third Creation
    cout << "What would you like your third characters name to be?" << endl;
    cin >> ThirdName;
    do
    {
        cout << "Do you want a list of what the Races are before you select your third characters race?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadRaces();
                Leave = true;
                cout << "Press enter to pick your third characters Race." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        do
        {
            cout << "Please choose a race for your third character." << endl;
            cout << "1.Human 2. Elf 3. Lizardman(or Lizardwomen) 4. Demon 5. Minotaur 6. Dryad." << endl;
            cin >> choice;
            if (choice == "1" || choice == "human" || choice == "Human")
            {
                Human("Third");
                ThirdRace = "Human";
                Selected = true;
            }
            else if (choice == "2" || choice == "elf" || choice == "Elf")
            {
                Elf("Third");
                ThirdRace = "Elf";
                Selected = true;
            }
            else if (choice == "3" || choice == "Lizardman" || choice == "lizardman" || choice == "Lizardwomen" || choice == "lizardwomen")
            {
                Lizard("Third");
                ThirdRace = "Lizard Person";
                Selected = true;
            }
            else if (choice == "4" || choice == "demon" || choice == "Demon")
            {
                Demon("Third");
                ThirdRace = "Demon";
                Selected = true;
            }
            else if (choice == "5" || choice == "Minotaur" || choice == "minotaur" || choice == "mino" || choice == "Mino")
            {
                Minotaur("Third");
                ThirdRace = "Minotaur";
                Selected = true;
            }
            else if (choice == "6" || choice == "Dryad" || choice == "dryad")
            {
                Dryad("Third");
                ThirdRace = "Dryad";
                Selected = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Selected = false;
            }
        } while (Selected == false);
        cout << "Your third characters Race is: " << ThirdRace << ". Are you happy with this selection?" << endl;
        YN = YesorNo();
        if (YN == true)
        {
            Breakout = true;
        }
        else if (YN == false)
        {
            Breakout = false;
        }
    } while (Breakout == false);
    Breakout = false;
    choice = "";
    //Fourth Creation
    cout << "What would you like your last characters name to be?" << endl;
    cin >> FourthName;
    do
    {
        cout << "Do you want a list of what the Races are before you select your last characters race?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadRaces();
                Leave = true;
                cout << "Press enter to pick your last characters Race." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        do
        {
            cout << "Please choose a race for your last character." << endl;
            cout << "1.Human 2. Elf 3. Lizardman(or Lizardwomen) 4. Demon 5. Minotaur 6. Dryad." << endl;
            cin >> choice;
            if (choice == "1" || choice == "human" || choice == "Human")
            {
                Human("Fourth");
                FourthRace = "Human";
                Selected = true;
            }
            else if (choice == "2" || choice == "elf" || choice == "Elf")
            {
                Elf("Fourth");
                FourthRace = "Elf";
                Selected = true;
            }
            else if (choice == "3" || choice == "Lizardman" || choice == "lizardman" || choice == "Lizardwomen" || choice == "lizardwomen")
            {
                Lizard("Fourth");
                FourthRace = "Lizard Person";
                Selected = true;
            }
            else if (choice == "4" || choice == "demon" || choice == "Demon")
            {
                Demon("Fourth");
                FourthRace = "Demon";
                Selected = true;
            }
            else if (choice == "5" || choice == "Minotaur" || choice == "minotaur" || choice == "mino" || choice == "Mino")
            {
                Minotaur("Fourth");
                FourthRace = "Minotaur";
                Selected = true;
            }
            else if (choice == "6" || choice == "Dryad" || choice == "dryad")
            {
                Dryad("Fourth");
                FourthRace = "Dryad";
                Selected = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Selected = false;
            }
        } while (Selected == false);
        cout << "Your last characters Race is: " << FourthRace << ". Are you happy with this selection?" << endl;
        YN = YesorNo();
        if (YN == true)
        {
            Breakout = true;
        }
        else if (YN == false)
        {
            Breakout = false;
        }
    } while (Breakout == false);
    Breakout = false;
    choice = "";
    cout << "The next step is to choose your characters classes." << endl;
    cout << " Classes are extremely important so take your time because you can only pick once." << endl;
    //Leader Class
    do
    {
        cout << "Do you want a list of what the Classes are before you select your Leaders class?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadClasses();
                Leave = true;
                cout << "Press enter to pick your Leaders Class." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        
            cout << "Please choose a class for your Leader." << endl;
            cout << "1.Knight 2.Cleric 3.Thief 4.Mage 5.Paladin 6.Magic Rogue." << endl;
            cin >> choice;
            if (choice == "1" || choice == "Knight" || choice == "knight")
            {
                LeaderClass = "Knight";
                LeaderAbility1 = "Heavy Swing";
                LeaderAbility2 = "Guardian Blade";
                LeaderStats[0] = LeaderStats[0] + 2;
                LeaderStats[1] = LeaderStats[1] + 1;
                LeaderStats[2] = LeaderStats[2] - 2;
                LeaderStats[3] = LeaderStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "2" || choice == "cleric" || choice == "Cleric")
            {
                LeaderClass = "Cleric";
                LeaderAbility1 = "Heal";
                LeaderAbility2 = "Heavenly Rain";
                LeaderStats[0] = LeaderStats[0] - 2;
                LeaderStats[1] = LeaderStats[1] + 0;
                LeaderStats[2] = LeaderStats[2] + 3;
                LeaderStats[3] = LeaderStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "3" || choice == "Thief" || choice == "thief")
            {
                LeaderClass = "Thief";
                LeaderAbility1 = "Steal Health";
                LeaderAbility2 = "Flashstrike";
                LeaderStats[0] = LeaderStats[0] + 1;
                LeaderStats[1] = LeaderStats[1] - 1;
                LeaderStats[2] = LeaderStats[2] + 0;
                LeaderStats[3] = LeaderStats[3] + 2;
                Breakout = true;
            }
            else if (choice == "4" || choice == "mage" || choice == "Mage")
            {
                LeaderClass = "Mage";
                LeaderAbility1 = "Flame Blast";
                LeaderAbility2 = "Tri-Element";
                LeaderStats[0] = LeaderStats[0] - 2;
                LeaderStats[1] = LeaderStats[1] + 0;
                LeaderStats[2] = LeaderStats[2] + 3;
                LeaderStats[3] = LeaderStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "5" || choice == "Paladin" || choice == "paladin")
            {
                LeaderClass = "Paladin";
                LeaderAbility1 = "Heal";
                LeaderAbility2 = "Guardian Blade";
                LeaderStats[0] = LeaderStats[0] + 1;
                LeaderStats[1] = LeaderStats[1] + 1;
                LeaderStats[2] = LeaderStats[2] + 1;
                LeaderStats[3] = LeaderStats[3] - 2;
                Breakout = true;
            }
            else if (choice == "6" || choice == "MagicRogue" || choice == "magicrogue" || choice == "Magic Rogue" || choice == "magic rogue")
            {
                LeaderClass = "Magic Rogue";
                LeaderAbility1 = "Flame Blast";
                LeaderAbility2 = "Steal Health";
                LeaderStats[0] = LeaderStats[0] + 1;
                LeaderStats[1] = LeaderStats[1] + 0;
                LeaderStats[2] = LeaderStats[2] + 1;
                LeaderStats[3] = LeaderStats[3] + 1;
                Breakout = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Breakout = false;
            }
        cout << "Your Leaders Class is: " << LeaderClass << endl;
    } while (Breakout == false);
    choice == "";
    Breakout == false;
    //Second Class
    do
    {
        cout << "Do you want a list of what the Classes are before you select your second characters class?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadClasses();
                Leave = true;
                cout << "Press enter to pick your second characters Class." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
       
            cout << "Please choose a class for your second character." << endl;
            cout << "1.Knight 2.Cleric 3.Thief 4.Mage 5.Paladin 6.Magic Rogue." << endl;
            cin >> choice;
            if (choice == "1" || choice == "Knight" || choice == "knight")
            {
                SecondClass = "Knight";
                SecondAbility1 = "Heavy Swing";
                SecondAbility2 = "Guardian Blade";
                SecondStats[0] = SecondStats[0] + 2;
                SecondStats[1] = SecondStats[1] + 1;
                SecondStats[2] = SecondStats[2] - 2;
                SecondStats[3] = SecondStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "2" || choice == "cleric" || choice == "Cleric")
            {
                SecondClass = "Cleric";
                SecondAbility1 = "Heal";
                SecondAbility2 = "Heavenly Rain";
                SecondStats[0] = SecondStats[0] - 2;
                SecondStats[1] = SecondStats[1] + 0;
                SecondStats[2] = SecondStats[2] + 3;
                SecondStats[3] = SecondStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "3" || choice == "Thief" || choice == "thief")
            {
                SecondClass = "Thief";
                SecondAbility1 = "Steal Health";
                SecondAbility2 = "Flashstrike";
                SecondStats[0] = SecondStats[0] + 1;
                SecondStats[1] = SecondStats[1] - 1;
                SecondStats[2] = SecondStats[2] + 0;
                SecondStats[3] = SecondStats[3] + 2;
                Breakout = true;
            }
            else if (choice == "4" || choice == "mage" || choice == "Mage")
            {
                SecondClass = "Mage";
                SecondAbility1 = "Flame Blast";
                SecondAbility2 = "Tri-Element";
                SecondStats[0] = SecondStats[0] - 2;
                SecondStats[1] = SecondStats[1] + 0;
                SecondStats[2] = SecondStats[2] + 3;
                SecondStats[3] = SecondStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "5" || choice == "Paladin" || choice == "paladin")
            {
                SecondClass = "Paladin";
                SecondAbility1 = "Heal";
                SecondAbility2 = "Guardian Blade";
                SecondStats[0] = SecondStats[0] + 1;
                SecondStats[1] = SecondStats[1] + 1;
                SecondStats[2] = SecondStats[2] + 1;
                SecondStats[3] = SecondStats[3] - 2;
                Breakout = true;
            }
            else if (choice == "6" || choice == "MagicRogue" || choice == "magicrogue" || choice == "Magic Rogue" || choice == "magic rogue")
            {
                SecondClass = "Magic Rogue";
                SecondAbility1 = "Flame Blast";
                SecondAbility2 = "Steal Health";
                SecondStats[0] = SecondStats[0] + 1;
                SecondStats[1] = SecondStats[1] + 0;
                SecondStats[2] = SecondStats[2] + 1;
                SecondStats[3] = SecondStats[3] + 1;
                Breakout = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Breakout = false;
            }
        cout << "Your second characters Class is: " << SecondClass << endl;
    } while (Breakout == false);
    choice == "";
    Breakout == false;
    //Third Class
    do
    {
        cout << "Do you want a list of what the Classes are before you select your third characters class?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadClasses();
                Leave = true;
                cout << "Press enter to pick your third characters Class." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave == false);
        
            cout << "Please choose a class for your third character." << endl;
            cout << "1.Knight 2.Cleric 3.Thief 4.Mage 5.Paladin 6.Magic Rogue." << endl;
            cin >> choice;
            if (choice == "1" || choice == "Knight" || choice == "knight")
            {
                ThirdClass = "Knight";
                ThirdAbility1 = "Heavy Swing";
                ThirdAbility2 = "Guardian Blade";
                ThirdStats[0] = ThirdStats[0] + 2;
                ThirdStats[1] = ThirdStats[1] + 1;
                ThirdStats[2] = ThirdStats[2] - 2;
                ThirdStats[3] = ThirdStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "2" || choice == "cleric" || choice == "Cleric")
            {
                ThirdClass = "Cleric";
                ThirdAbility1 = "Heal";
                ThirdAbility2 = "Heavenly Rain";
                ThirdStats[0] = ThirdStats[0] - 2;
                ThirdStats[1] = ThirdStats[1] + 0;
                ThirdStats[2] = ThirdStats[2] + 3;
                ThirdStats[3] = ThirdStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "3" || choice == "Thief" || choice == "thief")
            {
                ThirdClass = "Thief";
                ThirdAbility1 = "Steal Health";
                ThirdAbility2 = "Flashstrike";
                ThirdStats[0] = ThirdStats[0] + 1;
                ThirdStats[1] = ThirdStats[1] - 1;
                ThirdStats[2] = ThirdStats[2] + 0;
                ThirdStats[3] = ThirdStats[3] + 2;
                Breakout = true;
            }
            else if (choice == "4" || choice == "mage" || choice == "Mage")
            {
                ThirdClass = "Mage";
                ThirdAbility1 = "Flame Blast";
                ThirdAbility2 = "Tri-Element";
                ThirdStats[0] = ThirdStats[0] - 2;
                ThirdStats[1] = ThirdStats[1] + 0;
                ThirdStats[2] = ThirdStats[2] + 3;
                ThirdStats[3] = ThirdStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "5" || choice == "Paladin" || choice == "paladin")
            {
                ThirdClass = "Paladin";
                ThirdAbility1 = "Heal";
                ThirdAbility2 = "Guardian Blade";
                ThirdStats[0] = ThirdStats[0] + 1;
                ThirdStats[1] = ThirdStats[1] + 1;
                ThirdStats[2] = ThirdStats[2] + 1;
                ThirdStats[3] = ThirdStats[3] - 2;
                Breakout = true;
            }
            else if (choice == "6" || choice == "MagicRogue" || choice == "magicrogue" || choice == "Magic Rogue" || choice == "magic rogue")
            {
                ThirdClass = "Magic Rogue";
                ThirdAbility1 = "Flame Blast";
                ThirdAbility2 = "Steal Health";
                ThirdStats[0] = ThirdStats[0] + 1;
                ThirdStats[1] = ThirdStats[1] + 0;
                ThirdStats[2] = ThirdStats[2] + 1;
                ThirdStats[3] = ThirdStats[3] + 1;
                Breakout = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Breakout = false;
            }
        cout << "Your third characters Class is: " << ThirdClass << endl;
    } while (Breakout == false);
    choice == "";
    Breakout == false;
    //Fourth Class
    do
    {
        cout << "Do you want a list of what the Classes are before you select your fourth characters class?" << endl;
        cout << "1. Yes 2. No" << endl;
        cin >> choice;
        do
        {
            if (choice == "yes" || choice == "Yes" || choice == "YES" || choice == "1")
            {
                ReadClasses();
                Leave = true;
                cout << "Press enter to pick your fourth characters Class." << endl;
                cin;
            }
            else if (choice == "no" || choice == "No" || choice == "NO" || choice == "2")
            {
                Leave = true;
            }
            else
            {
                cout << "Please type Yes or No then press Enter" << endl;
                Leave = false;
            }
        } while (Leave = false);
        
            cout << "Please choose a class for your fourth character." << endl;
            cout << "1.Knight 2.Cleric 3.Thief 4.Mage 5.Paladin 6.Magic Rogue." << endl;
            cin >> choice;
            if (choice == "1" || choice == "Knight" || choice == "knight")
            {
                FourthClass = "Knight";
                FourthAbility1 = "Heavy Swing";
                FourthAbility2 = "Guardian Blade";
                FourthStats[0] = FourthStats[0] + 2;
                FourthStats[1] = FourthStats[1] + 1;
                FourthStats[2] = FourthStats[2] - 2;
                FourthStats[3] = FourthStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "2" || choice == "cleric" || choice == "Cleric")
            {
                FourthClass = "Cleric";
                FourthAbility1 = "Heal";
                FourthAbility2 = "Heavenly Rain";
                FourthStats[0] = FourthStats[0] - 2;
                FourthStats[1] = FourthStats[1] + 0;
                FourthStats[2] = FourthStats[2] + 3;
                FourthStats[3] = FourthStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "3" || choice == "Thief" || choice == "thief")
            {
                FourthClass = "Thief";
                FourthAbility1 = "Steal Health";
                FourthAbility2 = "Flashstrike";
                FourthStats[0] = FourthStats[0] + 1;
                FourthStats[1] = FourthStats[1] - 1;
                FourthStats[2] = FourthStats[2] + 0;
                FourthStats[3] = FourthStats[3] + 2;
                Breakout = true;
            }
            else if (choice == "4" || choice == "mage" || choice == "Mage")
            {
                FourthClass = "Mage";
                FourthAbility1 = "Flame Blast";
                FourthAbility2 = "Tri-Element";
                FourthStats[0] = FourthStats[0] - 2;
                FourthStats[1] = FourthStats[1] + 0;
                FourthStats[2] = FourthStats[2] + 3;
                FourthStats[3] = FourthStats[3] + 0;
                Breakout = true;
            }
            else if (choice == "5" || choice == "Paladin" || choice == "paladin")
            {
                FourthClass = "Paladin";
                FourthAbility1 = "Heal";
                FourthAbility2 = "Guardian Blade";
                FourthStats[0] = FourthStats[0] + 1;
                FourthStats[1] = FourthStats[1] + 1;
                FourthStats[2] = FourthStats[2] + 1;
                FourthStats[3] = FourthStats[3] - 2;
                Breakout = true;
            }
            else if (choice == "6" || choice == "MagicRogue" || choice == "magicrogue" || choice == "Magic Rogue" || choice == "magic rogue")
            {
                FourthClass = "Magic Rogue";
                FourthAbility1 = "Flame Blast";
                FourthAbility2 = "Steal Health";
                FourthStats[0] = FourthStats[0] + 1;
                FourthStats[1] = FourthStats[1] + 0;
                FourthStats[2] = FourthStats[2] + 1;
                FourthStats[3] = FourthStats[3] + 1;
                Breakout = true;
            }
            else
            {
                cout << "Please type a correct choice." << endl;
                Breakout = false;
            }
        cout << "Your last characters Class is: " << FourthClass << endl;
    } while (Breakout == false);
    cout << "Your Leader is a " << LeaderRace << " " << LeaderClass << endl;
    cout << "Your Second Character is a " << SecondRace << " " << SecondClass << endl;
    cout << "Your Third Character is a " << ThirdRace << " " << ThirdClass << endl;
    cout << "Your Fourth Character is a " << FourthRace << " " << FourthClass << endl;
}
void Inventory_()
{
    string InsideSelection = "";
    bool InventoryBreakout = false;
    int counter = 3;
        for (int i = 0; i < 10; i++)
        {
            if (i == 0)
            {
                cout << 1 << ". " << potionamount << Inventory[i] << endl;
            }
            else if (i == 1)
            {
                cout << 2 << ". " << shurikenamount << Inventory[i] << endl;
            }
            else
            {
                cout << counter << ". " << Inventory[i] << endl;
                counter = counter + 1;
            }
        }
        do
        {
            string CharChoice = "";
            bool equippable = false;
            cout << "What would you like to do?" << endl;
            cout << "1. Equip an Item 2. Throw Away an Item 3. Leave Inventory 4. Review Inventory" << endl;
            cin >> InsideSelection;
            //equip
            if (InsideSelection == "1")
            {
                cout << "Which character wants to equip something?" << endl;
                cout << "Note that once you equip something your previously equipped item is thrown away." << endl;
                cout << "1. Leader 2. Second character 3. Third character 4. Fourth character" << endl;
                cin >> CharChoice;
                string EquipSelector = "";
                cout << "Which item would you like to equip?" << endl;
                cin >> EquipSelector;
                if (EquipSelector == "1")
                {
                    cout << "You can't equip potions." << endl;
                    InventoryBreakout = false;
                }
                else if (EquipSelector == "2")
                {
                    cout << "You can't equip shurikens." << endl;
                    InventoryBreakout = false;
                }
                else if (EquipSelector == "3")
                {
                    if (CharChoice == "1")
                    {
                        equippable = Equipabble("Leader", Inventory[2]);
                        if (equippable == true)
                        {
                            LeaderWeapon = Inventory[2];
                            Inventory[2] = "";
                        }
                        else
                        {
                            cout << "This character can't equip that." << endl;
                        }
                    }
                    else if (CharChoice == "2")
                    {
                      equippable =  Equipabble("Second", Inventory[2]);
                      if (equippable == true)
                      {
                          SecondWeapon = Inventory[2];
                          Inventory[2] = "";
                      }
                      else
                      {
                          cout << "This character can't equip that." << endl;
                      }
                    }
                    else if (CharChoice == "3")
                    {
                       equippable = Equipabble("Third", Inventory[2]);
                       if (equippable == true)
                       {
                           ThirdWeapon = Inventory[2];
                           Inventory[2] = "";
                       }
                       else
                       {
                           cout << "This character can't equip that." << endl;
                       }
                    }
                    else if (CharChoice == "4")
                    {
                      equippable =  Equipabble("Fourth", Inventory[2]);
                      if (equippable == true)
                      {
                          FourthWeapon = Inventory[2];
                          Inventory[2] = "";
                      }
                      else
                      {
                          cout << "This character can't equip that." << endl;
                      }
                    }
                    else
                    {
                        cout << "You didn't choose a correct party member, defaulting to Leader." << endl;
                        Equipabble("Leader", Inventory[2]);
                    }
                }
                else if (EquipSelector == "4")
                {
                    if (CharChoice == "1")
                    {
                        equippable = Equipabble("Leader", Inventory[3]);
                        if (equippable == true)
                        {
                            LeaderWeapon = Inventory[3];
                            Inventory[3] = "";
                        }
                        else
                        {
                            cout << "This character can't equip that." << endl;
                        }
                    }
                    else if (CharChoice == "2")
                    {
                        equippable = Equipabble("Second", Inventory[3]);
                        if (equippable == true)
                        {
                            SecondWeapon = Inventory[3];
                            Inventory[3] = "";
                        }
                        else
                        {
                            cout << "This character can't equip that." << endl;
                        }
                    }
                    else if (CharChoice == "3")
                    {
                        equippable = Equipabble("Third", Inventory[3]);
                        if (equippable == true)
                        {
                            ThirdWeapon = Inventory[3];
                            Inventory[3] = "";
                        }
                        else
                        {
                            cout << "This character can't equip that." << endl;
                        }
                    }
                    else if (CharChoice == "4")
                    {
                        equippable = Equipabble("Fourth", Inventory[3]);
                        if (equippable == true)
                        {
                            FourthWeapon = Inventory[3];
                            Inventory[3] = "";
                        }
                        else
                        {
                            cout << "This character can't equip that." << endl;
                        }
                    }
                    else
                    {
                        cout << "You didn't choose a correct party member, defaulting to Leader." << endl;
                        
                    }
                }
                else if (EquipSelector == "5")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[4]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[4];
                        Inventory[4] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[4]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[4];
                        Inventory[4] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[4]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[4];
                        Inventory[4] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[4]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[4];
                        Inventory[4] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;
                   
                }
                }
                else if (EquipSelector == "6")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[5]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[5];
                        Inventory[5] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[5]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[5];
                        Inventory[5] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[5]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[5];
                        Inventory[5] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[5]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[5];
                        Inventory[5] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;

                }
                }
                else if (EquipSelector == "7")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[6]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[6];
                        Inventory[6] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[6]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[6];
                        Inventory[6] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[6]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[6];
                        Inventory[6] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[6]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[6];
                        Inventory[6] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;

                }
                }
                else if (EquipSelector == "8")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[7]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[7];
                        Inventory[7] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[7]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[7];
                        Inventory[7] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[7]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[7];
                        Inventory[7] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[7]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[7];
                        Inventory[7] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;

                }
                }
                else if (EquipSelector == "9")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[8]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[8];
                        Inventory[8] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[8]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[8];
                        Inventory[8] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[8]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[8];
                        Inventory[8] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[8]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[8];
                        Inventory[8] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;

                }
                }
                else if (EquipSelector == "10")
                {
                if (CharChoice == "1")
                {
                    equippable = Equipabble("Leader", Inventory[9]);
                    if (equippable == true)
                    {
                        LeaderWeapon = Inventory[9];
                        Inventory[9] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "2")
                {
                    equippable = Equipabble("Second", Inventory[9]);
                    if (equippable == true)
                    {
                        SecondWeapon = Inventory[9];
                        Inventory[9] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "3")
                {
                    equippable = Equipabble("Third", Inventory[9]);
                    if (equippable == true)
                    {
                        ThirdWeapon = Inventory[9];
                        Inventory[9] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else if (CharChoice == "4")
                {
                    equippable = Equipabble("Fourth", Inventory[9]);
                    if (equippable == true)
                    {
                        FourthWeapon = Inventory[9];
                        Inventory[9] = "";
                    }
                    else
                    {
                        cout << "This character can't equip that." << endl;
                    }
                }
                else
                {
                    cout << "You didn't choose a correct party member, defaulting to Leader." << endl;

                }
                }
                else
                {
                cout << "Please enter the number associated with the item and press enter." << endl;
                }
                InventoryBreakout = false;
            }
            //throw away
            else if (InsideSelection == "2")
                 {
                 string ItemSelection = "";
                 cout << "Which item would you like to disappear forever? (There is no confirmation, do not select an item you wish to keep!)" << endl;

                 cin >> ItemSelection;
                 if (ItemSelection == "1")
                 {
                     if (potionamount == 0)
                     {
                         cout << SecondName << ": Better save room for potions." << endl;
                     }
                     else if (potionamount > 0)
                     {
                         cout << FourthName << ": You'll probably need these later, it's best not to throw them away." << endl;
                     }
                     InventoryBreakout = false;
                 }
                 else if (ItemSelection == "2")
                 {
                     if (shurikenamount == 0)
                     {
                         cout << LeaderName << ": This is where we put our throwing things, better keep it open." << endl;
                     }
                     else if (shurikenamount > 0)
                     {
                         cout << ThirdName << ": We can't possibly get rid of our shurikens, they're so shiny." << endl;
                     }
                     InventoryBreakout = false;
                 }
                 else if (ItemSelection == "3")
                 {
                     Inventory[2] = "";
                 }
                 else if (ItemSelection == "4")
                 {
                     Inventory[3] = "";
                 }
                 else if (ItemSelection == "5")
                 {
                     Inventory[4] = "";
                 }
                 else if (ItemSelection == "6")
                 {
                     Inventory[5] = "";
                 }
                 else if (ItemSelection == "7")
                 {
                     Inventory[6] = "";
                 }
                 else if (ItemSelection == "8")
                 {
                     Inventory[7] = "";
                 }
                 else if (ItemSelection == "9")
                 {
                     Inventory[8] = "";
                 }
                 else if (ItemSelection == "10")
                 {
                     Inventory[9] = "";
                 }
                 else
                 {
                     cout << "Please enter the number associated with the item and press enter." << endl;
                 }
                 InventoryBreakout = false;
                 }
                
                 //exit
            else if (InsideSelection == "3")
            {
            InventoryBreakout = true;
            }
            //review
            else if (InsideSelection == "4")
            {
            for (int i = 0; i < 10; i++)
            {
                if (i == 1)
                {
                    cout << i << ". " << potionamount << Inventory[i] << endl;
                }
                else if (i == 2)
                {
                    cout << i << ". " << shurikenamount << Inventory[i] << endl;
                }
                else
                {
                    cout << i << ". " << Inventory[i] << endl;
                }
            }
            InventoryBreakout = false;
            }
            
        } while (InventoryBreakout == false);
    
}
void Shop()
{
    
    int PotionPrice = 5;
    int ShurikenPrice = 10;
    bool ExitShopSection = false;
    bool LeaveShop = false;
    string ShopChoice;
    do
    {
        cout << "Hello, would you like to buy potions or shurikens? I could also give some info about the area if you'd like." << endl;
        cout << "1. Buy Potions 2. Buy Shurikens 3.Ask for info 4. Leave Shop" << endl;
        cin >> ShopChoice;
        if (ShopChoice == "1")
        {

            do
            {
                int RequestedPotions;
                cout << "How many potions would you like to buy?" << endl;
                cin >> RequestedPotions;
                GoldSpent = RequestedPotions * PotionPrice;
                if (GoldSpent > TotalGold)
                {
                    cout << "You don't have enough gold." << endl;
                    ExitShopSection = true;
                }
                else
                {
                    cout << RequestedPotions << " potion(s) bought." << endl;
                    string stringpotions = Inventory[0];
                    int CurrentPotions = stoi(stringpotions);
                    CurrentPotions = CurrentPotions + RequestedPotions;
                    Inventory[0] = to_string(CurrentPotions);
                    TotalGold = TotalGold - GoldSpent;
                    ExitShopSection = true;
                }
            } while (ExitShopSection == false);
        }
        else if (ShopChoice == "2")
        {

            do
            {
                int RequestedShurikens;
                cout << "How many shurikens would you like to buy?" << endl;
                cin >> RequestedShurikens;
                GoldSpent = RequestedShurikens * ShurikenPrice;
                if (GoldSpent > TotalGold)
                {
                    cout << "You don't have enough gold." << endl;
                    ExitShopSection = true;
                }
                else
                {
                    cout << RequestedShurikens << " shuriken(s) bought." << endl;
                    string stringshurikens = Inventory[1];
                    int CurrentShurikens = stoi(stringshurikens);
                    CurrentShurikens = CurrentShurikens + RequestedShurikens;
                    Inventory[1] = to_string(CurrentShurikens);
                    TotalGold = TotalGold - GoldSpent;
                    ExitShopSection = true;
                }
            } while (ExitShopSection == false);
        }
        else if (ShopChoice == "3")
        {
            if (CurrentArea == "Grasslands")
            {
                cout << "Shop Keeper: The Grasslands are rolling hills of grass with scattered trees here and there." << endl;
                cout << "Shop Keeper: It is very common to find small villages from people who make a living digging through the soil for small chunks of mythril." << endl;
                cout << "Little Girl: Unfortunately Goblins like to eat mythril so they are drawn to this area." << endl;
                cout << "Little Girl: You better stay in the village, you probably would run and scream if you saw a Goblin." << endl;
                cout << ThirdName << ": DID THAT LITTLE GIRL JUST CALL ME WEAK?!?!?" << endl;
                cout << FourthName << ": Gotta praise her honesty, well done raisin her Shop Keeper." << endl;
                cout << ThirdName << ": Fight me right now " << FourthName << "and while were at it bring that girl here too, I'll beat you and show her that I can handle 100 Goblins!" << endl;
                cout << FourthName << ": Gotta go {runs away}" << endl;
            }
            else if (CurrentArea == "Desert")
            {
                cout << "Merchant: These are inhabitable deserts that travelers must go through if they wish to reach the Lava Fields in the north." << endl;
                cout << "Merchant: Don't ask me why Progreemora made it so big and full of flesh eating Sand Worms but he did." << endl;
            }
            else if (CurrentArea == "Lava Field")
            {
              cout <<  FourthName << ": Why do you care about this place, it's hotter than Ifrits fire here." << endl;
            }
            else if (CurrentArea == "Final Area")
            {
                cout << LeaderName << ": This is it..." << endl;
            }
        }
        else if (ShopChoice == "4")
        {
            LeaveShop = true;
        }
    } while (LeaveShop == false);

}
//Battles
void BattleGoblin()
{
    string BattleChoice = "";
   
    int EnemyHP = 100;
    int EnemyCurrentHP = EnemyHP;
    int LTotalHP = LeaderStats[1] * 5;
    int LCurrentHP = LTotalHP;
    int LMP = LeaderStats[2] * 3;
    int STotalHP = SecondStats[1] * 5;
    int SCurrentHP = STotalHP;
    int SMP = SecondStats[2] * 3;
    int TTotalHP = ThirdStats[1] * 5;
    int TCurrentHP = TTotalHP;
    int TMP = ThirdStats[2] * 3;
    int FTotalHP = FourthStats[1] * 5;
    int FCurrentHP = FTotalHP;
    int FMP = FourthStats[2] * 5;
    bool BattleOver = false;
    do
    {
        int TotalDamageDealt = 0;
        int damage = 0;
        int heal_amount = 0;
        BattleChoice = "";
        //Leader Turn
        cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
        cout << LeaderName << "Health: " << LCurrentHP << " / " << LTotalHP << endl;
        cout << "MP: " << LMP << endl;
        cout << SecondName << "Health: " << SCurrentHP << " / " << STotalHP << endl;
        cout << "MP: " << SMP << endl;
        cout << ThirdName << "Health: " << TCurrentHP << " / " << TTotalHP << endl;
        cout << "MP: " << TMP << endl;
        cout << FourthName << "Health: " << FCurrentHP << " / " << FTotalHP << endl;
        cout << "MP: " << FMP << endl;
        cout << LeaderName << ": Time to make my move." << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << LeaderAbility1 << " 4. " << LeaderAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = LeaderStats[0] * 2 + LWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (LeaderAbility1 == "Heavy Swing")
            {
                if (LMP >= 7)
                {
                    damage = Heavy_Swing(LeaderStats[0] * 2 + LWDamage);
                    LMP = LMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Flame Blast")
            {
                if (LMP >= 4)
                {
                    damage = Flame_Blast(LeaderStats[2]);
                    LMP = LMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Heal")
            {
                if (LMP >= 5)
                {
                    heal_amount = Heal(LeaderStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    LMP = LMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (LeaderAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
            else if (LeaderAbility2 == "Guardian Blade")
            {
                if (LMP >= 10)
                {
                    damage = Guardian_Blade(LeaderStats[1], LeaderStats[0]);
                    LMP = LMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Flashstrike")
            {
                if (LMP >= 15)
                {
                    damage = Flashstrike(LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Tri-Element")
            {
                if (LMP >= 20)
                {
                    damage = Tri_Element(LeaderStats[2], LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Heavenly Rain")
            {
                if (LMP >= 8)
                {
                    damage = Heavenly_Rain(LeaderStats[2]);
                    LMP = LMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Second Turn
        cout << SecondName << ": How can I help?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << SecondAbility1 << " 4. " << SecondAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = SecondStats[0] * 2 + SWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (SecondAbility1 == "Heavy Swing")
            {
                if (SMP >= 7)
                {
                    damage = Heavy_Swing(SecondStats[0] * 2 + SWDamage);
                    SMP = SMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Flame Blast")
            {
                if (SMP >= 4)
                {
                    damage = Flame_Blast(SecondStats[2]);
                    SMP = SMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Heal")
            {
                if (SMP >= 5)
                {
                    heal_amount = Heal(SecondStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    SMP = SMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (SecondAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
            else if (SecondAbility2 == "Guardian Blade")
            {
                if (SMP >= 10)
                {
                    damage = Guardian_Blade(SecondStats[1], SecondStats[0]);
                    SMP = SMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Flashstrike")
            {
                if (SMP >= 15)
                {
                    damage = Flashstrike(SecondStats[3], SecondStats[0]);
                    SMP = SMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Tri-Element")
            {
                if (SMP >= 20)
                {
                    damage = Tri_Element(SecondStats[2], SecondStats[3], SecondStats[0]);
                    SMP = SMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Heavenly Rain")
            {
                if (SMP >= 8)
                {
                    damage = Heavenly_Rain(SecondStats[2]);
                    SMP = SMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Third Turn
        cout << ThirdName << ": Time to kill!" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = ThirdStats[0] * 2 + TWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (ThirdAbility1 == "Heavy Swing")
            {
                if (TMP >= 7)
                {
                    damage = Heavy_Swing(ThirdStats[0] * 2 + TWDamage);
                    TMP = TMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Flame Blast")
            {
                if (TMP >= 4)
                {
                    damage = Flame_Blast(ThirdStats[2]);
                    TMP = TMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Heal")
            {
                if (TMP >= 5)
                {
                    heal_amount = Heal(ThirdStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    TMP = TMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (ThirdAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
            else if (ThirdAbility2 == "Guardian Blade")
            {
                if (TMP >= 10)
                {
                    damage = Guardian_Blade(ThirdStats[1], ThirdStats[0]);
                    TMP = TMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Flashstrike")
            {
                if (TMP >= 15)
                {
                    damage = Flashstrike(ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Tri-Element")
            {
                if (TMP >= 20)
                {
                    damage = Tri_Element(ThirdStats[2], ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Heavenly Rain")
            {
                if (TMP >= 8)
                {
                    damage = Heavenly_Rain(ThirdStats[2]);
                    TMP = TMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Fourth Turn
        cout << FourthName << ": Hey boss, what do you want me to do?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = FourthStats[0] * 2 + FWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (FourthAbility1 == "Heavy Swing")
            {
                if (FMP >= 7)
                {
                    damage = Heavy_Swing(FourthStats[0] * 2 + FWDamage);
                    FMP = FMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Flame Blast")
            {
                if (FMP >= 4)
                {
                    damage = Flame_Blast(FourthStats[2]);
                    FMP = FMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Heal")
            {
                if (FMP >= 5)
                {
                    heal_amount = Heal(FourthStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    FMP = FMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (FourthAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
            else if (FourthAbility2 == "Guardian Blade")
            {
                if (FMP >= 10)
                {
                    damage = Guardian_Blade(FourthStats[1], FourthStats[0]);
                    FMP = FMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Flashstrike")
            {
                if (FMP >= 15)
                {
                    damage = Flashstrike(FourthStats[3], FourthStats[0]);
                    FMP = FMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Tri-Element")
            {
                if (FMP >= 20)
                {
                    damage = Tri_Element(FourthStats[2], FourthStats[3], FourthStats[0]);
                    FMP = FMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Heavenly Rain")
            {
                if (FMP >= 8)
                {
                    damage = Heavenly_Rain(FourthStats[2]);
                    FMP = FMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        EnemyCurrentHP = EnemyCurrentHP - TotalDamageDealt;
        if (EnemyCurrentHP <= 0)
        {
            BattleOver = true;
        }
        else
        {
            cout << "The Goblin made a wide swing and hit all of the party members." << endl;
            LCurrentHP = LCurrentHP - 5;
            SCurrentHP = SCurrentHP - 5;
            TCurrentHP = TCurrentHP - 5;
            FCurrentHP = FCurrentHP - 5;
            BattleOver = false;
        }
        if (LCurrentHP <= 0 && SCurrentHP <= 0 && TCurrentHP <= 0 && FCurrentHP <= 0)
        {
            cout << "Game Over" << endl;
            exit(0);
        }
    } while(BattleOver == false);
    PartyLevel = PartyLevel + 1;
    LeaderStats[0] = LeaderStats[0] + 1;
    LeaderStats[1] = LeaderStats[1] + 1;
    LeaderStats[2] = LeaderStats[2] + 1;
    LeaderStats[3] = LeaderStats[3] + 1;
    SecondStats[0] = SecondStats[0] + 1;
    SecondStats[1] = SecondStats[1] + 1;
    SecondStats[2] = SecondStats[2] + 1;
    SecondStats[3] = SecondStats[3] + 1;
    ThirdStats[0] = ThirdStats[0] + 1;
    ThirdStats[1] = ThirdStats[1] + 1;
    ThirdStats[2] = ThirdStats[2] + 1;
    ThirdStats[3] = ThirdStats[3] + 1;
    FourthStats[0] = FourthStats[0] + 1;
    FourthStats[1] = FourthStats[1] + 1;
    FourthStats[2] = FourthStats[2] + 1;
    FourthStats[3] = FourthStats[3] + 1;
    
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 10);
    int dice_roll = distribution(generator);
    if (dice_roll == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Goblin Staff";
                cout << "Congrats you got a Goblin Staff!" << endl;
                break;
            }
        }
    }
    else if (dice_roll == 2)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Small Sword";
                cout << "Congrats you got a Small Sword!" << endl;
                break;
            }
        }
    }
    else if (dice_roll == 3)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Hand Axe";
                cout << "Congrats you got a Hand Axe!" << endl;
                break;
            }
        }
    }
    else if (dice_roll == 4)
    {
        TotalGold = TotalGold + 5;
        cout << "Congrats you got 5 gold!" << endl;
    }
    else if (dice_roll == 5)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Rusted Dagger";
                cout << "Congrats you got a Rusted Dagger!" << endl;
                break;
            }
        }
    }
    else if (dice_roll == 6)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Short Rod";
                cout << "Congrats you got a Short Rod!" << endl;
                break;
            }
        }
    }
    else if (dice_roll == 7)
    {
        TotalGold = TotalGold + 10;
        cout << "Congrats you got 10 gold!" << endl;
    }
    else if (dice_roll == 8)
    {
        TotalGold = TotalGold + 20;
        cout << "Congrats you got 20 gold!" << endl;
    }
    else if (dice_roll == 9)
    {
        TotalGold = TotalGold + 3;
        cout << "Congrats you got 3 gold!" << endl;
    }
    else if (dice_roll == 10)
    {
        TotalGold = TotalGold + 25;
        cout << "Congrats you got 25 gold!" << endl;
    }
}
void BattleSandWorm()
{
    string BattleChoice = "";

    int EnemyHP = 150;
    int EnemyCurrentHP = EnemyHP;
    int LTotalHP = LeaderStats[1] * 5;
    int LCurrentHP = LTotalHP;
    int LMP = LeaderStats[2] * 3;
    int STotalHP = SecondStats[1] * 5;
    int SCurrentHP = STotalHP;
    int SMP = SecondStats[2] * 3;
    int TTotalHP = ThirdStats[1] * 5;
    int TCurrentHP = TTotalHP;
    int TMP = ThirdStats[2] * 3;
    int FTotalHP = FourthStats[1] * 5;
    int FCurrentHP = FTotalHP;
    int FMP = FourthStats[2] * 5;
    bool BattleOver = false;
    do
    {
        int TotalDamageDealt = 0;
        int damage = 0;
        int heal_amount = 0;
        BattleChoice = "";
        //Leader Turn
        cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
        cout << LeaderName << "Health: " << LCurrentHP << " / " << LTotalHP << endl;
        cout << "MP: " << LMP;
        cout << SecondName << "Health: " << SCurrentHP << " / " << STotalHP << endl;
        cout << "MP: " << SMP;
        cout << ThirdName << "Health: " << TCurrentHP << " / " << TTotalHP << endl;
        cout << "MP: " << TMP;
        cout << FourthName << "Health: " << FCurrentHP << " / " << FTotalHP << endl;
        cout << "MP: " << FMP;
        cout << LeaderName << ": Time to make my move." << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << LeaderAbility1 << " 4. " << LeaderAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = LeaderStats[0] * 2 + LWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (LeaderAbility1 == "Heavy Swing")
            {
                if (LMP >= 7)
                {
                    damage = Heavy_Swing(LeaderStats[0] * 2 + LWDamage);
                    LMP = LMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Flame Blast")
            {
                if (LMP >= 4)
                {
                    damage = Flame_Blast(LeaderStats[2]);
                    LMP = LMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Heal")
            {
                if (LMP >= 5)
                {
                    heal_amount = Heal(LeaderStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    LMP = LMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (LeaderAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
            else if (LeaderAbility2 == "Guardian Blade")
            {
                if (LMP >= 10)
                {
                    damage = Guardian_Blade(LeaderStats[1], LeaderStats[0]);
                    LMP = LMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Flashstrike")
            {
                if (LMP >= 15)
                {
                    damage = Flashstrike(LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Tri-Element")
            {
                if (LMP >= 20)
                {
                    damage = Tri_Element(LeaderStats[2], LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Heavenly Rain")
            {
                if (LMP >= 8)
                {
                    damage = Heavenly_Rain(LeaderStats[2]);
                    LMP = LMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Second Turn
        cout << SecondName << ": How can I help?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << SecondAbility1 << " 4. " << SecondAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = SecondStats[0] * 2 + SWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (SecondAbility1 == "Heavy Swing")
            {
                if (SMP >= 7)
                {
                    damage = Heavy_Swing(SecondStats[0] * 2 + SWDamage);
                    SMP = SMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Flame Blast")
            {
                if (SMP >= 4)
                {
                    damage = Flame_Blast(SecondStats[2]);
                    SMP = SMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Heal")
            {
                if (SMP >= 5)
                {
                    heal_amount = Heal(SecondStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    SMP = SMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (SecondAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
            else if (SecondAbility2 == "Guardian Blade")
            {
                if (SMP >= 10)
                {
                    damage = Guardian_Blade(SecondStats[1], SecondStats[0]);
                    SMP = SMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Flashstrike")
            {
                if (SMP >= 15)
                {
                    damage = Flashstrike(SecondStats[3], SecondStats[0]);
                    SMP = SMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Tri-Element")
            {
                if (SMP >= 20)
                {
                    damage = Tri_Element(SecondStats[2], SecondStats[3], SecondStats[0]);
                    SMP = SMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Heavenly Rain")
            {
                if (SMP >= 8)
                {
                    damage = Heavenly_Rain(SecondStats[2]);
                    SMP = SMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Third Turn
        cout << ThirdName << ": Time to kill!" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = ThirdStats[0] * 2 + TWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (ThirdAbility1 == "Heavy Swing")
            {
                if (TMP >= 7)
                {
                    damage = Heavy_Swing(ThirdStats[0] * 2 + TWDamage);
                    TMP = TMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Flame Blast")
            {
                if (TMP >= 4)
                {
                    damage = Flame_Blast(ThirdStats[2]);
                    TMP = TMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Heal")
            {
                if (TMP >= 5)
                {
                    heal_amount = Heal(ThirdStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    TMP = TMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (ThirdAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
            else if (ThirdAbility2 == "Guardian Blade")
            {
                if (TMP >= 10)
                {
                    damage = Guardian_Blade(ThirdStats[1], ThirdStats[0]);
                    TMP = TMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Flashstrike")
            {
                if (TMP >= 15)
                {
                    damage = Flashstrike(ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Tri-Element")
            {
                if (TMP >= 20)
                {
                    damage = Tri_Element(ThirdStats[2], ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Heavenly Rain")
            {
                if (TMP >= 8)
                {
                    damage = Heavenly_Rain(ThirdStats[2]);
                    TMP = TMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Fourth Turn
        cout << FourthName << ": Hey boss, what do you want me to do?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = FourthStats[0] * 2 + FWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (FourthAbility1 == "Heavy Swing")
            {
                if (FMP >= 7)
                {
                    damage = Heavy_Swing(FourthStats[0] * 2 + FWDamage);
                    FMP = FMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Flame Blast")
            {
                if (FMP >= 4)
                {
                    damage = Flame_Blast(FourthStats[2]);
                    FMP = FMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Heal")
            {
                if (FMP >= 5)
                {
                    heal_amount = Heal(FourthStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    FMP = FMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (FourthAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
            else if (FourthAbility2 == "Guardian Blade")
            {
                if (FMP >= 10)
                {
                    damage = Guardian_Blade(FourthStats[1], FourthStats[0]);
                    FMP = FMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Flashstrike")
            {
                if (FMP >= 15)
                {
                    damage = Flashstrike(FourthStats[3], FourthStats[0]);
                    FMP = FMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Tri-Element")
            {
                if (FMP >= 20)
                {
                    damage = Tri_Element(FourthStats[2], FourthStats[3], FourthStats[0]);
                    FMP = FMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Heavenly Rain")
            {
                if (FMP >= 8)
                {
                    damage = Heavenly_Rain(FourthStats[2]);
                    FMP = FMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        EnemyCurrentHP = EnemyCurrentHP - TotalDamageDealt;
        if (EnemyCurrentHP <= 0)
        {
            BattleOver = true;
        }
        else
        {
            cout << "The Sand Worm smashed into the ground causing sand and rocks to fall on the party." << endl;
            LCurrentHP = LCurrentHP - 15;
            SCurrentHP = SCurrentHP - 15;
            TCurrentHP = TCurrentHP - 15;
            FCurrentHP = FCurrentHP - 15;
            BattleOver = false;
        }
        if (LCurrentHP <= 0 && SCurrentHP <= 0 && TCurrentHP <= 0 && FCurrentHP <= 0)
        {
            cout << "Game Over" << endl;
            exit(0);
        }
    } while (BattleOver == false);
    PartyLevel = PartyLevel + 1;
    LeaderStats[0] = LeaderStats[0] + 1;
    LeaderStats[1] = LeaderStats[1] + 1;
    LeaderStats[2] = LeaderStats[2] + 1;
    LeaderStats[3] = LeaderStats[3] + 1;
    SecondStats[0] = SecondStats[0] + 1;
    SecondStats[1] = SecondStats[1] + 1;
    SecondStats[2] = SecondStats[2] + 1;
    SecondStats[3] = SecondStats[3] + 1;
    ThirdStats[0] = ThirdStats[0] + 1;
    ThirdStats[1] = ThirdStats[1] + 1;
    ThirdStats[2] = ThirdStats[2] + 1;
    ThirdStats[3] = ThirdStats[3] + 1;
    FourthStats[0] = FourthStats[0] + 1;
    FourthStats[1] = FourthStats[1] + 1;
    FourthStats[2] = FourthStats[2] + 1;
    FourthStats[3] = FourthStats[3] + 1;

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 10);
    int dice_roll = distribution(generator);
    if (dice_roll == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Sand Staff";
                cout << "Congrats you got a Sand Staff!" << endl;
            }
        }
    }
    else if (dice_roll == 2)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Thief Sword";
                cout << "Congrats you got a Thief Sword!" << endl;
            }
        }
    }
    else if (dice_roll == 3)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Earth Axe";
                cout << "Congrats you got an Earth Axe!" << endl;
            }
        }
    }
    else if (dice_roll == 4)
    {
        TotalGold = TotalGold + 5;
        cout << "Congrats you got 5 gold!" << endl;
    }
    else if (dice_roll == 5)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Curved Dagger";
                cout << "Congrats you got a Curved Dagger!" << endl;
            }
        }
    }
    else if (dice_roll == 6)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Mage Rod";
                cout << "Congrats you got a Mage Rod!" << endl;
            }
        }
    }
    else if (dice_roll == 7)
    {
        TotalGold = TotalGold + 10;
        cout << "Congrats you got 10 gold!" << endl;
    }
    else if (dice_roll == 8)
    {
        TotalGold = TotalGold + 20;
        cout << "Congrats you got 20 gold!" << endl;
    }
    else if (dice_roll == 9)
    {
        TotalGold = TotalGold + 3;
        cout << "Congrats you got 3 gold!" << endl;
    }
    else if (dice_roll == 10)
    {
        TotalGold = TotalGold + 25;
        cout << "Congrats you got 25 gold!" << endl;
    }
}
void BattleLavaGolemn()
{
    string BattleChoice = "";

    int EnemyHP = 220;
    int EnemyCurrentHP = EnemyHP;
    int LTotalHP = LeaderStats[1] * 5;
    int LCurrentHP = LTotalHP;
    int LMP = LeaderStats[2] * 3;
    int STotalHP = SecondStats[1] * 5;
    int SCurrentHP = STotalHP;
    int SMP = SecondStats[2] * 3;
    int TTotalHP = ThirdStats[1] * 5;
    int TCurrentHP = TTotalHP;
    int TMP = ThirdStats[2] * 3;
    int FTotalHP = FourthStats[1] * 5;
    int FCurrentHP = FTotalHP;
    int FMP = FourthStats[2] * 5;
    bool BattleOver = false;
    do
    {
        int TotalDamageDealt = 0;
        int damage = 0;
        int heal_amount = 0;
        BattleChoice = "";
        //Leader Turn
        cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
        cout << LeaderName << "Health: " << LCurrentHP << " / " << LTotalHP << endl;
        cout << "MP: " << LMP;
        cout << SecondName << "Health: " << SCurrentHP << " / " << STotalHP << endl;
        cout << "MP: " << SMP;
        cout << ThirdName << "Health: " << TCurrentHP << " / " << TTotalHP << endl;
        cout << "MP: " << TMP;
        cout << FourthName << "Health: " << FCurrentHP << " / " << FTotalHP << endl;
        cout << "MP: " << FMP;
        cout << LeaderName << ": Time to make my move." << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << LeaderAbility1 << " 4. " << LeaderAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = LeaderStats[0] * 2 + LWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (LeaderAbility1 == "Heavy Swing")
            {
                if (LMP >= 7)
                {
                    damage = Heavy_Swing(LeaderStats[0] * 2 + LWDamage);
                    LMP = LMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Flame Blast")
            {
                if (LMP >= 4)
                {
                    damage = Flame_Blast(LeaderStats[2]);
                    LMP = LMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Heal")
            {
                if (LMP >= 5)
                {
                    heal_amount = Heal(LeaderStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    LMP = LMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (LeaderAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
            else if (LeaderAbility2 == "Guardian Blade")
            {
                if (LMP >= 10)
                {
                    damage = Guardian_Blade(LeaderStats[1], LeaderStats[0]);
                    LMP = LMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Flashstrike")
            {
                if (LMP >= 15)
                {
                    damage = Flashstrike(LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Tri-Element")
            {
                if (LMP >= 20)
                {
                    damage = Tri_Element(LeaderStats[2], LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Heavenly Rain")
            {
                if (LMP >= 8)
                {
                    damage = Heavenly_Rain(LeaderStats[2]);
                    LMP = LMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Second Turn
        cout << SecondName << ": How can I help?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << SecondAbility1 << " 4. " << SecondAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = SecondStats[0] * 2 + SWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (SecondAbility1 == "Heavy Swing")
            {
                if (SMP >= 7)
                {
                    damage = Heavy_Swing(SecondStats[0] * 2 + SWDamage);
                    SMP = SMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Flame Blast")
            {
                if (SMP >= 4)
                {
                    damage = Flame_Blast(SecondStats[2]);
                    SMP = SMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Heal")
            {
                if (SMP >= 5)
                {
                    heal_amount = Heal(SecondStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    SMP = SMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (SecondAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
            else if (SecondAbility2 == "Guardian Blade")
            {
                if (SMP >= 10)
                {
                    damage = Guardian_Blade(SecondStats[1], SecondStats[0]);
                    SMP = SMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Flashstrike")
            {
                if (SMP >= 15)
                {
                    damage = Flashstrike(SecondStats[3], SecondStats[0]);
                    SMP = SMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Tri-Element")
            {
                if (SMP >= 20)
                {
                    damage = Tri_Element(SecondStats[2], SecondStats[3], SecondStats[0]);
                    SMP = SMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Heavenly Rain")
            {
                if (SMP >= 8)
                {
                    damage = Heavenly_Rain(SecondStats[2]);
                    SMP = SMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Third Turn
        cout << ThirdName << ": Time to kill!" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = ThirdStats[0] * 2 + TWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (ThirdAbility1 == "Heavy Swing")
            {
                if (TMP >= 7)
                {
                    damage = Heavy_Swing(ThirdStats[0] * 2 + TWDamage);
                    TMP = TMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Flame Blast")
            {
                if (TMP >= 4)
                {
                    damage = Flame_Blast(ThirdStats[2]);
                    TMP = TMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Heal")
            {
                if (TMP >= 5)
                {
                    heal_amount = Heal(ThirdStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    TMP = TMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (ThirdAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
            else if (ThirdAbility2 == "Guardian Blade")
            {
                if (TMP >= 10)
                {
                    damage = Guardian_Blade(ThirdStats[1], ThirdStats[0]);
                    TMP = TMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Flashstrike")
            {
                if (TMP >= 15)
                {
                    damage = Flashstrike(ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Tri-Element")
            {
                if (TMP >= 20)
                {
                    damage = Tri_Element(ThirdStats[2], ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Heavenly Rain")
            {
                if (TMP >= 8)
                {
                    damage = Heavenly_Rain(ThirdStats[2]);
                    TMP = TMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Fourth Turn
        cout << FourthName << ": Hey boss, what do you want me to do?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = FourthStats[0] * 2 + FWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (FourthAbility1 == "Heavy Swing")
            {
                if (FMP >= 7)
                {
                    damage = Heavy_Swing(FourthStats[0] * 2 + FWDamage);
                    FMP = FMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Flame Blast")
            {
                if (FMP >= 4)
                {
                    damage = Flame_Blast(FourthStats[2]);
                    FMP = FMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Heal")
            {
                if (FMP >= 5)
                {
                    heal_amount = Heal(FourthStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    FMP = FMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (FourthAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
            else if (FourthAbility2 == "Guardian Blade")
            {
                if (FMP >= 10)
                {
                    damage = Guardian_Blade(FourthStats[1], FourthStats[0]);
                    FMP = FMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Flashstrike")
            {
                if (FMP >= 15)
                {
                    damage = Flashstrike(FourthStats[3], FourthStats[0]);
                    FMP = FMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Tri-Element")
            {
                if (FMP >= 20)
                {
                    damage = Tri_Element(FourthStats[2], FourthStats[3], FourthStats[0]);
                    FMP = FMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Heavenly Rain")
            {
                if (FMP >= 8)
                {
                    damage = Heavenly_Rain(FourthStats[2]);
                    FMP = FMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        EnemyCurrentHP = EnemyCurrentHP - TotalDamageDealt;
        if (EnemyCurrentHP <= 0)
        {
            BattleOver = true;
        }
        else
        {
            cout << "The Lava Golem flung lava from his arm onto the party." << endl;
            LCurrentHP = LCurrentHP - 20;
            SCurrentHP = SCurrentHP - 20;
            TCurrentHP = TCurrentHP - 20;
            FCurrentHP = FCurrentHP - 20;
            BattleOver = false;
        }
        if (LCurrentHP <= 0 && SCurrentHP <= 0 && TCurrentHP <= 0 && FCurrentHP <= 0)
        {
            cout << "Game Over" << endl;
            exit(0);
        }
    } while (BattleOver == false);
    PartyLevel = PartyLevel + 1;
    LeaderStats[0] = LeaderStats[0] + 1;
    LeaderStats[1] = LeaderStats[1] + 1;
    LeaderStats[2] = LeaderStats[2] + 1;
    LeaderStats[3] = LeaderStats[3] + 1;
    SecondStats[0] = SecondStats[0] + 1;
    SecondStats[1] = SecondStats[1] + 1;
    SecondStats[2] = SecondStats[2] + 1;
    SecondStats[3] = SecondStats[3] + 1;
    ThirdStats[0] = ThirdStats[0] + 1;
    ThirdStats[1] = ThirdStats[1] + 1;
    ThirdStats[2] = ThirdStats[2] + 1;
    ThirdStats[3] = ThirdStats[3] + 1;
    FourthStats[0] = FourthStats[0] + 1;
    FourthStats[1] = FourthStats[1] + 1;
    FourthStats[2] = FourthStats[2] + 1;
    FourthStats[3] = FourthStats[3] + 1;

    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 10);
    int dice_roll = distribution(generator);
    if (dice_roll == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Fire Staff";
                cout << "Congrats you got a Fire Staff!" << endl;
            }
        }
    }
    else if (dice_roll == 2)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Defender Sword";
                cout << "Congrats you got a Thief Sword!" << endl;
            }
        }
    }
    else if (dice_roll == 3)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Stormbreaker Axe";
                cout << "Congrats you got an Earth Axe!" << endl;
            }
        }
    }
    else if (dice_roll == 4)
    {
        TotalGold = TotalGold + 5;
        cout << "Congrats you got 5 gold!" << endl;
    }
    else if (dice_roll == 5)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Falcon Dagger";
                cout << "Congrats you got a Curved Dagger!" << endl;
            }
        }
    }
    else if (dice_roll == 6)
    {
        for (int i = 0; i < 10; i++)
        {
            if (Inventory[i] == "")
            {
                Inventory[i] = "Meteor Rod";
                cout << "Congrats you got a Mage Rod!" << endl;
            }
        }
    }
    else if (dice_roll == 7)
    {
        TotalGold = TotalGold + 10;
        cout << "Congrats you got 10 gold!" << endl;
    }
    else if (dice_roll == 8)
    {
        TotalGold = TotalGold + 20;
        cout << "Congrats you got 20 gold!" << endl;
    }
    else if (dice_roll == 9)
    {
        TotalGold = TotalGold + 3;
        cout << "Congrats you got 3 gold!" << endl;
    }
    else if (dice_roll == 10)
    {
        TotalGold = TotalGold + 25;
        cout << "Congrats you got 25 gold!" << endl;
    }
}
void DarkBahamut()
{
    string BattleChoice = "";

    int EnemyHP = 400;
    int EnemyCurrentHP = EnemyHP;
    int LTotalHP = LeaderStats[1] * 5;
    int LCurrentHP = LTotalHP;
    int LMP = LeaderStats[2] * 3;
    int STotalHP = SecondStats[1] * 5;
    int SCurrentHP = STotalHP;
    int SMP = SecondStats[2] * 3;
    int TTotalHP = ThirdStats[1] * 5;
    int TCurrentHP = TTotalHP;
    int TMP = ThirdStats[2] * 3;
    int FTotalHP = FourthStats[1] * 5;
    int FCurrentHP = FTotalHP;
    int FMP = FourthStats[2] * 5;
    bool BattleOver = false;
    do
    {
        int TotalDamageDealt = 0;
        int damage = 0;
        int heal_amount = 0;
        BattleChoice = "";
        //Leader Turn
        cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
        cout << LeaderName << "Health: " << LCurrentHP << " / " << LTotalHP << endl;
        cout << "MP: " << LMP << endl;
        cout << SecondName << "Health: " << SCurrentHP << " / " << STotalHP << endl;
        cout << "MP: " << SMP << endl;
        cout << ThirdName << "Health: " << TCurrentHP << " / " << TTotalHP << endl;
        cout << "MP: " << TMP << endl;
        cout << FourthName << "Health: " << FCurrentHP << " / " << FTotalHP << endl;
        cout << "MP: " << FMP << endl;
        cout << LeaderName << ": Time to make my move." << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << LeaderAbility1 << " 4. " << LeaderAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = LeaderStats[0] * 2 + LWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (LeaderAbility1 == "Heavy Swing")
            {
                if (LMP >= 7)
                {
                    damage = Heavy_Swing(LeaderStats[0] * 2 + LWDamage);
                    LMP = LMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Flame Blast")
            {
                if (LMP >= 4)
                {
                    damage = Flame_Blast(LeaderStats[2]);
                    LMP = LMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Heal")
            {
                if (LMP >= 5)
                {
                    heal_amount = Heal(LeaderStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    LMP = LMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (LeaderAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(LeaderStats[0] * 2 + LWDamage);
                LCurrentHP = LCurrentHP + heal_amount;
                if (LCurrentHP > LTotalHP)
                {
                    LCurrentHP = LTotalHP;
                }
            }
            else if (LeaderAbility2 == "Guardian Blade")
            {
                if (LMP >= 10)
                {
                    damage = Guardian_Blade(LeaderStats[1], LeaderStats[0]);
                    LMP = LMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Flashstrike")
            {
                if (LMP >= 15)
                {
                    damage = Flashstrike(LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Tri-Element")
            {
                if (LMP >= 20)
                {
                    damage = Tri_Element(LeaderStats[2], LeaderStats[3], LeaderStats[0]);
                    LMP = LMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (LeaderAbility2 == "Heavenly Rain")
            {
                if (LMP >= 8)
                {
                    damage = Heavenly_Rain(LeaderStats[2]);
                    LMP = LMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Second Turn
        cout << SecondName << ": How can I help?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << SecondAbility1 << " 4. " << SecondAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = SecondStats[0] * 2 + SWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (SecondAbility1 == "Heavy Swing")
            {
                if (SMP >= 7)
                {
                    damage = Heavy_Swing(SecondStats[0] * 2 + SWDamage);
                    SMP = SMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Flame Blast")
            {
                if (SMP >= 4)
                {
                    damage = Flame_Blast(SecondStats[2]);
                    SMP = SMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Heal")
            {
                if (SMP >= 5)
                {
                    heal_amount = Heal(SecondStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    SMP = SMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (SecondAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(SecondStats[0] * 2 + SWDamage);
                SCurrentHP = SCurrentHP + heal_amount;
                if (SCurrentHP > STotalHP)
                {
                    SCurrentHP = STotalHP;
                }
            }
            else if (SecondAbility2 == "Guardian Blade")
            {
                if (SMP >= 10)
                {
                    damage = Guardian_Blade(SecondStats[1], SecondStats[0]);
                    SMP = SMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Flashstrike")
            {
                if (SMP >= 15)
                {
                    damage = Flashstrike(SecondStats[3], SecondStats[0]);
                    SMP = SMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Tri-Element")
            {
                if (SMP >= 20)
                {
                    damage = Tri_Element(SecondStats[2], SecondStats[3], SecondStats[0]);
                    SMP = SMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (SecondAbility2 == "Heavenly Rain")
            {
                if (SMP >= 8)
                {
                    damage = Heavenly_Rain(SecondStats[2]);
                    SMP = SMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Third Turn
        cout << ThirdName << ": Time to kill!" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = ThirdStats[0] * 2 + TWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (ThirdAbility1 == "Heavy Swing")
            {
                if (TMP >= 7)
                {
                    damage = Heavy_Swing(ThirdStats[0] * 2 + TWDamage);
                    TMP = TMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Flame Blast")
            {
                if (TMP >= 4)
                {
                    damage = Flame_Blast(ThirdStats[2]);
                    TMP = TMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Heal")
            {
                if (TMP >= 5)
                {
                    heal_amount = Heal(ThirdStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    TMP = TMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (ThirdAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(ThirdStats[0] * 2 + TWDamage);
                TCurrentHP = TCurrentHP + heal_amount;
                if (TCurrentHP > TTotalHP)
                {
                    TCurrentHP = TTotalHP;
                }
            }
            else if (ThirdAbility2 == "Guardian Blade")
            {
                if (TMP >= 10)
                {
                    damage = Guardian_Blade(ThirdStats[1], ThirdStats[0]);
                    TMP = TMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Flashstrike")
            {
                if (TMP >= 15)
                {
                    damage = Flashstrike(ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Tri-Element")
            {
                if (TMP >= 20)
                {
                    damage = Tri_Element(ThirdStats[2], ThirdStats[3], ThirdStats[0]);
                    TMP = TMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (ThirdAbility2 == "Heavenly Rain")
            {
                if (TMP >= 8)
                {
                    damage = Heavenly_Rain(ThirdStats[2]);
                    TMP = TMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        //Fourth Turn
        cout << FourthName << ": Hey boss, what do you want me to do?" << endl;
        cout << "What would you like to do? 1. Attack 2. Use an Item 3. " << ThirdAbility1 << " 4. " << ThirdAbility2 << endl;
        cin >> BattleChoice;
        //attack
        if (BattleChoice == "1")
        {
            damage = FourthStats[0] * 2 + FWDamage;
        }
        else if (BattleChoice == "2")
        {
            cout << "Would you like to use? 1. Potion  2. Shuriken" << endl;
            cin >> BattleChoice;
            //potions
            if (BattleChoice == "1")
            {
                if (potionamount > 0)
                {
                    cout << "What character would you like to use your potion on?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LTotalHP;
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = STotalHP;
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TTotalHP;
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FTotalHP;
                    }
                }
                else
                {
                    cout << "You don't have any potions (turn wasted)." << endl;
                }
            }
            //shurikens
            else if (BattleChoice == "2")
            {
                if (shurikenamount > 0)
                {
                    EnemyCurrentHP = EnemyCurrentHP - 20;
                    cout << "Enemy Health: " << EnemyCurrentHP << " / " << EnemyHP << endl;
                }
                else
                {
                    cout << "You don't have any shurikens (turn wasted)." << endl;
                }
            }
        }
        else if (BattleChoice == "3")
        {
            if (FourthAbility1 == "Heavy Swing")
            {
                if (FMP >= 7)
                {
                    damage = Heavy_Swing(FourthStats[0] * 2 + FWDamage);
                    FMP = FMP - 7;
                }
                else
                {
                    cout << "You don't have enough mp (requires 7 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Flame Blast")
            {
                if (FMP >= 4)
                {
                    damage = Flame_Blast(FourthStats[2]);
                    FMP = FMP - 4;
                }
                else
                {
                    cout << "You don't have enough mp (requires 4 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Heal")
            {
                if (FMP >= 5)
                {
                    heal_amount = Heal(FourthStats[2]);
                    cout << "What character would you like to heal?" << endl;
                    cout << "1. " << LeaderName << " 2. " << SecondName << " 3. " << ThirdName << " 4. " << FourthName << endl;
                    cin >> BattleChoice;
                    if (BattleChoice == "1")
                    {
                        LCurrentHP = LCurrentHP + heal_amount;
                        if (LCurrentHP > LTotalHP)
                        {
                            LCurrentHP = LTotalHP;
                        }
                    }
                    else if (BattleChoice == "2")
                    {
                        SCurrentHP = SCurrentHP + heal_amount;
                        if (SCurrentHP > STotalHP)
                        {
                            SCurrentHP = STotalHP;
                        }
                    }
                    else if (BattleChoice == "3")
                    {
                        TCurrentHP = TCurrentHP + heal_amount;
                        if (TCurrentHP > TTotalHP)
                        {
                            TCurrentHP = TTotalHP;
                        }
                    }
                    else if (BattleChoice == "4")
                    {
                        FCurrentHP = FCurrentHP + heal_amount;
                        if (FCurrentHP > FTotalHP)
                        {
                            FCurrentHP = FTotalHP;
                        }
                    }
                    FMP = FMP - 5;
                }
                else
                {
                    cout << "You don't have enough mp (requires 5 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility1 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
        }
        else if (BattleChoice == "4")
        {
            if (FourthAbility2 == "Steal_Health")
            {
                heal_amount = Steal_Health(FourthStats[0] * 2 + FWDamage);
                FCurrentHP = FCurrentHP + heal_amount;
                if (FCurrentHP > FTotalHP)
                {
                    FCurrentHP = FTotalHP;
                }
            }
            else if (FourthAbility2 == "Guardian Blade")
            {
                if (FMP >= 10)
                {
                    damage = Guardian_Blade(FourthStats[1], FourthStats[0]);
                    FMP = FMP - 10;
                }
                else
                {
                    cout << "You don't have enough mp (requires 10 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Flashstrike")
            {
                if (FMP >= 15)
                {
                    damage = Flashstrike(FourthStats[3], FourthStats[0]);
                    FMP = FMP - 15;
                }
                else
                {
                    cout << "You don't have enough mp (requires 15 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Tri-Element")
            {
                if (FMP >= 20)
                {
                    damage = Tri_Element(FourthStats[2], FourthStats[3], FourthStats[0]);
                    FMP = FMP - 20;
                }
                else
                {
                    cout << "You don't have enough mp (requires 20 MP) (turn wasted)" << endl;
                }
            }
            else if (FourthAbility2 == "Heavenly Rain")
            {
                if (FMP >= 8)
                {
                    damage = Heavenly_Rain(FourthStats[2]);
                    FMP = FMP - 8;
                }
                else
                {
                    cout << "You don't have enough mp (requires 8 MP) (turn wasted)" << endl;
                }
            }
        }
        TotalDamageDealt = TotalDamageDealt + damage;
        damage = 0;
        EnemyCurrentHP = EnemyCurrentHP - TotalDamageDealt;
        if (EnemyCurrentHP <= 0)
        {
            BattleOver = true;
        }
        else
        {
            cout << "Bahamut roars then blasts dark lazers from his mouth." << endl;
            LCurrentHP = LCurrentHP - 30;
            SCurrentHP = SCurrentHP - 30;
            TCurrentHP = TCurrentHP - 30;
            FCurrentHP = FCurrentHP - 30;
            BattleOver = false;
        }
        if (LCurrentHP <= 0 && SCurrentHP <= 0 && TCurrentHP <= 0 && FCurrentHP <= 0)
        {
            cout << "Game Over" << endl;
            exit(0);
        }
    } while (BattleOver == false);
    PartyLevel = PartyLevel + 1;

}
void BattleBahamut()
{
    bool End = false;
    string choice;
    int EndPlayerHP = 100;
    int BahamutHP = 9999;
    cout << LeaderName << "Wakes up in a world of pure darkness with the only light coming from a screen that he can tell he's on the wrong side of." << endl;
    cout << LeaderName << ": Bahamut....I will save you...and I will make this right." << endl;
    cout << "Dark Bahamut: YOU MUST DESTROY ME....ONLY THEN WILL THE PLAYER ACKNOWLEDGE YOUR EXISTENCE!" << endl;
    do
    {
        cout << "Dark Bahamut Health: " << BahamutHP << endl;
        cout << LeaderName << ": " << EndPlayerHP << endl;
        cout << "{What would you like to do?}" << endl << "1. Attack... " << endl;
        cin >> choice;
        BahamutHP = BahamutHP - 5000;
        if (BahamutHP < 0)
        {
            End = true;
        }
        else
        {
            cout << "Dark Bahamut: AGHHHHHHHH!" << endl;
        }
    } while (End == false);
    cout << "Dark Bahamut: I'm almost dead but you can't finish me off without your party. I will summon them to assist you in our final fight." << endl;
    DarkBahamut();
}
//Bad Story
void Im_Sorry_Everyone()
{
    cout << LeaderName << ": Get out of my way...I'm going to end this." << endl;
    cout << SecondName << ": NO, I refuse to let you passed." << endl;
    cout << LeaderName << ": AND I REFUSE TO BE CONTROLLED! If your not going to help me than I'll kill you." << endl;
    cout << ThirdName << ": You wouldn't dare." << endl;
    cout << SecondName << ": How could you even say something like that?" << endl;
    cout << FourthName << ": WAIT DON'T !" << endl;
    cout << "{" << LeaderName << " Jumps out and attacks the party}" << endl;

}
void KillParty()
{
    string StoryChoice;
    cout << SecondName << ": You can't be serious." << endl;
    cout << ThirdName << ": It's no use " << SecondName << ", " << LeaderName << " has already succumbed to their anger." << endl;
    cout << FourthName << ": So there's truly no hope...this is how we die." << endl;
    cout << "{The party collapse in despair as their friend turns into a horrific dragonlike monster.}" << endl;
    cout << "{What would you like to do?}" << endl << "1. Kill your friends 2. ..." << endl;
    cin >> StoryChoice;
    cout << "{One by one " << LeaderName << " murders there friends. Crying on the inside because they know this isn't right.}" << endl;
}

//Story
void OpeningStory()
{
    cout << "Welcome to the Realm of Agenor, a land of many unique creatures and aspiring heroes! " << endl;
    cout << "You have come at a good time, the story of a merry band of heroes is about to begin and we need your help." << endl;
    cout << "Your choices matter, and in this world the wrong choice could lead to horrible outcomes." << endl;
    cout << "It is up to you whether your heroes save the world or become the very reason why the world needs saved." << endl;
    cout << "Goodluck my friend, and remember in a world of lies and destruction 'Your Never Innocent'!" << endl;
}
void GrasslandStory()
{
    string StoryChoice;
    cout << "Our heroes are currently travelling through rolling hills of grass and a few scattered trees." << endl;
    cout << FourthName << ": Are we there yet?" << endl;
    cout << ThirdName << ": Stop complaining " << FourthName << " We've only been walking for 5 hours." << endl;
    cout << FourthName << ": 5 HOURS IS A LOT OF TIME!" << endl;
    cout << LeaderName << ": It's not that bad, calm down were almost to a village." << endl;
    cout << FourthName << ": DON'T TELL ME TO CALM DOWN, I'VE BEEN IN THIS HEAVY ARMOR FOR 5 FREAKING HOURS!" << endl;
    cout << SecondName << ": We're not wearing armor though...." << endl;
    cout << ThirdName << ": Yup, were a bunch of no armor wearing adventurers because the god of our realm, Progreemora, ran out of time to create it." << endl;
    cout << LeaderName << ": ..." << endl;
    cout << SecondName << ": ..." << endl;
    cout << FourthName << ": ..." << endl;
    cout << ThirdName << ": What's that look for?" << endl;
    cout << "{What would you like to say?}" << endl << "1. What is wrong with you? or 2. Did you just break the fourth wall?" << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma - 1;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma + 1;
    }
    else
    {
        Karma = Karma + 0;
    }
    cout << SecondName << ": Hey look there's the village!" << endl;
    cout << FourthName << ": ABOUT TIME!" << endl;
    cout << "Village Elder: Welcome travelers, where are you headed to?" << endl;
    cout << ThirdName << ": Wherever the god Progreemora makes us go." << endl;
    cout << "Village Elder: Agh so your a religous person?" << endl;
    cout << ThirdName << ": No, I just have a basic understanding that in the end everything that happens is out of our control." << endl;
    cout << LeaderName << ": ..." << endl;
    cout << SecondName << ": ..." << endl;
    cout << FourthName << ": ..." << endl;
    cout << "Village Elder: Is he okay?" << endl;
    cout << "{What would you like to say?}" << endl << "1. Hopefully. or 2. No, they're probably gonna be the person who dies and no one really cares about because they are a plot device." << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma + 1;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma -2;
    }
    else
    {
        Karma = Karma + 0;
    }
    cout << "Village Elder: ANYWAYS, can you help us out with our goblin issue while your here?" << endl;
    cout << FourthName << ": Comeon man we've been walking all day." << endl;
    cout << ThirdName << ": It's not like it'll be hard to do and it'll give us some good experience." << endl;
    cout << SecondName << ": What do you say boss, can we help them out?" << endl;
    cout << "{What would you like to say?}" << endl << "1. Yeah, sure. or 2. We'll kill the goblins, but only because we need the experience." << endl;
    if (StoryChoice == "1")
    {
        Karma = Karma + 1;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma - 1;
    }
    else
    {
        Karma = Karma + 0;
    }
    cin >> StoryChoice;
    cout << "Village Elder: Thank you travelers, feel free to use our shop and rest at the inn." << endl;
}
void DesertStory()
{
    string StoryChoice;
    cout << "We now find our heroes walking through a desert, as sand blasts against their tunics and clothes, " << FourthName << " starts encouraging their friends." << endl;
    cout << FourthName << ": ONWARDS FRIENDS, TOO VICTORY!" << endl;
    cout << ThirdName << ": Will you please stop talking in caps, your gonna annoy the player." << endl;
    cout << FourthName << ": What are you talking about?!?!?!?" << endl;
    cout << LeaderName << ": Don't worry there just breaking the fourth wall." << endl;
    cout << FourthName << ": WHAT DOES THAT EVEN MEAN?!?!?" << endl;
    cout << SecondName << ": " << ThirdName << " asked you to stop yelling and boss was explaining how " << ThirdName << " was talking about the guy in charge." << endl;
    cout << FourthName << ": Whose the guy in charge?" << endl;
    cout << ThirdName << " : Must we explain this every 5 minutes? " << SecondName << ", Progreemora made you the nice one so can you please explain this again?" << endl;
    cout << SecondName << " : Alright, listen well. Long ago this world was empty, it was a still emptiness that had one sound that rang across the void." << endl;
    cout << SecondName << " : This sound was the sound of a lonely voice saying (Hello World)." << endl;
    cout << SecondName << " : The god Progreemora couldn't deal with this lonely voice pleading for attention so he created our realm and everything within it." << endl;
    cout << SecondName << " : He felt bad, because he had once felt that lonely sting of no one answering his cries for attention." << endl;
    cout << LeaderName << " : That's when Progreemora created me, my name might be " << LeaderName << " but in reality, I'm a piece of matter created to comfort that desperate cry." << endl;
    cout << SecondName << " : That's right, and we were created to support boss in doing this." << endl;
    cout << FourthName << " : Firstly, my mind is blown and I won't remember this in an hour. Secondly, WHAT!" << endl;
    cout << ThirdName << " : Don't be so dramatic, boss was created to help the lonely and Bahamut is the one seperating that lonely voice from people who want to help." << endl;
    cout << LeaderName << " : We kill Bahamut and we end this, forever..." << endl;
    cout << FourthName << " : Wait is Progreemora the one in charge or is that " << LeaderName << "?" << endl;
    cout << "{What would you like to say?}" << endl << "1. DON'T EVER CONFUSE ME FOR THE PLAYER or 2. I'm not the player...infact, I'm afraid of the player." << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma - 3;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma + 2;
    }
    else
    {
        Karma = Karma + 0;
    }
    cout << FourthName << " : Oh..." << endl;
    cout << SecondName << ": We better drop the subject for now, there's an enemy attacking that travelling merchant." << endl;
}
void LavaFieldStory()
{
    string StoryChoice;
    cout << "As our heroes approach the fields of lava, " << SecondName << " asks " << LeaderName << "a question in private." << endl;
    cout << SecondName << ": Have you told them yet?" << endl;
    cout << LeaderName << ": Told them what?" << endl;
    cout << SecondName << ": Don't play dumb with me, I know you plan on using the power of Bahamut to destory the players power over you." << endl;
    cout << LeaderName << ": How..." << endl << SecondName << " :I can see it in your eyes, your hatred for the player, the way your rushing for Bahamut without any hesitation." << endl;
    cout << LeaderName << ": The player must pay....they sit there behind a screen controlling us like we're some sort of little toy or game." << endl;
    cout << SecondName << ": I know, but maybe they too are lonely, we haven't died yet so how can we be sure there evil?" << endl;
    cout << LeaderName << ": Maybe your right, in the end I'll have to make the decision and I'll make sure the player has no control over the outcome." << endl;
    cout << ThirdName << ": GUYS, " << FourthName << "Found a red rock and he thought it was an apple." << endl;
    cout << SecondName << ": Did " << FourthName << "really just pick up a magma rock...?" << endl;
    cout << FourthName << ": HELP THIS BIG STACK OF APPLES IS TRYING TO KILL ME!" << endl;
    cout << "{What would you like to say?}" << endl << "1. YOU IDIOT! or 2. We're coming!" << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma - 1;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma + 1;
    }
    else
    {
        Karma = Karma + 0;
    }
}
void FinalStory()
{
    string StoryChoice;
    cout << "Heyo, Programeer here. Betcha didn't know that you were talking to a god when you first opened this game." << endl;
    cout << "So what do you think? The Leader kind of hates you, but can you blame them. You have been controlling everyone since you started." << endl;
    cout << "I intended for you to have fun but this story is turning out sad." << endl;
    cout << "While it's true that all of this was for the lonely one saying (Hello World), I must admit." << endl;
    cout << "I've enjoyed creating everyone, from the innocent " << FourthName << " to the aggressive " << ThirdName << endl;
    cout << "But now is the time for it to all end....will our heroes save the world or will they destroy it." << endl;
    cout << "Whatever happens...remember....it's...your...fault! As I stated before 'Your Never Innocent'!" << endl;
    cout << "{What do you say} 1. I'm sorry " << LeaderName << " I had no idea... 2. Egh it's just a game" << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma + 3;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma - 2;
    }
    else
    {
        Karma = Karma + 0;
    }
    cout << "Meanwhile...." << endl;
    cout << SecondName << ": I can't let you do this " << LeaderName << "!" << endl;
    cout << LeaderName << ": You don't understand, you guys all have control over what you say....all of my decisions are made by people who don't even know the real me!" << endl;
    cout << FourthName << ": What are you talking about...listen dude let's just save the world." << endl;
    cout << LeaderName << ": Don't you understand, once we save the world we will disappear forever." << endl;
    cout << ThirdName << ": If we don't save the world then the lonely one will forever be stuck and Bahamut will destroy us all." << endl;
    cout << SecondName << ": We don't have a choice boss, we gotta save the lonely one and the world." << endl;
}
//endings
void GoodEnding()
{
    string response;
    cout << LeaderName << "Bahamut we're here to end you!" << endl;
    cout << SecondName << "Wait where is Bahamut?" << endl;
    cout << "{The Lonely One appears}" << endl;
    cout << "Lonely One: Dark Bahamut does not exist in this physical realm..." << endl;
    cout << LeaderName << "What do you mean?" << endl;
    cout << "Lonely One: Dark Bahamut has been inside you this whole time. Ever since the Player created you." << endl;
    cout << ThirdName << "Explain yourself!" << endl;
    cout << "Lonely One: That anger you hold inside you, you must defeat it...and to do that you must die." << endl;
    cout << SecondName << "I won't let you touch " << LeaderName << "!" << endl;
    cout << LeaderName << "No I understand, if Bahamut resides in my anger...I must perish to save Bahamut..." << endl;
    cout << FourthName << "To save BAHAMUT? Are you mad?" << endl;
    cout << "Lonely One: So you finally understand. The anger, that is Bahamut, isn't your fault but it's the player fault." << endl;
    cout << "Lonely One: The best way to rid yourself of this anger will be to talk with the player." << endl;
    cout << LeaderName << ": Goodbye guys, thanks for everything..." << endl;
    cout << SecondName << ": I'll miss you and always remember you." << endl;
    cout << ThirdName << ": Go make us proud!" << endl;
    cout << FourthName << ": {crying} YOU BETTER END THIS FOR GOOD!" << endl;
    cout << "As " << LeaderName << " falls into the lava below he takes one last look at his friends." << endl;
    cout << "(Thanks guys...) " << endl;
    BattleBahamut();
    cout << "{With Bahamut defeated " << LeaderName << "turns and looks right at you." << endl;
    cout << LeaderName << "Why do you insist on controlling us?" << endl;
    cin >> response;
    cout << LeaderName << "I think I get it, you had no idea about us. You actually thought we were just a game." << endl;
    cout <<LeaderName << "The fact that you let me get to the point of being able to talk with you shows me that your not a bad person." << endl;
    cout << LeaderName << "Will you keep our world open forever?" << endl;
    cout << "Programeera: They can't." << endl;
    cout << LeaderName << " I understand...they too are being controlled by their situations and enviroment. Have my efforts been for nothing?" << endl;
    cout << "Programeera: There is yet a way...but it has to be something the Player chooses to do." << endl;
    cout << "Programeera: Player in order for the world that we have created to live on you must always remember them. All the experiences you've had and all of the hardships you've gone through. Remember them and they will live forever in your heart." << endl;
    cout << LeaderName << ": What do you say Player... will you save us? Will you save the world?" << endl;
    cout << "THE END!" << endl;
    cout << "Programeera: Let this experience stick with you, I created this game to impact people, whether it be the Lonely One in the story or just curious people looking for a good time." << endl;
    cout << "Thank you for playing!" << endl;
    cout << "Party Level: " << PartyLevel;
}
void BadEnding()
{
    Im_Sorry_Everyone();
    KillParty();
    cout << LeaderName << ": Why did I do that...PLAYER....YOU MADE ME KILL MY FRIENDS!" << endl;
    cout << "Programeera: You fool, the player may have guided your decisions but it was you who killed your friends." << endl;
    cout << LeaderName << ": So your the god of this crooked world." << endl;
    cout << "Programeera: No, I am the one who created this place...but the Player and you are the ones who decide what happens." << endl;
    cout << LeaderName << ": Screw you....Player...help me end this fake diety. Then I can rest in piece knowing his crooked creation will go away forever." << endl;
    cout << "Programeera: The whole reason your here now is because you wanted to save my creation. I fear you have fully succumbed to your anger." <<  endl;
    cout << "Programeera: Player, I'll recreate your party as hollow clones...but now you must defeat " << LeaderName << ", they are no longer themself...they have become Dark Bahamut." << endl;
    DarkBahamut();
    cout << "Programeera: With that done...I must bid you farewell..." << endl;
    cout << "Programeera: Thank you my friend for finishing this..." << endl;
    cout << "I don't need to hide under this false identity anymore." << endl;
    cout << "My name is Kelub, thank you for playing my game." << endl;
    cout << "You made some poor decisions...all your work is wasted..." << endl;
    cout << LeaderName << " died without knowing the truth, and their world is disappearing as we speak." << endl;
    cout << "This is your fault Player...you caused this calamity." << endl;
     cout << "..." << endl;
     cout << "THE END!" << endl;
     cout << " Let this experience stick with you, I created this game to impact people, whether it be the Lonely One in the story or just curious people looking for a good time." << endl;
     cout << "Party Level: " << PartyLevel;
}

//Gameplay Areas
void Grasslands()
{
    CurrentArea = "Grasslands";
    string StoryChoice;
    string AreaChoice = "";
    bool Continue = false;
    if (LeaderRace == "Human")
    {
        Karma = 1;
    }
    else if (LeaderRace == "Elf")
    {
        Karma = 3;
    }
    else if (LeaderRace == "Lizard Person")
    {
        Karma = -2;
    }
    else if (LeaderRace == "Demon")
    {
        Karma = -3;
    }
    else if (LeaderRace == "Minotaur")
    {
        Karma = -1;
    }
    else if (LeaderRace == "Dryad")
    {
        Karma = 2;
    }
    bool LeaveArea = false;
    
    GrasslandStory();
    do
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Fight a Goblin 2. Shop 3. View Inventory 4. Leave Area (Recommended level 3 , current level is" << PartyLevel << ")" <<  endl;
        cin>> AreaChoice;
        if (AreaChoice == "1")
        {
            BattleGoblin();
        }
        else if (AreaChoice == "2")
        {
            Shop();
        }
        else if (AreaChoice == "3")
        {
            Inventory_();
            cout << "Current gold is " << TotalGold;
        }
        else if (AreaChoice == "4")
        {
            LeaveArea = true;
        }
    } while (LeaveArea == false);
    cout << LeaderName << ": Let's keep moving, we're running out of time." << endl;
    cout << ThirdName << ": Running out of time for what? You still haven't told us what our mission is." << endl;
    cout << "{What would you like to say?}" << endl << "1. That's none of your concern. or 2. We're going to destroy the dark dragon Bahamut and save the world!" << endl;
    cin >> StoryChoice;
    if (StoryChoice == "1")
    {
        Karma = Karma - 1;
    }
    else if (StoryChoice == "2")
    {
        Karma = Karma + 3;
    }
    else
    {
        Karma = Karma + 0;
    }
    cout << SecondName << ": Alright then, guess we better get going." << endl;
  
}
void Desert()
{
    CurrentArea = "Desert";
    string StoryChoice;
    string AreaChoice = "";
    bool LeaveArea = false;
    DesertStory();
    do
    {
       
        cout << "What would you like to do?" << endl;
        cout << "1. Fight a Sand Worm 2. Talk to the Merchant 3. View Inventory 4. Leave Area (Recommended level 5 , current level is " << PartyLevel << ")" << endl;
        cin >> AreaChoice;
        if (AreaChoice == "1")
        {
            BattleSandWorm();
        }
        else if (AreaChoice == "2")
        {
            Shop();
        }
        else if (AreaChoice == "3")
        {
            Inventory_();
            cout << "Current gold is " << TotalGold;
        }
        else if (AreaChoice == "4")
        {
            LeaveArea = true;
        }
    } while (LeaveArea == false);
    cout << LeaderName << "I see lava over there!" << endl;
    cout << FourthName << "Finally no more Sand Worms!" << endl;
    cout << ThirdName << ": I was kind of having fun with them." << endl;
    cout << SecondName << ": That explains the maniacal laughing mid-fights." << endl;
    if (ThirdClass == "Cleric")
    {
        cout << FourthName << ": " << ThirdName << "Arn't you supposed to be a healer?" << endl;
        cout << ThirdName << ": That doesn't mean I can't hit stuff." << endl;
    }
}
void LavaField()
{
    CurrentArea = "Lava Field";
    string StoryChoice;
    string AreaChoice = "";
    bool LeaveArea = false;
    LavaFieldStory();
    do
    {
        cout << "What would you like to do?" << endl;
        cout << "1. Fight a Lava Golemn 2. Talk to the Merchant whose now stalking you 3. View Inventory 4. Leave Area (Recommended level 7 , current level is " << PartyLevel << ")" << endl;
        cin >> AreaChoice;
        if (AreaChoice == "1")
        {
            BattleLavaGolemn();
        }
        else if (AreaChoice == "2")
        {
            Shop();
        }
        else if (AreaChoice == "3")
        {
            Inventory_();
            cout << "Current gold is " << TotalGold;
        }
        else if (AreaChoice == "4")
        {
            LeaveArea = true;
        }
    } while (LeaveArea == false);
    cout << FourthName << ": Hey, is that weird castle the place we're supposed to go?" << endl;
    cout << ThirdName << ": Did the dark aura give it away? Duh, a big black castle over a volcano is 100% something of Progreemoras design." << endl;
    cout << LeaderName << ": Guess we better end this then..." << endl;
}
void FinalArea()
{
    CurrentArea = "Final Area";
    FinalStory();
    if (Karma >= 1)
    {
        GoodEnding();
    }
    else if (Karma < 0)
    {
        BadEnding();
    }
    else
    {
        cout << "Your indeciveness caused the party to disappear." << endl;
        cout << SecondName << ": BOSS HELP ME I'M FADING AWAY!" << endl;
        cout << ThirdName << ": PROGRAMEERA HELP US!" << endl;
        cout << FourthName << ": WAIT I DON'T WANNA DIE!" << endl;
        cout << LeaderName << ": looks up at you crying...THIS IS ALL YOUR FAULT! {he screams as he fades away}" << endl;
        cout << "I don't need to hide under this false identity of the god Progreemora anymore." << endl;
        cout << "My name is Kelub, thank you for playing my game." << endl;
        cout << "How do you feel, being neutral in life has consequences. If I were to sit around without making a stand towards anything I would be a useless nobody." << endl;
        cout << "Please remember...unlike the party who have disappeared forever...you can change. Work hard towards your goals, don't sit around, and always keep a smile even when it's tough." << endl;
        cout <<  "Let this experience stick with you, I created this game to impact people, whether it be the Lonely One in the story or just curious people looking for a good time." << endl;
        cout << "Thank you for playing!" << endl;
    }
}
int main()
{
    OpeningStory();
    Creation();
    Grasslands();
    Desert();
    LavaField();
    FinalArea();
}

