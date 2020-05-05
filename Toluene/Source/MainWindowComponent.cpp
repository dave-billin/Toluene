/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "CustomWidgetTestTabComponent.h"
#include "OscEditGroup.h"
//[/Headers]

#include "MainWindowComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainWindowComponent::MainWindowComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    tabsMainWindowTabs.reset (new TabbedComponent (TabbedButtonBar::TabsAtTop));
    addAndMakeVisible (tabsMainWindowTabs.get());
    tabsMainWindowTabs->setTabBarDepth (30);
    tabsMainWindowTabs->addTab (TRANS("OSC Edit Group"), Colours::lightgrey, new OscEditGroup(), true);
    tabsMainWindowTabs->addTab (TRANS("Custom Widget Test"), Colours::lightgrey, new CustomWidgetTestTabComponent(), true);
    tabsMainWindowTabs->setCurrentTabIndex (0);

    tabsMainWindowTabs->setBounds (8, 8, 616, 360);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainWindowComponent::~MainWindowComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tabsMainWindowTabs = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainWindowComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainWindowComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainWindowComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44"/>
  <TABBEDCOMPONENT name="Main window tabs" id="85bcbc51c423a44a" memberName="tabsMainWindowTabs"
                   virtualName="" explicitFocusOrder="0" pos="8 8 616 360" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="OSC Edit Group" colour="ffd3d3d3" useJucerComp="0" contentClassName="OscEditGroup"
         constructorParams="" jucerComponentFile=""/>
    <TAB name="Custom Widget Test" colour="ffd3d3d3" useJucerComp="0"
         contentClassName="CustomWidgetTestTabComponent" constructorParams=""
         jucerComponentFile=""/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

