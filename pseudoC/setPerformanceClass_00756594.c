// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPerformanceClass
// Entry Point: 00756594
// Size: 12 bytes
// Signature: undefined __thiscall setPerformanceClass(HardwareScalability * this, PERFORMANCE_CLASS param_1)


/* HardwareScalability::setPerformanceClass(HardwareScalability::PERFORMANCE_CLASS) */

void __thiscall
HardwareScalability::setPerformanceClass(HardwareScalability *this,PERFORMANCE_CLASS param_1)

{
  this[0x11] = (HardwareScalability)0x0;
  *(PERFORMANCE_CLASS *)(this + 0x18) = param_1;
  initAndroidProfile(this,param_1);
  return;
}


