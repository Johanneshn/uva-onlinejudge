//
//  272 - TEX Quotes.cpp
//  uva onlinejudge
//
//  Created by Johannes Hörnfeldt Nordström on 2016-04-23.
//  Copyright (c) 2016 Johannes Nordström. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main (){
    char cha;
    int o = 0;
    while(scanf("%c",&cha) == 1){
        if(cha == '"'){
            o++;
            if(o%2 != 0)
                printf("``");
            else
                printf("''");
        }
        else    printf("%c",cha);
    }
    
    return 0;
    
}