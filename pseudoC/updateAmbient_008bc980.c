// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAmbient
// Entry Point: 008bc980
// Size: 1060 bytes
// Signature: undefined __thiscall updateAmbient(SoundPlayer * this, float param_1, uint param_2)


/* SoundPlayer::updateAmbient(float, unsigned int) */

void __thiscall SoundPlayer::updateAmbient(SoundPlayer *this,float param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  SoundPlayer SVar3;
  SoundPlayer SVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  long *plVar13;
  long **pplVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  
  lVar1 = *(long *)(this + 0x20);
  lVar2 = *(long *)(this + 0x28);
  SVar3 = this[0x3c];
  SVar4 = this[0x3d];
  this[0x3d] = SVar3;
  do {
    if (lVar1 == lVar2) {
      return;
    }
    if (*(long *)(lVar1 + 0x18) != *(long *)(lVar1 + 0x20)) {
      if ((this[0xd8] == (SoundPlayer)0x0) || ((*(uint *)(lVar1 + 0x10) & param_2) != 0)) {
        bVar7 = false;
      }
      else {
        bVar7 = (*(uint *)(lVar1 + 0xc) & (param_2 ^ 0xffffffff)) == 0;
      }
      plVar13 = (long *)(lVar1 + 0x30);
      lVar8 = *plVar13;
      if (((lVar8 == 0) || (*(char *)(lVar8 + 0x60) == '\0')) ||
         (fVar15 = *(float *)(lVar1 + 0x3c), fVar15 <= 0.0)) {
        if (!bVar7) {
          fVar15 = *(float *)(lVar1 + 0x3c);
          goto joined_r0x008bcabc;
        }
LAB_008bca94:
        if (0.0 < *(float *)(lVar1 + 0x40)) {
          *(float *)(lVar1 + 0x40) = *(float *)(lVar1 + 0x40) - param_1;
        }
        else {
          fVar15 = *(float *)(lVar1 + 0x3c);
          if (fVar15 == 0.0) {
            fVar15 = (float)MathUtil::getRandom();
            lVar8 = *(long *)(lVar1 + 0x18);
            uVar6 = (int)((ulong)(*(long *)(lVar1 + 0x20) - lVar8) >> 3) * -0x3b13b13b - 1;
            uVar9 = (ulong)uVar6;
            if (uVar6 != 0) {
              uVar11 = 0;
              pfVar12 = (float *)(lVar8 + 0x20);
              fVar15 = fVar15 * *(float *)(lVar1 + 0x14);
              do {
                if (fVar15 <= *pfVar12) {
                  uVar9 = uVar11 & 0xffffffff;
                  break;
                }
                fVar15 = fVar15 - *pfVar12;
                uVar11 = uVar11 + 1;
                pfVar12 = pfVar12 + 0x1a;
              } while (uVar9 != uVar11);
            }
            pplVar14 = (long **)(lVar8 + uVar9 * 0x68 + 0x18);
            if (*(int *)(*pplVar14 + 5) != 3) goto LAB_008bca08;
            lVar10 = lVar8 + uVar9 * 0x68;
            fVar15 = *(float *)(lVar10 + 0x24);
            *plVar13 = lVar10;
            uVar11 = MathUtil::isZero((double)fVar15,1e-09);
            if ((uVar11 & 1) != 0) {
              *(undefined4 *)(lVar1 + 0x3c) = 0x3f800000;
            }
            lVar10 = lVar8 + uVar9 * 0x68;
            fVar15 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar10 + 0x38),*(float *)(lVar10 + 0x3c));
            fVar21 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar10 + 0x40),*(float *)(lVar10 + 0x44));
            fVar16 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar10 + 0x58),*(float *)(lVar10 + 0x5c));
            fVar17 = (float)MathUtil::getRandomMinMax
                                      (*(float *)(lVar10 + 0x48),*(float *)(lVar10 + 0x4c));
            uVar20 = MathUtil::getRandomMinMax(*(float *)(lVar10 + 0x2c),*(float *)(lVar10 + 0x30));
            cVar5 = *(char *)(lVar10 + 0x60);
            *(undefined4 *)(lVar1 + 0x38) = uVar20;
            if (cVar5 == '\0') {
              fVar19 = 0.0;
            }
            else {
              fVar18 = (float)(**(code **)(**pplVar14 + 0x28))();
              lVar8 = lVar8 + uVar9 * 0x68;
              fVar19 = (float)MathUtil::getRandomMinMax
                                        (*(float *)(lVar8 + 0x50),*(float *)(lVar8 + 0x54));
              if (fVar18 <= fVar19) {
                fVar19 = fVar18;
              }
              fVar19 = ((fVar16 + fVar19) - fVar17) - *(float *)(lVar8 + 0x28);
            }
            *(float *)(lVar1 + 0x44) = fVar19;
            Sample::setPitch((Sample *)*pplVar14,fVar21);
            if (SVar3 == (SoundPlayer)0x0) {
              fVar21 = 1.0;
            }
            else {
              fVar21 = *(float *)(*plVar13 + 0x34);
            }
            (**(code **)(**pplVar14 + 0x18))
                      (*(float *)(lVar1 + 0x3c) * *(float *)(lVar1 + 0x38) * fVar21,fVar17,fVar16,
                       *pplVar14,(int)fVar15,0);
            fVar15 = *(float *)(lVar1 + 0x3c);
          }
          if (fVar15 < 1.0) {
            lVar8 = *plVar13;
            fVar16 = 1.0;
            fVar21 = 1.0;
            if (0.001 <= *(float *)(lVar8 + 0x24)) {
              fVar16 = (float)NEON_fmin(fVar15 + param_1 / *(float *)(lVar8 + 0x24),0x3f800000);
            }
            *(float *)(lVar1 + 0x3c) = fVar16;
            if (SVar3 != (SoundPlayer)0x0) {
              fVar21 = *(float *)(lVar8 + 0x34);
            }
            Sample::setVolume(*(Sample **)(lVar8 + 0x18),fVar16 * *(float *)(lVar1 + 0x38) * fVar21)
            ;
          }
          uVar9 = (**(code **)(**(long **)(*plVar13 + 0x18) + 0x38))();
          if ((uVar9 & 1) == 0) {
LAB_008bcd20:
            *(undefined4 *)(lVar1 + 0x44) = 0;
            *plVar13 = 0;
            *(undefined8 *)(lVar1 + 0x38) = 0;
            uVar20 = MathUtil::getRandomMinMax(*(float *)(lVar1 + 4),*(float *)(lVar1 + 8));
            *(undefined4 *)(lVar1 + 0x40) = uVar20;
          }
        }
      }
      else {
        fVar21 = *(float *)(lVar1 + 0x44) - param_1;
        *(float *)(lVar1 + 0x44) = fVar21;
        if ((0.0 < fVar21) && (bVar7)) goto LAB_008bca94;
joined_r0x008bcabc:
        if (0.0 < fVar15) {
          if (*(float *)(lVar8 + 0x28) < 0.001) {
            *(undefined4 *)(lVar1 + 0x3c) = 0;
          }
          else {
            fVar15 = fVar15 - param_1 / *(float *)(lVar8 + 0x28);
            *(float *)(lVar1 + 0x3c) = fVar15;
            if (0.0 < fVar15) {
              if (SVar3 == (SoundPlayer)0x0) {
                fVar21 = 1.0;
              }
              else {
                fVar21 = *(float *)(lVar8 + 0x34);
              }
              Sample::setVolume(*(Sample **)(lVar8 + 0x18),
                                fVar15 * *(float *)(lVar1 + 0x38) * fVar21);
              goto joined_r0x008bcd6c;
            }
          }
          (**(code **)(**(long **)(lVar8 + 0x18) + 0x20))(0,0);
          goto LAB_008bcd20;
        }
      }
joined_r0x008bcd6c:
      if ((SVar4 != SVar3) && (lVar8 = *plVar13, lVar8 != 0)) {
        if (SVar3 == (SoundPlayer)0x0) {
          fVar15 = 1.0;
        }
        else {
          fVar15 = *(float *)(lVar8 + 0x34);
        }
        Sample::setVolume(*(Sample **)(lVar8 + 0x18),
                          *(float *)(lVar1 + 0x3c) * *(float *)(lVar1 + 0x38) * fVar15);
      }
    }
LAB_008bca08:
    lVar1 = lVar1 + 0x48;
  } while( true );
}


