// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mix_internal
// Entry Point: 00e38c04
// Size: 1400 bytes
// Signature: undefined __thiscall mix_internal(Soloud * this, uint param_1)


/* SoLoud::Soloud::mix_internal(unsigned int) */

void __thiscall SoLoud::Soloud::mix_internal(Soloud *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  
  fVar17 = *(float *)(this + 0x20c0);
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
  *(undefined8 *)(this + 0x2110) = 0;
  dVar16 = *(double *)(this + 0x2108);
  *(ulong *)(this + 0x2100) = *(long *)(this + 0x2100) + (ulong)param_1;
  dVar15 = (double)((float)(ulong)param_1 / fVar12);
  *(double *)(this + 0x2108) = dVar16 + dVar15;
  fVar12 = fVar17;
  if (*(int *)(this + 0x20f8) != 0) {
    fVar12 = (float)Fader::get((Fader *)(this + 0x20d0),dVar16 + dVar15);
    *(float *)(this + 0x20c0) = fVar12;
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    Thread::lockMutex(*(void **)(this + 8));
  }
  this[0x10] = (Soloud)0x1;
  if (0 < *(int *)(this + 0x54)) {
    lVar11 = 0;
    do {
      lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x14) >> 1 & 1) == 0)) {
        dVar16 = *(double *)(lVar5 + 0x58) + dVar15;
        *(uint *)(lVar5 + 0x158) = (uint)(0 < *(int *)(this + 0x20f8));
        *(double *)(lVar5 + 0x60) = *(double *)(lVar5 + 0x60) + dVar15;
        *(double *)(lVar5 + 0x58) = dVar16;
        uVar1 = (uint)lVar11;
        if (0 < *(int *)(lVar5 + 0xf0)) {
          fVar13 = (float)Fader::get((Fader *)(lVar5 + 200),dVar16);
          setVoiceRelativePlaySpeed(this,uVar1,fVar13);
        }
        lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
        if (0 < *(int *)(lVar5 + 0xc0)) {
          uVar14 = Fader::get((Fader *)(lVar5 + 0x98),*(double *)(lVar5 + 0x58));
          lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
          *(undefined4 *)(lVar5 + 0x3c) = uVar14;
          *(undefined4 *)(lVar5 + 0x158) = 1;
          updateVoiceVolume(this,uVar1);
          lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
          this[0x224f0] = (Soloud)0x1;
        }
        if (0 < *(int *)(lVar5 + 0x90)) {
          fVar13 = (float)Fader::get((Fader *)(lVar5 + 0x68),*(double *)(lVar5 + 0x58));
          setVoicePan(this,uVar1,fVar13);
          lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
          *(undefined4 *)(lVar5 + 0x158) = 1;
        }
        if (*(int *)(lVar5 + 0x120) == 0) {
LAB_00e38dac:
          iVar7 = *(int *)(lVar5 + 0x150);
        }
        else {
          Fader::get((Fader *)(lVar5 + 0xf8),*(double *)(lVar5 + 0x58));
          lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
          if (*(int *)(lVar5 + 0x120) != -1) goto LAB_00e38dac;
          *(undefined4 *)(lVar5 + 0x120) = 0;
          setVoicePause(this,uVar1,1);
          lVar5 = *(long *)(this + lVar11 * 8 + 0xa0);
          iVar7 = *(int *)(lVar5 + 0x150);
        }
        if (iVar7 != 0) {
          Fader::get((Fader *)(lVar5 + 0x128),*(double *)(lVar5 + 0x58));
          if (*(int *)(*(long *)(this + lVar11 * 8 + 0xa0) + 0x150) == -1) {
            *(undefined4 *)(*(long *)(this + lVar11 * 8 + 0xa0) + 0x150) = 0;
            stopVoice(this,uVar1);
          }
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < *(int *)(this + 0x54));
  }
  if (this[0x224f0] != (Soloud)0x0) {
    calcActiveVoices();
  }
  uVar1 = *(uint *)(this + 0x74);
  if (*(uint *)(this + 0x70) < uVar1) {
    *(uint *)(this + 0x70) = uVar1;
    if (*(void **)(this + 0x60) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x60));
    }
    *(uint *)(this + 0x68) = uVar1 << 3;
    pvVar3 = operator_new__((ulong)(uVar1 << 3) * 4 + 0x40);
    *(ulong *)(this + 0x58) = (long)pvVar3 + 0x1fU & 0xffffffffffffffe0;
    *(void **)(this + 0x60) = pvVar3;
  }
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
  mixBus(this,*(float **)(this + 0x78),param_1,param_1,(AlignedFloatBuffer *)(this + 0x58),0,fVar13,
         *(uint *)(this + 0x20a4),false);
  plVar4 = *(long **)(this + 0x2158);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2160);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2168);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2170);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2178);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2180);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2188);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  plVar4 = *(long **)(this + 0x2190);
  if (plVar4 != (long *)0x0) {
    uVar14 = NEON_ucvtf(*(undefined4 *)(this + 0x20a0));
    (**(code **)(*plVar4 + 0x10))
              (uVar14,*(undefined8 *)(this + 0x2108),plVar4,*(undefined8 *)(this + 0x78),param_1,
               *(undefined4 *)(this + 0x20a4));
  }
  this[0x10] = (Soloud)0x0;
  if (*(void **)(this + 8) != (void *)0x0) {
    Thread::unlockMutex(*(void **)(this + 8));
  }
  clip(this,(AlignedFloatBuffer *)(this + 0x78),(AlignedFloatBuffer *)(this + 0x58),param_1,fVar17,
       fVar12);
  if (((byte)this[0x20bc] >> 1 & 1) != 0) {
    lVar11 = *(long *)(this + 0x58);
    uVar1 = *(uint *)(this + 0x20a4);
    *(undefined8 *)(this + 0x2830) = 0;
    *(undefined8 *)(this + 0x2828) = 0;
    *(undefined8 *)(this + 0x2840) = 0;
    *(undefined8 *)(this + 0x2838) = 0;
    if (param_1 < 0x100) {
      if (0 < (int)uVar1) {
        lVar5 = 0;
        do {
          uVar2 = 0;
          if (param_1 != 0) {
            uVar2 = (uint)lVar5 / param_1;
          }
          fVar12 = 0.0;
          iVar7 = 0;
          *(undefined4 *)(this + lVar5 * 4 + 0x2848) = 0;
          uVar6 = (ulong)uVar1;
          pfVar10 = (float *)(this + 0x2828);
          do {
            fVar17 = *(float *)(lVar11 + (ulong)(((uint)lVar5 - uVar2 * param_1) + iVar7 * param_1)
                                         * 4);
            fVar13 = ABS(fVar17);
            if (*pfVar10 < fVar13) {
              *pfVar10 = fVar13;
              fVar12 = *(float *)(this + lVar5 * 4 + 0x2848);
            }
            fVar12 = fVar17 + fVar12;
            iVar7 = iVar7 + 1;
            pfVar10 = pfVar10 + 1;
            uVar6 = uVar6 - 1;
            *(float *)(this + lVar5 * 4 + 0x2848) = fVar12;
          } while (uVar6 != 0);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x100);
        return;
      }
    }
    else if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        fVar12 = 0.0;
        uVar9 = uVar6 & 0xffffffff;
        *(undefined4 *)(this + uVar6 * 4 + 0x2848) = 0;
        uVar8 = (ulong)uVar1;
        pfVar10 = (float *)(this + 0x2828);
        do {
          fVar17 = *(float *)(lVar11 + uVar9 * 4);
          fVar13 = ABS(fVar17);
          if (*pfVar10 < fVar13) {
            *pfVar10 = fVar13;
            fVar12 = *(float *)(this + uVar6 * 4 + 0x2848);
          }
          fVar12 = fVar17 + fVar12;
          pfVar10 = pfVar10 + 1;
          uVar9 = (ulong)((int)uVar9 + param_1);
          uVar8 = uVar8 - 1;
          *(float *)(this + uVar6 * 4 + 0x2848) = fVar12;
        } while (uVar8 != 0);
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x100);
      return;
    }
    memset(this + 0x2848,0,0x400);
  }
  return;
}


