// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSplitDistances
// Entry Point: 00a53d38
// Size: 632 bytes
// Signature: undefined __thiscall computeSplitDistances(LightSource * this, float param_1, float param_2, float param_3, uint param_4)


/* LightSource::computeSplitDistances(float, float, float, unsigned int) */

void __thiscall
LightSource::computeSplitDistances
          (LightSource *this,float param_1,float param_2,float param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined auVar13 [16];
  float fVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float __x;
  float fVar22;
  undefined8 uStack_148;
  undefined8 uStack_88;
  
  uVar1 = (ulong)param_4;
  if (1 < param_4) {
    __x = param_2 / param_1;
    fVar20 = (float)uVar1;
    fVar21 = param_2 - param_1;
    uVar3 = uVar1 - 1;
    if (uVar3 < 4) {
      uVar2 = 1;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffffc;
      uVar2 = uVar4 | 1;
      iVar17 = 1;
      iVar18 = 2;
      uVar19 = 0x400000003;
      pfVar5 = (float *)(this + 0x1d0);
      uVar6 = uVar4;
      do {
        auVar11._4_4_ = iVar18;
        auVar11._0_4_ = iVar17;
        auVar11._8_8_ = uVar19;
        auVar11 = NEON_ucvtf(auVar11,4);
        fVar12 = auVar11._0_4_ / fVar20;
        fVar14 = auVar11._4_4_ / fVar20;
        fVar9 = powf(__x,fVar12);
        fVar22 = powf(__x,fVar14);
        auVar13._4_4_ = fVar14;
        auVar13._0_4_ = fVar12;
        auVar13._8_8_ = uStack_88;
        auVar13 = NEON_ext(auVar13,auVar13,8,1);
        fVar7 = powf(__x,auVar13._4_4_);
        fVar8 = powf(__x,auVar13._0_4_);
        uVar6 = uVar6 - 4;
        fVar12 = param_1 + fVar12 * fVar21;
        fVar14 = param_1 + fVar14 * fVar21;
        fVar15 = (float)uStack_148 + (float)uStack_88 * fVar21;
        fVar16 = (float)((ulong)uStack_148 >> 0x20) + (float)((ulong)uStack_88 >> 0x20) * fVar21;
        pfVar5[4] = fVar15 + (fVar8 * param_1 - fVar15) * param_3;
        pfVar5[5] = fVar16 + (fVar7 * param_1 - fVar16) * param_3;
        *pfVar5 = fVar12 + (fVar9 * param_1 - fVar12) * param_3;
        pfVar5[1] = fVar14 + (fVar22 * param_1 - fVar14) * param_3;
        iVar17 = (int)(auVar11._8_4_ / fVar20) + 4;
        iVar18 = (int)(auVar11._12_4_ / fVar20) + 4;
        uVar19 = CONCAT44((int)((ulong)uVar19 >> 0x20) + 4,(int)uVar19 + 4);
        pfVar5 = pfVar5 + 4;
      } while (uVar6 != 0);
      if (uVar3 == uVar4) goto LAB_00a53eec;
    }
    do {
      fVar22 = (float)(uVar2 & 0xffffffff) / fVar20;
      fVar9 = powf(__x,fVar22);
      fVar22 = (float)NEON_fmadd(fVar21,fVar22,param_1);
      uVar10 = NEON_fmadd(param_3,fVar9 * param_1 - fVar22,fVar22);
      *(undefined4 *)(this + uVar2 * 4 + 0x1cc) = uVar10;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
LAB_00a53eec:
  uVar1 = (ulong)(param_4 - 1);
  if (param_4 - 1 < 8) {
    *(float *)(this + uVar1 * 4 + 0x1d0) = param_2;
    if ((int)(uVar1 + 1) != 8) {
      *(float *)(this + (uVar1 + 1) * 4 + 0x1d0) = param_2;
      if ((int)(uVar1 + 2) != 8) {
        *(float *)(this + (uVar1 + 2) * 4 + 0x1d0) = param_2;
        if ((int)(uVar1 + 3) != 8) {
          *(float *)(this + (uVar1 + 3) * 4 + 0x1d0) = param_2;
          if ((int)(uVar1 + 4) != 8) {
            *(float *)(this + (uVar1 + 4) * 4 + 0x1d0) = param_2;
            if ((int)(uVar1 + 5) != 8) {
              *(float *)(this + (uVar1 + 5) * 4 + 0x1d0) = param_2;
              if ((int)(uVar1 + 6) != 8) {
                *(float *)(this + (uVar1 + 6) * 4 + 0x1d0) = param_2;
                if ((int)(uVar1 + 7) != 8) {
                  *(float *)(this + (uVar1 + 7) * 4 + 0x1d0) = param_2;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


