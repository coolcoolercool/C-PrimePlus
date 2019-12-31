cmake_minimum_required(VERSION 3.14)
project(CPrimeplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPrimeplus main.cpp
        SourceCode/14th/student/student.cpp SourceCode/14th/student/use_stuc.cpp SourceCode/14th/student/studentc.h
        SourceCode/13th/brass/brass.cpp SourceCode/13th/brass/brass.h
        SourceCode/13th/DMA/dma.cpp SourceCode/13th/DMA/dma.h
        SourceCode/13th/tabletennis/tablenn1.cpp SourceCode/13th/tabletennis/tablenn1.h
        SourceCode/12th/String/sayings1.cpp SourceCode/12th/String/sayings2.cpp SourceCode/12th/String/string1.cpp SourceCode/12th/String/string1.h
        SourceCode/12th/queue/bank.cpp SourceCode/12th/queue/queue.cpp SourceCode/12th/queue/queue.h
        SourceCode/12th/placenew/palcenew1.cpp
        SourceCode/10th/practice1/stacker.cpp SourceCode/10th/practice1/Stack.h SourceCode/10th/practice1/Stack.cpp
        SourceCode/10th/stock/stock20.cpp SourceCode/10th/stock/stock20.h SourceCode/10th/stock/usestock2.cpp
        SourceCode/9th/practice1/coordin.h SourceCode/9th/practice1/file1.cpp SourceCode/9th/practice1/file2.cpp
        SourceCode/14th/student_1/studenti.h SourceCode/14th/student_1/student_1.cpp SourceCode/14th/student_1/use_stui.cpp SourceCode/14th/worker/Worker0.h SourceCode/14th/worker/Worker0.cpp SourceCode/14th/worker/worktest.cpp SourceCode/14th/worker1/workermi.h
        HouJieVideoCode/complex.h
        HouJieVideoCode/complex_test.cpp
        SourceCode/2th/getinfo/getinfo.cpp
        SourceCode/3th/limits/limits.cpp
        SourceCode/3th/morechar/moretype.cpp
        SourceCode/3th/floatnum/floatnum.cpp
        SourceCode/3th/typycast/typecast.cpp
        SourceCode/4th/instr/instr2.cpp
        SourceCode/4th/instr/instr3.cpp
        SourceCode/4th/string/strtype.cpp
        SourceCode/4th/string/strtype3.cpp
        SourceCode/4th/struct/structur.cpp
        SourceCode/4th/pointer/address.cpp
        SourceCode/4th/pointer/pointer.cpp
        SourceCode/4th/pointer/use_new.cpp
        SourceCode/4th/pointer/arraynew.cpp
        SourceCode/4th/pointer/addpntrs.cpp
        TestCode/test.cpp SourceCode/4th/pointer/ptrstr.cpp
        SourceCode/4th/pointer/newstrct.cpp
        SourceCode/4th/pointer/delete.cpp
        SourceCode/4th/vector&array/choices.cpp
        SourceCode/5th/forLoop/forstr1.cpp
        SourceCode/5th/forLoop/compstr1.cpp
        SourceCode/5th/forLoop/compstr2.cpp
        SourceCode/5th/whileLoop/while.cpp
        SourceCode/5th/whileLoop/waiting.cpp SourceCode/5th/loopAndTextinput/textin1.cpp
        SourceCode/5th/loopAndTextinput/textin2.cpp SourceCode/5th/loopAndTextinput/textin3.cpp
        SourceCode/5th/loopAndTextinput/textin4.cpp SourceCode/6th/ifandifelse/if.cpp
        SourceCode/6th/LogicOperation/cctypes.cpp SourceCode/6th/LogicOperation/condit.cpp
        SourceCode/6th/switch/switch.cpp SourceCode/6th/switch/enum.cpp
        SourceCode/6th/InputAndOutput/cinfish.cpp SourceCode/6th/InputAndOutput/cingolf.cpp
        SourceCode/6th/IO/outfile.cpp SourceCode/6th/IO/sumafile.cpp
        SourceCode/7th/twoarg/twoarg.cpp SourceCode/7th/lotto/lotto.cpp
        SourceCode/7th/FunctionAndArray/arrfun1.cpp SourceCode/7th/FunctionAndArray/arrfun2.cpp
        SourceCode/7th/FunctionAndArray/arrfun3.cpp SourceCode/7th/FunctionAndArray/arrfun4.cpp

        Keywords/Keywords_const.cpp Keywords/Keywords_const_virtual.cpp
        Keywords/Keywords_inline.cpp Keywords/Keywords_static.cpp
        Keywords/Keywords_this.cpp

        )