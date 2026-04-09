// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37458
// Entry Point: 00d37458
// Size: 544 bytes
// Signature: undefined FUN_00d37458(void)


void FUN_00d37458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(param_1 + 0x238);
  if (lVar8 == 0) {
    uVar6 = 0x17;
    if (*(long *)(lVar3 + 0x28) == local_68) {
      return;
    }
    goto LAB_00d37674;
  }
  lVar7 = *(long *)(lVar8 + 0x18);
  lVar1 = *(long *)(lVar7 + 8) + (long)*(int *)(lVar7 + 0x18);
  lVar2 = *(long *)(lVar7 + 8) + (long)*(int *)(lVar7 + 0x10);
  local_70 = lVar1;
  if (*(char *)(lVar7 + 0x39) == '\0') {
    uVar6 = FUN_00d33dfc(param_1,*(undefined4 *)(lVar8 + 0x20),*(undefined8 *)(param_1 + 0x1b8),
                         lVar1,lVar2,&local_70,0);
    iVar5 = (int)uVar6;
  }
  else {
    uVar4 = (***(code ***)(param_1 + 0x1b8))(*(code ***)(param_1 + 0x1b8),lVar1,lVar2,&local_70);
    uVar6 = FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x1b8),lVar1,lVar2,uVar4,local_70,
                         &local_70,0,1);
    iVar5 = (int)uVar6;
  }
  if (iVar5 == 0) {
    if ((lVar2 != local_70) && (*(int *)(param_1 + 0x388) == 3)) {
      uVar6 = 0;
      *(int *)(lVar7 + 0x14) = (int)local_70 - *(int *)(lVar7 + 8);
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d37674;
    }
    *(undefined *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(lVar8 + 0x10);
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_1 + 0x240);
    *(long *)(param_1 + 0x240) = lVar8;
    if (*(char *)(lVar7 + 0x39) == '\0') {
      *(code **)(param_1 + 0x210) = FUN_00d32358;
      uVar6 = FUN_00d33dfc(param_1,*(long *)(param_1 + 0x380) != 0,*(undefined8 *)(param_1 + 0x120),
                           param_2,param_3,param_4,*(char *)(param_1 + 0x38c) == '\0');
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto LAB_00d37674;
    }
    *(code **)(param_1 + 0x210) = FUN_00d2f3c0;
    uVar4 = (***(code ***)(param_1 + 0x120))(*(code ***)(param_1 + 0x120),param_2,param_3,&local_70)
    ;
    uVar6 = FUN_00d2f468(param_1,*(undefined8 *)(param_1 + 0x120),param_2,param_3,uVar4,local_70,
                         param_4,*(char *)(param_1 + 0x38c) == '\0',1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_00d37674:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


