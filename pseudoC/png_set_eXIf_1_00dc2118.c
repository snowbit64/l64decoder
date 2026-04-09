// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_eXIf_1
// Entry Point: 00dc2118
// Size: 216 bytes
// Signature: undefined png_set_eXIf_1(void)


void png_set_eXIf_1(long param_1,long param_2,int param_3,undefined *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(long *)(param_2 + 0xf0) != 0) {
      png_free(param_1);
      *(undefined8 *)(param_2 + 0xf0) = 0;
    }
    *(int *)(param_2 + 0xec) = param_3;
    puVar2 = (undefined *)png_malloc_warn(param_1,(long)param_3);
    *(undefined **)(param_2 + 0xf0) = puVar2;
    if (puVar2 == (undefined *)0x0) {
      png_warning(param_1,"Insufficient memory for eXIf chunk data");
      return;
    }
    *(uint *)(param_2 + 300) = *(uint *)(param_2 + 300) | 0x8000;
    if ((0 < *(int *)(param_2 + 0xec)) &&
       (iVar1 = *(int *)(param_2 + 0xec), *puVar2 = *param_4, 1 < iVar1)) {
      lVar3 = 1;
      do {
        *(undefined *)(*(long *)(param_2 + 0xf0) + lVar3) = param_4[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_2 + 0xec));
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10000;
  }
  return;
}


