#pragma once
#include <rack.hpp>


using namespace rack;

// Declare the Plugin, defined in plugin.cpp
extern Plugin* pluginInstance;

// Declare each Model, defined in each module source file
extern Model* modelVCO_1;

// Knobs
struct AHMRoundKnobWhiteHuge : RoundKnob{
	AHMRoundKnobWhiteHuge();
};

struct AHMRoundKnob2WhiteHuge : RoundKnob{
	AHMRoundKnob2WhiteHuge();
};

struct AHMRoundKnobWhiteLarge : RoundKnob{
	AHMRoundKnobWhiteLarge();
};

struct AHMRoundKnobWhiteTiny : RoundKnob{
	AHMRoundKnobWhiteTiny();
};

struct AHMRotaryTumblerWhiteHugeSnap : RoundKnob{
	AHMRotaryTumblerWhiteHugeSnap();
};

struct VCOFreqKnobParamQuantity : ParamQuantity {
	virtual float offset();
	float getDisplayValue() override;
	void setDisplayValue(float v) override;
};
