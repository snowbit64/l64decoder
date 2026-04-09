// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d37a14
// Entry Point: 00d37a14
// Size: 500 bytes
// Signature: undefined FUN_00d37a14(void)


void FUN_00d37a14(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  code **ppcVar6;
  long local_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x220) = param_2;
  local_58 = param_2;
  iVar4 = (***(code ***)(param_1 + 0x120))();
  *(long *)(param_1 + 0x228) = local_58;
  lVar2 = param_2;
  lVar3 = local_58;
joined_r0x00d37a6c:
  local_58 = lVar3;
  if (iVar4 < 1) {
    if ((*(char *)(param_1 + 0x38c) == '\0') && (iVar4 != 0)) {
LAB_00d37af0:
      uVar5 = 0;
      *param_4 = param_2;
    }
    else if (iVar4 + 2U < 3) {
LAB_00d37b08:
      uVar5 = (ulong)(4 - iVar4);
    }
    else {
      ppcVar6 = *(code ***)(param_1 + 0x120);
LAB_00d37b1c:
      uVar5 = FUN_00d32af4(param_1,ppcVar6,param_2,param_3);
    }
  }
  else if (iVar4 == 0xe) {
    if ((lVar3 != param_3) || (*(char *)(param_1 + 0x38c) != '\0')) goto LAB_00d37a80;
    uVar5 = 0;
    *param_4 = param_3;
  }
  else if (iVar4 == 0x1d) {
    uVar5 = 2;
    *param_4 = lVar3;
  }
  else {
    if (iVar4 != 0xc) goto LAB_00d37a80;
    uVar5 = FUN_00d31770(param_1,0,lVar2,lVar3);
    param_2 = local_58;
    if ((int)uVar5 == 0) {
      if (*(int *)(param_1 + 0x388) != 2) {
        *param_4 = local_58;
        ppcVar6 = *(code ***)(param_1 + 0x120);
        *(code **)(param_1 + 0x210) = FUN_00d37d20;
        local_50 = local_58;
        iVar4 = (**ppcVar6)(ppcVar6,local_58,param_3,&local_50);
        while (0 < iVar4) {
          iVar4 = (**ppcVar6)(ppcVar6,local_50,param_3,&local_50);
        }
        if ((*(char *)(param_1 + 0x38c) == '\0') && (iVar4 != 0)) goto LAB_00d37af0;
        if (iVar4 + 2U < 3) goto LAB_00d37b08;
        goto LAB_00d37b1c;
      }
      uVar5 = 0x23;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
LAB_00d37a80:
  *(long *)(param_1 + 0x220) = lVar3;
  iVar4 = (***(code ***)(param_1 + 0x120))(*(code ***)(param_1 + 0x120),lVar3,param_3,&local_58);
  *(long *)(param_1 + 0x228) = local_58;
  lVar2 = lVar3;
  lVar3 = local_58;
  goto joined_r0x00d37a6c;
}


