#include "stdafx.h"

#include "SynthCLI.h"

SynthCLI::CLISynth::CLISynth()
{
	pCLISynth = new TestWindow();
}

SynthCLI::CLISynth::~CLISynth()
{
	delete pCLISynth;
}