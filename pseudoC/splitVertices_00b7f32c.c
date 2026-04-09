// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: splitVertices
// Entry Point: 00b7f32c
// Size: 368 bytes
// Signature: undefined splitVertices(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IndexedTriangleSetBuilder::splitVertices() */

void IndexedTriangleSetBuilder::splitVertices(void)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  void **in_x0;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  void *local_70;
  void *local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pvVar4 = in_x0[3];
  local_70 = (void *)0x0;
  local_68 = (void *)0x0;
  local_60 = (void *)0x0;
  uVar9 = (long)in_x0[4] - (long)pvVar4;
  iVar8 = (int)(uVar9 >> 4);
  uVar3 = iVar8 * 3;
  if (uVar3 == 0) {
    local_60 = (void *)0x0;
    local_70 = (void *)0x0;
  }
  else {
    uVar6 = (ulong)uVar3 * 0x70;
    local_70 = operator_new(uVar6);
    local_60 = (void *)((long)local_70 + uVar6);
  }
  local_68 = local_70;
  if (iVar8 != 0) {
    lVar7 = 0;
    iVar8 = 0;
    while( true ) {
                    /* try { // try from 00b7f3d4 to 00b7f41b has its CatchHandler @ 00b7f49c */
      FUN_00b7e764(&local_70,(void *)((long)*in_x0 + (ulong)*(uint *)((long)pvVar4 + lVar7) * 0x70))
      ;
      piVar1 = (int *)((long)pvVar4 + lVar7);
      *piVar1 = iVar8;
      FUN_00b7e764(&local_70,(void *)((long)*in_x0 + (ulong)(uint)piVar1[1] * 0x70));
      piVar1[1] = iVar8 + 1;
      FUN_00b7e764(&local_70,(void *)((long)*in_x0 + (ulong)(uint)piVar1[2] * 0x70));
      piVar1[2] = iVar8 + 2;
      if ((uVar9 >> 4 & 0xffffffff) * 0x10 + -0x10 == lVar7) break;
      pvVar4 = in_x0[3];
      iVar8 = iVar8 + 3;
      lVar7 = lVar7 + 0x10;
    }
  }
  pvVar4 = *in_x0;
  *in_x0 = local_70;
  in_x0[1] = local_68;
  pvVar5 = in_x0[2];
  in_x0[2] = local_60;
  local_70 = pvVar4;
  local_60 = pvVar5;
  if (pvVar4 != (void *)0x0) {
    local_68 = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


