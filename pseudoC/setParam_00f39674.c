// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParam
// Entry Point: 00f39674
// Size: 100 bytes
// Signature: undefined __thiscall setParam(btConeTwistConstraint * this, int param_1, float param_2, int param_3)


/* btConeTwistConstraint::setParam(int, float, int) */

void __thiscall
btConeTwistConstraint::setParam(btConeTwistConstraint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 - 3U < 2) {
    if ((uint)param_3 < 3) {
      *(float *)(this + 0x26c) = param_2;
      uVar1 = *(uint *)(this + 0x268) | 1;
    }
    else {
      *(float *)(this + 0x274) = param_2;
      uVar1 = *(uint *)(this + 0x268) | 4;
    }
  }
  else {
    if (1 < param_1 - 1U) {
      return;
    }
    if (2 < (uint)param_3) {
      *(float *)(this + 0x1c8) = param_2;
      return;
    }
    *(float *)(this + 0x270) = param_2;
    uVar1 = *(uint *)(this + 0x268) | 2;
  }
  *(uint *)(this + 0x268) = uVar1;
  return;
}


