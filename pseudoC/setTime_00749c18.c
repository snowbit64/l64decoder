// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTime
// Entry Point: 00749c18
// Size: 448 bytes
// Signature: undefined __thiscall setTime(KeyframedTransformation * this, float param_1, bool param_2, float param_3)


/* KeyframedTransformation::setTime(float, bool, float) */

void __thiscall
KeyframedTransformation::setTime
          (KeyframedTransformation *this,float param_1,bool param_2,float param_3)

{
  float **ppfVar1;
  ushort uVar2;
  uint uVar3;
  float *pfVar4;
  ulong uVar5;
  uint uVar6;
  float *pfVar7;
  float **ppfVar8;
  int iVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  *(float **)(this + 0xb8) = (float *)0x0;
  ppfVar1 = *(float ***)(this + 8);
  *(undefined8 *)(this + 0xc0) = 0;
  pfVar4 = *ppfVar1;
  uVar6 = (uint)(*(long *)(this + 0x10) - (long)ppfVar1 >> 3);
  if (*pfVar4 <= param_1 && 1 < uVar6) {
    if (*(float *)(this + 0xa4) <= param_1) {
      pfVar4 = ppfVar1[uVar6 - 1];
      if (!param_2) goto LAB_00749c44;
      *(float **)(this + 0xb8) = pfVar4;
      pfVar7 = *ppfVar1;
      fVar12 = *pfVar7;
      *(float **)(this + 0xc0) = pfVar7;
      fVar12 = fVar12 + param_3;
    }
    else {
      uVar3 = (uint)((param_1 - *pfVar4) * *(float *)(this + 0xa0));
      if (0x3e < uVar3) {
        uVar3 = 0x3f;
      }
      uVar2 = *(ushort *)(this + (ulong)uVar3 * 2 + 0x20);
      uVar5 = (ulong)uVar2 + 0xffffffff;
      ppfVar8 = ppfVar1 + uVar2;
      iVar9 = uVar6 - uVar2;
      do {
        pfVar7 = *ppfVar8;
        fVar12 = *pfVar7;
        *(float **)(this + 0xc0) = pfVar7;
        if (param_1 <= fVar12) {
          pfVar4 = ppfVar1[uVar5 & 0xffffffff];
          goto LAB_00749c4c;
        }
        uVar5 = uVar5 + 1;
        ppfVar8 = ppfVar8 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      fVar12 = *pfVar7;
      pfVar4 = (float *)0x0;
    }
  }
  else {
LAB_00749c44:
    *(float **)(this + 0xc0) = pfVar4;
    pfVar7 = pfVar4;
LAB_00749c4c:
    fVar12 = *pfVar7;
    *(float **)(this + 0xb8) = pfVar4;
  }
  if (fVar12 <= *pfVar4) {
    uVar11 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(this + 0xa8) = uVar11;
    fVar12 = 1.0;
    *(undefined4 *)(this + 0xb0) = 0x3f800000;
  }
  else {
    fVar12 = (fVar12 - param_1) / (fVar12 - *pfVar4);
    *(float *)(this + 0xb0) = fVar12;
    *(float *)(this + 0xac) = fVar12;
    *(float *)(this + 0xa8) = fVar12;
    if (fVar12 <= 0.5) {
      uVar2 = *(ushort *)(pfVar7 + 1);
      if ((uVar2 & 0x70) == 0) {
        return;
      }
      fVar10 = (float)NEON_fmadd(fVar12,0xc0000000,0x40400000);
      fVar10 = fVar12 * fVar12 * fVar10;
      if ((uVar2 >> 4 & 1) != 0) {
        *(float *)(this + 0xa8) = fVar10;
      }
      if ((uVar2 >> 5 & 1) != 0) {
        *(float *)(this + 0xac) = fVar10;
      }
      if ((uVar2 >> 6 & 1) == 0) {
        return;
      }
      goto LAB_00749dd0;
    }
  }
  uVar2 = *(ushort *)(pfVar4 + 1);
  if ((uVar2 & 0x380) != 0) {
    fVar10 = (float)NEON_fmadd(fVar12,0xc0000000,0x40400000);
    fVar10 = fVar12 * fVar12 * fVar10;
    if ((uVar2 >> 7 & 1) != 0) {
      *(float *)(this + 0xa8) = fVar10;
    }
    if ((uVar2 >> 8 & 1) != 0) {
      *(float *)(this + 0xac) = fVar10;
    }
    if ((uVar2 >> 9 & 1) != 0) {
LAB_00749dd0:
      *(float *)(this + 0xb0) = fVar10;
      return;
    }
  }
  return;
}


