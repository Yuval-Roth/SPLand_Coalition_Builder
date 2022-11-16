#include "../include/JoinPolicy.h"


JoinPolicy* MandatesJoinPolicy::clone()
{
    return new MandatesJoinPolicy();
}

Coalition* MandatesJoinPolicy::selectCoalition(list<Coalition*>& coalition)
{
    int maxVal = 0;
    Coalition* chosenCoalition = 0;
    
    for(Coalition* currCoalition : coalition){
        if (currCoalition->getMandatesCount() > maxVal)
        {
            maxVal = currCoalition->getMandatesCount();
            chosenCoalition = currCoalition;
        }   
    }
    return chosenCoalition;
}

JoinPolicy* LastOfferJoinPolicy::clone()
{
    return new LastOfferJoinPolicy();
}
Coalition* LastOfferJoinPolicy::selectCoalition(list<Coalition*>& coalition) //assumes the last offer in list[0]
{
    return new Coalition(0);
}