// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spvReflectDestroyShaderModule
// Entry Point: 00adc04c
// Size: 632 bytes
// Signature: undefined spvReflectDestroyShaderModule(void)


void spvReflectDestroyShaderModule(long param_1)

{
  void **ppvVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  byte *__ptr;
  ulong uVar5;
  void **ppvVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x498) != 0) {
    free(*(void **)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar5 = 0;
      ppvVar6 = (void **)(param_1 + 0x60);
      do {
        free(*ppvVar6);
        uVar5 = uVar5 + 1;
        ppvVar6 = ppvVar6 + 2;
      } while (uVar5 < *(uint *)(param_1 + 0x50));
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar5 = 0;
      lVar7 = 0x40;
      do {
        FUN_00adc2c4(*(long *)(param_1 + 0x48) + lVar7);
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x248;
      } while (uVar5 < *(uint *)(param_1 + 0x40));
    }
    free(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar5 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x18);
        lVar8 = lVar7 + uVar5 * 0x88;
        puVar9 = (uint *)(lVar8 + 0x30);
        ppvVar6 = (void **)(lVar8 + 0x38);
        if (*puVar9 != 0) {
          lVar8 = 0;
          uVar10 = 0;
          do {
            FUN_00adc340((long)*ppvVar6 + lVar8);
            uVar10 = uVar10 + 1;
            lVar8 = lVar8 + 0x170;
          } while (uVar10 < *puVar9);
        }
        lVar8 = lVar7 + uVar5 * 0x88;
        puVar9 = (uint *)(lVar8 + 0x40);
        ppvVar1 = (void **)(lVar8 + 0x48);
        if (*puVar9 == 0) {
          pvVar4 = *ppvVar1;
        }
        else {
          uVar10 = 0;
          pvVar4 = *ppvVar1;
          lVar8 = 8;
          do {
            free(*(void **)((long)pvVar4 + lVar8));
            pvVar4 = *ppvVar1;
            uVar10 = uVar10 + 1;
            uVar3 = *puVar9;
            *(undefined8 *)((long)pvVar4 + lVar8) = 0;
            lVar8 = lVar8 + 0x10;
          } while (uVar10 < uVar3);
        }
        free(pvVar4);
        lVar7 = lVar7 + uVar5 * 0x88;
        *ppvVar1 = (void *)0x0;
        free(*(void **)(lVar7 + 0x18));
        *(undefined8 *)(lVar7 + 0x18) = 0;
        free(*(void **)(lVar7 + 0x28));
        pvVar4 = *ppvVar6;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        free(pvVar4);
        pvVar4 = *(void **)(lVar7 + 0x58);
        *ppvVar6 = (void *)0x0;
        free(pvVar4);
        *(undefined8 *)(lVar7 + 0x58) = 0;
        free(*(void **)(lVar7 + 0x68));
        uVar3 = *(uint *)(param_1 + 0x14);
        uVar5 = uVar5 + 1;
        *(undefined8 *)(lVar7 + 0x68) = 0;
      } while (uVar5 < uVar3);
    }
    free(*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x488) != 0) {
      lVar7 = 0;
      uVar5 = 0;
      do {
        FUN_00adc2c4(*(long *)(param_1 + 0x490) + lVar7);
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x160;
      } while (uVar5 < *(uint *)(param_1 + 0x488));
    }
    free(*(void **)(param_1 + 0x490));
    lVar7 = *(long *)(param_1 + 0x498);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (*(long *)(lVar7 + 0x20) != 0) {
      lVar8 = 0;
      uVar5 = 0;
      do {
        lVar2 = *(long *)(lVar7 + 0x28) + lVar8;
        pvVar4 = *(void **)(lVar2 + 0x160);
        if (pvVar4 != (void *)0x0) {
          FUN_00adc3bc(lVar2);
          pvVar4 = *(void **)(lVar2 + 0x160);
        }
        free(pvVar4);
        lVar7 = *(long *)(param_1 + 0x498);
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x168;
        *(undefined8 *)(lVar2 + 0x160) = 0;
      } while (uVar5 < *(ulong *)(lVar7 + 0x20));
    }
    free(*(void **)(lVar7 + 0x28));
    __ptr = *(byte **)(param_1 + 0x498);
    *(undefined8 *)(__ptr + 0x28) = 0;
    if ((*__ptr & 1) == 0) {
      free(*(void **)(__ptr + 0x10));
      __ptr = *(byte **)(param_1 + 0x498);
      *(undefined8 *)(__ptr + 0x10) = 0;
    }
    free(__ptr);
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  return;
}


