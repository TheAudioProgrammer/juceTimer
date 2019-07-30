/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (800, 600);

    addAndMakeVisible (ball);
    
    Timer::startTimerHz (60);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    Timer::stopTimer();
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.

    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!

    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::white);
}

void MainComponent::timerCallback()
{
    ball.posX+=ball.speedX;
    ball.posY+=ball.speedY;
    
    if (ball.posX >= ball.getWidth() - ball.size || ball.posX <= 0)
    {
        ball.speedX = -ball.speedX;
    }
    
    if (ball.posY >= ball.getHeight() - ball.size || ball.posY <= 0)
    {
        ball.speedY = -ball.speedY;
    }
    
    ball.repaint();
}

void MainComponent::resized()
{
    ball.setBounds (getWidth() / 2 - 100, getHeight() / 2 - 100, 200, 200);
}
