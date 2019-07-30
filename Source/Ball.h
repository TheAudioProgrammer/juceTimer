/*
  ==============================================================================

    Ball.h
    Created: 29 Jul 2019 10:04:53pm
    Author:  Joshua Hodge

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class Ball    : public Component
{
public:
    Ball();
    ~Ball();

    void paint (Graphics&) override;
    void resized() override;
    
    float posX { 10 };
    float posY { 10 };
    float speedX { 1 };
    float speedY { 3 };
    float size { 20 };

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Ball)
};
