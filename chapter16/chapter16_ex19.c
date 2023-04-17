/*
Declare a structure with the following members whose tag is pinball_machine:
name - a string of up to 40 characters
year - an integer(representing the year of manufacture)
type - an enumeration with the value EM(electromechanical) and SS(solid state)
players - an integer(representing the maximum number of players)
*/

struct pinball_machine
{
	char name[40];
	int year, players;
	enum {EM, SS} type;
}
