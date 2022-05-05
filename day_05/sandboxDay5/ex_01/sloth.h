#pragma once

#include <string>
#include "animal.h"

class sloth : public virtual animal
{
public:
	sloth();
	~sloth();

	void print() const override;

private:
};