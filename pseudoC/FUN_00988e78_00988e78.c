// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00988e78
// Entry Point: 00988e78
// Size: 476 bytes
// Signature: undefined FUN_00988e78(void)


void FUN_00988e78(void **param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar10 = (undefined8 *)param_1[2];
  puVar8 = puVar10;
  if (puVar10 == (undefined8 *)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if (puVar11 < puVar2 || (long)puVar11 - (long)puVar2 == 0) {
      uVar5 = ((long)puVar10 - (long)puVar2 >> 2) * 0x5d1745d1745d1746;
      if ((long)puVar10 - (long)puVar2 == 0) {
        uVar5 = 1;
      }
      if (0x5d1745d1745d174 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 * 0x2c);
      puVar6 = (undefined8 *)((long)pvVar3 + (uVar5 >> 2) * 0x2c);
      puVar8 = puVar6;
      if ((long)puVar10 - (long)puVar11 != 0) {
        puVar8 = (undefined8 *)((long)puVar6 + ((long)puVar10 - (long)puVar11));
        puVar10 = puVar6;
        do {
          uVar9 = *puVar11;
          puVar10[1] = puVar11[1];
          *puVar10 = uVar9;
          uVar9 = puVar11[2];
          puVar10[3] = puVar11[3];
          puVar10[2] = uVar9;
          puVar1 = puVar11 + 5;
          uVar9 = puVar11[4];
          puVar11 = (undefined8 *)((long)puVar11 + 0x2c);
          *(undefined4 *)(puVar10 + 5) = *(undefined4 *)puVar1;
          puVar10[4] = uVar9;
          puVar10 = (undefined8 *)((long)puVar10 + 0x2c);
        } while (puVar10 != puVar8);
      }
      *param_1 = pvVar3;
      param_1[1] = puVar6;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar3 + uVar5 * 0x2c);
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = ((long)puVar11 - (long)puVar2 >> 2) * 0x2e8ba2e8ba2e8ba3;
      lVar7 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar7 = lVar4 + 1;
      }
      lVar7 = lVar7 >> 1;
      if (puVar11 == puVar10) {
        puVar8 = (undefined8 *)((long)puVar11 + lVar7 * -0x2c);
      }
      else {
        do {
          puVar2 = (undefined8 *)((long)puVar11 + lVar7 * -0x2c);
          uVar9 = *puVar11;
          puVar2[1] = puVar11[1];
          *puVar2 = uVar9;
          uVar9 = puVar11[2];
          puVar2[3] = puVar11[3];
          puVar2[2] = uVar9;
          puVar8 = puVar11 + 5;
          uVar9 = puVar11[4];
          puVar11 = (undefined8 *)((long)puVar11 + 0x2c);
          *(undefined4 *)(puVar2 + 5) = *(undefined4 *)puVar8;
          puVar2[4] = uVar9;
        } while (puVar11 != puVar10);
        puVar10 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)((long)puVar11 + lVar7 * -0x2c);
      }
      param_1[1] = (void *)((long)puVar10 + lVar7 * -0x2c);
      param_1[2] = puVar8;
    }
  }
  uVar9 = *param_2;
  puVar8[1] = param_2[1];
  *puVar8 = uVar9;
  uVar9 = param_2[2];
  puVar8[3] = param_2[3];
  puVar8[2] = uVar9;
  uVar9 = param_2[4];
  *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(param_2 + 5);
  puVar8[4] = uVar9;
  param_1[2] = (void *)((long)param_1[2] + 0x2c);
  return;
}


