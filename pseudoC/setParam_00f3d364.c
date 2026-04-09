// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParam
// Entry Point: 00f3d364
// Size: 184 bytes
// Signature: undefined __thiscall setParam(btGeneric6DofConstraint * this, int param_1, float param_2, int param_3)


/* btGeneric6DofConstraint::setParam(int, float, int) */

void __thiscall
btGeneric6DofConstraint::setParam
          (btGeneric6DofConstraint *this,int param_1,float param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  if ((uint)param_3 < 3) {
    if (param_1 == 4) {
      iVar1 = 2;
      *(float *)(this + (ulong)(uint)param_3 * 4 + 0x31c) = param_2;
    }
    else if (param_1 == 3) {
      iVar1 = 1;
      *(float *)(this + (ulong)(uint)param_3 * 4 + 0x2fc) = param_2;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      iVar1 = 4;
      *(float *)(this + (ulong)(uint)param_3 * 4 + 0x30c) = param_2;
    }
  }
  else {
    uVar2 = (ulong)(param_3 - 3U);
    if (2 < param_3 - 3U) {
      return;
    }
    if (param_1 == 4) {
      iVar1 = 2;
      *(float *)(this + uVar2 * 0x40 + 0x3a0) = param_2;
    }
    else if (param_1 == 3) {
      iVar1 = 1;
      *(float *)(this + uVar2 * 0x40 + 0x398) = param_2;
    }
    else {
      if (param_1 != 2) {
        return;
      }
      iVar1 = 4;
      *(float *)(this + uVar2 * 0x40 + 0x39c) = param_2;
    }
  }
  *(uint *)(this + 0x530) = *(uint *)(this + 0x530) | iVar1 << (ulong)(param_3 * 3 & 0x1f);
  return;
}


