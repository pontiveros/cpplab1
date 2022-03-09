//
//  TFunctions.h
//  Exercise_12
//
//  Created by Pedro Ontiveros on 03/08/22.
//

///////////////////////////////////////////////////////////////////////////////////
// compile release: clang++ -Wall -std=c++11 source1... -o out.file              //
// compile debug: clang++ -Wall -std=c++11 -g main.cpp source_01.cpp -o out.file //
// debugger: lldb {prog.debug (program name)}                                    //
///////////////////////////////////////////////////////////////////////////////////

#ifndef __TFUNCTIONS_9668B8961D204B0FB87149945B2286CE_H__
#define __TFUNCTIONS_9668B8961D204B0FB87149945B2286CE_H__

void fn_worker(int _wrk, void (*pfn)(const char *pszMessage) = NULL);
void fn_listener(const char *msg);

void fn_background_tasks(void (*pf[])(double a, double b), int count);

void fn_sum(double a, double b);
void fn_multi(double a, double b);
void fn_subs(double a, double b);
void fn_div(double a, double b);

#endif /* __TFUNCTIONS_9668B8961D204B0FB87149945B2286CE_H__ */