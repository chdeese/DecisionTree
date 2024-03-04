#pragma once
#include "Condition.h"

class Decision
{
private:
	/// <summary>
	/// stores a reference to the next decision. 
	/// (Condition is true)
	/// </summary>
	Decision* m_decisionTrue;

	/// <summary>
	/// stores a reference to the next decision.
	/// (Condition is false)
	/// </summary>
	Decision* m_decisionFalse;

	/// <summary>
	/// stores a reference to a condition.
	/// </summary>
	Condition* m_condition;

public:
	/// <summary>
	/// constructs a decision that can decide between two outcomes based on a condition.
	/// </summary>
	Decision(Decision* decisionTrue, Decision* decisionFalse, Condition* condition);

	/// <summary>
	/// makes a decision based on a condition.
	/// </summary>
	void makeDecision();
};

