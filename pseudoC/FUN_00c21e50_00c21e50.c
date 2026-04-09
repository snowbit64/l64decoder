// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c21e50
// Entry Point: 00c21e50
// Size: 216 bytes
// Signature: undefined FUN_00c21e50(void)


undefined FUN_00c21e50(void *param_1)

{
  undefined uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  **(undefined **)((long)param_1 + 0x40) = *(undefined *)((long)param_1 + 0x30);
  pcVar4 = *(char **)((long)param_1 + 0x40);
  if (*pcVar4 == '\0') {
    if (pcVar4 < (char *)(*(long *)(*(long *)(*(long *)((long)param_1 + 0x28) +
                                             *(long *)((long)param_1 + 0x18) * 8) + 8) +
                         (long)*(int *)((long)param_1 + 0x34))) {
      *pcVar4 = '\0';
    }
    else {
      uVar5 = *(undefined8 *)((long)param_1 + 0x80);
      *(char **)((long)param_1 + 0x40) = pcVar4 + 1;
      iVar2 = FUN_00c2110c(param_1);
      if (iVar2 == 0) {
        *(long *)((long)param_1 + 0x40) =
             *(long *)((long)param_1 + 0x80) + (long)((int)pcVar4 - (int)uVar5);
      }
      else {
        if (iVar2 == 1) {
          return 0;
        }
        if (iVar2 == 2) {
          gsParser_restart(*(__sFILE **)((long)param_1 + 8),param_1);
          return 0;
        }
      }
    }
  }
  uVar1 = **(undefined **)((long)param_1 + 0x40);
  **(undefined **)((long)param_1 + 0x40) = 0;
  lVar3 = *(long *)((long)param_1 + 0x40);
  *(long *)((long)param_1 + 0x40) = lVar3 + 1;
  *(undefined *)((long)param_1 + 0x30) = *(undefined *)(lVar3 + 1);
  return uVar1;
}


