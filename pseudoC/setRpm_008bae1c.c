// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRpm
// Entry Point: 008bae1c
// Size: 808 bytes
// Signature: undefined __thiscall setRpm(SteadyLoopSoundGenerator * this, float param_1)


/* SteadyLoopSoundGenerator::setRpm(float) */

void __thiscall SteadyLoopSoundGenerator::setRpm(SteadyLoopSoundGenerator *this,float param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar10 = *(long **)(this + 8);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    lVar9 = plVar10[1];
    if (lVar6 != lVar9) {
      fVar15 = *(float *)(lVar6 + 0x18);
      fVar14 = fVar15;
      if (fVar15 <= param_1) {
        fVar14 = param_1;
      }
      fVar19 = *(float *)(lVar9 + -0x2c);
      if (fVar14 <= *(float *)(lVar9 + -0x2c)) {
        fVar19 = fVar14;
      }
      if (*(float *)(this + 0x68) != fVar19) {
        uVar7 = (lVar9 - lVar6 >> 3) * -0x71c71c71c71c71c7;
        if (lVar9 - lVar6 != 0) {
          uVar12 = 0;
          while( true ) {
            if ((fVar15 <= fVar19) && (fVar19 <= *(float *)(lVar6 + uVar12 * 0x48 + 0x1c)))
            goto LAB_008baed4;
            uVar12 = (ulong)((int)uVar12 + 1);
            if (uVar7 < uVar12 || uVar7 - uVar12 == 0) break;
            fVar15 = *(float *)(lVar6 + uVar12 * 0x48 + 0x18);
          }
        }
        uVar12 = 0;
LAB_008baed4:
        uVar11 = (uint)uVar12;
        uVar1 = uVar11 + 1;
        uVar13 = (ulong)uVar1;
        if (((uVar7 < uVar13 || uVar7 - uVar13 == 0) ||
            (fVar19 < *(float *)(lVar6 + uVar13 * 0x48 + 0x18))) ||
           (*(float *)(lVar6 + uVar13 * 0x48 + 0x1c) < fVar19)) {
          if (*(uint *)(this + 0x30) == uVar11) {
            uVar8 = *(undefined8 *)(this + 0x28);
            *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x48);
            *(undefined8 *)(this + 0x48) = uVar8;
            lVar6 = *plVar10;
            *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x40);
          }
          *(uint *)(this + 0x10) = uVar11;
          lVar6 = lVar6 + uVar12 * 0x48;
          fVar14 = *(float *)(lVar6 + 0x20);
          uVar16 = *(undefined4 *)(lVar6 + 0x24);
          *(undefined8 *)(this + 0x30) = 0xffffffff;
          *(undefined4 *)(this + 0x3c) = 0;
          *(undefined4 *)(this + 0x40) = 0;
          *(undefined4 *)(this + 0x14) = uVar16;
          *(float *)(this + 0x18) = fVar19 / fVar14;
        }
        else {
          if ((*(uint *)(this + 0x10) == uVar11) && (*(uint *)(this + 0x30) != uVar1)) {
            lVar9 = lVar6 + uVar13 * 0x48;
            iVar3 = *(int *)(lVar9 + 0x38);
            iVar4 = *(int *)(lVar9 + 0x40);
            uVar5 = (uint)(((*(float *)(lVar9 + 0x20) * (float)*(int *)(this + 0x1c) * 0.0001220703)
                           / *(float *)(lVar6 + uVar12 * 0x48 + 0x20)) * 8192.0);
            iVar2 = (int)uVar5 >> 0xd;
            *(uint *)(this + 0x3c) = uVar5;
            if (iVar3 == 0) {
              if (iVar4 <= iVar2) {
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar2 / iVar4;
                }
                *(uint *)(this + 0x3c) = uVar5 & 0x1fff | (iVar2 - iVar3 * iVar4) * 0x2000;
              }
            }
            else {
              lVar6 = *(long *)(*(long *)(this + 0x50) + uVar13 * 8);
              if (lVar6 != 0) {
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar2 / iVar4;
                }
                stb_vorbis_seek(lVar6,iVar2 - iVar3 * iVar4);
                *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0x1fff;
              }
            }
          }
          else if (*(uint *)(this + 0x10) == uVar1) {
            lVar9 = lVar6 + uVar12 * 0x48;
            iVar3 = *(int *)(lVar9 + 0x38);
            iVar4 = *(int *)(lVar9 + 0x40);
            uVar5 = (uint)(((*(float *)(lVar9 + 0x20) * (float)*(int *)(this + 0x3c) * 0.0001220703)
                           / *(float *)(lVar6 + uVar13 * 0x48 + 0x20)) * 8192.0);
            iVar2 = (int)uVar5 >> 0xd;
            *(uint *)(this + 0x1c) = uVar5;
            if (iVar3 == 0) {
              if (iVar4 <= iVar2) {
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar2 / iVar4;
                }
                *(uint *)(this + 0x1c) = uVar5 & 0x1fff | (iVar2 - iVar3 * iVar4) * 0x2000;
              }
            }
            else {
              lVar6 = *(long *)(*(long *)(this + 0x50) + uVar12 * 8);
              if (lVar6 != 0) {
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar2 / iVar4;
                }
                stb_vorbis_seek(lVar6,iVar2 - iVar3 * iVar4);
                uVar8 = *(undefined8 *)(this + 0x48);
                *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x28);
                *(undefined8 *)(this + 0x28) = uVar8;
                *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x20);
                *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0x1fff;
                *(undefined4 *)(this + 0x20) = 0;
              }
            }
          }
          lVar6 = *plVar10;
          fVar14 = 0.0;
          *(uint *)(this + 0x10) = uVar11;
          *(uint *)(this + 0x30) = uVar1;
          fVar15 = *(float *)(lVar6 + uVar12 * 0x48 + 0x1c);
          fVar17 = *(float *)(lVar6 + uVar13 * 0x48 + 0x18);
          if (fVar17 < fVar15) {
            fVar14 = (fVar19 - fVar17) / (fVar15 - fVar17);
          }
          lVar9 = lVar6 + uVar12 * 0x48;
          lVar6 = lVar6 + uVar13 * 0x48;
          fVar15 = *(float *)(lVar9 + 0x20);
          fVar17 = *(float *)(lVar6 + 0x20);
          fVar18 = *(float *)(lVar6 + 0x24);
          *(float *)(this + 0x14) = *(float *)(lVar9 + 0x24) * SQRT(1.0 - fVar14);
          *(float *)(this + 0x18) = fVar19 / fVar15;
          *(float *)(this + 0x34) = SQRT(fVar14) * fVar18;
          *(float *)(this + 0x38) = fVar19 / fVar17;
        }
        *(float *)(this + 0x68) = fVar19;
      }
    }
  }
  return;
}


