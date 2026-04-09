// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_destroy_gamma_table
// Entry Point: 00daccdc
// Size: 428 bytes
// Signature: undefined png_destroy_gamma_table(void)


void png_destroy_gamma_table(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  png_free(param_1,*(undefined8 *)(param_1 + 0x2e0));
  puVar3 = *(undefined8 **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x2d8) != -0x17) {
      uVar2 = 1 << (ulong)(8U - *(int *)(param_1 + 0x2d8) & 0x1f);
      uVar1 = uVar2;
      if ((int)uVar2 < 2) {
        uVar1 = 1;
      }
      png_free(param_1,*puVar3);
      if (1 < (int)uVar2) {
        lVar4 = 8;
        do {
          png_free(param_1,*(undefined8 *)(*(long *)(param_1 + 0x2e8) + lVar4));
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 * 8 - lVar4 != 0);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x2e8);
    }
    png_free(param_1,puVar3);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
  }
  png_free(param_1,*(undefined8 *)(param_1 + 0x2f0));
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  png_free(param_1,*(undefined8 *)(param_1 + 0x2f8));
  puVar3 = *(undefined8 **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x2d8) != -0x17) {
      uVar2 = 1 << (ulong)(8U - *(int *)(param_1 + 0x2d8) & 0x1f);
      uVar1 = uVar2;
      if ((int)uVar2 < 2) {
        uVar1 = 1;
      }
      png_free(param_1,*puVar3);
      if (1 < (int)uVar2) {
        lVar4 = 8;
        do {
          png_free(param_1,*(undefined8 *)(*(long *)(param_1 + 0x300) + lVar4));
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 * 8 - lVar4 != 0);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x300);
    }
    png_free(param_1,puVar3);
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x308);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 0x2d8) != -0x17) {
      uVar2 = 1 << (ulong)(8U - *(int *)(param_1 + 0x2d8) & 0x1f);
      uVar1 = uVar2;
      if ((int)uVar2 < 2) {
        uVar1 = 1;
      }
      png_free(param_1,*puVar3);
      if (1 < (int)uVar2) {
        lVar4 = 8;
        do {
          png_free(param_1,*(undefined8 *)(*(long *)(param_1 + 0x308) + lVar4));
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 * 8 - lVar4 != 0);
      }
      puVar3 = *(undefined8 **)(param_1 + 0x308);
    }
    png_free(param_1,puVar3);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  return;
}


