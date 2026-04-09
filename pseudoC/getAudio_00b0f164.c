// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAudio
// Entry Point: 00b0f164
// Size: 944 bytes
// Signature: undefined __thiscall getAudio(SoftAudioEffectBusInstance * this, float * param_1, uint param_2, uint param_3)


/* SoftAudioEffectBus::SoftAudioEffectBusInstance::getAudio(float*, unsigned int, unsigned int) */

uint __thiscall
SoftAudioEffectBus::SoftAudioEffectBusInstance::getAudio
          (SoftAudioEffectBusInstance *this,float *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  Soloud *this_00;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  
  lVar7 = *(long *)(this + 0x638);
  uVar6 = *(uint *)(lVar7 + 0xa8);
  if (uVar6 == 0) {
    if (*(int *)(this + 0x4c) * param_3 != 0) {
      memset(param_1,0,(ulong)(*(int *)(this + 0x4c) * param_3) << 2);
    }
  }
  else {
    this_00 = *(Soloud **)(lVar7 + 0x78);
    iVar4 = *(int *)(this_00 + 0x74);
    if (iVar4 != *(int *)(this + 0x640)) {
      *(int *)(this + 0x640) = iVar4;
      SoLoud::AlignedFloatBuffer::init
                ((AlignedFloatBuffer *)(this + 0x648),iVar4 + iVar4 * *(int *)(this + 0x4c));
      lVar7 = *(long *)(this + 0x638);
    }
    plVar3 = (long *)(this + 0x648);
    fVar21 = *(float *)(lVar7 + 0x8c0);
    SoLoud::Soloud::mixBus
              (this_00,param_1,param_2,param_3,(AlignedFloatBuffer *)plVar3,uVar6,
               *(float *)(this + 0x48),*(uint *)(this + 0x4c),true);
    if (((*(FDNReverbEffect **)(*(long *)(this + 0x638) + 0x8b0) != (FDNReverbEffect *)0x0) &&
        (fVar16 = SQRT(1.0 - fVar21), 0.0 < fVar16)) &&
       (FDNReverbEffect::process
                  (*(FDNReverbEffect **)(*(long *)(this + 0x638) + 0x8b0),
                   param_1 + *(int *)(this + 0x4c) * param_3,*(float **)(this + 0x648),param_3),
       param_2 != 0)) {
      uVar5 = *(uint *)(this + 0x4c);
      uVar10 = (ulong)uVar5;
      uVar6 = 0;
      uVar9 = 0;
      uVar12 = uVar10 & 0xfffffff8;
      do {
        if (uVar5 != 0) {
          lVar7 = *plVar3;
          uVar8 = (uint)uVar9;
          if (uVar5 < 8) {
LAB_00b0f2e8:
            uVar13 = 0;
          }
          else {
            uVar11 = (uint)(uVar10 - 1);
            uVar13 = 0;
            if (((param_3 == 1) && (CARRY4(uVar8,uVar11) == false)) &&
               ((uVar10 - 1 >> 0x20 == 0 && (CARRY4(uVar8 << 2,uVar11) == false)))) {
              lVar14 = (uVar9 * 4 & 0xfffffffc) * 4;
              if ((param_1 + uVar9 < (float *)(lVar7 + uVar10 * 4 + lVar14)) &&
                 ((float *)(lVar7 + lVar14) < param_1 + uVar9 + uVar10)) goto LAB_00b0f2e8;
              uVar15 = uVar9 & 0xffffffff;
              uVar13 = uVar12;
              uVar11 = uVar6;
              do {
                puVar2 = (undefined8 *)(lVar7 + (ulong)uVar11 * 4);
                puVar1 = (undefined8 *)(param_1 + uVar15);
                uVar13 = uVar13 - 8;
                uVar11 = uVar11 + 8;
                uVar15 = (ulong)((int)uVar15 + param_3 * 8);
                uVar18 = *puVar2;
                uVar20 = puVar2[3];
                uVar19 = puVar2[2];
                puVar1[1] = CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                                     fVar16 * (float)((ulong)puVar2[1] >> 0x20),
                                     (float)puVar1[1] + fVar16 * (float)puVar2[1]);
                *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) +
                                   fVar16 * (float)((ulong)uVar18 >> 0x20),
                                   (float)*puVar1 + fVar16 * (float)uVar18);
                puVar1[3] = CONCAT44((float)((ulong)puVar1[3] >> 0x20) +
                                     fVar16 * (float)((ulong)uVar20 >> 0x20),
                                     (float)puVar1[3] + fVar16 * (float)uVar20);
                puVar1[2] = CONCAT44((float)((ulong)puVar1[2] >> 0x20) +
                                     fVar16 * (float)((ulong)uVar19 >> 0x20),
                                     (float)puVar1[2] + fVar16 * (float)uVar19);
              } while (uVar13 != 0);
              uVar13 = uVar12;
              if (uVar12 == uVar10) goto LAB_00b0f260;
            }
          }
          uVar11 = uVar6 + (int)uVar13;
          lVar14 = uVar10 - uVar13;
          uVar8 = uVar8 + param_3 * (int)uVar13;
          do {
            uVar13 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + -1;
            fVar17 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + uVar13 * 4),fVar16,param_1[uVar8]);
            param_1[uVar8] = fVar17;
            uVar8 = uVar8 + param_3;
          } while (lVar14 != 0);
        }
LAB_00b0f260:
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 + 4;
      } while ((uint)uVar9 != param_2);
    }
    if (((*(FDNReverbEffect **)(*(long *)(this + 0x638) + 0x8b8) != (FDNReverbEffect *)0x0) &&
        (fVar21 = SQRT(fVar21), 0.0 < fVar21)) &&
       (FDNReverbEffect::process
                  (*(FDNReverbEffect **)(*(long *)(this + 0x638) + 0x8b8),
                   param_1 + *(int *)(this + 0x4c) * param_3,*(float **)(this + 0x648),param_3),
       param_2 != 0)) {
      uVar5 = *(uint *)(this + 0x4c);
      uVar10 = (ulong)uVar5;
      uVar6 = 0;
      uVar9 = 0;
      uVar12 = uVar10 & 0xfffffff8;
      do {
        if (uVar5 != 0) {
          lVar7 = *plVar3;
          uVar8 = (uint)uVar9;
          if (uVar5 < 8) {
LAB_00b0f450:
            uVar13 = 0;
          }
          else {
            uVar11 = (uint)(uVar10 - 1);
            uVar13 = 0;
            if (((param_3 == 1) && (CARRY4(uVar8,uVar11) == false)) &&
               ((uVar10 - 1 >> 0x20 == 0 && (CARRY4(uVar8 << 2,uVar11) == false)))) {
              lVar14 = (uVar9 * 4 & 0xfffffffc) * 4;
              if ((param_1 + uVar9 < (float *)(lVar7 + uVar10 * 4 + lVar14)) &&
                 ((float *)(lVar7 + lVar14) < param_1 + uVar9 + uVar10)) goto LAB_00b0f450;
              uVar15 = uVar9 & 0xffffffff;
              uVar13 = uVar12;
              uVar11 = uVar6;
              do {
                puVar2 = (undefined8 *)(lVar7 + (ulong)uVar11 * 4);
                puVar1 = (undefined8 *)(param_1 + uVar15);
                uVar13 = uVar13 - 8;
                uVar11 = uVar11 + 8;
                uVar15 = (ulong)((int)uVar15 + param_3 * 8);
                uVar18 = *puVar2;
                uVar20 = puVar2[3];
                uVar19 = puVar2[2];
                puVar1[1] = CONCAT44((float)((ulong)puVar1[1] >> 0x20) +
                                     fVar21 * (float)((ulong)puVar2[1] >> 0x20),
                                     (float)puVar1[1] + fVar21 * (float)puVar2[1]);
                *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) +
                                   fVar21 * (float)((ulong)uVar18 >> 0x20),
                                   (float)*puVar1 + fVar21 * (float)uVar18);
                puVar1[3] = CONCAT44((float)((ulong)puVar1[3] >> 0x20) +
                                     fVar21 * (float)((ulong)uVar20 >> 0x20),
                                     (float)puVar1[3] + fVar21 * (float)uVar20);
                puVar1[2] = CONCAT44((float)((ulong)puVar1[2] >> 0x20) +
                                     fVar21 * (float)((ulong)uVar19 >> 0x20),
                                     (float)puVar1[2] + fVar21 * (float)uVar19);
              } while (uVar13 != 0);
              uVar13 = uVar12;
              if (uVar12 == uVar10) goto LAB_00b0f3c8;
            }
          }
          lVar14 = uVar10 - uVar13;
          uVar11 = uVar6 + (int)uVar13;
          uVar8 = uVar8 + param_3 * (int)uVar13;
          do {
            uVar13 = (ulong)uVar11;
            lVar14 = lVar14 + -1;
            uVar11 = uVar11 + 1;
            fVar16 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + uVar13 * 4),fVar21,param_1[uVar8]);
            param_1[uVar8] = fVar16;
            uVar8 = uVar8 + param_3;
          } while (lVar14 != 0);
        }
LAB_00b0f3c8:
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 + 4;
      } while ((uint)uVar9 != param_2);
    }
  }
  return param_2;
}


