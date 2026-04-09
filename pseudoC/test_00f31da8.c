// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: test
// Entry Point: 00f31da8
// Size: 212 bytes
// Signature: undefined __thiscall test(btAngularLimit * this, float param_1)


/* btAngularLimit::test(float) */

void __thiscall btAngularLimit::test(btAngularLimit *this,float param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar5;
  undefined4 uVar4;
  
  *(undefined8 *)(this + 0x14) = 0;
  fVar5 = *(float *)(this + 4);
  this[0x1c] = (btAngularLimit)0x0;
  if (fVar5 < 0.0) {
    return;
  }
  fVar2 = fmodf(param_1 - *(float *)this,6.283185);
  if (-3.141593 <= fVar2) {
    if (fVar2 <= 3.141593) goto LAB_00f31e30;
    fVar1 = -6.283185;
  }
  else {
    fVar1 = 6.283185;
  }
  fVar2 = fVar2 + fVar1;
LAB_00f31e30:
  if (-fVar5 <= fVar2) {
    if (fVar2 <= fVar5) {
      return;
    }
    fVar5 = fVar5 - fVar2;
    uVar3 = NEON_fmov(0xbf800000,4);
    uVar4 = (undefined4)((ulong)uVar3 >> 0x20);
  }
  else {
    fVar5 = -(fVar2 + fVar5);
    uVar3 = NEON_fmov(0x3f800000,4);
    uVar4 = (undefined4)((ulong)uVar3 >> 0x20);
  }
  this[0x1c] = (btAngularLimit)0x1;
  *(ulong *)(this + 0x14) = CONCAT44(uVar4,fVar5);
  return;
}


