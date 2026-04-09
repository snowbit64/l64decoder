// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f2ad38
// Entry Point: 00f2ad38
// Size: 456 bytes
// Signature: undefined FUN_00f2ad38(void)


undefined8
FUN_00f2ad38(undefined8 param_1,uint *param_2,uint *param_3,long param_4,uint *param_5,
            uint **param_6,long param_7)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_68;
  
  puVar9 = (uint *)(param_4 + (long)param_3);
  puVar1 = param_3;
  if (param_5 != (uint *)0x0) {
    puVar1 = param_5;
  }
  if (param_4 == -1) {
    puVar9 = (uint *)0xffffffffffffffff;
  }
  while( true ) {
    puVar3 = puVar1;
    if (puVar9 <= puVar3) {
      return 0;
    }
    local_68 = puVar3 + 1;
    uVar8 = (ulong)*puVar3;
    if (*puVar3 == 0xffffffff) {
      local_68 = puVar3 + 3;
      uVar8 = *(ulong *)(puVar3 + 1);
    }
    if (uVar8 == 0) break;
    puVar1 = (uint *)((long)local_68 + uVar8);
    if ((((*local_68 != 0) &&
         (puVar7 = (uint *)((long)local_68 - (ulong)*local_68), param_3 <= puVar7)) &&
        (puVar7 < puVar9)) && (lVar4 = FUN_00f27d58(param_1,puVar7,param_7), lVar4 == 0)) {
      local_68 = local_68 + 1;
      puVar7 = (uint *)FUN_00f299dc(param_1,&local_68,puVar1,*(undefined *)(param_7 + 0x18),0);
      lVar4 = FUN_00f299dc(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x18) & 0xf,0);
      if ((puVar7 < param_2) && (param_2 <= (uint *)(lVar4 + (long)puVar7))) {
        cVar2 = *(char *)(param_7 + 0x31);
        param_6[5] = (uint *)0x0;
        puVar9 = local_68;
        if (cVar2 != '\0') {
          lVar5 = FUN_00f29cf0(&local_68,puVar1);
          puVar6 = local_68;
          puVar9 = (uint *)((long)local_68 + lVar5);
          if ((*(byte *)(param_7 + 0x19) != 0xff) &&
             (lVar5 = FUN_00f299dc(param_1,&local_68,puVar1,*(byte *)(param_7 + 0x19) & 0xf,0),
             lVar5 != 0)) {
            local_68 = puVar6;
            puVar6 = (uint *)FUN_00f299dc(param_1,&local_68,puVar1,*(undefined *)(param_7 + 0x19),0)
            ;
            param_6[5] = puVar6;
          }
        }
        param_6[2] = puVar9;
        param_6[3] = puVar7;
        param_6[4] = (uint *)(lVar4 + (long)puVar7);
        *param_6 = puVar3;
        param_6[1] = (uint *)((long)puVar1 - (long)puVar3);
        return 1;
      }
    }
  }
  return 0;
}


