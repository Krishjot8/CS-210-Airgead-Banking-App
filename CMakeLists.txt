cmake_minimum_required(VERSION 3.15)
project(Airgead_Banking_App)

set(CMAKE_CXX_STANDARD 20)

add_executable(Airgead_Banking_App main.cpp
        Data/DataInput/data_input.cpp
        Data/DataInput/data_input.h
        "InvestmentCalculator/investment_calculator.cpp"
        Data/DataOutput/data_output.cpp
        Data/DataOutput/data_output.h
 "InvestmentCalculator/investment_calculator.h")
