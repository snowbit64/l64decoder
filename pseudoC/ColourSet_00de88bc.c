// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ColourSet
// Entry Point: 00de88bc
// Size: 636 bytes
// Signature: undefined __thiscall ColourSet(ColourSet * this, uchar * param_1, int param_2, int param_3)


/* squish::ColourSet::ColourSet(unsigned char const*, int, int) */

void __thiscall squish::ColourSet::ColourSet(ColourSet *this,uchar *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  uchar *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined (*pauVar12) [16];
  float *pfVar13;
  ulong uVar14;
  undefined auVar15 [16];
  float fVar16;
  undefined auVar17 [16];
  float fVar18;
  float fVar19;
  
  uVar11 = 0;
  uVar9 = 0;
  *(undefined4 *)this = 0;
  this[0x144] = (ColourSet)0x0;
LAB_00de8908:
  if (((uint)param_2 >> (ulong)((uint)uVar9 & 0x1f) & 1) == 0) {
LAB_00de88f8:
    *(undefined4 *)(this + uVar9 * 4 + 0x104) = 0xffffffff;
  }
  else {
    uVar14 = uVar9 * 4;
    if ((param_3 & 1U) == 0) {
      pbVar3 = param_1 + (uVar14 | 1);
      pbVar4 = param_1 + (uVar14 | 2);
      uVar5 = 0;
      uVar6 = uVar5;
      pbVar7 = param_1 + 2;
      if (uVar9 != 0) {
        do {
          if (((((uint)param_2 >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0) &&
              (param_1[uVar14] == pbVar7[-2])) && ((*pbVar3 == pbVar7[-1] && (*pbVar4 == *pbVar7))))
          goto LAB_00de8980;
          uVar5 = uVar5 + 1;
          uVar6 = uVar14;
          pbVar7 = pbVar7 + 4;
        } while (uVar9 != uVar5);
      }
    }
    else {
      if (-1 < (char)param_1[uVar14 | 3]) {
        this[0x144] = (ColourSet)0x1;
        goto LAB_00de88f8;
      }
      pbVar3 = param_1 + (uVar14 | 1);
      pbVar4 = param_1 + (uVar14 | 2);
      uVar5 = 0;
      uVar6 = uVar5;
      puVar8 = param_1 + 3;
      if (uVar9 != 0) {
        do {
          if ((((((uint)param_2 >> (ulong)((uint)uVar5 & 0x1f) & 1) != 0) &&
               (param_1[uVar14] == puVar8[-3])) && (*pbVar3 == puVar8[-2])) &&
             ((*pbVar4 == puVar8[-1] && ((char)*puVar8 < '\0')))) goto LAB_00de8980;
          uVar5 = uVar5 + 1;
          uVar6 = uVar14;
          puVar8 = puVar8 + 4;
        } while (uVar9 != uVar5);
      }
    }
    fVar16 = (float)NEON_ucvtf((uint)param_1[uVar14]);
    fVar18 = (float)NEON_ucvtf((uint)*pbVar4);
    fVar19 = (float)NEON_ucvtf((uint)*pbVar3);
    bVar1 = param_1[uVar6 | 3];
    *(float *)(this + (long)(int)uVar11 * 0xc + 4) = fVar16 / 255.0;
    *(float *)(this + (long)(int)uVar11 * 0xc + 8) = fVar19 / 255.0;
    *(float *)(this + (long)(int)uVar11 * 0xc + 0xc) = fVar18 / 255.0;
    fVar16 = 1.0;
    if ((param_3 & 0x80U) != 0) {
      fVar16 = (float)(bVar1 + 1) * 0.00390625;
    }
    iVar2 = *(int *)this;
    uVar11 = iVar2 + 1;
    *(int *)(this + uVar9 * 4 + 0x104) = iVar2;
    *(float *)(this + (long)iVar2 * 4 + 0xc4) = fVar16;
    *(uint *)this = uVar11;
  }
  goto LAB_00de88fc;
LAB_00de8980:
  bVar1 = param_1[uVar14 | 3];
  iVar2 = *(int *)(this + (uVar5 & 0xffffffff) * 4 + 0x104);
  *(int *)(this + uVar9 * 4 + 0x104) = iVar2;
  fVar16 = 1.0;
  if ((param_3 & 0x80U) != 0) {
    fVar16 = (float)(bVar1 + 1) * 0.00390625;
  }
  *(float *)(this + (long)iVar2 * 4 + 0xc4) = *(float *)(this + (long)iVar2 * 4 + 0xc4) + fVar16;
LAB_00de88fc:
  uVar9 = uVar9 + 1;
  if (uVar9 == 0x10) {
    if (0 < (int)uVar11) {
      uVar9 = (ulong)uVar11;
      if (uVar11 < 8) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar9 & 0xfffffff8;
        pauVar12 = (undefined (*) [16])(this + 0xd4);
        uVar14 = uVar5;
        do {
          uVar14 = uVar14 - 8;
          auVar15 = NEON_fsqrt(pauVar12[-1],4);
          auVar17 = NEON_fsqrt(*pauVar12,4);
          *(long *)(pauVar12[-1] + 8) = auVar15._8_8_;
          *(long *)pauVar12[-1] = auVar15._0_8_;
          *(long *)(*pauVar12 + 8) = auVar17._8_8_;
          *(long *)*pauVar12 = auVar17._0_8_;
          pauVar12 = pauVar12 + 2;
        } while (uVar14 != 0);
        if (uVar5 == uVar9) {
          return;
        }
      }
      lVar10 = uVar9 - uVar5;
      pfVar13 = (float *)(this + uVar5 * 4 + 0xc4);
      do {
        lVar10 = lVar10 + -1;
        *pfVar13 = SQRT(*pfVar13);
        pfVar13 = pfVar13 + 1;
      } while (lVar10 != 0);
    }
    return;
  }
  goto LAB_00de8908;
}


