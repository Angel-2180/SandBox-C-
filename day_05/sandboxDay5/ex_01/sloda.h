#pragma once

#include "panda.h"
#include "sloth.h"

class sloda : public panda, public sloth
{
public:
	sloda();
	~sloda();

	void print() const override;

private:
};