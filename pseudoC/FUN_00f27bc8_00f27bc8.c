// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f27bc8
// Entry Point: 00f27bc8
// Size: 400 bytes
// Signature: undefined FUN_00f27bc8(void)


char * FUN_00f27bc8(undefined8 param_1,uint *param_2,uint **param_3,long *param_4,ulong param_5)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  uint *local_48;
  
  puVar9 = param_2 + 1;
  uVar8 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar8 = *(ulong *)(param_2 + 1);
    puVar9 = param_2 + 3;
  }
  if (uVar8 == 0) {
    pcVar6 = "FDE has zero length";
  }
  else if (*puVar9 == 0) {
    pcVar6 = "FDE is really a CIE";
  }
  else {
    lVar7 = (long)puVar9 - (ulong)*puVar9;
    if ((param_5 & 1) == 0) {
      pcVar6 = (char *)FUN_00f27d58(param_1,lVar7,param_4);
      if (pcVar6 != (char *)0x0) {
        return pcVar6;
      }
    }
    else if (*param_4 != lVar7) {
      return "CIE start does not match";
    }
    lVar7 = (long)puVar9 + uVar8;
    local_48 = puVar9 + 1;
    puVar2 = (uint *)FUN_00f299dc(param_1,&local_48,lVar7,*(undefined *)(param_4 + 3),0);
    lVar3 = FUN_00f299dc(param_1,&local_48,lVar7,*(byte *)(param_4 + 3) & 0xf,0);
    cVar1 = *(char *)((long)param_4 + 0x31);
    param_3[5] = (uint *)0x0;
    puVar9 = local_48;
    if (cVar1 != '\0') {
      lVar4 = FUN_00f29cf0(&local_48,lVar7);
      puVar5 = local_48;
      puVar9 = (uint *)((long)local_48 + lVar4);
      if ((*(byte *)((long)param_4 + 0x19) != 0xff) &&
         (lVar4 = FUN_00f299dc(param_1,&local_48,lVar7,*(byte *)((long)param_4 + 0x19) & 0xf,0),
         lVar4 != 0)) {
        local_48 = puVar5;
        puVar5 = (uint *)FUN_00f299dc(param_1,&local_48,lVar7,*(undefined *)((long)param_4 + 0x19),0
                                     );
        param_3[5] = puVar5;
      }
    }
    pcVar6 = (char *)0x0;
    param_3[2] = puVar9;
    param_3[3] = puVar2;
    *param_3 = param_2;
    param_3[1] = (uint *)(lVar7 - (long)param_2);
    param_3[4] = (uint *)(lVar3 + (long)puVar2);
  }
  return pcVar6;
}


