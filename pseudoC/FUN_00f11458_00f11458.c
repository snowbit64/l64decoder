// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f11458
// Entry Point: 00f11458
// Size: 328 bytes
// Signature: undefined FUN_00f11458(void)


void FUN_00f11458(undefined8 *param_1,char *param_2,ulong param_3)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  
  if (*param_2 == '@') {
    param_2 = param_2 + 1;
    sVar2 = strlen(param_2);
    lVar1 = sVar2 - (param_3 - 4);
    *(undefined *)param_1 = 0;
    if (param_3 - 4 <= sVar2 && lVar1 != 0) {
      param_2 = param_2 + lVar1;
      sVar2 = strlen((char *)param_1);
      *(undefined4 *)((long)param_1 + sVar2) = 0x2e2e2e;
    }
    strcat((char *)param_1,param_2);
    return;
  }
  if (*param_2 == '=') {
    sVar2 = strlen(param_2 + 1);
    if (param_3 <= sVar2) {
      sVar2 = param_3 - 1;
    }
    memcpy(param_1,param_2 + 1,sVar2);
    *(undefined *)((long)param_1 + sVar2) = 0;
    return;
  }
  sVar3 = strcspn(param_2,"\n\r");
  sVar2 = param_3 - 0xf;
  if (sVar3 <= param_3 - 0xf) {
    sVar2 = sVar3;
  }
  *(undefined2 *)(param_1 + 1) = 0x22;
  *param_1 = 0x20676e697274735b;
  if (param_2[sVar2] == '\0') {
    strcat((char *)param_1,param_2);
  }
  else {
    __s = strncat((char *)param_1,param_2,sVar2);
    sVar2 = strlen(__s);
    *(undefined4 *)((long)param_1 + sVar2) = 0x2e2e2e;
  }
  sVar2 = strlen((char *)param_1);
  *(undefined2 *)((long)param_1 + sVar2) = 0x5d22;
  *(undefined *)((undefined2 *)((long)param_1 + sVar2) + 1) = 0;
  return;
}


