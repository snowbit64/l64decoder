// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParam
// Entry Point: 009942f0
// Size: 120 bytes
// Signature: undefined __thiscall getParam(Bt2D6Joint * this, int param_1, int param_2)


/* Bt2D6Joint::getParam(int, int) const */

undefined4 __thiscall Bt2D6Joint::getParam(Bt2D6Joint *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if ((uint)param_2 < 3) {
    if (param_1 == 4) {
      puVar2 = (undefined4 *)(this + (ulong)(uint)param_2 * 4 + 0x11c);
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      puVar2 = (undefined4 *)(this + (ulong)(uint)param_2 * 4 + 0x10c);
    }
  }
  else {
    uVar1 = param_2 - 3;
    if (2 < uVar1) {
      return 0;
    }
    if (param_1 == 4) {
      puVar2 = (undefined4 *)(this + (ulong)uVar1 * 0x44 + 0x1d4);
    }
    else {
      if (param_1 != 2) {
        return 0;
      }
      puVar2 = (undefined4 *)(this + (ulong)uVar1 * 0x44 + 0x1d0);
    }
  }
  return *puVar2;
}


