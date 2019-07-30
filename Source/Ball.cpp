/*
  ==============================================================================

    Ball.cpp
    Created: 29 Jul 2019 10:04:53pm
    Author:  Joshua Hodge

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Ball.h"

//==============================================================================
Ball::Ball()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

Ball::~Ball()
{
}

void Ball::paint (Graphics& g)
{
    Rectangle<float> area { posX, posY, size, size };
    
    g.fillAll (Colours::black);
    
    g.setColour (Colours::lightgoldenrodyellow);
    g.drawEllipse (area, 2.0);
}

void Ball::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
