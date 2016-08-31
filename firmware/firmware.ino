#define Pin_NixieTube0 10    //This is a left nixie tube
#define Pin_NixieTube1 12    //This is a right nixie tube
#define Pin_NixieTubeA 2    //This is one of nixie tube led
#define Pin_NixieTubeB 3
#define Pin_NixieTubeC 4
#define Pin_NixieTubeD 5
#define Pin_NixieTubeE 6
#define Pin_NixieTubeF 7
#define Pin_NixieTubeG 8
#define Pin_NixieTubeDP 9
#define TurnOff_NixieTube 0    //0 is order of turning off nixie tube

#define Pin_Buzzer 1  //This is pin of buzzer

#define Pin_LED0 MOSI    //This is pin of one of the LEDs.
#define Pin_LED1 SCK    
#define Pin_LED2 17
#define TurnOff_LED 3    //3 is order of turning off all LEDs.
#define TurnOn_LED 4    //4 is order of tuning on all LEDs.

#define Pin_ButtonLED0 11    //This is pin of LED of one of buttons.
#define Pin_ButtonLED1 MISO
#define Pin_ButtonLED2 A4
#define Pin_ButtonLED3 A3
#define Pin_ButtonLED4 A2
#define Pin_ButtonLED5 A1
#define Pin_ButtonLED6 A0
#define TurnOff_ButtonLED 7    //7 is order of tuning off all LEDs of buttons.

#define Pin_Button A5    //This is a pin of buttons.

#define Pin_RandomSeed 1    //This is pin of creating random seed.

#define Pin_ButtonRandomSeed 0    //

/*************************************************************************/
///////////////Set Delay Time of Displaying Nixie Tube//////////////////
#define Delay_NixieTube 10
/*************************************************************************/

unsigned char Point0 = 0;    //The number of left nixie tube is 0 in begining. we use this veriable to record it.
unsigned char Point1 = 0;    //The number of right nixie tube is 0 in begining. we use this veriable to record it.
unsigned char Point_Part = 0;    //This is poings of a part in games. we use this veriable to record it.
unsigned char Point_Total = 0;    //This is poingts of total in games. we use this veriable to record it.

unsigned char Flag_Punsh = 7;   //This veriable is to record which button the users punch.

unsigned char Number_ButtonLED = 0;    //This veriable is to make which led of buttons to turn on.

unsigned char Flag_CreateRandomSeed = 1;    //This is a flag to decide if make a random seed.
long int Time_Press_LongInt = 0;    //This veriable is to record how long the users to press the button.
unsigned char RandomSeed = 0;   //This veriable is to record random seed.
unsigned char Number_Susliks = 0;   //This veriable is to record which led of buttons to turn on.

unsigned char Number_Circle = 0;    //This is veriable is to decide to turn on which nixie tube of decoration

unsigned char Part = 0;   //This veriable is to record which part of the game.
unsigned char Flag_Result = 0;    //This veriable is to record which result of end in the game.

unsigned char Flag_PressButton = 7;    //This veriable is to record which button is pressed by users.

int Time1 = 0;
int Time2 = 0;

void Number_0()   //This is a function to make nixie tubes display 0.
{
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
}

void Number_1()
{
    digitalWrite(Pin_NixieTubeA, LOW);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, LOW);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, LOW);
    digitalWrite(Pin_NixieTubeG, LOW);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_2()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, LOW);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, HIGH);
    digitalWrite(Pin_NixieTubeF, LOW);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_3()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, LOW);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_4()
{
    digitalWrite(Pin_NixieTubeA, LOW);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, LOW);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, HIGH);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_5()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, LOW);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, HIGH);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_6()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, LOW);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, HIGH);
    digitalWrite(Pin_NixieTubeF, HIGH);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_7()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, LOW);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, LOW);
    digitalWrite(Pin_NixieTubeG, LOW);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_8()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, HIGH);
    digitalWrite(Pin_NixieTubeF, HIGH);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Number_9()
{
    digitalWrite(Pin_NixieTubeA, HIGH);
    digitalWrite(Pin_NixieTubeB, HIGH);
    digitalWrite(Pin_NixieTubeC, HIGH);
    digitalWrite(Pin_NixieTubeD, HIGH);
    digitalWrite(Pin_NixieTubeE, LOW);
    digitalWrite(Pin_NixieTubeF, HIGH);
    digitalWrite(Pin_NixieTubeG, HIGH);
    digitalWrite(Pin_NixieTubeDP, LOW);
}

void Display_Number(unsigned char Number)    //This function is to decide which number to be displayed in nixie tubes.
{
    switch(Number)
    {
        case 0:
            Number_0();
        break;

        case 1:
            Number_1();
        break;

        case 2:
            Number_2();
        break;

        case 3:
            Number_3();
        break;

        case 4:
            Number_4();
        break;

        case 5:
            Number_5();
        break;

        case 6:
            Number_6();
        break;

        case 7:
            Number_7();
        break;

        case 8:
            Number_8();
        break;

        case 9:
            Number_9();
        break;
    }
}

void Display_ChooseNixieTube(unsigned char Select, unsigned char Number)    //This function is to choose which nixie tube to be turned on.
{                                                                           //The first parameter is to choose which nixie tube to display
    switch(Select)                                                          //The second parameter is to choose which number to display.
    {
        case 0:
        digitalWrite(Pin_NixieTube0, HIGH);    //This is to make right nixie tube to be turned on.
        digitalWrite(Pin_NixieTube1, LOW);    //This is to make left nixie tube to be turned off.
        Display_Number(Number);    //decide which number to be displayed in nixie tube.
        break;

        case 1:
        digitalWrite(Pin_NixieTube0, LOW);    //This is to make right nixie tube to be turned off.
        digitalWrite(Pin_NixieTube1, HIGH);   //This is to make left nixie tube to be turned on.
        Display_Number(Number);   //decide which number to be displayed in nixie tube.
        break;
    }
}

void Display_NixieTube(unsigned char Delay_ms)    //This function is to display left and right nixie tube in dynamic. There is parameter in it. The parameter 
{                                                 //is to decide how long the time of delay between two nixie tube display.
    switch(Delay_ms)
    {
        case 0:    //0 is an order of turning off nixie tube.
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;
      
        case 2:    //2 is delay 2ms if the mcu run this function.
        Display_ChooseNixieTube(0, Point0);
        delay(1);
        Display_ChooseNixieTube(1, Point1);
        delay(1);
        break;

        case 10:    //10 is delay 10ms if the mcu run this function.
        Display_ChooseNixieTube(0, Point0);
        delay(5);
        Display_ChooseNixieTube(1, Point1);
        delay(5);
        break;
    }
}

void Delay_2ms(int SetDelayTimes)    //if users want to use delay function, they can use this function.
{                                    //The parameter is to choose how many 2ms they want to delay.
    int DelayTimes;
    for(DelayTimes = 0; DelayTimes < SetDelayTimes; DelayTimes++)
    {
        Display_NixieTube(2);
    }
}

void Delay_10ms(int SetDelayTimes)    //if users want to use delay function, they can use this function.
{
    int DelayTimes;
    for(DelayTimes = 0; DelayTimes < SetDelayTimes; DelayTimes++)
    {
        Display_NixieTube(10);
    }
}

void Display_ButtonLED(unsigned char Number_ButtonLED)    //This function is to decide which led of buttons to be turned on.
{
    switch(Number_ButtonLED)
    {
        case 0:
        digitalWrite(Pin_ButtonLED0, HIGH);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 1:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, HIGH);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 2:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, HIGH);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 3:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, HIGH);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 4:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, HIGH);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 5:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, HIGH);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;

        case 6:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, HIGH);
        break;

        case 7:
        digitalWrite(Pin_ButtonLED0, LOW);
        digitalWrite(Pin_ButtonLED1, LOW);
        digitalWrite(Pin_ButtonLED2, LOW);
        digitalWrite(Pin_ButtonLED3, LOW);
        digitalWrite(Pin_ButtonLED4, LOW);
        digitalWrite(Pin_ButtonLED5, LOW);
        digitalWrite(Pin_ButtonLED6, LOW);
        break;
    }
}

void Display_LED(unsigned char Number)    //This function is to decide which led to be turned on.
{
    switch(Number)
    {
        case 0:
        digitalWrite(Pin_LED0, HIGH);
        digitalWrite(Pin_LED1, LOW);
        digitalWrite(Pin_LED2, LOW);
        break;

        case 1:
        digitalWrite(Pin_LED0, LOW);
        digitalWrite(Pin_LED1, HIGH);
        digitalWrite(Pin_LED2, LOW);
        break;

        case 2:
        digitalWrite(Pin_LED0, LOW);
        digitalWrite(Pin_LED1, LOW);
        digitalWrite(Pin_LED2, HIGH);
        break;

        case 3:    //3 is an order of turning off all LEDs.
        digitalWrite(Pin_LED0, LOW);
        digitalWrite(Pin_LED1, LOW);
        digitalWrite(Pin_LED2, LOW);
        break;

        case 4:    //4 is an order of turning on all LEDs.
        digitalWrite(Pin_LED0, HIGH);
        digitalWrite(Pin_LED1, HIGH);
        digitalWrite(Pin_LED2, HIGH);
        break;
    }
}

unsigned char Scan_Button()    //This function will return a value which represent each button.
{
    int Value = analogRead(Pin_Button);
    if(Value >= 140 && Value < 151)
        return 0;
    if(Value >= 280 && Value < 291)
        return 1;
    if(Value >= 430 && Value < 441)
        return 2;
    if(Value >= 570 && Value < 581)
        return 3;
    if(Value >= 710 && Value < 721)
        return 4;
    if(Value >= 870 && Value < 881)
        return 5;
    if(Value >= 1020 && Value < 1031)
        return 6;
    return 7;    //7 represent none of button was pressed by users.
}

void Point_Plus()  //program run this function, Point will be plus 1.
{
    switch(Point0)
    {
        case 9:
        switch(Point1)
        { 
            case 9:
            Point0 = 9;
            Point1 = 9;
            break;

            default:
            Point0 = 0;
            Point1++;
        }
        break;

        default:
        Point0++;
        break;
    }
}

void Point_Minus()    //Program runs this function, point will be minus 1.
{
    switch(Point0)
    {
        case 0:
        switch(Point1)
        {
            case 0:
            Point0 = 0;
            Point1 = 0;
            break;

            default:
            Point0 = 9;
            Point1--;
            break;
        }
        break;

        default:
        Point0--;
        break;
    }
}

void Point_Plus_ChoosePart()
{
    switch(Point0)
    {
        case 9:
        switch(Point1)
        { 
            case 1:
            Point0 = 0;
            Point1 = 1;
            break;

            default:
            Point0 = 0;
            Point1++;
        }
        break;

        default:
        Point0++;
        break;
    }
}

void Point_Minus_ChoosePart()
{
    switch(Point0)
    {
        case 0:
        switch(Point1)
        {
            case 0:
            Point0 = 0;
            Point1 = 0;
            break;

            default:
            Point0 = 9;
            Point1--;
            break;
        }
        break;

        default:
        Point0--;
        break;
    }
}

void Buzzer_4ms(int SetTimes)    //If program runs this function, the buzzer will tweet once and cost 4ms*SetTimes time.
{
    int Times;
    for(Times = 0; Times < SetTimes; Times++)
    {
        digitalWrite(Pin_Buzzer, HIGH);
        Delay_2ms(1);
        digitalWrite(Pin_Buzzer, LOW);
        Delay_2ms(1);
    }
}

void Flag_Start()    //This function is to prompt users the game is start
{
    digitalWrite(Pin_LED0, HIGH);
    digitalWrite(Pin_LED1, LOW);
    digitalWrite(Pin_LED2, LOW);
    Buzzer_4ms(50);
    Delay_10ms(80);
    
    digitalWrite(Pin_LED0, HIGH);
    digitalWrite(Pin_LED1, HIGH);
    digitalWrite(Pin_LED2, LOW);
    Buzzer_4ms(50);
    Delay_10ms(80);
    
    digitalWrite(Pin_LED0, HIGH);
    digitalWrite(Pin_LED1, HIGH);
    digitalWrite(Pin_LED2, HIGH);
    Buzzer_4ms(250);
    Display_LED(TurnOff_LED);
}

void Judge_Punsh_Primary()    //This is a function of primary judge. if user punch the button(susliks) is right, the point will plus 1.
{
    if(Flag_Punsh == Number_Susliks)
    {
        Point_Plus();
        Point_Part++;
        Buzzer_4ms(13);
    }
}

void Judge_Punsh_Advanced()    //This is a function of advanced judging. if user punch the button(susliks) is right, the point will plus 1, else minus 1.
{
    if(Flag_Punsh == Number_Susliks)
    {
        Point_Plus();
        Buzzer_4ms(13);
        Point_Part++;
    }
    else
    {
        Point_Minus();
        Point_Part--;
    }
}

void PunshSusliks_Primary(unsigned char Number_ButtonLED, int Times_Susliks, int Time_Delay)    //This function is to punsh susliks.
{
    int Times = 0;
    Display_ButtonLED(Number_ButtonLED);    //Display led of a button to prompt susliks.
    while((Flag_Punsh == 7) && (Times < Times_Susliks))    //if no punches and lack times
    {
        Display_NixieTube(Delay_NixieTube);    //Display nixie tube.
        Flag_Punsh = Scan_Button();    //which button to be punched by users.
        Times++;
    }
    Display_ButtonLED(TurnOff_ButtonLED);    //Turn off LEDs of buttons.
    Judge_Punsh_Primary();    //judge if the users punch button right or wrong
    Flag_Punsh = 7;
    Delay_10ms(Time_Delay);
}

void PunshSusliks_Advanced(unsigned char Number_ButtonLED, int Times_Susliks, int Time_Delay)
{
    int Times = 0;
    Display_ButtonLED(Number_ButtonLED);
    while((Flag_Punsh == 7) && (Times < Times_Susliks))
    {
        Display_NixieTube(Delay_NixieTube);
        Flag_Punsh = Scan_Button();
        Times++;
    }
    Display_ButtonLED(TurnOff_ButtonLED);
    Judge_Punsh_Advanced();    //This function is different from PunchSusliks_Primary.
    Flag_Punsh = 7;
    Delay_10ms(Time_Delay);
}

void Create_RandomSeed()  //This function is to create a random seed to create real random numbers.
{
    if(Flag_CreateRandomSeed == 1)
    {
        Delay_10ms(5);
        if(digitalRead(Pin_ButtonRandomSeed) == 0)
        {
            Display_LED(TurnOn_LED);
            Display_NixieTube(TurnOff_NixieTube);   
                    
            unsigned char i;
            for(i = 0; i < 45; i++)
            {
                digitalWrite(Pin_Buzzer, HIGH);
                delay(1);
                digitalWrite(Pin_Buzzer, LOW);
                delay(1);
            }
            
            Time_Press_LongInt = pulseIn(Pin_ButtonRandomSeed, LOW, 15000000);
            RandomSeed = (unsigned char)Time_Press_LongInt;
            randomSeed(RandomSeed);
            while(digitalRead(Pin_ButtonRandomSeed) == 0);
            delay(100);
            while(digitalRead(Pin_ButtonRandomSeed) == 0);
        }
        Flag_CreateRandomSeed = 0;
    }
}

void Create_Susliks()
{
    Number_Susliks = random(7);
}

void Display_NixieTube_Flash(unsigned char SetTimes)
{
    unsigned char Times = 0;
    for(Times = 0; Times < SetTimes; Times++)
    {
        unsigned char i = 0;
        for(i = 0; i < 50; i++)
        {
            Display_NixieTube(10);
        }
    
        Display_NixieTube(TurnOff_NixieTube);
        delay(500);
    }
}

void Display_NixieTube_FlashCircle(unsigned char Number_Circle)    //This is decoration of nixie tube 
{
    switch(Number_Circle)
    {
        case 0:
        digitalWrite(Pin_NixieTube0, LOW);
        digitalWrite(Pin_NixieTube1, HIGH);
        digitalWrite(Pin_NixieTubeA, HIGH);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 1:
        digitalWrite(Pin_NixieTube0, HIGH);
        digitalWrite(Pin_NixieTube1, LOW);
        digitalWrite(Pin_NixieTubeA, HIGH);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 2:
        digitalWrite(Pin_NixieTube0, HIGH);
        digitalWrite(Pin_NixieTube1, LOW);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, HIGH);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 3:
        digitalWrite(Pin_NixieTube0, HIGH);
        digitalWrite(Pin_NixieTube1, LOW);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, HIGH);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 4:
        digitalWrite(Pin_NixieTube0, HIGH);
        digitalWrite(Pin_NixieTube1, LOW);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, HIGH);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 5:
        digitalWrite(Pin_NixieTube0, LOW);
        digitalWrite(Pin_NixieTube1, HIGH);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, HIGH);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 6:
        digitalWrite(Pin_NixieTube0, LOW);
        digitalWrite(Pin_NixieTube1, HIGH);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, HIGH);
        digitalWrite(Pin_NixieTubeF, LOW);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;

        case 7:
        digitalWrite(Pin_NixieTube0, LOW);
        digitalWrite(Pin_NixieTube1, HIGH);
        digitalWrite(Pin_NixieTubeA, LOW);
        digitalWrite(Pin_NixieTubeB, LOW);
        digitalWrite(Pin_NixieTubeC, LOW);
        digitalWrite(Pin_NixieTubeD, LOW);
        digitalWrite(Pin_NixieTubeE, LOW);
        digitalWrite(Pin_NixieTubeF, HIGH);
        digitalWrite(Pin_NixieTubeG, LOW);
        digitalWrite(Pin_NixieTubeDP, LOW);
        break;
    }
}

void Number_Circle_Plus()
{
    switch(Number_Circle)
    {
        case 7:
        Number_Circle = 0;
        break;

        default:
        Number_Circle++;
        break;
    }
}

void Flag_Wait()
{
    digitalWrite(Pin_ButtonLED0, HIGH);
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
        
    digitalWrite(Pin_ButtonLED0, LOW);
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
    Display_NixieTube_FlashCircle(Number_Circle);
    delay(125);
    Number_Circle_Plus();
}

void Part0()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 100, 20);
    }
}

void Part1()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 80, 20);
    }
}

void Part2()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 60, 20);
    }
}

void Part3()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 40, 20);
    }
}

void Part4()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 35, 20);
    }
}

void Part5()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 33, 20);
    }
}

void Part6()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 30, 20);
    }
}

void Part7()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 28, 20);
    }
}

void Part8()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 25, 20);
    }
}

void Part9()
{
    unsigned char i = 0;
    for(i = 0; i < 10; i++)
    {
        Create_Susliks();
        PunshSusliks_Primary(Number_Susliks, 24, 20);
    }
}

void Part_Challenge()
{
        Flag_Start();
        Part0();
        if(Point_Part >= 6)
        {
            Flag_Start();
            Point_Part = 0;
            Part1();
            
            if(Point_Part >= 6)
            {
                Flag_Start();
                Point_Part = 0;
                Part2();

                if(Point_Part >= 6)
                {
                    Flag_Start();
                    Point_Part = 0;
                    Part3();

                    if(Point_Part >= 6)
                    {
                        Flag_Start();
                        Point_Part = 0;
                        Part4();

                        if(Point_Part >= 6)
                        {
                            Flag_Start();
                            Point_Part = 0;
                            Part5();

                            if(Point_Part >= 6)
                            {
                                Flag_Start();
                                Point_Part = 0;
                                Part6();

                                if(Point_Part >= 6)
                                {
                                    Flag_Start();
                                    Point_Part = 0;
                                    Part7();

                                    if(Point_Part >= 6)
                                    {
                                        Flag_Start();
                                        Point_Part = 0;
                                        Part8();

                                        if(Point_Part >= 6)
                                        {
                                            Flag_Start();
                                            Point_Part = 0;
                                            Part9();

                                            if(Point_Total == 100)
                                            {
                                                Surprise();
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}

void Surprise()
{
    Buzzer_Sing(3,450,2,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(5,450,1,50);

    Buzzer_Sing(5,450,1,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(2,450,1,50);

    Buzzer_Sing(1,450,2,50);
    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(3,450,1,50);

    Buzzer_Sing(3,900,1,50);
    Buzzer_Sing(2,225,1,50);
    Buzzer_Sing(2,450,1,50);


    Buzzer_Sing(3,450,2,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(5,450,1,50);

    Buzzer_Sing(5,450,1,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(2,450,1,50);

    Buzzer_Sing(1,450,2,50);
    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(3,450,1,50);

    Buzzer_Sing(2,900,1,50);
    Buzzer_Sing(1,225,1,50);
    Buzzer_Sing(1,450,1,50);


    Buzzer_Sing(2,450,2,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(1,450,1,50);

    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(3,225,1,50);
    Buzzer_Sing(4,225,1,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(1,450,1,50);

    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(3,225,1,50);
    Buzzer_Sing(4,225,1,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(2,450,1,50);

    Buzzer_Sing(1,450,1,50);
    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(5,450,1,50);
    Buzzer_Sing(3,450,1,50);


    Buzzer_Sing(3,450,2,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(5,450,1,50);

    Buzzer_Sing(5,450,1,50);
    Buzzer_Sing(4,450,1,50);
    Buzzer_Sing(3,450,1,50);
    Buzzer_Sing(4,225,1,50);
    Buzzer_Sing(2,225,1,50);

    Buzzer_Sing(1,450,2,50);
    Buzzer_Sing(2,450,1,50);
    Buzzer_Sing(3,450,1,50);

    Buzzer_Sing(2,900,1,50);
    Buzzer_Sing(1,225,2,50);
}

void setup()
{
    pinMode(Pin_NixieTube0, OUTPUT);
    pinMode(Pin_NixieTube1, OUTPUT);
    pinMode(Pin_NixieTubeA, OUTPUT);
    pinMode(Pin_NixieTubeB, OUTPUT);
    pinMode(Pin_NixieTubeC, OUTPUT);
    pinMode(Pin_NixieTubeD, OUTPUT);
    pinMode(Pin_NixieTubeE, OUTPUT);
    pinMode(Pin_NixieTubeF, OUTPUT);
    pinMode(Pin_NixieTubeG, OUTPUT);
    pinMode(Pin_NixieTubeDP, OUTPUT);

    pinMode(Pin_LED0, OUTPUT);
    pinMode(Pin_LED1, OUTPUT);
    pinMode(Pin_LED2, OUTPUT);

    pinMode(Pin_Buzzer, OUTPUT);
  
    pinMode(Pin_ButtonLED0, OUTPUT);
    pinMode(Pin_ButtonLED1, OUTPUT);
    pinMode(Pin_ButtonLED2, OUTPUT);
    pinMode(Pin_ButtonLED3, OUTPUT);
    pinMode(Pin_ButtonLED4, OUTPUT);
    pinMode(Pin_ButtonLED5, OUTPUT);
    pinMode(Pin_ButtonLED6, OUTPUT);

    pinMode(Pin_Button, INPUT);
    pinMode(Pin_ButtonRandomSeed, INPUT);
    digitalWrite(Pin_ButtonRandomSeed, HIGH);

    attachInterrupt(2, Create_RandomSeed, FALLING);

    Serial.println(9600);
}

void loop()
{   
    Serial.println("loop");
    if(Flag_CreateRandomSeed == 1)
    {
        Display_LED(TurnOff_LED);
        Flag_Wait();
    }
    else
    {
        Part_Challenge();
        
        Flag_Result = 1;
        Flag_CreateRandomSeed = 1;
        Display_NixieTube_Flash(10);
        Point0 = 0;
        Point1 = 0;
    }
}

void Buzzer_Tonality1()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1908);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1908);
}

void Buzzer_Tonality2()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1700);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1700);
}

void Buzzer_Tonality3()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1515);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1515);
}

void Buzzer_Tonality4()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1432);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1432);
}

void Buzzer_Tonality5()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1275);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1275);
}

void Buzzer_Tonality6()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1136);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1136);
}

void Buzzer_Tonality7()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(1012);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(1012);
}

void Buzzer_Tonality12()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(956);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(956);
}

void Buzzer_Tonality22()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(851);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(851);
}

void Buzzer_Tonality32()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(758);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(758);
}

void Buzzer_Tonality42()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(716);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(716);
}

void Buzzer_Tonality52()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(637);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(637);
}

void Buzzer_Tonality62()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(568);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(568);
}

void Buzzer_Tonality72()
{
  digitalWrite(Pin_Buzzer,HIGH);
  delayMicroseconds(506);
  digitalWrite(Pin_Buzzer,LOW);
  delayMicroseconds(506);
}

void Buzzer_Sing(int Tonality,int WorkTime,int Times,int DelayTime)
{
  int Time1;
  int Time2;
  int TimesCount;

  switch(Tonality)
  {
    case 1:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality1();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 2:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality2();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 3:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality3();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 4:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality4();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 5:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality5();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 6:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality6();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 7:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        
        Buzzer_Tonality7();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 12:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality12();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 22:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality22();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 32:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality32();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 42:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality42();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 52:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality52();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 62:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality62();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;

    case 72:
    for(TimesCount=0;TimesCount<Times;TimesCount++)
    {
      Time1=millis();
      do
      {
        Buzzer_Tonality72();
        Time2=millis();
      }while((Time2-Time1)<WorkTime);
      delay(DelayTime);
    }
    break;
  }
}
