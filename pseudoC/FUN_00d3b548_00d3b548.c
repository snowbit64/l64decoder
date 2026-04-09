// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3b548
// Entry Point: 00d3b548
// Size: 276 bytes
// Signature: undefined FUN_00d3b548(void)


undefined * FUN_00d3b548(undefined *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *local_c8;
  long local_c0;
  byte local_b8 [127];
  undefined uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_c8 = local_b8;
  local_c0 = param_2;
  (**(code **)(param_1 + 0x70))(param_1,&local_c0,param_3,&local_c8,&uStack_39);
  if (local_c0 == param_3) {
    *local_c8 = 0;
    pbVar5 = local_b8;
    pbVar6 = &DAT_004c8dfb;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar6;
      uVar7 = bVar1 - 0x20;
      if (0x19 < bVar1 - 0x61) {
        uVar7 = (uint)bVar1;
      }
      uVar8 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        uVar8 = (uint)bVar2;
      }
      iVar4 = (uint)((uVar7 & 0xff) == 0) << 1;
      if ((uVar7 & 0xff) != (uVar8 & 0xff)) {
        iVar4 = 1;
      }
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (iVar4 == 0);
    if ((iVar4 == 1) || (*(int *)(param_1 + 0x80) != 2)) {
      iVar4 = FUN_00d3ac48(local_b8);
      if (iVar4 == -1) goto LAB_00d3b598;
      param_1 = (&PTR_PTR_FUN_01011fa8)[iVar4];
    }
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return param_1;
    }
  }
  else {
LAB_00d3b598:
    if (*(long *)(lVar3 + 0x28) == local_38) {
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


