// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeElementAt
// Entry Point: 00a4c764
// Size: 924 bytes
// Signature: undefined __thiscall removeElementAt(AudioSourceSample * this, uint param_1)


/* WARNING: Removing unreachable block (ram,0x00a4c864) */
/* AudioSourceSample::removeElementAt(unsigned int) */

void __thiscall AudioSourceSample::removeElementAt(AudioSourceSample *this,uint param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  undefined4 uVar13;
  uint *puVar14;
  long *plVar15;
  void **ppvVar16;
  ulong uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  puVar14 = (uint *)(this + 0xb0);
  Element::destroy();
  SmallVector<AudioSourceSample::Element,1u>::erase
            ((SmallVector<AudioSourceSample::Element,1u> *)puVar14,param_1,true);
  if (*puVar14 == 0) {
    *(undefined4 *)(this + 0xb4) = 0x3f800000;
                    /* try { // try from 00a4c800 to 00a4c803 has its CatchHandler @ 00a4cb00 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)(this + 0xbc));
    uVar6 = *(uint *)(this + 0xb0);
    *(undefined8 *)(this + 0xdc) = 0;
    *(undefined8 *)(this + 0xd4) = 0;
    *(undefined8 *)(this + 0xe4) = 0;
    if (1 < uVar6) {
      ppvVar16 = (void **)(this + 0x104);
      uVar17 = 1;
      do {
        if (((byte)*(AudioSourceSample *)(ppvVar16 + -2) & 1) != 0) {
          operator_delete(*ppvVar16);
          uVar6 = *puVar14;
        }
        uVar17 = uVar17 + 1;
        ppvVar16 = ppvVar16 + 7;
      } while (uVar17 < uVar6);
    }
    *puVar14 = 1;
  }
  uVar6 = *(uint *)(this + 0xac);
  if (uVar6 != param_1) {
    if (param_1 < uVar6) {
      *(uint *)(this + 0xac) = uVar6 - 1;
    }
    goto LAB_00a4c910;
  }
  if (((this[0x30] == (AudioSourceSample)0x0) || (*(int *)(this + 0x88) < 0)) ||
     ((*(uint *)(this + 0x78) & 0x19) != 0x11)) {
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0x88) = 0xffffffff;
    *(uint *)(this + 0x78) = *(uint *)(this + 0x78) & 0xfffffff7;
    goto LAB_00a4c910;
  }
  fVar22 = *(float *)(this + 0x7c);
  fVar21 = *(float *)(this + 0x80);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x84);
  fVar18 = fVar21;
  if (fVar22 <= fVar21) {
    fVar18 = fVar22;
  }
  if (fVar21 <= fVar22) {
    fVar21 = fVar22;
  }
  fVar18 = (float)MathUtil::getRandomMinMax(fVar18,fVar21);
  *(float *)(this + 0x98) = fVar18 * 1000.0;
  if (((byte)this[0x78] >> 2 & 1) == 0) {
    uVar6 = *(uint *)(this + 0xb0);
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = (*(int *)(this + 0xac) + 1U) / uVar6;
    }
    uVar6 = (*(int *)(this + 0xac) + 1U) - uVar4 * uVar6;
  }
  else {
    uVar6 = *(uint *)(this + 0xb0);
    uVar17 = (ulong)uVar6;
    if (uVar6 == 0) {
      fVar18 = 0.0;
    }
    else {
      if (uVar6 == 1) {
        fVar18 = 0.0;
        uVar8 = 0;
      }
      else {
        uVar8 = uVar17 & 0xfffffffe;
        fVar18 = 0.0;
        pfVar10 = (float *)(this + 0xec);
        uVar11 = uVar8;
        pfVar12 = *(float **)(this + 0xf0);
        do {
          pfVar3 = pfVar10 + -0xe;
          if (1 < uVar6) {
            pfVar3 = pfVar12;
          }
          pfVar1 = pfVar12 + 0xe;
          pfVar12 = pfVar12 + 0x1c;
          pfVar2 = pfVar10;
          if (1 < uVar6) {
            pfVar2 = pfVar1;
          }
          pfVar10 = pfVar10 + 0x1c;
          uVar11 = uVar11 - 2;
          fVar18 = fVar18 + *pfVar3 + *pfVar2;
        } while (uVar11 != 0);
        if (uVar8 == uVar17) goto LAB_00a4c9ec;
      }
      lVar9 = uVar17 - uVar8;
      pfVar12 = *(float **)(this + 0xf0) + uVar8 * 0xe;
      pfVar10 = (float *)(this + uVar8 * 0x38 + 0xb4);
      do {
        pfVar3 = pfVar10;
        if (1 < uVar6) {
          pfVar3 = pfVar12;
        }
        lVar9 = lVar9 + -1;
        pfVar12 = pfVar12 + 0xe;
        pfVar10 = pfVar10 + 0xe;
        fVar18 = fVar18 + *pfVar3;
      } while (lVar9 != 0);
    }
LAB_00a4c9ec:
    fVar21 = (float)MathUtil::getRandom();
    uVar6 = uVar6 - 1;
    if (uVar6 != 0) {
      fVar22 = 0.0;
      uVar17 = 0;
      pfVar12 = *(float **)(this + 0xf0);
      pfVar10 = (float *)(this + 0xb4);
      do {
        pfVar3 = pfVar10;
        if (1 < *(uint *)(this + 0xb0)) {
          pfVar3 = pfVar12;
        }
        fVar22 = fVar22 + *pfVar3;
        if (fVar18 * fVar21 <= fVar22) {
          uVar6 = (uint)uVar17;
          break;
        }
        uVar17 = uVar17 + 1;
        pfVar12 = pfVar12 + 0xe;
        pfVar10 = pfVar10 + 0xe;
      } while (uVar6 != uVar17);
    }
  }
  *(uint *)(this + 0xac) = uVar6;
  uVar19 = Sample::getVolume();
  if (this[0x30] != (AudioSourceSample)0x0) {
    puVar14 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
    if (1 < *(uint *)(this + 0xb0)) {
      puVar14 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
    }
    if (*(long *)(puVar14 + 0xc) != 0) {
      if (*(long *)(puVar14 + 10) != 0) {
        LoopSynthesisGenerator::setStart
                  ((LoopSynthesisGenerator *)(*(long *)(puVar14 + 10) + 0x10),0.0);
      }
      uVar13 = *(undefined4 *)(this + 0x88);
      if ((((byte)this[0x78] >> 3 & 1) == 0) &&
         ((0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 0) &&
          (0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 1))) {
        uVar13 = 1;
      }
      plVar15 = *(long **)(puVar14 + 0xc);
      uVar20 = Sample::getPitch();
      (**(code **)(*plVar15 + 0x10))(uVar19,uVar20,0,0,plVar15,uVar13,0);
    }
  }
LAB_00a4c910:
  if (*(long *)(lVar5 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


