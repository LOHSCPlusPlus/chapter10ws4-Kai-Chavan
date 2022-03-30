#include "Rabbit.h"
class RabbitDataBase{
public:
    
RabbitDataBase();
void read();
void print(ostream &out, bool printIndex);
void save();
void remove();
void add();


private:

enum {MAX_RABBITS=50};
Rabbit rabbits[MAX_RABBITS];
int numRabbits;





};