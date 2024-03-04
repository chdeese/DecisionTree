#include "Decision.h"

void Decision::makeDecision()
{
	//moves to the next decision Node after checking a condition.
	if(m_condition->checkCondition())
	{
		//if the condition is true, move to decisionTrue.
		m_decisionTrue->makeDecision();
	}
	else
	{
		//if the condition is false, move to decisionTrue.
		m_decisionFalse->makeDecision();
	}
}
