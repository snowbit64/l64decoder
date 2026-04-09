// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedHeightAtPoint
// Entry Point: 008e6f78
// Size: 236 bytes
// Signature: undefined __thiscall getInterpolatedHeightAtPoint(BaseTerrain * this, float param_1, float param_2)


/* BaseTerrain::getInterpolatedHeightAtPoint(float, float) const */

float __thiscall
BaseTerrain::getInterpolatedHeightAtPoint(BaseTerrain *this,float param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  
  fVar10 = 0.0;
  if ((0.0 <= param_1) && (0.0 <= param_2)) {
    iVar2 = *(int *)(this + 0x90);
    uVar3 = iVar2 - 1;
    if (param_1 <= (float)(ulong)uVar3 && param_2 <= (float)(ulong)uVar3) {
      uVar6 = (uint)param_1;
      uVar7 = (uint)param_2;
      uVar1 = uVar3;
      if (uVar6 < uVar3) {
        uVar1 = uVar6 + 1;
      }
      fVar8 = (float)NEON_ucvtf((int)param_1);
      fVar10 = (float)NEON_ucvtf((int)param_2);
      if (uVar7 < uVar3) {
        uVar3 = uVar7 + 1;
      }
      fVar8 = param_1 - fVar8;
      fVar10 = param_2 - fVar10;
      lVar5 = *(long *)(this + 0x80);
      uVar11 = NEON_ucvtf((uint)*(ushort *)(lVar5 + (ulong)(uVar1 + iVar2 * uVar7) * 2));
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + (ulong)(uVar3 * iVar2 + uVar6) * 2));
      if (fVar8 + fVar10 <= 1.0) {
        uVar9 = NEON_fmadd(uVar11,fVar8,fVar10 * fVar4);
        uVar11 = NEON_ucvtf((uint)*(ushort *)(lVar5 + (ulong)(iVar2 * uVar7 + uVar6) * 2));
        fVar10 = (float)NEON_fmadd(uVar11,(1.0 - fVar8) - fVar10,uVar9);
      }
      else {
        uVar9 = NEON_ucvtf((uint)*(ushort *)(lVar5 + (ulong)(uVar3 * iVar2 + uVar1) * 2));
        uVar11 = NEON_fmadd(uVar11,1.0 - fVar10,(1.0 - fVar8) * fVar4);
        fVar10 = (float)NEON_fmadd(uVar9,fVar8 + fVar10 + -1.0,uVar11);
      }
      fVar10 = *(float *)(this + 0xa4) * fVar10;
    }
  }
  return fVar10;
}


