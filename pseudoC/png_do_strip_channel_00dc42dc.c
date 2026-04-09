// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_do_strip_channel
// Entry Point: 00dc42dc
// Size: 588 bytes
// Signature: undefined png_do_strip_channel(void)


void png_do_strip_channel(long param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)(param_1 + 8);
  puVar2 = param_2 + lVar8;
  if (*(char *)(param_1 + 0x12) != '\x04') {
    if (*(char *)(param_1 + 0x12) != '\x02') {
      return;
    }
    if (*(char *)(param_1 + 0x11) == '\x10') {
      puVar9 = param_2 + 4;
      puVar7 = param_2 + 2;
      if (param_3 != 0) {
        puVar9 = param_2 + 2;
        puVar7 = param_2;
      }
      puVar6 = puVar7;
      if (puVar9 < puVar2) {
        do {
          *puVar6 = *puVar9;
          puVar7 = puVar6 + 2;
          puVar1 = puVar9 + 1;
          puVar9 = puVar9 + 4;
          puVar6[1] = *puVar1;
          puVar6 = puVar7;
        } while (puVar9 < puVar2);
        cVar4 = *(char *)(param_1 + 0x10);
        *(undefined *)(param_1 + 0x13) = 0x10;
        *(undefined *)(param_1 + 0x12) = 1;
      }
      else {
        cVar4 = *(char *)(param_1 + 0x10);
        *(undefined *)(param_1 + 0x13) = 0x10;
        *(undefined *)(param_1 + 0x12) = 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0x11) != '\b') {
        return;
      }
      puVar9 = param_2 + 2;
      if (param_3 == 0) {
        puVar7 = param_2 + 1;
      }
      else {
        puVar9 = param_2 + 1;
        puVar7 = param_2;
      }
      for (; puVar9 < puVar2; puVar9 = puVar9 + 2) {
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
      }
      cVar4 = *(char *)(param_1 + 0x10);
      *(undefined *)(param_1 + 0x13) = 8;
      *(undefined *)(param_1 + 0x12) = 1;
    }
    if (cVar4 == '\x04') {
      *(undefined *)(param_1 + 0x10) = 0;
    }
    goto LAB_00dc451c;
  }
  if (*(char *)(param_1 + 0x11) == '\x10') {
    lVar3 = 6;
    if (param_3 != 0) {
      lVar3 = 0;
    }
    puVar7 = param_2 + lVar3;
    lVar3 = 8;
    if (param_3 != 0) {
      lVar3 = 2;
    }
    if (lVar3 < lVar8) {
      puVar9 = param_2 + lVar3;
      puVar6 = puVar7;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar6[2] = puVar9[2];
        puVar6[3] = puVar9[3];
        puVar6[4] = puVar9[4];
        puVar7 = puVar6 + 6;
        puVar1 = puVar9 + 5;
        puVar9 = puVar9 + 8;
        puVar6[5] = *puVar1;
        puVar6 = puVar7;
      } while (puVar9 < puVar2);
      uVar5 = 0x30;
      goto LAB_00dc4494;
    }
    cVar4 = *(char *)(param_1 + 0x10);
    *(undefined *)(param_1 + 0x13) = 0x30;
    *(undefined *)(param_1 + 0x12) = 3;
  }
  else {
    if (*(char *)(param_1 + 0x11) != '\b') {
      return;
    }
    lVar3 = 3;
    if (param_3 != 0) {
      lVar3 = 0;
    }
    puVar7 = param_2 + lVar3;
    lVar3 = 4;
    if (param_3 != 0) {
      lVar3 = 1;
    }
    if (lVar3 < lVar8) {
      puVar9 = param_2 + lVar3;
      puVar6 = puVar7;
      do {
        *puVar6 = *puVar9;
        puVar6[1] = puVar9[1];
        puVar7 = puVar6 + 3;
        puVar1 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        puVar6[2] = *puVar1;
        puVar6 = puVar7;
      } while (puVar9 < puVar2);
      uVar5 = 0x18;
LAB_00dc4494:
      cVar4 = *(char *)(param_1 + 0x10);
      *(undefined *)(param_1 + 0x13) = uVar5;
      *(undefined *)(param_1 + 0x12) = 3;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x10);
      *(undefined *)(param_1 + 0x13) = 0x18;
      *(undefined *)(param_1 + 0x12) = 3;
    }
  }
  if (cVar4 == '\x06') {
    *(undefined *)(param_1 + 0x10) = 2;
  }
LAB_00dc451c:
  *(long *)(param_1 + 8) = (long)puVar7 - (long)param_2;
  return;
}


