// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDiscretePerformanceSetting
// Entry Point: 007571e8
// Size: 8 bytes
// Signature: undefined __thiscall setDiscretePerformanceSetting(HardwareScalability * this, DISCRETE_PERFORMANCE_SETTING param_1)


/* HardwareScalability::setDiscretePerformanceSetting(HardwareScalability::DISCRETE_PERFORMANCE_SETTING)
    */

void __thiscall
HardwareScalability::setDiscretePerformanceSetting
          (HardwareScalability *this,DISCRETE_PERFORMANCE_SETTING param_1)

{
  *(DISCRETE_PERFORMANCE_SETTING *)(this + 0x108) = param_1;
  return;
}


