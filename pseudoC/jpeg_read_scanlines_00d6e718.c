// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: jpeg_read_scanlines
// Entry Point: 00d6e718
// Size: 252 bytes
// Signature: undefined jpeg_read_scanlines(void)


void jpeg_read_scanlines(long *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  code **ppcVar4;
  long lVar5;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)((long)param_1 + 0x24) != 0xcd) {
    lVar5 = *param_1;
    *(int *)(lVar5 + 0x2c) = *(int *)((long)param_1 + 0x24);
    ppcVar4 = (code **)*param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x15;
    (**ppcVar4)(param_1);
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  if (*(uint *)(param_1 + 0x13) < uVar1) {
    ppcVar4 = (code **)param_1[2];
    if (ppcVar4 != (code **)0x0) {
      ppcVar4[1] = (code *)(ulong)*(uint *)(param_1 + 0x13);
      ppcVar4[2] = (code *)(ulong)uVar1;
      (**ppcVar4)(param_1);
    }
    local_3c = 0;
    (**(code **)(param_1[0x45] + 8))(param_1,param_2,&local_3c,param_3);
    *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + local_3c;
    iVar3 = local_3c;
  }
  else {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x7e;
    (**(code **)(lVar5 + 8))(param_1,0xffffffff);
    iVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


