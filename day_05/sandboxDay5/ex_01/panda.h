#pragma once

#include <string>
#include "animal.h"

class panda : public virtual animal
{
public:
	panda();
	~panda();

	void print() const override;

private:
};