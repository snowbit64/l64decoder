// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDiscretePerformanceSettingStr
// Entry Point: 007571c8
// Size: 32 bytes
// Signature: undefined __cdecl getDiscretePerformanceSettingStr(DISCRETE_PERFORMANCE_SETTING param_1)


/* HardwareScalability::getDiscretePerformanceSettingStr(HardwareScalability::DISCRETE_PERFORMANCE_SETTING)
    */

undefined8
HardwareScalability::getDiscretePerformanceSettingStr(DISCRETE_PERFORMANCE_SETTING param_1)

{
  if ((int)param_1 < 6) {
    return *(undefined8 *)(s_discretePerformanceSettingNames + (ulong)param_1 * 8);
  }
  return 0;
}


