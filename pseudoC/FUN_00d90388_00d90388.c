// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d90388
// Entry Point: 00d90388
// Size: 896 bytes
// Signature: undefined FUN_00d90388(void)


/* WARNING: Removing unreachable block (ram,0x00d903f4) */

void FUN_00d90388(long *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  void *__s;
  code *pcVar3;
  size_t __n;
  long lVar4;
  void **ppvVar5;
  undefined8 uVar6;
  
  lVar4 = param_1[0x4e];
  ppvVar5 = *(void ***)(lVar4 + 0x30);
  if (*(int *)((long)param_1 + 100) == 0) {
    if (param_2 != '\0') goto LAB_00d903d0;
    pcVar3 = FUN_00d9110c;
  }
  else {
    *(undefined4 *)((long)param_1 + 100) = 2;
    if (param_2 != '\0') {
LAB_00d903d0:
      *(code **)(lVar4 + 8) = FUN_00d90888;
      *(code **)(lVar4 + 0x10) = FUN_00d90908;
      *(undefined *)(lVar4 + 0x38) = 1;
      goto LAB_00d90438;
    }
    pcVar3 = FUN_00d90df0;
  }
  *(code **)(lVar4 + 8) = pcVar3;
  uVar1 = *(uint *)(param_1 + 0x11);
  *(code **)(lVar4 + 0x10) = FUN_00d911f0;
  if ((int)uVar1 < 1) {
    uVar6 = 0x10000003a;
LAB_00d90660:
    *(undefined8 *)(*param_1 + 0x28) = uVar6;
    (**(code **)*param_1)(param_1);
    if (*(int *)((long)param_1 + 100) != 2) goto LAB_00d90430;
LAB_00d90684:
    __n = (ulong)(*(int *)((long)param_1 + 0x74) + 2) * 6;
    if (*(void **)(lVar4 + 0x40) == (void *)0x0) {
      __s = (void *)(**(code **)(param_1[1] + 8))(param_1,1,__n);
      *(void **)(lVar4 + 0x40) = __s;
      memset(__s,0,__n);
      if (*(long *)(lVar4 + 0x50) == 0) goto LAB_00d906f0;
LAB_00d906b0:
      *(undefined *)(lVar4 + 0x48) = 0;
      cVar2 = *(char *)(lVar4 + 0x38);
    }
    else {
      memset(*(void **)(lVar4 + 0x40),0,__n);
      if (*(long *)(lVar4 + 0x50) != 0) goto LAB_00d906b0;
LAB_00d906f0:
      FUN_00d90718(param_1);
      *(undefined *)(lVar4 + 0x48) = 0;
      cVar2 = *(char *)(lVar4 + 0x38);
    }
  }
  else {
    if (0x100 < uVar1) {
      uVar6 = 0x1000000003b;
      goto LAB_00d90660;
    }
    if (*(int *)((long)param_1 + 100) == 2) goto LAB_00d90684;
LAB_00d90430:
    cVar2 = *(char *)(lVar4 + 0x38);
  }
  if (cVar2 == '\0') {
    return;
  }
LAB_00d90438:
  memset(*ppvVar5,0,0x1000);
  memset(ppvVar5[1],0,0x1000);
  memset(ppvVar5[2],0,0x1000);
  memset(ppvVar5[3],0,0x1000);
  memset(ppvVar5[4],0,0x1000);
  memset(ppvVar5[5],0,0x1000);
  memset(ppvVar5[6],0,0x1000);
  memset(ppvVar5[7],0,0x1000);
  memset(ppvVar5[8],0,0x1000);
  memset(ppvVar5[9],0,0x1000);
  memset(ppvVar5[10],0,0x1000);
  memset(ppvVar5[0xb],0,0x1000);
  memset(ppvVar5[0xc],0,0x1000);
  memset(ppvVar5[0xd],0,0x1000);
  memset(ppvVar5[0xe],0,0x1000);
  memset(ppvVar5[0xf],0,0x1000);
  memset(ppvVar5[0x10],0,0x1000);
  memset(ppvVar5[0x11],0,0x1000);
  memset(ppvVar5[0x12],0,0x1000);
  memset(ppvVar5[0x13],0,0x1000);
  memset(ppvVar5[0x14],0,0x1000);
  memset(ppvVar5[0x15],0,0x1000);
  memset(ppvVar5[0x16],0,0x1000);
  memset(ppvVar5[0x17],0,0x1000);
  memset(ppvVar5[0x18],0,0x1000);
  memset(ppvVar5[0x19],0,0x1000);
  memset(ppvVar5[0x1a],0,0x1000);
  memset(ppvVar5[0x1b],0,0x1000);
  memset(ppvVar5[0x1c],0,0x1000);
  memset(ppvVar5[0x1d],0,0x1000);
  memset(ppvVar5[0x1e],0,0x1000);
  memset(ppvVar5[0x1f],0,0x1000);
  *(undefined *)(lVar4 + 0x38) = 0;
  return;
}


