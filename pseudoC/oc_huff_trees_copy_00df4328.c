// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_huff_trees_copy
// Entry Point: 00df4328
// Size: 208 bytes
// Signature: undefined oc_huff_trees_copy(void)


void oc_huff_trees_copy(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  size_t __size;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0xffffffff;
  puVar5 = param_1;
  do {
    uVar3 = *param_2;
    __size = FUN_00df43f8(uVar3);
    local_50 = calloc(1,__size);
    if (local_50 == (void *)0x0) {
      if (uVar4 != 0xffffffff) {
        lVar2 = (ulong)uVar4 << 3;
        do {
          free(*(void **)((long)param_1 + lVar2));
          lVar2 = lVar2 + -8;
        } while (lVar2 != -8);
      }
      uVar3 = 0xffffffff;
      goto LAB_00df43cc;
    }
    uVar3 = FUN_00df4490(uVar3,&local_50);
    uVar4 = uVar4 + 1;
    param_2 = param_2 + 1;
    *puVar5 = uVar3;
    puVar5 = puVar5 + 1;
  } while (uVar4 < 0x4f);
  uVar3 = 0;
LAB_00df43cc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


