// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d36480
// Entry Point: 00d36480
// Size: 1144 bytes
// Signature: undefined FUN_00d36480(void)


void FUN_00d36480(long param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 *param_5,char param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_80 = *param_3;
  if (*(long *)(param_1 + 0x120) == param_2) {
    puVar8 = (undefined8 *)(param_1 + 0x220);
    puVar13 = (undefined8 *)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x220) = local_80;
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x238);
    puVar13 = puVar8 + 1;
  }
  *puVar8 = local_80;
  puVar7 = (undefined8 *)(param_1 + 0x220);
  puVar9 = (undefined8 *)(param_1 + 0x228);
  *param_3 = 0;
  do {
    uVar3 = (**(code **)(param_2 + 0x10))(param_2,local_80,param_4,&local_88);
    uVar2 = local_88;
    *puVar13 = local_88;
    iVar10 = (int)local_88;
    iVar5 = (int)local_80;
    switch(uVar3) {
    case 0:
      uVar3 = 4;
      *puVar8 = local_88;
      goto LAB_00d36854;
    case 6:
      pcVar11 = *(code **)(param_1 + 0x78);
      if (pcVar11 == (code *)0x0) {
        if (*(code **)(param_1 + 0xa0) == (code *)0x0) goto LAB_00d366dc;
        local_70 = local_80;
        if (*(char *)(param_2 + 0x84) == '\0') {
          puVar6 = puVar9;
          puVar12 = puVar7;
          if (*(long *)(param_1 + 0x120) != param_2) {
            puVar12 = *(undefined8 **)(param_1 + 0x238);
            puVar6 = puVar12 + 1;
          }
          do {
            local_78 = *(undefined8 *)(param_1 + 0x58);
            uVar4 = (**(code **)(param_2 + 0x70))
                              (param_2,&local_70,uVar2,&local_78,*(undefined8 *)(param_1 + 0x60));
            *puVar6 = local_70;
            (**(code **)(param_1 + 0xa0))
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                       (int)local_78 - (int)*(undefined8 *)(param_1 + 0x58));
            *puVar12 = local_70;
          } while (1 < uVar4);
        }
        else {
          (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),local_80,iVar10 - iVar5);
        }
        *puVar8 = local_88;
        iVar5 = *(int *)(param_1 + 0x388);
      }
      else if (*(char *)(param_2 + 0x84) == '\0') {
        while( true ) {
          local_70 = *(undefined8 *)(param_1 + 0x58);
          uVar4 = (**(code **)(param_2 + 0x70))
                            (param_2,&local_80,local_88,&local_70,*(undefined8 *)(param_1 + 0x60));
          *puVar13 = local_88;
          (*pcVar11)(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_70 - (int)*(undefined8 *)(param_1 + 0x58));
          if (uVar4 < 2) break;
          *puVar8 = local_80;
        }
LAB_00d366dc:
        *puVar8 = local_88;
        iVar5 = *(int *)(param_1 + 0x388);
      }
      else {
        (*pcVar11)(*(undefined8 *)(param_1 + 8),local_80,iVar10 - iVar5);
        *puVar8 = local_88;
        iVar5 = *(int *)(param_1 + 0x388);
      }
      break;
    case 7:
      if (*(code **)(param_1 + 0x78) == (code *)0x0) {
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          local_70 = local_80;
          if (*(char *)(param_2 + 0x84) == '\0') {
            puVar6 = puVar9;
            puVar12 = puVar7;
            if (*(long *)(param_1 + 0x120) != param_2) {
              puVar12 = *(undefined8 **)(param_1 + 0x238);
              puVar6 = puVar12 + 1;
            }
            do {
              local_78 = *(undefined8 *)(param_1 + 0x58);
              uVar4 = (**(code **)(param_2 + 0x70))
                                (param_2,&local_70,uVar2,&local_78,*(undefined8 *)(param_1 + 0x60));
              *puVar6 = local_70;
              (**(code **)(param_1 + 0xa0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                         (int)local_78 - (int)*(undefined8 *)(param_1 + 0x58));
              *puVar12 = local_70;
            } while (1 < uVar4);
          }
          else {
            (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),local_80,iVar10 - iVar5);
          }
        }
        goto LAB_00d366dc;
      }
      local_70 = CONCAT71(local_70._1_7_,10);
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 8),&local_70,1);
      *puVar8 = local_88;
      iVar5 = *(int *)(param_1 + 0x388);
      break;
    case 0x28:
      if (*(code **)(param_1 + 0x98) == (code *)0x0) {
        if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
          local_70 = local_80;
          if (*(char *)(param_2 + 0x84) == '\0') {
            if (*(long *)(param_1 + 0x120) != param_2) {
              puVar7 = *(undefined8 **)(param_1 + 0x238);
              puVar9 = puVar7 + 1;
            }
            do {
              local_78 = *(undefined8 *)(param_1 + 0x58);
              uVar4 = (**(code **)(param_2 + 0x70))
                                (param_2,&local_70,uVar2,&local_78,*(undefined8 *)(param_1 + 0x60));
              *puVar9 = local_70;
              (**(code **)(param_1 + 0xa0))
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                         (int)local_78 - (int)*(undefined8 *)(param_1 + 0x58));
              *puVar7 = local_70;
            } while (1 < uVar4);
          }
          else {
            (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),local_80,iVar10 - iVar5);
          }
        }
      }
      else {
        (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 8));
      }
      *param_3 = local_88;
      *param_5 = local_88;
      uVar3 = 0x23;
      if (*(int *)(param_1 + 0x388) != 2) {
        uVar3 = 0;
      }
      goto LAB_00d36854;
    case 0xfffffffc:
    case 0xffffffff:
      if (param_6 == '\0') {
        uVar3 = 0x14;
        goto LAB_00d36854;
      }
      goto LAB_00d36804;
    default:
      uVar3 = 0x17;
      *puVar8 = local_88;
      goto LAB_00d36854;
    case 0xfffffffe:
      if (param_6 == '\0') {
        uVar3 = 6;
        goto LAB_00d36854;
      }
      goto LAB_00d36804;
    }
    local_80 = local_88;
    if (iVar5 == 2) {
      uVar3 = 0x23;
      goto LAB_00d36854;
    }
  } while (iVar5 != 3);
LAB_00d36804:
  uVar3 = 0;
  *param_5 = local_80;
LAB_00d36854:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


