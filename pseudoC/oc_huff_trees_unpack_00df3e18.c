// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_huff_trees_unpack
// Entry Point: 00df3e18
// Size: 356 bytes
// Signature: undefined oc_huff_trees_unpack(void)


void oc_huff_trees_unpack(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t __size;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined *local_3058;
  undefined auStack_3050 [2];
  undefined local_304e;
  long local_68;
  
  lVar1 = tpidr_el0;
  lVar7 = 0;
  local_68 = *(long *)(lVar1 + 0x28);
  do {
    uVar4 = FUN_00df3f7c(param_1,auStack_3050,0x1ff);
    if ((int)uVar4 < 0) goto LAB_00df3f48;
    __size = FUN_00df422c(auStack_3050,0);
    puVar5 = (undefined *)calloc(1,__size);
    local_3058 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      uVar4 = 0xffffffff;
      goto LAB_00df3f48;
    }
    uVar2 = FUN_00df4704(auStack_3050);
    iVar8 = 1 << (ulong)(uVar2 & 0x1f);
    do {
      uVar6 = uVar2;
      iVar3 = FUN_00df4758(auStack_3050,uVar6 + 1);
      if (iVar3 <= iVar8) break;
      iVar8 = iVar3;
      uVar2 = uVar6 + 1;
    } while (1 << (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU) & 0x1f) <= iVar3);
    if ((int)uVar6 < 2) {
      uVar4 = FUN_00df4490(auStack_3050,&local_3058);
      *(undefined8 *)(param_2 + lVar7 * 8) = uVar4;
    }
    else {
      local_3058 = puVar5 + (long)(1 << (ulong)(uVar6 & 0x1f)) * 8 + 8;
      *puVar5 = (char)uVar6;
      puVar5[2] = local_304e;
      FUN_00df47c8(puVar5 + 8,auStack_3050,uVar6,uVar6,&local_3058);
      *(undefined **)(param_2 + lVar7 * 8) = puVar5;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x50);
  uVar4 = 0;
LAB_00df3f48:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


