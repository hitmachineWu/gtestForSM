#include <gtest/gtest.h>
#include <cfloat>
extern "C"
{
#include "src/MainStateMachine.h"
#include "InitOper/initialization.h"
}

#define INDEX 4
void InitAll(void)
{
    MainStateMachine_U = {0};
    MainStateMachine_DW = {0};
    MainStateMachine_Y = {Inactive};
}

TEST(T0_11, s1)
{
    InitAll(); // 初始化状态
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U); // 设置状态 0 - 1.1 的条件
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step(); // 状态机运行
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only); // 检测状态是否变化至 1.1
}

TEST(T0_11, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    T0_11_S2(&MainStateMachine_U); // 按照TP表中 TO-1.1 S2 的步骤 修改条件
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive); // 检测按照TP表中 T0-1.1 S2的步骤修改后是否维持原状
}

TEST(T0_11, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T0_11_S4(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S5(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S6(&MainStateMachine_U);

    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S7(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S8(&MainStateMachine_U);

    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T0_11_S9(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S10(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    T0_11_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    T0_11_S12(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s13)
{

    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    T0_11_S13(&MainStateMachine_U);

    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s14)
{

    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    T0_11_S14(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    T0_11_S15(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S16(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S17(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S18(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S19(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S20(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S21(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S22(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S23(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S24(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S25(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s26)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S26(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S27(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S28(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S29(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S30(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S31(&MainStateMachine_U);

    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S32(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s33)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S33(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s34)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S34(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s35)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S35(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s36)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S36(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_11, s37)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S37(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s38)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S38(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_11, s39)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_11_S39(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_12, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
}

TEST(T0_12, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S2(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S3(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S4(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S5(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S6(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S7(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S8(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S9(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S10(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S11(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S12(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S13(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S14(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S15(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S16(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S17(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_12, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S18(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_12, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S19(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S20(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S21(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S22(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S23(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S24(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S25(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s26)
{
    MainStateMachine_U = {0};
    MainStateMachine_DW = {0};
    MainStateMachine_Y = {Inactive};
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S26(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S27(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S28(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S2(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S30(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_12, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S31(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_12, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S32(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s33)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S33(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s34)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S34(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s35)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S35(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s36)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S36(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s37)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S37(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s38)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S38(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T0_12, s39)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    T0_12_S39(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s1)
{
    InitAll();
    MainStateMachine_initialize();
    int i = 0;
    T0_11_Initialization(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S4(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S5(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S6(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S7(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S8(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S9(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S10(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S12(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S13(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S14(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S15(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S16(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S17(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S18(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S19(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S20(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S21(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S22(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S23(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T11_0, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S24(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S25(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s26)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S26(&MainStateMachine_U);
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    T11_0_S27(&MainStateMachine_U);
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_0_S28(&MainStateMachine_U);
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_0_S29(&MainStateMachine_U);
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_0_S30(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_0_S31(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_0_S32(&MainStateMachine_U);
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T11_0, s33)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_0_S33(&MainStateMachine_U);
    MainStateMachine_step();
    // for( i = 0; i < INDEX; ++i){
    //     MainStateMachine_step();
    // }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T12_0, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T12_0, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S4(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S5(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S6(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S7(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S8(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S9(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S10(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S12(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S13(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S14(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S15(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S16(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    // MainStateMachine_step();
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S17(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    // MainStateMachine_step();
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S18(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S19(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S20(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S21(&MainStateMachine_U);
    MainStateMachine_step();
    for( i = 0; i < INDEX; ++i){
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S22(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S23(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S24(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S25(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s26)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S26(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S27(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S28(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S29(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S30(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S31(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T12_0, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_0_S32(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

// T32_0-----------------------------------------------------------start
TEST(T31_0, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S4(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S5(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S6(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S7(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S8(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S9(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S10(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S13(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S14(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S15(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S16(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S17(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S18(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S19(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S20(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S21(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S22(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S23(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S24(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T31_0, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
    T31_0_Initialization(&MainStateMachine_U);
    T31_0_S25(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
// T31_0------------------------------------------------------------end

// T32_0-----------------------------------------------------------start
TEST(T32_0, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_32_Initialization(&MainStateMachine_U);
    T11_32_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_Initialization(&MainStateMachine_U);
    T32_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S10(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S12(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S13(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S14(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S15(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S16(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S17(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S18(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S19(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S20(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S21(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S22(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S23(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S24(&MainStateMachine_U);
    for (i = 0; i < INDEX + 40; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S25(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T32_0, s26)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S26(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S27(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S28(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S29(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}
TEST(T32_0, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S30(&MainStateMachine_U);
    for (i = 0; i < INDEX + 8; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S31(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S32(&MainStateMachine_U);
    for (i = 0; i < INDEX + 195; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T32_0, s33)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
    T32_0_S33(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

// T32_0-------------------------------------------------------------------end

// T4_0-------------------------------------------------------------------start
TEST(T4_0, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    
    //T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S4(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }

    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);

    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S5(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S6(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S7(&MainStateMachine_U);
    for (i = 0; i < INDEX + 38; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S8(&MainStateMachine_U);
    MainStateMachine_step();
    for (i = 0; i < INDEX+38; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S9(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S10(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T4_0, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
    T4_0_Initialization(&MainStateMachine_U);
    T4_0_S11(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
}

TEST(T0_32, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S2(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S3(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s4)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S4(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s5)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S5(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s6)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S6(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s7)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S7(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s8)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S8(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s9)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S9(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s10)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S10(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s11)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S11(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s12)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S12(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s13)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S13(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s14)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S14(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s15)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    T0_32_S15(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s16)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S16(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s17)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S17(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s18)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S18(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s19)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S19(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s20)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S20(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s21)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S21(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s22)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S22(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s23)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S23(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s24)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S24(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s25)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S25(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s26)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S26(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s27)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S27(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s28)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S28(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s29)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S29(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s30)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S30(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s31)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S31(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s32)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S32(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s33)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S33(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s34)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S34(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s35)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S35(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s36)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S36(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

TEST(T0_32, s37)
{
    InitAll();
    MainStateMachine_initialize();
    T0_32_Initialization(&MainStateMachine_U);
    T0_32_S37(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Inactive);
}

// T0_32---------------------------------------------------------------------end

// T11_32-------------------------------------------------------------------start
TEST(T11_32, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
    T11_32_Initialization(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA2);
}

TEST(T11_32, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_32_Initialization(&MainStateMachine_U);
    T11_32_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
}

TEST(T11_32, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_32_Initialization(&MainStateMachine_U);
    T11_32_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
}
// T11_32-------------------------------------------------------------------end

// T11_4-------------------------------------------------------------------start
TEST(T11_4, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_4_Initialization(&MainStateMachine_U);
    // T11_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
}

TEST(T11_4, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_11_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);

    T11_4_Initialization(&MainStateMachine_U);
    T11_4_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_Only);
}
// T11_4-------------------------------------------------------------------end

// T12_31-----------------------------------------------------------------start
TEST(T12_31, s1)
{
    // MainStateMachine_Y = {Auto_Braking_For_EBCM_and_Ibooster};
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
    T12_31_Initialization(&MainStateMachine_U);
    // T12_31_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX + 6; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, HBA1);
}

TEST(T12_31, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);

    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
}

TEST(T12_31, s3)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);

    T12_31_Initialization(&MainStateMachine_U);
    T12_31_S3(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
}
// T12_31-----------------------------------------------------------------end

// T12_4-----------------------------------------------------------------start
TEST(T12_4, s1)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);

    T12_4_Initialization(&MainStateMachine_U);
    // T12_4_S1(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Hold);
}

TEST(T12_4, s2)
{
    InitAll();
    MainStateMachine_initialize();
    T0_12_Initialization(&MainStateMachine_U);
    int i = 0;
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);

    T12_4_Initialization(&MainStateMachine_U);
    T12_4_S2(&MainStateMachine_U);
    for (i = 0; i < INDEX; ++i)
    {
        MainStateMachine_step();
    }
    EXPECT_EQ(MainStateMachine_Y.AEB_State, Auto_Braking_For_EBCM_and_Ibooster);
}