// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61bd8
// Entry Point: 00d61bd8
// Size: 344 bytes
// Signature: undefined FUN_00d61bd8(void)


void FUN_00d61bd8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)(param_1 + 0x220);
  if (*(char *)(param_1 + 0x14c) != '\0') {
    FUN_00d647a8(lVar4);
  }
  local_70 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    lVar5 = 0x2d;
    do {
      lVar6 = *(long *)(param_1 + lVar5 * 8);
      if (((*(int *)(param_1 + 0x1bc) == 0) && (*(int *)(param_1 + 0x1c4) == 0)) &&
         (lVar7 = (long)*(int *)(lVar6 + 0x14), *(char *)((long)&local_70 + lVar7 + 4) == '\0')) {
        plVar8 = (long *)(param_1 + lVar7 * 8 + 0xa0);
        lVar3 = *plVar8;
        if (lVar3 == 0) {
          lVar3 = jpeg_alloc_huff_table(param_1);
          *plVar8 = lVar3;
        }
        FUN_00d6488c(param_1,lVar3,*(undefined8 *)(lVar4 + lVar7 * 8 + 0x80));
        *(undefined *)((long)&local_70 + lVar7 + 4) = 1;
        iVar1 = *(int *)(param_1 + 0x1c0);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x1c0);
      }
      if ((iVar1 != 0) &&
         (lVar6 = (long)*(int *)(lVar6 + 0x18), *(char *)((long)&local_70 + lVar6) == '\0')) {
        plVar8 = (long *)(param_1 + lVar6 * 8 + 0xc0);
        lVar7 = *plVar8;
        if (lVar7 == 0) {
          lVar7 = jpeg_alloc_huff_table(param_1);
          *plVar8 = lVar7;
        }
        FUN_00d6488c(param_1,lVar7,*(undefined8 *)(lVar4 + lVar6 * 8 + 0xa0));
        *(undefined *)((long)&local_70 + lVar6) = 1;
      }
      lVar6 = lVar5 + -0x2c;
      lVar5 = lVar5 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x164));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


