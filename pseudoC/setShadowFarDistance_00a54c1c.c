// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShadowFarDistance
// Entry Point: 00a54c1c
// Size: 680 bytes
// Signature: undefined __thiscall setShadowFarDistance(LightSource * this, float param_1)


/* LightSource::setShadowFarDistance(float) */

void __thiscall LightSource::setShadowFarDistance(LightSource *this,float param_1)

{
  uint uVar1;
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
  float fVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  float fVar21;
  float __x;
  float fVar22;
  undefined8 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_78;
  
  *(float *)(this + 0x1bc) = param_1;
  if (this[0x1c8] == (LightSource)0x0) {
    return;
  }
  uVar1 = *(uint *)(this + 0x1c4);
  if (1 < uVar1) {
    fVar17 = (float)(ulong)uVar1;
    fVar21 = *(float *)(this + 0x1cc);
    uVar3 = (ulong)uVar1 - 1;
    __x = param_1 / 0.15;
    if (uVar3 < 4) {
      uVar2 = 1;
    }
    else {
      uVar4 = uVar3 & 0xfffffffffffffffc;
      uVar2 = uVar4 | 1;
      iVar18 = 1;
      iVar19 = 2;
      uVar20 = 0x400000003;
      pfVar5 = (float *)(this + 0x1d0);
      uVar6 = uVar4;
      do {
        auVar11._4_4_ = iVar19;
        auVar11._0_4_ = iVar18;
        auVar11._8_8_ = uVar20;
        auVar11 = NEON_ucvtf(auVar11,4);
        fVar12 = auVar11._0_4_ / fVar17;
        fVar14 = auVar11._4_4_ / fVar17;
        fVar9 = powf(__x,fVar12);
        fVar22 = powf(__x,fVar14);
        auVar13._4_4_ = fVar14;
        auVar13._0_4_ = fVar12;
        auVar13._8_8_ = uStack_78;
        auVar13 = NEON_ext(auVar13,auVar13,8,1);
        fVar7 = powf(__x,auVar13._4_4_);
        fVar8 = powf(__x,auVar13._0_4_);
        uVar6 = uVar6 - 4;
        fVar12 = fVar12 * fVar21 + 0.15;
        fVar14 = fVar14 * fVar21 + 0.15;
        fVar15 = (float)uStack_78 * (float)uStack_128 + 0.15;
        fVar16 = (float)((ulong)uStack_78 >> 0x20) * (float)((ulong)uStack_128 >> 0x20) + 0.15;
        pfVar5[4] = fVar15 + (fVar8 * 0.15 - fVar15) * (float)uStack_138;
        pfVar5[5] = fVar16 + (fVar7 * 0.15 - fVar16) * (float)((ulong)uStack_138 >> 0x20);
        *pfVar5 = fVar12 + (fVar9 * 0.15 - fVar12) * fVar21;
        pfVar5[1] = fVar14 + (fVar22 * 0.15 - fVar14) * fVar21;
        iVar18 = (int)(auVar11._8_4_ / fVar17) + 4;
        iVar19 = (int)(auVar11._12_4_ / fVar17) + 4;
        uVar20 = CONCAT44((int)((ulong)uVar20 >> 0x20) + 4,(int)uVar20 + 4);
        pfVar5 = pfVar5 + 4;
      } while (uVar6 != 0);
      if (uVar3 == uVar4) goto LAB_00a54e04;
    }
    do {
      fVar22 = (float)(uVar2 & 0xffffffff) / fVar17;
      fVar9 = powf(__x,fVar22);
      fVar22 = (float)NEON_fmadd(param_1 + -0.15,fVar22,0x3e19999a);
      uVar10 = NEON_fmadd(fVar21,fVar9 * 0.15 - fVar22,fVar22);
      *(undefined4 *)(this + uVar2 * 4 + 0x1cc) = uVar10;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
LAB_00a54e04:
  uVar3 = (ulong)(uVar1 - 1);
  if (uVar1 - 1 < 8) {
    *(float *)(this + uVar3 * 4 + 0x1d0) = param_1;
    if ((int)(uVar3 + 1) != 8) {
      *(float *)(this + (uVar3 + 1) * 4 + 0x1d0) = param_1;
      if ((int)(uVar3 + 2) != 8) {
        *(float *)(this + (uVar3 + 2) * 4 + 0x1d0) = param_1;
        if ((int)(uVar3 + 3) != 8) {
          *(float *)(this + (uVar3 + 3) * 4 + 0x1d0) = param_1;
          if ((int)(uVar3 + 4) != 8) {
            *(float *)(this + (uVar3 + 4) * 4 + 0x1d0) = param_1;
            if ((int)(uVar3 + 5) != 8) {
              *(float *)(this + (uVar3 + 5) * 4 + 0x1d0) = param_1;
              if ((int)(uVar3 + 6) != 8) {
                *(float *)(this + (uVar3 + 6) * 4 + 0x1d0) = param_1;
                if ((int)(uVar3 + 7) != 8) {
                  *(float *)(this + (uVar3 + 7) * 4 + 0x1d0) = param_1;
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


