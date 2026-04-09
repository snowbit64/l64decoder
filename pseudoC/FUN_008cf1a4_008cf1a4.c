// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008cf1a4
// Entry Point: 008cf1a4
// Size: 1188 bytes
// Signature: undefined FUN_008cf1a4(void)


void FUN_008cf1a4(long **param_1,uint param_2,uint param_3)

{
  void *__src;
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  void **ppvVar14;
  uint **ppuVar15;
  uint *puVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  
  ppuVar15 = (uint **)param_1[1];
  uVar2 = param_2 + 2;
  if ((param_2 - 1 & 3) != 0) {
    uVar2 = param_2 - 1;
  }
  lVar4 = **param_1;
  puVar16 = *ppuVar15;
  puVar6 = ppuVar15[1];
  uVar3 = param_3 + 2;
  if ((param_3 - 1 & 3) != 0) {
    uVar3 = param_3 - 1;
  }
  *(undefined4 *)(lVar4 + (ulong)uVar3 * 4) = *(undefined4 *)(lVar4 + (ulong)uVar2 * 4);
  puVar8 = puVar16;
  if (puVar16 == puVar6) {
LAB_008cf22c:
    if (puVar8 != puVar6) {
      *puVar8 = uVar3;
    }
  }
  else {
    do {
      if (*puVar8 == uVar2) goto LAB_008cf22c;
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar6);
  }
  uVar3 = param_2 - 2;
  lVar7 = (ulong)uVar2 * 4;
  if ((param_2 + 1 & 3) != 0) {
    uVar3 = param_2 + 1;
  }
  fVar17 = *(float *)(lVar4 + lVar7);
  fVar20 = *(float *)(lVar4 + (ulong)uVar3 * 4);
  lVar9 = param_1[2][0x5ed];
  uVar3 = param_3 - 2;
  fVar19 = *(float *)(lVar4 + (ulong)param_2 * 4) * 0.25;
  if ((param_3 + 1 & 3) != 0) {
    uVar3 = param_3 + 1;
  }
  *(float *)(lVar4 + (ulong)param_2 * 4) = fVar19;
  iVar1 = *(int *)(lVar9 + (ulong)param_2 * 8 + 4);
  *(float *)(lVar4 + (ulong)param_3 * 4) = fVar19;
  uVar18 = NEON_fnmsub(fVar17 + fVar20,0x3f000000,fVar19);
  *(undefined4 *)(lVar4 + lVar7) = uVar18;
  *(undefined4 *)(lVar4 + (ulong)uVar3 * 4) = uVar18;
  if (iVar1 == -1) {
    if (puVar6 == ppuVar15[2]) {
      uVar12 = (long)puVar6 - (long)puVar16;
      uVar5 = ((long)uVar12 >> 2) + 1;
      if (uVar5 >> 0x3e != 0) goto LAB_008cf62c;
      if (uVar5 <= (ulong)((long)uVar12 >> 1)) {
        uVar5 = (long)uVar12 >> 1;
      }
      if (0x7ffffffffffffffb < uVar12) {
        uVar5 = 0x3fffffffffffffff;
      }
      if (uVar5 == 0) {
        puVar6 = (uint *)0x0;
      }
      else {
        if (uVar5 >> 0x3e != 0) goto LAB_008cf634;
        puVar6 = (uint *)operator_new(uVar5 << 2);
      }
      puVar6[(long)uVar12 >> 2] = param_2;
      if (0 < (long)uVar12) {
        memcpy(puVar6,puVar16,uVar12);
      }
      *ppuVar15 = puVar6;
      ppuVar15[1] = puVar6 + ((long)uVar12 >> 2) + 1;
      ppuVar15[2] = puVar6 + uVar5;
      if (puVar16 != (uint *)0x0) {
        operator_delete(puVar16);
      }
    }
    else {
      *puVar6 = param_2;
      ppuVar15[1] = puVar6 + 1;
    }
    ppuVar15 = (uint **)param_1[1];
    puVar16 = *ppuVar15;
    puVar6 = ppuVar15[1];
    if (4 < (long)puVar6 - (long)puVar16) {
      uVar5 = ((ulong)((long)puVar6 - (long)puVar16) >> 2) - 2 >> 1;
      uVar3 = puVar6[-1];
      lVar4 = *(long *)*param_1[3];
      uVar12 = (ulong)puVar16[uVar5];
      fVar17 = *(float *)(lVar4 + (ulong)uVar3 * 4);
      puVar8 = puVar6 + -1;
      puVar11 = puVar16 + uVar5;
      if (*(float *)(lVar4 + uVar12 * 4) < fVar17) {
        do {
          puVar10 = puVar11;
          *puVar8 = (uint)uVar12;
          if (uVar5 == 0) break;
          if (-1 < (long)(uVar5 - 1)) {
            uVar5 = uVar5 - 1;
          }
          uVar5 = (long)uVar5 >> 1;
          uVar12 = (ulong)puVar16[uVar5];
          puVar8 = puVar10;
          puVar11 = puVar16 + uVar5;
        } while (*(float *)(lVar4 + uVar12 * 4) < fVar17);
        *puVar10 = uVar3;
      }
    }
  }
  if (puVar6 == ppuVar15[2]) {
    uVar12 = (long)puVar6 - (long)puVar16;
    uVar5 = ((long)uVar12 >> 2) + 1;
    if (uVar5 >> 0x3e != 0) {
LAB_008cf62c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar5 <= (ulong)((long)uVar12 >> 1)) {
      uVar5 = (long)uVar12 >> 1;
    }
    if (0x7ffffffffffffffb < uVar12) {
      uVar5 = 0x3fffffffffffffff;
    }
    if (uVar5 == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      if (uVar5 >> 0x3e != 0) goto LAB_008cf634;
      puVar6 = (uint *)operator_new(uVar5 << 2);
    }
    puVar6[(long)uVar12 >> 2] = param_3;
    if (0 < (long)uVar12) {
      memcpy(puVar6,puVar16,uVar12);
    }
    *ppuVar15 = puVar6;
    ppuVar15[1] = puVar6 + ((long)uVar12 >> 2) + 1;
    ppuVar15[2] = puVar6 + uVar5;
    if (puVar16 != (uint *)0x0) {
      operator_delete(puVar16);
    }
  }
  else {
    *puVar6 = param_3;
    ppuVar15[1] = puVar6 + 1;
  }
  ppvVar14 = (void **)param_1[1];
  __src = *ppvVar14;
  puVar16 = (uint *)ppvVar14[1];
  uVar5 = (long)puVar16 - (long)__src;
  if (4 < (long)uVar5) {
    uVar12 = (uVar5 >> 2) - 2 >> 1;
    puVar6 = (uint *)((long)__src + uVar12 * 4);
    uVar3 = puVar16[-1];
    lVar4 = *(long *)*param_1[3];
    uVar13 = (ulong)*puVar6;
    fVar17 = *(float *)(lVar4 + (ulong)uVar3 * 4);
    puVar8 = puVar16 + -1;
    if (*(float *)(lVar4 + uVar13 * 4) < fVar17) {
      do {
        puVar11 = puVar6;
        *puVar8 = (uint)uVar13;
        if (uVar12 == 0) break;
        if (-1 < (long)(uVar12 - 1)) {
          uVar12 = uVar12 - 1;
        }
        uVar12 = (long)uVar12 >> 1;
        puVar6 = (uint *)((long)__src + uVar12 * 4);
        uVar13 = (ulong)*puVar6;
        puVar8 = puVar11;
      } while (*(float *)(lVar4 + uVar13 * 4) < fVar17);
      *puVar11 = uVar3;
    }
  }
  if (puVar16 == (uint *)ppvVar14[2]) {
    uVar12 = ((long)uVar5 >> 2) + 1;
    if (uVar12 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar12 <= (ulong)((long)uVar5 >> 1)) {
      uVar12 = (long)uVar5 >> 1;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar12 = 0x3fffffffffffffff;
    }
    if (uVar12 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar12 >> 0x3e != 0) {
LAB_008cf634:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar12 << 2);
    }
    puVar16 = (uint *)((long)__dest + ((long)uVar5 >> 2) * 4);
    *puVar16 = uVar2;
    if (0 < (long)uVar5) {
      memcpy(__dest,__src,uVar5);
    }
    *ppvVar14 = __dest;
    ppvVar14[1] = puVar16 + 1;
    ppvVar14[2] = (void *)((long)__dest + uVar12 * 4);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar16 = uVar2;
    ppvVar14[1] = puVar16 + 1;
  }
  lVar4 = *param_1[1];
  lVar7 = param_1[1][1];
  uVar5 = lVar7 - lVar4;
  if (4 < (long)uVar5) {
    uVar5 = (uVar5 >> 2) - 2 >> 1;
    puVar16 = (uint *)(lVar4 + uVar5 * 4);
    puVar6 = (uint *)(lVar7 + -4);
    uVar2 = *puVar6;
    lVar7 = *(long *)*param_1[3];
    uVar12 = (ulong)*puVar16;
    fVar17 = *(float *)(lVar7 + (ulong)uVar2 * 4);
    if (*(float *)(lVar7 + uVar12 * 4) < fVar17) {
      do {
        puVar8 = puVar16;
        *puVar6 = (uint)uVar12;
        if (uVar5 == 0) break;
        if (-1 < (long)(uVar5 - 1)) {
          uVar5 = uVar5 - 1;
        }
        uVar5 = (long)uVar5 >> 1;
        puVar16 = (uint *)(lVar4 + uVar5 * 4);
        uVar12 = (ulong)*puVar16;
        puVar6 = puVar8;
      } while (*(float *)(lVar7 + uVar12 * 4) < fVar17);
      *puVar8 = uVar2;
    }
  }
  return;
}


