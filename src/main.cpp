#include <gtest/gtest.h>
#include "module1.h"
#include "../include/STL.h"

int main(int argc,char* argv[])
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}