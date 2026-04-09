// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPointHeight
// Entry Point: 008d08bc
// Size: 132 bytes
// Signature: undefined __thiscall getPointHeight(FillPlaneGeometry * this, float param_1, float param_2)


/* FillPlaneGeometry::getPointHeight(float, float) */

undefined4 __thiscall
FillPlaneGeometry::getPointHeight(FillPlaneGeometry *this,float param_1,float param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar2 = *(long *)(this + 0x158);
  uVar7 = 0;
  if (*(long *)(this + 0x160) - lVar2 != 0) {
    uVar3 = 0;
    uVar5 = (*(long *)(this + 0x160) - lVar2 >> 2) * -0x5555555555555555;
    fVar8 = 3.402823e+38;
    uVar4 = 0xffffffff;
    do {
      pfVar6 = (float *)(lVar2 + uVar3 * 0xc);
      fVar9 = pfVar6[2] - param_2;
      fVar10 = *pfVar6 - param_1;
      fVar10 = (float)NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
      fVar9 = fVar10;
      if (fVar8 <= fVar10) {
        fVar9 = fVar8;
      }
      uVar1 = (uint)uVar3;
      if (fVar8 <= fVar10) {
        uVar1 = uVar4;
      }
      uVar3 = (ulong)((uint)uVar3 + 1);
      fVar8 = fVar9;
      uVar4 = uVar1;
    } while (uVar3 <= uVar5 && uVar5 - uVar3 != 0);
    if (uVar1 != 0xffffffff) {
      uVar7 = *(undefined4 *)(lVar2 + (ulong)uVar1 * 0xc + 4);
    }
  }
  return uVar7;
}


