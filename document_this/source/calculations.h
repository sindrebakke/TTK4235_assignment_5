#ifndef CALCULATIONS_H
#define CALCUATIONS_H
#include "system.h"

/**
 * @brief Calculates the proportional (P) parameter for a PID controller.
 * @param current_system Pointer to the System structure containing tuning parameters.
 * @return The calculated P parameter value.
 */
double calculate_P_parameter(System * current_system);

/**
 * @brief Calculates the integral (I) parameter for a PID controller.
 * @param current_system Pointer to the System structure containing tuning parameters.
 * @return The calculated I parameter value.
 */
double calculate_I_parameter(System * current_system);

/**
 * @brief Calculates the derivative (D) parameter for a PID controller.
 * @param current_system Pointer to the System structure containing tuning parameters.
 * @return The calculated D parameter value.
 */
double calculate_D_parameter(System * current_system);

#endif
