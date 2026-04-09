// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3334c
// Entry Point: 00d3334c
// Size: 420 bytes
// Signature: undefined FUN_00d3334c(void)


void FUN_00d3334c(long param_1,long param_2,undefined param_3)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  code **ppcVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  puVar7 = *(undefined8 **)(param_1 + 0x240);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(param_1 + 0x18))(0x28);
    if (puVar7 == (undefined8 *)0x0) {
      uVar4 = 1;
      if (*(long *)(lVar6 + 0x28) == local_48) {
        return;
      }
      goto LAB_00d334ec;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x240) = puVar7[2];
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined *)(param_2 + 0x38) = 1;
  puVar7[2] = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 **)(param_1 + 0x238) = puVar7;
  puVar7[3] = param_2;
  uVar2 = *(undefined4 *)(param_1 + 0x24c);
  *(undefined *)((long)puVar7 + 0x24) = param_3;
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined4 *)(puVar7 + 4) = uVar2;
  lVar8 = *(long *)(param_2 + 8);
  ppcVar5 = *(code ***)(param_1 + 0x1b8);
  lVar1 = lVar8 + *(int *)(param_2 + 0x10);
  local_50 = lVar8;
  if (*(char *)(param_2 + 0x39) == '\0') {
    uVar4 = FUN_00d33dfc(param_1,uVar2,ppcVar5,lVar8,lVar1,&local_50,0);
    iVar3 = (int)uVar4;
  }
  else {
    uVar2 = (**ppcVar5)(ppcVar5,lVar8,lVar1,&local_50);
    uVar4 = FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x1b8),lVar8,lVar1,uVar2,local_50,
                         &local_50,0,0);
    iVar3 = (int)uVar4;
  }
  if (iVar3 == 0) {
    if ((lVar1 == local_50) || (*(int *)(param_1 + 0x388) != 3)) {
      *(undefined *)(param_2 + 0x38) = 0;
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0x238) = puVar7[2];
      puVar7[2] = *(undefined8 *)(param_1 + 0x240);
      *(undefined8 **)(param_1 + 0x240) = puVar7;
      goto LAB_00d334b0;
    }
    uVar4 = 0;
    *(int *)(param_2 + 0x14) = (int)local_50 - (int)lVar8;
    *(code **)(param_1 + 0x210) = FUN_00d37458;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  else {
LAB_00d334b0:
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 == local_48) {
    return;
  }
LAB_00d334ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


