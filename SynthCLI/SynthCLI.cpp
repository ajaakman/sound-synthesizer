#include "stdafx.h"

#include "SynthCLI.h"

SynthCLI::CLISynth::CLISynth()
{
	pCLISynth = new clr::TestWindow();
}

SynthCLI::CLISynth::~CLISynth()
{
	delete pCLISynth;
}

void SynthCLI::CLISynth::SetMasterVolume(const double dNewAmplitude)
{
	pCLISynth->SetMasterVolume(dNewAmplitude);
}

void SynthCLI::CLISynth::SetWaveAmplitude(const double dNewAmplitude, const int nOSC)
{
	pCLISynth->SetWaveAmplitude(dNewAmplitude, nOSC);
}

void SynthCLI::CLISynth::SetWaveType(const unsigned int nNewWave, const unsigned int nNewSawParts, const int nOSC)
{
	pCLISynth->SetWaveType(nNewWave, nNewSawParts, nOSC);
}

void SynthCLI::CLISynth::SetVibratoFrequency(const double dNewFrequency, const int nOSC)
{
	pCLISynth->SetVibratoFrequency(dNewFrequency, nOSC);
}

void SynthCLI::CLISynth::SetVibratoAmplitude(const double dNewAmplitude, const int nOSC)
{
	pCLISynth->SetVibratoAmplitude(dNewAmplitude, nOSC);
}

void SynthCLI::CLISynth::SetTremoloFrequency(const double dNewFrequency, const int nOSC)
{
	pCLISynth->SetTremoloFrequency(dNewFrequency, nOSC);
}

void SynthCLI::CLISynth::SetTremoloAmplitude(const double dNewAmplitude, const int nOSC)
{
	pCLISynth->SetTremoloAmplitude(dNewAmplitude, nOSC);
}

void SynthCLI::CLISynth::SetTune(const int nNewTune, const int nOSC)
{
	pCLISynth->SetTune(nNewTune, nOSC);
}

void SynthCLI::CLISynth::SetFineTune(const double dNewTune, const int nOSC)
{
	pCLISynth->SetFineTune(dNewTune, nOSC);
}

void SynthCLI::CLISynth::SetAttackTime(const double dNewTime) 
{
	pCLISynth->SetAttackTime(dNewTime);
}

void SynthCLI::CLISynth::SetStartAmplitude(const double dNewAmplitude) 
{
	pCLISynth->SetStartAmplitude(dNewAmplitude);
}

void SynthCLI::CLISynth::SetDecayTime(const double dNewTime) 
{
	pCLISynth->SetDecayTime(dNewTime);
}

void SynthCLI::CLISynth::SetSusatainAmplitude(const double dNewAmplitude) 
{ 
	pCLISynth->SetSusatainAmplitude(dNewAmplitude);
}

void SynthCLI::CLISynth::SetReleaseTime(const double dNewTime) 
{ 
	pCLISynth->SetReleaseTime(dNewTime);
}
