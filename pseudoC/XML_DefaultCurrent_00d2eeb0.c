// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: XML_DefaultCurrent
// Entry Point: 00d2eeb0
// Size: 376 bytes
// Signature: undefined XML_DefaultCurrent(void)


void XML_DefaultCurrent(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_1 != 0) && (*(code **)(param_1 + 0xa0) != (code *)0x0)) {
    puVar5 = *(undefined8 **)(param_1 + 0x238);
    if (puVar5 == (undefined8 *)0x0) {
      lVar6 = *(long *)(param_1 + 0x120);
      local_60 = *(undefined8 *)(param_1 + 0x220);
      uVar7 = *(undefined8 *)(param_1 + 0x228);
      if (*(char *)(lVar6 + 0x84) == '\0') {
        do {
          local_68 = *(undefined8 *)(param_1 + 0x58);
          uVar4 = (**(code **)(lVar6 + 0x70))
                            (lVar6,&local_60,uVar7,&local_68,*(undefined8 *)(param_1 + 0x60));
          *(undefined8 *)(param_1 + 0x228) = local_60;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x220) = local_60;
        } while (1 < uVar4);
        goto LAB_00d2efa0;
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x1b8);
      local_60 = *puVar5;
      uVar7 = puVar5[1];
      if (*(char *)(lVar6 + 0x84) == '\0') {
        puVar3 = (undefined8 *)(param_1 + 0x220);
        puVar1 = (undefined8 *)(param_1 + 0x228);
        if (*(long *)(param_1 + 0x120) != lVar6) {
          puVar3 = puVar5;
          puVar1 = puVar5 + 1;
        }
        do {
          local_68 = *(undefined8 *)(param_1 + 0x58);
          uVar4 = (**(code **)(lVar6 + 0x70))
                            (lVar6,&local_60,uVar7,&local_68,*(undefined8 *)(param_1 + 0x60));
          *puVar1 = local_60;
          (**(code **)(param_1 + 0xa0))
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                     (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
          *puVar3 = local_60;
        } while (1 < uVar4);
        goto LAB_00d2efa0;
      }
    }
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),local_60,(int)uVar7 - (int)local_60);
  }
LAB_00d2efa0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


