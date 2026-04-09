// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0073e048
// Entry Point: 0073e048
// Size: 916 bytes
// Signature: undefined FUN_0073e048(void)


void FUN_0073e048(void **param_1,long param_2,undefined4 *param_3,undefined2 *param_4,
                 undefined4 *param_5,char *param_6)

{
  undefined8 *__src;
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  size_t __n;
  undefined8 *puVar10;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *__dest;
  size_t __n_00;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 *puVar11;
  
  pvVar7 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  uVar18 = param_2 - (long)pvVar7;
  uVar16 = (long)uVar18 >> 3;
  __src = (undefined8 *)((long)pvVar7 + (uVar18 & 0xfffffffffffffff8));
  if (param_1[2] <= puVar2) {
    uVar9 = ((long)puVar2 - (long)pvVar7 >> 3) + 1;
    if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar14 = (long)param_1[2] - (long)pvVar7;
    uVar15 = (long)uVar14 >> 2;
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (uVar9 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar7 = operator_new(uVar9 << 3);
    }
    puVar17 = (undefined4 *)((long)pvVar7 + uVar16 * 8);
    pvVar19 = (void *)((long)pvVar7 + uVar9 * 8);
    if (uVar16 == uVar9) {
      if ((long)uVar18 < 1) {
        uVar16 = (long)uVar18 >> 2;
        if (uVar18 == 0) {
          uVar16 = 1;
        }
        if (uVar16 >> 0x3d != 0) {
                    /* try { // try from 0073e3d0 to 0073e3db has its CatchHandler @ 0073e3dc */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 0073e208 to 0073e20b has its CatchHandler @ 0073e3dc */
        pvVar8 = operator_new(uVar16 << 3);
        pvVar19 = (void *)((long)pvVar8 + uVar16 * 8);
        puVar17 = (undefined4 *)((long)pvVar8 + (uVar16 & 0x7ffffffffffffffc) * 2);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      else {
        uVar18 = uVar16 + 2;
        if (-1 < (long)(uVar16 + 1)) {
          uVar18 = uVar16 + 1;
        }
        puVar17 = puVar17 + -(uVar18 & 0x3ffffffffffffffe);
      }
    }
    bVar5 = *(byte *)param_5;
    __dest = puVar17 + 2;
    cVar4 = *param_6;
    uVar6 = *param_4;
    *puVar17 = *param_3;
    *(undefined2 *)(puVar17 + 1) = uVar6;
    *(byte *)((long)puVar17 + 6) = bVar5 & 3 | cVar4 << 2 | *(byte *)((long)puVar17 + 6) & 0xf8;
    __n = (long)__src - (long)*param_1;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar17 - __n),*param_1,__n);
    }
    __n_00 = (long)param_1[1] - (long)__src;
    if (0 < (long)__n_00) {
      memcpy(__dest,__src,__n_00);
      __dest = (undefined4 *)((long)__dest + __n_00);
    }
    pvVar7 = *param_1;
    *param_1 = (void *)((long)puVar17 - __n);
    param_1[1] = __dest;
    param_1[2] = pvVar19;
    if (pvVar7 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar7);
    return;
  }
  uVar23 = *param_3;
  uVar6 = *param_4;
  uVar3 = *param_5;
  cVar4 = *param_6;
  if (__src == puVar2) {
    *(undefined4 *)__src = uVar23;
    *(undefined2 *)((long)pvVar7 + uVar16 * 8 + 4) = uVar6;
    *(byte *)((long)pvVar7 + uVar16 * 8 + 6) =
         (byte)uVar3 & 3 | (cVar4 != '\0') << 2 | *(byte *)((long)pvVar7 + uVar16 * 8 + 6) & 0xf8;
    param_1[1] = __src + 1;
    return;
  }
  uVar9 = (long)puVar2 + (-8 - (long)__src);
  uVar14 = uVar9 & 0xfffffffffffffff8;
  puVar10 = (undefined8 *)((long)__src + uVar14);
  puVar13 = puVar2;
  if (puVar10 < puVar2) {
    uVar18 = uVar18 & 0xfffffffffffffff8;
    puVar13 = (undefined8 *)((long)pvVar7 + uVar14 + uVar18 + 8);
    puVar12 = puVar2;
    if (puVar2 <= puVar13) {
      puVar12 = puVar13;
    }
    uVar14 = (long)puVar12 + (~(ulong)pvVar7 - (uVar18 + uVar14));
    puVar12 = puVar2;
    if (0x17 < uVar14) {
      puVar13 = (undefined8 *)((long)pvVar7 + (uVar9 & 0xfffffffffffffff8) + uVar18 + 8);
      puVar11 = puVar2;
      if (puVar2 <= puVar13) {
        puVar11 = puVar13;
      }
      lVar1 = ((long)uVar9 >> 3) + uVar16;
      uVar18 = (long)puVar11 + (~(ulong)pvVar7 - (uVar18 + (uVar9 & 0xfffffffffffffff8)));
      if (((undefined8 *)((long)pvVar7 + (lVar1 + (uVar18 >> 3)) * 8 + 8) <= puVar2) ||
         ((undefined8 *)((long)puVar2 + (uVar18 & 0xfffffffffffffff8) + 8) <= puVar10)) {
        uVar18 = (uVar14 >> 3) + 1;
        puVar13 = puVar2 + 2;
        uVar15 = uVar18 & 0x3ffffffffffffffc;
        puVar12 = (undefined8 *)((long)pvVar7 + lVar1 * 8 + 0x10);
        puVar10 = puVar10 + uVar15;
        uVar14 = uVar15;
        do {
          puVar11 = puVar12 + -1;
          uVar20 = puVar12[-2];
          uVar22 = puVar12[1];
          uVar21 = *puVar12;
          puVar12 = puVar12 + 4;
          uVar14 = uVar14 - 4;
          puVar13[-1] = *puVar11;
          puVar13[-2] = uVar20;
          puVar13[1] = uVar22;
          *puVar13 = uVar21;
          puVar13 = puVar13 + 4;
        } while (uVar14 != 0);
        puVar13 = puVar2 + uVar15;
        puVar12 = puVar2 + uVar15;
        if (uVar18 == uVar15) goto LAB_0073e374;
      }
    }
    do {
      puVar11 = puVar10 + 1;
      *puVar12 = *puVar10;
      puVar10 = puVar11;
      puVar13 = puVar12 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar11 < puVar2);
  }
LAB_0073e374:
  param_1[1] = puVar13;
  if (uVar9 != 0) {
    memmove(puVar2 + -((long)uVar9 >> 3),__src,uVar9);
  }
  *(undefined4 *)__src = uVar23;
  *(undefined2 *)((long)pvVar7 + uVar16 * 8 + 4) = uVar6;
  *(byte *)((long)pvVar7 + uVar16 * 8 + 6) = (byte)uVar3 & 3 | (cVar4 != '\0') << 2;
  return;
}


