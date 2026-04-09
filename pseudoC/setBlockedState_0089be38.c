// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBlockedState
// Entry Point: 0089be38
// Size: 52 bytes
// Signature: undefined __thiscall setBlockedState(SimulatedPedestrian * this, bool param_1)


/* SimulatedPedestrian::setBlockedState(bool) */

void __thiscall SimulatedPedestrian::setBlockedState(SimulatedPedestrian *this,bool param_1)

{
  undefined4 uVar1;
  
  if (this[0x72] != (SimulatedPedestrian)param_1 && *(long *)(this + 0x48) != 0) {
    this[0x72] = (SimulatedPedestrian)param_1;
    uVar1 = 0;
    if (!param_1) {
      uVar1 = *(undefined4 *)(this + 0xbc);
    }
    *(undefined4 *)(this + 0xb8) = uVar1;
  }
  return;
}


