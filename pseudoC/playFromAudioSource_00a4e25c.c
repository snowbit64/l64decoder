// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playFromAudioSource
// Entry Point: 00a4e25c
// Size: 1512 bytes
// Signature: undefined playFromAudioSource(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::playFromAudioSource() */

void AudioSourceSample::playFromAudioSource(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  long *in_x0;
  long *plVar8;
  long lVar9;
  EntityRegistryManager *this;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  undefined4 uVar16;
  Sample *pSVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  
  uVar10 = *(uint *)(in_x0 + 0xf);
  if ((uVar10 >> 4 & 1) != 0) {
    return;
  }
  *(uint *)(in_x0 + 0xf) = uVar10 | 0x10;
  if ((uVar10 >> 3 & 1) == 0) {
    if ((uVar10 & 1) == 0) {
      return;
    }
    if ((in_x0[0x14] != 0) && (-1 < *(int *)(in_x0 + 0x11))) {
      AudioDeviceManager::getInstance();
      plVar8 = (long *)AudioDeviceManager::getCurrentAudioDevice();
      lVar9 = (**(code **)(*plVar8 + 0x1a8))();
      dVar7 = (double)(**(code **)(*plVar8 + 0x1b0))(plVar8,lVar9 - in_x0[0x14]);
      fVar19 = (float)dVar7;
      fVar23 = *(float *)(in_x0 + 0x13);
      fVar20 = fVar23;
      if (fVar19 <= fVar23) {
        fVar20 = fVar19;
      }
      fVar19 = *(float *)(in_x0 + 0x15) + (fVar19 - fVar20);
      *(float *)(in_x0 + 0x13) = fVar23 - fVar20;
      if ((((*(int *)(in_x0 + 0x11) != 0) && (0.0 < fVar19)) &&
          (fVar20 = (float)(**(code **)(*in_x0 + 0x28))(), fVar20 <= fVar19)) && (0.0 < fVar20)) {
        uVar10 = (uint)(fVar19 / fVar20);
        iVar5 = *(uint *)(in_x0 + 0x11) - uVar10;
        if (*(uint *)(in_x0 + 0x11) < uVar10 || iVar5 == 0) {
          fVar23 = *(float *)((long)in_x0 + 0x7c);
          fVar20 = *(float *)(in_x0 + 0x10);
          *(undefined4 *)(in_x0 + 0x11) = *(undefined4 *)((long)in_x0 + 0x84);
          fVar19 = fVar20;
          if (fVar23 <= fVar20) {
            fVar19 = fVar23;
          }
          if (fVar20 <= fVar23) {
            fVar20 = fVar23;
          }
          fVar19 = (float)MathUtil::getRandomMinMax(fVar19,fVar20);
          *(float *)(in_x0 + 0x13) = fVar19 * 1000.0;
          uVar21 = pickNextElementIndex();
          fVar19 = 0.0;
          *(undefined4 *)((long)in_x0 + 0xac) = uVar21;
        }
        else {
          *(int *)(in_x0 + 0x11) = iVar5;
          fVar19 = (float)NEON_fmsub((float)(ulong)uVar10,fVar20,fVar19);
        }
      }
      goto LAB_00a4e6c4;
    }
    fVar23 = *(float *)((long)in_x0 + 0x7c);
    fVar20 = *(float *)(in_x0 + 0x10);
    *(undefined4 *)(in_x0 + 0x11) = *(undefined4 *)((long)in_x0 + 0x84);
    fVar19 = fVar20;
    if (fVar23 <= fVar20) {
      fVar19 = fVar23;
    }
    if (fVar20 <= fVar23) {
      fVar20 = fVar23;
    }
    fVar19 = (float)MathUtil::getRandomMinMax(fVar19,fVar20);
    *(float *)(in_x0 + 0x13) = fVar19 * 1000.0;
    if (((byte)*(AudioSourceSample *)(in_x0 + 0xf) >> 2 & 1) == 0) {
      uVar4 = *(uint *)(in_x0 + 0x16);
      uVar10 = *(int *)((long)in_x0 + 0xac) + 1;
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar10 / uVar4;
      }
      uVar10 = uVar10 - uVar6 * uVar4;
    }
    else {
      uVar10 = *(uint *)(in_x0 + 0x16);
      uVar18 = (ulong)uVar10;
      if (uVar10 == 0) {
        fVar19 = 0.0;
      }
      else {
        if (uVar10 == 1) {
          fVar19 = 0.0;
          uVar11 = 0;
        }
        else {
          uVar11 = uVar18 & 0xfffffffe;
          fVar19 = 0.0;
          pfVar12 = (float *)((long)in_x0 + 0xec);
          uVar14 = uVar11;
          pfVar15 = (float *)in_x0[0x1e];
          do {
            pfVar3 = pfVar12 + -0xe;
            if (1 < uVar10) {
              pfVar3 = pfVar15;
            }
            pfVar1 = pfVar15 + 0xe;
            pfVar15 = pfVar15 + 0x1c;
            pfVar2 = pfVar12;
            if (1 < uVar10) {
              pfVar2 = pfVar1;
            }
            pfVar12 = pfVar12 + 0x1c;
            uVar14 = uVar14 - 2;
            fVar19 = fVar19 + *pfVar3 + *pfVar2;
          } while (uVar14 != 0);
          if (uVar11 == uVar18) goto LAB_00a4e664;
        }
        lVar9 = uVar18 - uVar11;
        pfVar15 = (float *)in_x0[0x1e] + uVar11 * 0xe;
        pfVar12 = (float *)((long)in_x0 + uVar11 * 0x38 + 0xb4);
        do {
          pfVar3 = pfVar12;
          if (1 < uVar10) {
            pfVar3 = pfVar15;
          }
          lVar9 = lVar9 + -1;
          pfVar15 = pfVar15 + 0xe;
          pfVar12 = pfVar12 + 0xe;
          fVar19 = fVar19 + *pfVar3;
        } while (lVar9 != 0);
      }
LAB_00a4e664:
      fVar20 = (float)MathUtil::getRandom();
      uVar10 = uVar10 - 1;
      if (uVar10 != 0) {
        fVar23 = 0.0;
        uVar18 = 0;
        pfVar15 = (float *)in_x0[0x1e];
        pfVar12 = (float *)((long)in_x0 + 0xb4);
        do {
          pfVar3 = pfVar12;
          if (1 < *(uint *)(in_x0 + 0x16)) {
            pfVar3 = pfVar15;
          }
          fVar23 = fVar23 + *pfVar3;
          if (fVar19 * fVar20 <= fVar23) {
            uVar10 = (uint)uVar18;
            break;
          }
          uVar18 = uVar18 + 1;
          pfVar15 = pfVar15 + 0xe;
          pfVar12 = pfVar12 + 0xe;
        } while (uVar10 != uVar18);
      }
    }
    fVar19 = 0.0;
    *(uint *)((long)in_x0 + 0xac) = uVar10;
LAB_00a4e6c4:
    uVar21 = Sample::getVolume();
    if (*(AudioSourceSample *)(in_x0 + 6) == (AudioSourceSample)0x0) {
      return;
    }
    lVar13 = (ulong)*(uint *)((long)in_x0 + 0xac) * 0x38;
    lVar9 = (long)(in_x0 + 0x16) + lVar13 + 4;
    if (1 < *(uint *)(in_x0 + 0x16)) {
      lVar9 = in_x0[0x1e] + lVar13;
    }
    if (*(long *)(lVar9 + 0x30) == 0) {
      return;
    }
    uVar25 = *(undefined4 *)(in_x0 + 0x13);
    if (*(long *)(lVar9 + 0x28) != 0) {
      LoopSynthesisGenerator::setStart
                ((LoopSynthesisGenerator *)(*(long *)(lVar9 + 0x28) + 0x10),fVar19);
      fVar19 = 0.0;
    }
    uVar16 = *(undefined4 *)(in_x0 + 0x11);
    if ((((byte)*(AudioSourceSample *)(in_x0 + 0xf) >> 3 & 1) == 0) &&
       ((0.0 < *(float *)(in_x0 + 0x10) || *(int *)(in_x0 + 0x16) != 0) &&
        (0.0 < *(float *)(in_x0 + 0x10) || *(int *)(in_x0 + 0x16) != 1))) {
      uVar16 = 1;
    }
    plVar8 = *(long **)(lVar9 + 0x30);
    uVar22 = Sample::getPitch();
                    /* WARNING: Could not recover jumptable at 0x00a4e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x10))(uVar21,uVar22,fVar19,uVar25,plVar8,uVar16,0);
    return;
  }
  fVar19 = *(float *)(in_x0 + 0x15);
  if (*(int *)((long)in_x0 + 0x8c) == 0) {
    pSVar17 = (Sample *)0x0;
    if (in_x0[0x14] != 0) goto LAB_00a4e3e0;
LAB_00a4e480:
    if ((((*(int *)(in_x0 + 0x11) != 0) && (0.0 < fVar19)) &&
        (((byte)*(AudioSourceSample *)(in_x0 + 0xf) >> 1 & 1) != 0)) &&
       ((fVar20 = (float)(**(code **)(*in_x0 + 0x28))(), fVar20 <= fVar19 && (0.0 < fVar20)))) {
      uVar10 = (uint)(fVar19 / fVar20);
      iVar5 = *(int *)(in_x0 + 0x11) - uVar10;
      if (iVar5 == 0 || *(int *)(in_x0 + 0x11) < (int)uVar10) {
        uVar10 = *(uint *)(in_x0 + 0xf);
        *(uint *)(in_x0 + 0xf) = uVar10 & 0xfffffff7;
        if ((uVar10 & 1) == 0) {
          *(undefined4 *)(in_x0 + 0x11) = 0xffffffff;
          return;
        }
        fVar23 = *(float *)((long)in_x0 + 0x7c);
        fVar20 = *(float *)(in_x0 + 0x10);
        *(undefined4 *)(in_x0 + 0x11) = *(undefined4 *)((long)in_x0 + 0x84);
        fVar19 = fVar20;
        if (fVar23 <= fVar20) {
          fVar19 = fVar23;
        }
        if (fVar20 <= fVar23) {
          fVar20 = fVar23;
        }
        fVar19 = (float)MathUtil::getRandomMinMax(fVar19,fVar20);
        *(float *)(in_x0 + 0x13) = fVar19 * 1000.0;
        uVar21 = pickNextElementIndex();
        *(undefined4 *)((long)in_x0 + 0xac) = uVar21;
        fVar20 = (float)Sample::getVolume();
        fVar23 = *(float *)(in_x0 + 0x13);
        fVar19 = 0.0;
        pSVar17 = (Sample *)0x0;
        goto LAB_00a4e5a0;
      }
      *(int *)(in_x0 + 0x11) = iVar5;
      fVar19 = (float)NEON_fmsub((float)(ulong)uVar10,fVar20,fVar19);
    }
  }
  else {
    fVar20 = *(float *)(in_x0 + 0x13);
    AudioDeviceManager::getInstance();
    plVar8 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    lVar9 = (**(code **)(*plVar8 + 0x1a8))();
    if ((ulong)(lVar9 - in_x0[0x12]) < 0x7fffffffffffffff) {
      dVar7 = (double)(**(code **)(*plVar8 + 0x1b0))(plVar8);
      if (fVar20 - (float)dVar7 < 0.0) {
        fVar19 = fVar19 - (fVar20 - (float)dVar7);
      }
      pSVar17 = (Sample *)0x0;
    }
    else {
      this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
      pSVar17 = (Sample *)EntityRegistryManager::getEntityById(this,*(uint *)((long)in_x0 + 0x8c));
    }
    in_x0[0x12] = 0;
    *(undefined4 *)((long)in_x0 + 0x8c) = 0;
    if (in_x0[0x14] == 0) goto LAB_00a4e480;
LAB_00a4e3e0:
    AudioDeviceManager::getInstance();
    plVar8 = (long *)AudioDeviceManager::getCurrentAudioDevice();
    lVar9 = (**(code **)(*plVar8 + 0x1a8))();
    dVar7 = (double)(**(code **)(*plVar8 + 0x1b0))(plVar8,lVar9 - in_x0[0x14]);
    fVar23 = (float)dVar7;
    fVar24 = *(float *)(in_x0 + 0x13);
    fVar20 = fVar24;
    if (fVar23 <= fVar24) {
      fVar20 = fVar23;
    }
    fVar19 = fVar19 + (fVar23 - fVar20);
    *(float *)(in_x0 + 0x13) = fVar24 - fVar20;
    if (((*(int *)(in_x0 + 0x11) == 0) || (fVar19 <= 0.0)) ||
       ((fVar20 = (float)(**(code **)(*in_x0 + 0x28))(), fVar19 < fVar20 || (fVar20 <= 0.0))))
    goto LAB_00a4e480;
    uVar10 = (uint)(fVar19 / fVar20);
    iVar5 = *(uint *)(in_x0 + 0x11) - uVar10;
    if (uVar10 <= *(uint *)(in_x0 + 0x11) && iVar5 != 0) {
      *(int *)(in_x0 + 0x11) = iVar5;
      fVar19 = (float)NEON_fmsub((float)(ulong)uVar10,fVar20,fVar19);
      goto LAB_00a4e480;
    }
    fVar23 = *(float *)((long)in_x0 + 0x7c);
    fVar20 = *(float *)(in_x0 + 0x10);
    *(undefined4 *)(in_x0 + 0x11) = *(undefined4 *)((long)in_x0 + 0x84);
    fVar19 = fVar20;
    if (fVar23 <= fVar20) {
      fVar19 = fVar23;
    }
    if (fVar20 <= fVar23) {
      fVar20 = fVar23;
    }
    fVar19 = (float)MathUtil::getRandomMinMax(fVar19,fVar20);
    *(float *)(in_x0 + 0x13) = fVar19 * 1000.0;
    uVar21 = pickNextElementIndex();
    fVar19 = 0.0;
    *(undefined4 *)((long)in_x0 + 0xac) = uVar21;
  }
  fVar20 = (float)Sample::getVolume();
  fVar23 = *(float *)(in_x0 + 0x13);
LAB_00a4e5a0:
  rawPlay((AudioSourceSample *)in_x0,fVar20,fVar19,fVar23,pSVar17);
  return;
}


