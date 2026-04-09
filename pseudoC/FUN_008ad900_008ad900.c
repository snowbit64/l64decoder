// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_008ad900
// Entry Point: 008ad900
// Size: 544 bytes
// Signature: undefined FUN_008ad900(void)


void FUN_008ad900(void **param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar11 = (undefined8 *)param_1[2];
  puVar12 = puVar11;
  if (puVar11 == (undefined8 *)param_1[3]) {
    puVar10 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 < puVar10 || (long)puVar12 - (long)puVar10 == 0) {
      uVar7 = (long)puVar11 - (long)puVar10 >> 5;
      if ((long)puVar11 - (long)puVar10 == 0) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar7 * 0x40);
      puVar1 = (undefined8 *)((long)pvVar3 + (uVar7 & 0xffffffffffffffc) * 0x10);
      puVar9 = puVar1;
      if ((long)puVar11 - (long)puVar12 != 0) {
        puVar9 = (undefined8 *)((long)puVar1 + ((long)puVar11 - (long)puVar12));
        puVar11 = puVar1;
        do {
          uVar6 = *puVar12;
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar12 + 1);
          *puVar11 = uVar6;
          uVar6 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar6;
          puVar11[4] = puVar12[4];
          puVar10 = puVar12 + 7;
          puVar12[2] = 0;
          puVar12[3] = 0;
          uVar8 = puVar12[6];
          uVar6 = puVar12[5];
          puVar12[4] = 0;
          puVar12 = puVar12 + 8;
          puVar11[7] = *puVar10;
          puVar11[6] = uVar8;
          puVar11[5] = uVar6;
          puVar11 = puVar11 + 8;
        } while (puVar11 != puVar9);
        puVar10 = (undefined8 *)*param_1;
        puVar12 = (undefined8 *)param_1[1];
        puVar11 = (undefined8 *)param_1[2];
      }
      *param_1 = pvVar3;
      param_1[1] = puVar1;
      param_1[2] = puVar9;
      param_1[3] = (void *)((long)pvVar3 + uVar7 * 0x40);
      while (puVar1 = puVar11, puVar1 != puVar12) {
        pvVar3 = (void *)puVar1[-6];
        puVar11 = puVar1 + -8;
        if (pvVar3 != (void *)0x0) {
          puVar1[-5] = pvVar3;
          operator_delete(pvVar3);
        }
      }
      if (puVar10 != (undefined8 *)0x0) {
        operator_delete(puVar10);
      }
      puVar12 = (undefined8 *)param_1[2];
    }
    else {
      lVar4 = (long)puVar12 - (long)puVar10 >> 6;
      lVar5 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar5 = lVar4 + 1;
      }
      lVar5 = lVar5 >> 1;
      if (puVar12 == puVar11) {
        puVar12 = puVar12 + lVar5 * -8;
      }
      else {
        do {
          puVar10 = puVar12 + lVar5 * -8;
          uVar2 = *(undefined4 *)(puVar12 + 1);
          pvVar3 = (void *)puVar10[2];
          *puVar10 = *puVar12;
          *(undefined4 *)(puVar10 + 1) = uVar2;
          if (pvVar3 != (void *)0x0) {
            puVar10[3] = pvVar3;
            operator_delete(pvVar3);
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
          }
          uVar6 = puVar12[3];
          uVar8 = puVar12[4];
          uVar14 = puVar12[6];
          uVar13 = puVar12[5];
          puVar10[2] = puVar12[2];
          puVar10[3] = uVar6;
          uVar6 = puVar12[7];
          puVar10[4] = uVar8;
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[2] = 0;
          puVar12 = puVar12 + 8;
          puVar10[6] = uVar14;
          puVar10[5] = uVar13;
          puVar10[7] = uVar6;
        } while (puVar12 != puVar11);
        puVar11 = (undefined8 *)param_1[1];
        puVar12 = puVar12 + lVar5 * -8;
      }
      param_1[1] = puVar11 + lVar5 * -8;
      param_1[2] = puVar12;
    }
  }
  uVar6 = *param_2;
  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar12 = uVar6;
  std::__ndk1::
  vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>::
  vector((vector<BiquadResonantFilter::Settings,std::__ndk1::allocator<BiquadResonantFilter::Settings>>
          *)(puVar12 + 2),(vector *)(param_2 + 2));
  uVar8 = param_2[6];
  uVar6 = param_2[5];
  puVar12[7] = param_2[7];
  puVar12[6] = uVar8;
  puVar12[5] = uVar6;
  param_1[2] = (void *)((long)param_1[2] + 0x40);
  return;
}


