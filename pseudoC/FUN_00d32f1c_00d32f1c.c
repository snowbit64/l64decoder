// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d32f1c
// Entry Point: 00d32f1c
// Size: 480 bytes
// Signature: undefined FUN_00d32f1c(void)


void FUN_00d32f1c(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,char param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_3;
  if (*(long *)(param_1 + 0x120) == param_2) {
    puVar6 = (undefined8 *)(param_1 + 0x220);
    puVar7 = (undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x220) = uVar5;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x238);
    puVar7 = puVar6 + 1;
  }
  *puVar6 = uVar5;
  *param_3 = 0;
  uVar3 = (**(code **)(param_2 + 0x18))(param_2,uVar5,param_4,&local_80);
  uVar2 = local_80;
  *puVar7 = local_80;
  switch(uVar3) {
  case 0:
    uVar3 = 4;
LAB_00d33000:
    *puVar6 = local_80;
    goto LAB_00d330c8;
  case 0x2a:
    if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
      local_70 = uVar5;
      if (*(char *)(param_2 + 0x84) == '\0') {
        if (*(long *)(param_1 + 0x120) == param_2) {
          puVar6 = (undefined8 *)(param_1 + 0x220);
          puVar7 = (undefined8 *)(param_1 + 0x228);
        }
        else {
          puVar6 = *(undefined8 **)(param_1 + 0x238);
          puVar7 = puVar6 + 1;
        }
        do {
          local_78 = *(undefined8 *)(param_1 + 0x58);
          uVar4 = (**(code **)(param_2 + 0x70))
                            (param_2,&local_70,uVar2,&local_78,*(undefined8 *)(param_1 + 0x60));
          *puVar7 = local_70;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_78 - (int)*(undefined8 *)(param_1 + 0x58));
          *puVar6 = local_70;
        } while (1 < uVar4);
      }
      else {
        (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),uVar5,(int)local_80 - (int)uVar5)
        ;
      }
    }
    *param_3 = local_80;
    *param_5 = local_80;
    uVar3 = 0x23;
    if (*(int *)(param_1 + 0x388) != 2) {
      uVar3 = 0;
    }
    goto LAB_00d330c8;
  case 0xfffffffc:
  case 0xffffffff:
    if (param_6 == '\0') {
      uVar3 = 2;
      goto LAB_00d330c8;
    }
    break;
  default:
    uVar3 = 0x17;
    goto LAB_00d33000;
  case 0xfffffffe:
    if (param_6 == '\0') {
      uVar3 = 6;
      goto LAB_00d330c8;
    }
  }
  uVar3 = 0;
  *param_5 = uVar5;
LAB_00d330c8:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


