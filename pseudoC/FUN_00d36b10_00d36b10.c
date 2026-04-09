// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d36b10
// Entry Point: 00d36b10
// Size: 836 bytes
// Signature: undefined FUN_00d36b10(void)


undefined8 FUN_00d36b10(long param_1,char **param_2,long param_3,char *param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  cVar6 = *param_4;
  pcVar5 = *param_2;
  if (cVar6 == '\0') {
    if (pcVar5 != (char *)0x0) {
      return 0x1c;
    }
    bVar7 = false;
    uVar9 = 0;
    bVar1 = true;
    uVar4 = 0x28;
    bVar2 = true;
  }
  else {
    if ((((pcVar5 != (char *)0x0) && (*pcVar5 == 'x')) && (pcVar5[1] == 'm')) && (pcVar5[2] == 'l'))
    {
      if (pcVar5[3] == 'n') {
        if ((pcVar5[4] == 's') && (pcVar5[5] == '\0')) {
          return 0x27;
        }
      }
      else if (pcVar5[3] == '\0') {
        uVar9 = 0;
        bVar1 = true;
        do {
          if ((bVar1) &&
             ((0x24 < uVar9 || (cVar6 != "http://www.w3.org/XML/1998/namespace"[uVar9])))) {
            bVar1 = false;
          }
          cVar6 = param_4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (cVar6 != '\0');
        bVar7 = true;
        uVar4 = 0x26;
        bVar2 = true;
        uVar9 = uVar9 & 0xffffffff;
        goto LAB_00d36c6c;
      }
    }
    uVar9 = 0;
    bVar2 = true;
    bVar1 = true;
    do {
      if ((bVar1) && ((0x24 < uVar9 || (cVar6 != "http://www.w3.org/XML/1998/namespace"[uVar9])))) {
        bVar1 = false;
      }
      if ((bVar2) && ((0x1d < uVar9 || (cVar6 != "http://www.w3.org/2000/xmlns/"[uVar9])))) {
        bVar2 = false;
      }
      cVar6 = param_4[uVar9 + 1];
      uVar9 = uVar9 + 1;
    } while (cVar6 != '\0');
    uVar4 = 0x28;
    bVar7 = false;
  }
LAB_00d36c6c:
  uVar8 = (uint)uVar9;
  if (bVar7 != (bVar1 && uVar8 == 0x24)) {
    return uVar4;
  }
  if ((bVar2) && (uVar8 == 0x1d)) {
    return 0x28;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x2c8);
  if (*(char *)(param_1 + 0x37c) != '\0') {
    uVar8 = uVar8 + 1;
  }
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)(**(code **)(param_1 + 0x18))(0x30);
    if (puVar10 != (undefined8 *)0x0) {
      lVar3 = (**(code **)(param_1 + 0x18))(uVar8 + 0x18);
      puVar10[4] = lVar3;
      if (lVar3 != 0) {
        *(uint *)((long)puVar10 + 0x2c) = uVar8 + 0x18;
        goto LAB_00d36d44;
      }
      (**(code **)(param_1 + 0x28))(puVar10);
    }
    return 1;
  }
  if (*(int *)((long)puVar10 + 0x2c) < (int)uVar8) {
    lVar3 = (**(code **)(param_1 + 0x20))(puVar10[4],uVar8 + 0x18);
    if (lVar3 == 0) {
      return 1;
    }
    puVar10[4] = lVar3;
    *(uint *)((long)puVar10 + 0x2c) = uVar8 + 0x18;
  }
  *(undefined8 *)(param_1 + 0x2c8) = puVar10[1];
LAB_00d36d44:
  *(uint *)(puVar10 + 5) = uVar8;
  memcpy((void *)puVar10[4],param_4,(ulong)uVar8);
  if (*(char *)(param_1 + 0x37c) != '\0') {
    *(char *)(puVar10[4] + (long)(int)uVar8 + -1) = *(char *)(param_1 + 0x37c);
  }
  pcVar5 = param_2[1];
  *puVar10 = param_2;
  puVar10[2] = pcVar5;
  puVar10[3] = param_3;
  if ((*param_4 == '\0') && ((char **)(*(long *)(param_1 + 0x2a0) + 0x130) == param_2)) {
    param_2[1] = (char *)0x0;
    puVar10[1] = *param_5;
    *param_5 = puVar10;
  }
  else {
    param_2[1] = (char *)puVar10;
    puVar10[1] = *param_5;
    *param_5 = puVar10;
  }
  if ((param_3 != 0) && (*(code **)(param_1 + 200) != (code *)0x0)) {
    pcVar5 = (char *)0x0;
    if (param_2[1] != (char *)0x0) {
      pcVar5 = param_4;
    }
    (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 8),*param_2,pcVar5);
  }
  return 0;
}


