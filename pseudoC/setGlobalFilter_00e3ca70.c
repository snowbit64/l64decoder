// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setGlobalFilter
// Entry Point: 00e3ca70
// Size: 136 bytes
// Signature: undefined __thiscall setGlobalFilter(Soloud * this, uint param_1, Filter * param_2)


/* SoLoud::Soloud::setGlobalFilter(unsigned int, SoLoud::Filter*) */

void __thiscall SoLoud::Soloud::setGlobalFilter(Soloud *this,uint param_1,Filter *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (7 < param_1) {
    return;
  }
  uVar2 = (ulong)param_1;
  lockAudioMutex();
  if (*(long **)(this + uVar2 * 8 + 0x2158) != (long *)0x0) {
    (**(code **)(**(long **)(this + uVar2 * 8 + 0x2158) + 0x48))();
  }
  *(undefined8 *)(this + uVar2 * 8 + 0x2158) = 0;
  *(Filter **)(this + uVar2 * 8 + 0x2118) = param_2;
  if (param_2 != (Filter *)0x0) {
    uVar1 = (***(code ***)param_2)(param_2);
    *(undefined8 *)(this + uVar2 * 8 + 0x2158) = uVar1;
  }
  unlockAudioMutex();
  return;
}


