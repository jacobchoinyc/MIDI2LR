/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_803E4ECD2CBCEA5A__
#define __JUCE_HEADER_803E4ECD2CBCEA5A__

//[Headers]     -- You can add your own extra header files here --
/*
==============================================================================

PWoptions.h

This file is part of MIDI2LR. Copyright 2015 by Rory Jaffe.

MIDI2LR is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later
version.

MIDI2LR is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
MIDI2LR.  If not, see <http://www.gnu.org/licenses/>.
==============================================================================
*/
#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
class ControlsModel;
//[/Headers]

//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class PWoptions: public Component,
    private TextEditor::Listener {
public:
    //==============================================================================
    PWoptions();
    ~PWoptions();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    static void LinkToControlsModel(ControlsModel* model) noexcept
    {
        controls_model_ = model;
    }
    void BindToControl(size_t channel);
    //[/UserMethods]

    void paint(Graphics& g) override;
    void resized() override;

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    TextEditor::LengthAndCharacterRestriction numrestrict_{5, "0123456789"};
    void textEditorFocusLost(TextEditor& t) override;
    static ControlsModel* controls_model_;
    size_t boundchannel_;  //note: 0-based
      //[/UserVariables]

      //==============================================================================
    ScopedPointer<Label> label;
    ScopedPointer<TextEditor> minval;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> maxval;
    ScopedPointer<Label> label3;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(PWoptions)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_803E4ECD2CBCEA5A__
