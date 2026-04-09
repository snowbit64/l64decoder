// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setParam
// Entry Point: 00994260
// Size: 144 bytes
// Signature: undefined __thiscall setParam(Bt2D6Joint * this, int param_1, float param_2, int param_3)


/* Bt2D6Joint::setParam(int, float, int) */

void __thiscall Bt2D6Joint::setParam(Bt2D6Joint *this,int param_1,float param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  
  if ((uint)param_3 < 3) {
    if (param_1 != 4) {
      if (param_1 != 2) {
        return;
      }
      iVar4 = 2;
      pfVar3 = (float *)(this + (ulong)(uint)param_3 * 4 + 0x10c);
      goto LAB_009942d4;
    }
    lVar2 = (ulong)(uint)param_3 * 4 + 0x11c;
  }
  else {
    uVar1 = param_3 - 3;
    if (2 < uVar1) {
      return;
    }
    if (param_1 != 4) {
      if (param_1 != 2) {
        return;
      }
      iVar4 = 2;
      pfVar3 = (float *)(this + (ulong)uVar1 * 0x44 + 0x1d0);
      goto LAB_009942d4;
    }
    lVar2 = (ulong)uVar1 * 0x44 + 0x1d4;
  }
  pfVar3 = (float *)(this + lVar2);
  iVar4 = 1;
LAB_009942d4:
  uVar1 = *(uint *)(this + 0x36c);
  *pfVar3 = param_2;
  *(uint *)(this + 0x36c) = uVar1 | iVar4 << (ulong)((param_3 & 0xfU) << 1);
  return;
}


