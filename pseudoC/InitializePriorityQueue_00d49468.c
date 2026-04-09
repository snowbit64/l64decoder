// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InitializePriorityQueue
// Entry Point: 00d49468
// Size: 304 bytes
// Signature: undefined InitializePriorityQueue(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::HACD::InitializePriorityQueue() */

undefined8 HACD::HACD::InitializePriorityQueue(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  HACD *in_x0;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar7 = *(void **)(in_x0 + 0x158);
  lVar9 = *(long *)(in_x0 + 0x118);
  uVar8 = lVar9 + 100;
  if ((ulong)(*(long *)(in_x0 + 0x168) - (long)pvVar7 >> 4) < uVar8) {
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar10 = *(void **)(in_x0 + 0x160);
    pvVar4 = operator_new(uVar8 * 0x10);
    lVar1 = (long)pvVar4 + ((long)pvVar10 - (long)pvVar7 & 0xfffffffffffffff0U);
    lVar5 = lVar1;
    lVar6 = lVar1;
    if ((long)pvVar10 - (long)pvVar7 != 0) {
      do {
        puVar3 = (undefined8 *)((long)pvVar10 + -8);
        uVar11 = *(undefined8 *)((long)pvVar10 + -0x10);
        lVar6 = lVar5 + -0x10;
        pvVar10 = (void *)((long)pvVar10 + -0x10);
        *(undefined8 *)(lVar5 + -8) = *puVar3;
        *(undefined8 *)(lVar5 + -0x10) = uVar11;
        lVar5 = lVar6;
      } while (pvVar10 != pvVar7);
    }
    *(long *)(in_x0 + 0x158) = lVar6;
    *(long *)(in_x0 + 0x160) = lVar1;
    *(void **)(in_x0 + 0x168) = (void *)((long)pvVar4 + uVar8 * 0x10);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      lVar9 = *(long *)(in_x0 + 0x118);
    }
  }
  if (lVar9 != 0) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      ComputeEdgeCost(in_x0,uVar8);
      local_50 = *(undefined8 *)(*(long *)(in_x0 + 0x120) + lVar9);
      local_58 = uVar8;
      FUN_00d49598(in_x0 + 0x158,&local_58);
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x30;
    } while (uVar8 < *(ulong *)(in_x0 + 0x118));
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


