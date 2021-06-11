

#include <iostream>
using namespace std;
//Leader Stuff
string LeaderName;
string LeaderClass;
string LeaderRace = "Human";
string LeaderAbility1;
string LeaderAbility2;
//Second Stuff
string SecondName;
string SecondClass;
string SecondRace = "Elf";
string SecondAbility1;
string SecondAbility2;
//Third Stuff
string ThirdName;
string ThirdClass;
string ThirdRace = "Demon";
string ThirdAbility1;
string ThirdAbility2;
//Fourth Stuff
string FourthName;
string FourthClass;
string FourthRace = "Minotaur";
string FourthAbility1;
string FourthAbility2;
//______________________
bool Breakout = false;
string choice = "";
bool YN = false;
//Strength,Toughness,Wisdom,Speed
int LeaderStats[] = { 4,4,4,4 };
int SecondStats[] = { 1,2,6,5 };
int ThirdStats[] = { 6,1,5,3 };
int FourthStats[] = { 6,7,0,2 };
//Class Assignments
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
        } while (choice != "yes" || choice != "no");
        
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

int main()
{
    Creation();
}

