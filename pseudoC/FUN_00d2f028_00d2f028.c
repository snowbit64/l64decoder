// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d2f028
// Entry Point: 00d2f028
// Size: 256 bytes
// Signature: undefined FUN_00d2f028(void)


void FUN_00d2f028(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_60 = param_3;
  if (*(char *)(param_2 + 0x84) == '\0') {
    if (*(long *)(param_1 + 0x120) == param_2) {
      puVar3 = (undefined8 *)(param_1 + 0x220);
      puVar4 = (undefined8 *)(param_1 + 0x228);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x238);
      puVar4 = puVar3 + 1;
    }
    do {
      local_68 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = (**(code **)(param_2 + 0x70))
                        (param_2,&local_60,param_4,&local_68,*(undefined8 *)(param_1 + 0x60));
      *puVar4 = local_60;
      (**(code **)(param_1 + 0xa0))
                (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x58),
                 (int)local_68 - (int)*(undefined8 *)(param_1 + 0x58));
      *puVar3 = local_60;
    } while (1 < uVar2);
  }
  else {
    (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 8),param_3,(int)param_4 - (int)param_3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


