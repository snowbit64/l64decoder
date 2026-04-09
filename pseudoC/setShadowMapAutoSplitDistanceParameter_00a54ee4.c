// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowMapAutoSplitDistanceParameter
// Entry Point: 00a54ee4
// Size: 660 bytes
// Signature: undefined __thiscall setShadowMapAutoSplitDistanceParameter(LightSource * this, float param_1)


/* LightSource::setShadowMapAutoSplitDistanceParameter(float) */

void __thiscall LightSource::setShadowMapAutoSplitDistanceParameter(LightSource *this,float param_1)

{
  uint uVar1;
  undefined auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float __x;
  float fVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_68;
  float fVar17;
  
  *(float *)(this + 0x1cc) = param_1;
  if (this[0x1c8] == (LightSource)0x0) {
    return;
  }
  uVar1 = *(uint *)(this + 0x1c4);
  fVar24 = *(float *)(this + 0x1bc);
  if (1 < uVar1) {
    fVar18 = (float)(ulong)uVar1;
    uVar4 = (ulong)uVar1 - 1;
    __x = fVar24 / 0.15;
    if (uVar4 < 4) {
      uVar3 = 1;
    }
    else {
      uVar5 = uVar4 & 0xfffffffffffffffc;
      uVar3 = uVar5 | 1;
      iVar21 = 3;
      iVar22 = 4;
      iVar19 = 1;
      iVar20 = 2;
      pfVar6 = (float *)(this + 0x1d0);
      uVar7 = uVar5;
      do {
        auVar12._4_4_ = iVar20;
        auVar12._0_4_ = iVar19;
        auVar12._8_4_ = iVar21;
        auVar12._12_4_ = iVar22;
        auVar12 = NEON_ucvtf(auVar12,4);
        fVar13 = auVar12._0_4_ / fVar18;
        fVar14 = auVar12._4_4_ / fVar18;
        fVar10 = powf(__x,fVar13);
        fVar23 = powf(__x,fVar14);
        auVar2._4_4_ = fVar14;
        auVar2._0_4_ = fVar13;
        auVar2._8_8_ = uStack_68;
        auVar12 = NEON_ext(auVar2,auVar2,8,1);
        fVar8 = powf(__x,auVar12._4_4_);
        fVar9 = powf(__x,auVar12._0_4_);
        uVar7 = uVar7 - 4;
        fVar13 = fVar13 * param_1 + 0.15;
        fVar14 = fVar14 * param_1 + 0.15;
        fVar17 = (float)((ulong)uStack_148 >> 0x20);
        fVar15 = (float)uStack_148 + (float)uStack_68 * (float)uStack_128;
        fVar16 = fVar17 + (float)((ulong)uStack_68 >> 0x20) * (float)((ulong)uStack_128 >> 0x20);
        pfVar6[4] = fVar15 + (fVar9 * (float)uStack_148 - fVar15) * (float)uStack_138;
        pfVar6[5] = fVar16 + (fVar8 * fVar17 - fVar16) * (float)((ulong)uStack_138 >> 0x20);
        *pfVar6 = fVar13 + (fVar10 * 0.15 - fVar13) * param_1;
        pfVar6[1] = fVar14 + (fVar23 * 0.15 - fVar14) * param_1;
        iVar19 = iVar19 + 4;
        iVar20 = iVar20 + 4;
        iVar21 = iVar21 + 4;
        iVar22 = iVar22 + 4;
        pfVar6 = pfVar6 + 4;
      } while (uVar7 != 0);
      if (uVar4 == uVar5) goto LAB_00a550b8;
    }
    do {
      fVar23 = (float)(uVar3 & 0xffffffff) / fVar18;
      fVar10 = powf(__x,fVar23);
      fVar23 = (float)NEON_fmadd(fVar24 + -0.15,fVar23,0x3e19999a);
      uVar11 = NEON_fmadd(param_1,fVar10 * 0.15 - fVar23,fVar23);
      *(undefined4 *)(this + uVar3 * 4 + 0x1cc) = uVar11;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
LAB_00a550b8:
  uVar4 = (ulong)(uVar1 - 1);
  if (uVar1 - 1 < 8) {
    *(float *)(this + uVar4 * 4 + 0x1d0) = fVar24;
    if ((int)(uVar4 + 1) != 8) {
      *(float *)(this + (uVar4 + 1) * 4 + 0x1d0) = fVar24;
      if ((int)(uVar4 + 2) != 8) {
        *(float *)(this + (uVar4 + 2) * 4 + 0x1d0) = fVar24;
        if ((int)(uVar4 + 3) != 8) {
          *(float *)(this + (uVar4 + 3) * 4 + 0x1d0) = fVar24;
          if ((int)(uVar4 + 4) != 8) {
            *(float *)(this + (uVar4 + 4) * 4 + 0x1d0) = fVar24;
            if ((int)(uVar4 + 5) != 8) {
              *(float *)(this + (uVar4 + 5) * 4 + 0x1d0) = fVar24;
              if ((int)(uVar4 + 6) != 8) {
                *(float *)(this + (uVar4 + 6) * 4 + 0x1d0) = fVar24;
                if ((int)(uVar4 + 7) != 8) {
                  *(float *)(this + (uVar4 + 7) * 4 + 0x1d0) = fVar24;
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


