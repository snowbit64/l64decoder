// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPolyline
// Entry Point: 008d0840
// Size: 124 bytes
// Signature: undefined __thiscall findPolyline(FillPlaneGeometry * this, float param_1, float param_2)


/* FillPlaneGeometry::findPolyline(float, float) */

undefined4 __thiscall
FillPlaneGeometry::findPolyline(FillPlaneGeometry *this,float param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar4 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0);
  if ((int)(uVar4 >> 3) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    fVar7 = 3.402823e+38;
    uVar2 = 0xffffffff;
    do {
      lVar5 = *(long *)(*(long *)(this + 0xb0) + uVar3 * 8);
      fVar8 = fVar7;
      uVar1 = uVar2;
      if (*(float *)(lVar5 + 0x34) == 1.0) {
        pfVar6 = *(float **)(lVar5 + 0x10);
        fVar8 = pfVar6[2] - param_2;
        fVar9 = *pfVar6 - param_1;
        fVar9 = (float)NEON_fmadd(fVar9,fVar9,fVar8 * fVar8);
        fVar8 = fVar9;
        if (fVar7 <= fVar9) {
          fVar8 = fVar7;
        }
        uVar1 = (int)uVar3;
        if (fVar7 <= fVar9) {
          uVar1 = uVar2;
        }
      }
      uVar3 = uVar3 + 1;
      fVar7 = fVar8;
      uVar2 = uVar1;
    } while ((uVar4 >> 3 & 0xffffffff) != uVar3);
  }
  return uVar1;
}


