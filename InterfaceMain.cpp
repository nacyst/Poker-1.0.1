

/*
 ==============================================================================
 
 Interface.cpp
 Created: 10 Oct 2017 2:01:26pm
 Author:  Микита Вовк
 
 ==============================================================================
 */

#include "Interface.h"

Interface::Interface ()
{
   
    

    addAndMakeVisible (imageButton = new ImageButton ("new button"));
    imageButton->setExplicitFocusOrder (50);
    imageButton->setButtonText (String());
    imageButton->addListener (this);
    
    imageButton->setImages (false, true, true,
                            ImageCache::getFromMemory (start_png, start_pngSize), 1.000f, Colour (0x00000000),
                            ImageCache::getFromMemory (poker_2_png, poker_2_pngSize), 1.000f, Colour (0x00000000),
                            ImageCache::getFromMemory (start_png, start_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
    imageButton2->addListener (this);
    
    imageButton2->setImages (false, true, true,
                             ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000),
                             ImageCache::getFromMemory (help_2_png, help_2_pngSize), 1.000f, Colour (0x00000000),
                             ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000));

    
    cachedImage_tablePoker_jpg_1 = ImageCache::getFromMemory (tablePoker_jpg, tablePoker_jpgSize);
    cachedImage_zastawa_jpg_13 = ImageCache::getFromMemory (zastawa_jpg, zastawa_jpgSize);
    
    setSize (700, 483);
    
    
    
}

Interface::~Interface()
{
    
    imageButton = nullptr;
    imageButton2 = nullptr;
  
    
}

void Interface::paint (Graphics& g)
{
 
    
    {
        int x = 0, y = 0, width = 700, height = 483;
        
        g.setColour (Colours::black);
        g.drawImage (cachedImage_tablePoker_jpg_1,
                     x, y, width, height,
                     0, 0, cachedImage_tablePoker_jpg_1.getWidth(), cachedImage_tablePoker_jpg_1.getHeight());
    }
    
    

    
    {
        int x = 180, y = 156, width = 52, height = 78;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_2,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_2.getWidth(), cachedImage_cards_png_2.getHeight());
    }
    
    {
        int x = 252, y = 156, width = 52, height = 78;

        
        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_3,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_3.getWidth(), cachedImage_cards_png_3.getHeight());
    }
    
    {
        int x = 324, y = 156, width = 52, height = 78;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_4,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_4.getWidth(), cachedImage_cards_png_4.getHeight());
    }
    
    {
        int x = 396, y = 156, width = 52, height = 78;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_5,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_5.getWidth(), cachedImage_cards_png_5.getHeight());
    }
    
    {
        int x = 468, y = 156, width = 52, height = 78;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_6,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_6.getWidth(), cachedImage_cards_png_6.getHeight());
    }
    
     {
     float x = 284.0f, y = 380.0f, width = 120.0f, height = 60.0f;
     Colour fillColour = Colour (0xff350b0b);
     g.setColour (fillColour);
     g.fillRoundedRectangle (x, y, width, height, 20.000f);
     }
     
    {
        int x = 292, y = 68, width = 43, height = 69;
        g.setColour (Colours::black);
        g.drawImage (cachedImage__22359445_744499265740935_1042817326_n_png_7,
                     x, y, width, height,
                     0, 0, cachedImage__22359445_744499265740935_1042817326_n_png_7.getWidth(), cachedImage__22359445_744499265740935_1042817326_n_png_7.getHeight());
    }
    
    {
        int x = 287, y = 63, width = 52, height = 79;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_8,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_8.getWidth(), cachedImage_cards_png_8.getHeight());
    }
    
    {
        int x = 356, y = 68, width = 43, height = 69;
        g.setColour (Colours::black);
        g.drawImage (cachedImage__22359445_744499265740935_1042817326_n_png_9,
                     x, y, width, height,
                     0, 0, cachedImage__22359445_744499265740935_1042817326_n_png_9.getWidth(), cachedImage__22359445_744499265740935_1042817326_n_png_9.getHeight());
    }
    
    {
        int x = 350, y = 63, width = 52, height = 79;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_10,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_10.getWidth(), cachedImage_cards_png_10.getHeight());
    }
    
    {
        int x = 348, y = 300, width = 52, height = 78;
        

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_11,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_11.getWidth(), cachedImage_cards_png_11.getHeight());
    }
    
    {
        int x = 284, y = 300, width = 52, height = 78;

        g.setColour (Colours::black);
        g.drawImage (cachedImage_cards_png_12,
                     x, y, width, height,
                     0, 0, cachedImage_cards_png_12.getWidth(), cachedImage_cards_png_12.getHeight());
    }
    {
        int x = 0, y = 0, width = 700, height = 483;
        
        g.setColour (Colours::black);
        g.drawImage (cachedImage_zastawa_jpg_13,
                     x, y, width, height,
                     0, 0, cachedImage_zastawa_jpg_13.getWidth(), cachedImage_zastawa_jpg_13.getHeight());
    }
    
}

void Interface::resized()
{

    imageButton->setBounds (272, 80, 152, 112);
    imageButton2->setBounds (216, 272, 264, 72);

}

void Interface::whoWin(int ilosc){
//
    myPoint=ocena.ocenaMethod(myCards, ilosc);
   opPoint=ocena.ocenaMethod(opCards, ilosc);
//
    if(myPoint>opPoint){
        label->setText("You win "+std::to_string(bank*2)+" ", NotificationType::sendNotification);
        myMoney+=(bank*2);
        labelTxt(myPoint);

    }
    else if(myPoint<opPoint){
        label->setText("Casino win ", NotificationType::sendNotification);
        labelTxt(opPoint);


    }
    else{
        label->setText("You and casino are ", NotificationType::sendNotification);
        labelTxt(myPoint);
    }

}

void Interface::uHave(int ilosc){
     myPoint=ocena.ocenaMethod(myCards, ilosc);
    label->setText("You are ", NotificationType::sendNotification);
    labelTxt(myPoint);
}

void Interface::labelTxt(int liczba){
    if(liczba==0)
        label->setText(label->getText()+"with a pair", NotificationType::sendNotification);

    if(liczba==1)
        label->setText(label->getText()+"with two pairs", NotificationType::sendNotification);
    
    if(liczba==2)
        label->setText(label->getText()+"with a three of a kind", NotificationType::sendNotification);
    
    if(liczba==3)
        label->setText(label->getText()+"with a straight", NotificationType::sendNotification);
    
    if(liczba==4)
        label->setText(label->getText()+"with a flush", NotificationType::sendNotification);
    
    if(liczba==5)
        label->setText(label->getText()+"with a full house", NotificationType::sendNotification);
    
    if(liczba==6)
        label->setText(label->getText()+"with a kind of four", NotificationType::sendNotification);
    if(liczba==-1)
        label->setText(label->getText()+"\nwith nothing", NotificationType::sendNotification);
    
}
void Interface::showMoney(){
    
    label3->setText("Your money: "+std::to_string(myMoney), sendNotification);
    label2->setText("Bank: "+std::to_string(bank), sendNotification);

    
}



void Interface::sliderValueChanged (Slider* sliderThatWasMoved)
{
    
    if (sliderThatWasMoved == slider)
    {
        
    }
    
    
}

void Interface::buttonClicked (Button* buttonThatWasClicked)
{

    
    //RAISE
    
    if (buttonThatWasClicked == textButton)
    {    if(playGame&&(myMoney>0)){
        
        bank+=slider->getValue();
        myMoney-=slider->getValue();
        slider->setRange (50, myMoney, 1);
        showMoney();
        
        if(licznik==1){
            cachedImage_cards_png_2 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(myCards.cardsRazdacza::getMastCards(0),myCards.cardsRazdacza::getNumCards(0));
            cachedImage_cards_png_2=cachedImage_cards_png_2.getClippedImage(findCard.getArea());
            
            
            cachedImage_cards_png_3 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(opCards.cardsRazdacza::getMastCards(1),opCards.cardsRazdacza::getNumCards(1));
            cachedImage_cards_png_3=cachedImage_cards_png_3.getClippedImage(findCard.getArea());
            
            
            cachedImage_cards_png_4 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(myCards.cardsRazdacza::getMastCards(2),myCards.cardsRazdacza::getNumCards(2));
            cachedImage_cards_png_4=cachedImage_cards_png_4.getClippedImage(findCard.getArea());
            //licznik++;
            showMoney();
            uHave(5);
            
            repaint();
        }
        //playGame=false;
        if(licznik==2){
            cachedImage_cards_png_5 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(myCards.cardsRazdacza::getMastCards(3),myCards.cardsRazdacza::getNumCards(3));
            cachedImage_cards_png_5=cachedImage_cards_png_5.getClippedImage(findCard.getArea());
            
            showMoney();
            uHave(6);
            repaint();
            
        }
        if(licznik==3){
            cachedImage_cards_png_6 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(myCards.cardsRazdacza::getMastCards(4),myCards.cardsRazdacza::getNumCards(4));
            cachedImage_cards_png_6=cachedImage_cards_png_6.getClippedImage(findCard.getArea());
            showMoney();
            uHave(7);
            repaint();
            
        }
        if(licznik==4){
            cachedImage_cards_png_8 = ImageCache::getFromMemory (cards_png, cards_pngSize);
               findCard.opredelCards(opCards.cardsHands::getMastCards(0),opCards.cardsHands::getNumCards(0));
            cachedImage_cards_png_8=cachedImage_cards_png_8.getClippedImage(findCard.getArea());
            
            cachedImage_cards_png_10 = ImageCache::getFromMemory (cards_png, cards_pngSize);
                findCard.opredelCards(opCards.cardsHands::getMastCards(1),opCards.cardsHands::getNumCards(1));
            cachedImage_cards_png_10=cachedImage_cards_png_10.getClippedImage(findCard.getArea());
            
            whoWin(7);
            
            
            playGame=false;
            repaint();
            
        }
        
        
        licznik++;
        
    }
        if(myMoney<50)
            label->setText("You have not enough money to play!!!", NotificationType::sendNotification);
        
        
    }
    
    
    ///FOLD
    
    else  if (buttonThatWasClicked == textButton2)
    {
        playGame=false;
        licznik=5;
        
        
        
    }
    
    //PlayGame
    
    else if (buttonThatWasClicked == textButton3)
        
    {
        
       
        
        if(licznik==5){
            cachedImage_cards_png_2=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_3=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_4=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_5=ImageCache::getFromMemory (free_png, free_pngSize);
            cachedImage_cards_png_6=ImageCache::getFromMemory (free_png, free_pngSize);
            
            
            licznik=0;
        }
        if((licznik==0)&&(myMoney>50)){
            myCards.zmienSprawdzanie();
            myCards.setCardsStol();//
            opCards.setCardsStol();//
            myCards.wyzeruj();
            
            label->setText("", NotificationType::sendNotification);
            
            uHave(2);
            
            bank=50;
            myMoney-=50;
            showMoney();
            slider->setRange (50, myMoney, 1);
            cachedImage_cards_png_11 = ImageCache::getFromMemory (cards_png, cards_pngSize);
              findCard.opredelCards(myCards.cardsHands::getMastCards(0),myCards.cardsHands::getNumCards(0));
            cachedImage_cards_png_11=cachedImage_cards_png_11.getClippedImage(findCard.getArea());
            
            cachedImage_cards_png_12 = ImageCache::getFromMemory (cards_png, cards_pngSize);
            findCard.opredelCards(myCards.cardsHands::getMastCards(1),myCards.cardsHands::getNumCards(1));
            cachedImage_cards_png_12=cachedImage_cards_png_12.getClippedImage(findCard.getArea());
            

            cachedImage_cards_png_8 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);
            cachedImage_cards_png_10 = ImageCache::getFromMemory (_22359445_744499265740935_1042817326_n_png, _22359445_744499265740935_1042817326_n_pngSize);
            
            
            licznik++;
            playGame=true;
            repaint();
            
        }
        else
            if(myMoney<50)
            label->setText("You have not enough money to play!!!", NotificationType::sendNotification);
        
    }
    
    
    //  MENU
    
    else if (buttonThatWasClicked == textButton4){
        
        
        
        slider = nullptr;
        textButton = nullptr;
        textButton2 = nullptr;
        label = nullptr;
        textButton3 = nullptr;
        label2 = nullptr;
        label3 = nullptr;
        textButton4 = nullptr;
        
        
        addAndMakeVisible (imageButton = new ImageButton ("new button"));
        imageButton->setExplicitFocusOrder (50);
        imageButton->setButtonText (String());
        imageButton->addListener (this);
        
        imageButton->setImages (false, true, true,
                                ImageCache::getFromMemory (continue_png, continue_pngSize), 1.000f, Colour (0x00000000),
                                ImageCache::getFromMemory (continue_2_png, continue_2_pngSize), 1.000f, Colour (0x00000000),
                                ImageCache::getFromMemory (continue_png, continue_pngSize), 1.000f, Colour (0x00000000));
        addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
        imageButton2->addListener (this);
        imageButton2->setExplicitFocusOrder (50);
        imageButton2->setButtonText (String());
        imageButton2->setImages (false, true, true,
                                 ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000),
                                 ImageCache::getFromMemory (help_2_png, help_2_pngSize), 1.000f, Colour (0x00000000),
                                 ImageCache::getFromMemory (help_png, help_pngSize), 1.000f, Colour (0x00000000));
        
        // imageButton->setBounds (272, 80, 152, 112);
        //  imageButton2->setBounds (216, 272, 264, 72);
        resized();
        
        cachedImage_zastawa_jpg_13=ImageCache::getFromMemory (zastawa_jpg, zastawa_jpgSize);
        menu=true;
        
        repaint();
        
        
        
    }
    
    
    
    ///START GAME
    
    
    
    else if (buttonThatWasClicked == imageButton)
    {
        addAndMakeVisible (slider = new Slider ("new slider"));
        slider->setRange (50, myMoney, 1);
        slider->setSliderStyle (Slider::LinearHorizontal);
        slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
        slider->addListener (this);
        slider->setValue(100);
        
        addAndMakeVisible (textButton = new TextButton ("new button"));
        textButton->setButtonText (TRANS("Raise"));
        textButton->addListener (this);
        textButton->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        addAndMakeVisible (textButton2 = new TextButton ("new button"));
        textButton2->setButtonText (TRANS("Fold"));
        textButton2->addListener (this);
        textButton2->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        
        addAndMakeVisible (label = new Label ("new label",
                                              String()));
        label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label->setJustificationType (Justification::centredLeft);
        label->setEditable (false, false, false);
        label->setColour (TextEditor::textColourId, Colours::black);
        label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (textButton3 = new TextButton ("new button"));
        textButton3->setButtonText (TRANS("Play Game"));
        textButton3->addListener (this);
        textButton3->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        
        addAndMakeVisible (textButton4 = new TextButton ("new button"));
        textButton4->setExplicitFocusOrder (20);
        textButton4->setButtonText (TRANS("Menu"));
        textButton4->addListener (this);
        textButton4->setColour (TextButton::buttonColourId, Colour (0xff700a0a));
        if (bank!=0){
            addAndMakeVisible (label2 = new Label ("new label",
                                                   "Bank: "+std::to_string(bank)));
            
        }else{
            addAndMakeVisible (label2 = new Label ("new label",
                                                   String()));}
        label2->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label2->setJustificationType (Justification::centredLeft);
        label2->setEditable (false, false, false);
        label2->setColour (TextEditor::textColourId, Colours::black);
        label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (label3 = new Label ("new label",
                                               "Your money: "+std::to_string(myMoney)));
        label3->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
        label3->setJustificationType (Justification::centredLeft);
        label3->setEditable (false, false, false);
        label3->setColour (TextEditor::textColourId, Colours::black);
        label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        slider->setBounds (448, 456, 239, 24);
        textButton->setBounds (432, 392, 112, 48);
        textButton2->setBounds (560, 392, 112, 48);
        
        label->setBounds (0, 336, 232, 136);
        textButton3->setBounds (264, 456, 152, 24);
        label2->setBounds (288, 240, 88, 24);
        label3->setBounds (284, 380, 120, 60);
        textButton4->setBounds (640, 0, 48, 32);
        
        cachedImage_zastawa_jpg_13=ImageCache::getFromMemory (free_png, free_pngSize);
        imageButton = nullptr;
        imageButton2 = nullptr;
        menu=false;
        
        repaint();
        
    }
    
    //HELP
    
    else if (buttonThatWasClicked == imageButton2)
    {
        setSize (700, 588);
        addAndMakeVisible (imageButton3 = new ImageButton ("new button"));
        imageButton2->setExplicitFocusOrder (50);
        imageButton2->setButtonText (String());
        imageButton3->addListener (this);
        
        imageButton3->setImages (false, true, true,
                                 ImageCache::getFromMemory (comba_jpg, comba_jpgSize), 1.000f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000),
                                 Image(), 1.000f, Colour (0x00000000));
        
        
        
        
        imageButton3->setBounds (0, 483, 700, 104);
        
    }
    
    //HELP
    else if (buttonThatWasClicked == imageButton3){
        if(!menu){
            addAndMakeVisible (imageButton = new ImageButton ("new button"));
            addAndMakeVisible (imageButton2 = new ImageButton ("new button"));
        }
        
        imageButton3 = nullptr;
        setSize (700, 483);
        //imageButton3 = nullptr;
        
    }
    
    
}






