// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d49598
// Entry Point: 00d49598
// Size: 376 bytes
// Signature: undefined FUN_00d49598(void)


void FUN_00d49598(void **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < param_1[2]) {
    uVar9 = *param_2;
    puVar2 = puVar10 + 2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar9;
    param_1[1] = puVar2;
  }
  else {
    puVar11 = (undefined8 *)*param_1;
    lVar12 = (long)puVar10 - (long)puVar11 >> 4;
    uVar7 = lVar12 + 1;
    if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar1 = (long)param_1[2] - (long)puVar11;
    uVar6 = (long)uVar1 >> 3;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7fffffffffffffef < uVar1) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar7 << 4);
    }
    puVar4 = (undefined8 *)((long)pvVar5 + lVar12 * 0x10);
    uVar9 = *param_2;
    puVar2 = puVar4 + 2;
    puVar4[1] = param_2[1];
    *puVar4 = uVar9;
    puVar3 = puVar4;
    if (puVar10 != puVar11) {
      do {
        puVar8 = puVar10 + -2;
        uVar9 = puVar10[-2];
        puVar4 = puVar3 + -2;
        puVar3[-1] = puVar10[-1];
        puVar3[-2] = uVar9;
        puVar3 = puVar4;
        puVar10 = puVar8;
      } while (puVar8 != puVar11);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = puVar4;
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)pvVar5 + uVar7 * 0x10);
    if (puVar10 != (undefined8 *)0x0) {
      operator_delete(puVar10);
      puVar2 = (undefined8 *)param_1[1];
    }
  }
  pvVar5 = *param_1;
  if (0x10 < (long)puVar2 - (long)pvVar5) {
    dVar13 = (double)puVar2[-1];
    uVar7 = ((ulong)((long)puVar2 - (long)pvVar5) >> 4) - 2 >> 1;
    if (dVar13 < *(double *)((long)pvVar5 + uVar7 * 0x10 + 8)) {
      uVar9 = puVar2[-2];
      puVar10 = puVar2 + -2;
      do {
        puVar11 = (undefined8 *)((long)pvVar5 + uVar7 * 0x10);
        uVar14 = *puVar11;
        puVar10[1] = puVar11[1];
        *puVar10 = uVar14;
        if (uVar7 == 0) break;
        if (-1 < (long)(uVar7 - 1)) {
          uVar7 = uVar7 - 1;
        }
        uVar7 = (long)uVar7 >> 1;
        puVar10 = puVar11;
      } while (dVar13 < *(double *)((long)pvVar5 + uVar7 * 0x10 + 8));
      *puVar11 = uVar9;
      puVar11[1] = dVar13;
    }
  }
  return;
}


