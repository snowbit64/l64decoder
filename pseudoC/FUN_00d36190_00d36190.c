// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d36190
// Entry Point: 00d36190
// Size: 752 bytes
// Signature: undefined FUN_00d36190(void)


void FUN_00d36190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  *(code **)(param_1 + 0x210) = FUN_00d36190;
  *(undefined8 *)(param_1 + 0x220) = param_2;
LAB_00d361e0:
  local_70 = 0;
  uVar2 = (***(code ***)(param_1 + 0x120))(*(code ***)(param_1 + 0x120),param_2,param_3,&local_70);
  uVar1 = local_70;
  uVar5 = 9;
  *(undefined8 *)(param_1 + 0x228) = local_70;
  switch(uVar2) {
  case 0:
    uVar5 = 4;
    *(undefined8 *)(param_1 + 0x220) = local_70;
    lVar6 = *(long *)(lVar6 + 0x28);
    break;
  case 0xb:
    iVar4 = FUN_00d334f0(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_70);
    if (iVar4 != 0) goto LAB_00d362e0;
    uVar5 = 1;
switchD_00d36224_caseD_fffffff2:
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
    goto LAB_00d36314;
  case 0xd:
    iVar4 = FUN_00d3387c(param_1,*(undefined8 *)(param_1 + 0x120),param_2,local_70);
    if (iVar4 != 0) goto LAB_00d362e0;
    uVar5 = 1;
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
    goto LAB_00d36314;
  case 0xf:
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      lVar7 = *(long *)(param_1 + 0x120);
      local_60 = param_2;
      if (*(char *)(lVar7 + 0x84) == '\0') {
        do {
          local_68 = *(undefined8 *)(param_1 + 0x58);
          uVar3 = (**(code **)(lVar7 + 0x70))
                            (lVar7,&local_60,uVar1,&local_68,*(undefined8 *)(param_1 + 0x60));
          *(undefined8 *)(param_1 + 0x228) = local_60;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x220) = local_60;
        } while (1 < uVar3);
      }
      else {
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),param_2,(int)local_70 - (int)param_2);
      }
    }
LAB_00d362e0:
    *(undefined8 *)(param_1 + 0x220) = local_70;
    if (*(int *)(param_1 + 0x388) != 2) goto code_r0x00d362f4;
    goto LAB_00d363e4;
  case 0xfffffff1:
    if (*(code **)(param_1 + 0xa0) == (code *)0x0) goto LAB_00d36464;
    lVar7 = *(long *)(param_1 + 0x120);
    local_60 = param_2;
    if (*(char *)(lVar7 + 0x84) == '\0') {
      do {
        local_68 = *(undefined8 *)(param_1 + 0x58);
        uVar3 = (**(code **)(lVar7 + 0x70))
                          (lVar7,&local_60,uVar1,&local_68,*(undefined8 *)(param_1 + 0x60));
        *(undefined8 *)(param_1 + 0x228) = local_60;
        (**(code **)(param_1 + 0xa0))
                  (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                   (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)(param_1 + 0x220) = local_60;
      } while (1 < uVar3);
    }
    else {
      (**(code **)(param_1 + 0xa0))
                (*(undefined8 *)(param_1 + 8),param_2,(int)local_70 - (int)param_2);
    }
    if (*(int *)(param_1 + 0x388) != 2) {
LAB_00d36464:
      uVar5 = 0;
      *param_4 = local_70;
      if (*(long *)(lVar6 + 0x28) == local_58) {
        return;
      }
      goto LAB_00d36314;
    }
LAB_00d363e4:
    uVar5 = 0x23;
    if (*(long *)(lVar6 + 0x28) == local_58) {
      return;
    }
    goto LAB_00d36314;
  default:
    goto switchD_00d36224_caseD_fffffff2;
  case 0xfffffffc:
    goto switchD_00d36224_caseD_fffffffc;
  case 0xfffffffe:
    if (*(char *)(param_1 + 0x38c) == '\0') goto switchD_00d36224_caseD_fffffffc;
    uVar5 = 6;
    lVar6 = *(long *)(lVar6 + 0x28);
    break;
  case 0xffffffff:
    if (*(char *)(param_1 + 0x38c) == '\0') goto switchD_00d36224_caseD_fffffffc;
    uVar5 = 5;
    lVar6 = *(long *)(lVar6 + 0x28);
  }
  if (lVar6 == local_58) {
    return;
  }
  goto LAB_00d36314;
code_r0x00d362f4:
  param_2 = local_70;
  if (*(int *)(param_1 + 0x388) == 3) goto switchD_00d36224_caseD_fffffffc;
  goto LAB_00d361e0;
switchD_00d36224_caseD_fffffffc:
  uVar5 = 0;
  *param_4 = param_2;
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
LAB_00d36314:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


