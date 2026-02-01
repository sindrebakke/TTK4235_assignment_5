#ifndef SYSTEM_H
#define SYSTEM_H

/**
 * @brief Enum of tuning rules for PID controller parameter calculation.
 */
typedef enum {
    Classic_Ziegler_Nichols, /**< Ziegler-Nichols tuning method */
    Pessen_Integral_Rule     /**< Pessen Integral Rule tuning method */
} Tuning;

/**
 * @brief A structure to represent a system and desired PID tuning method.
 */
typedef struct {
    double Ku;            /** < The gain margin for loop stability */
    double Tu;            /** < The period of the oscillations frequency at the stability limit */
    Tuning tuning_method; /** < The desired PID tuning method */
} System;


/**
 * @brief Creates a new System structure with the specified parameters.
 * @param Ku The gain margin for loop stability.
 * @param Tu The period of oscillations at the stability limit.
 * @param tuning_method The desired PID tuning method.
 * @return Pointer to the newly created System structure.
 */
System * system_create(double Ku, double Tu, Tuning tuning_method);

/**
 * @brief Deletes a System structure and frees its memory.
 * @param system_current Pointer to the System structure to delete.
 */
void system_delete(System * system_current);

#endif
