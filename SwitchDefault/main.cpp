//
//  main.cpp
//  SwitchDefault
//
//  Created by John Ahrens on 5/8/16.
//  Copyright © 2016 John Ahrens. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int value = 0;
    switch (value)
    {
        default:
            std::cout << "Entered default statement" << std::endl;
            break;
            
        case 0:
            std::cout << "Entered case 0" << std::endl;
            break;
    }
    
    return 0;
}
