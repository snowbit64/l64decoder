// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e4c234
// Entry Point: 00e4c234
// Size: 900 bytes
// Signature: undefined FUN_00e4c234(void)


undefined8
FUN_00e4c234(long param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar4 = *(int *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x764) = 0;
  while( true ) {
    if (iVar4 != 0) {
      return 0;
    }
    uVar5 = FUN_00e49480(param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    iVar4 = *(int *)(param_1 + 0x6f8);
    if (iVar4 < 0) break;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x6f4) = 0;
      do {
        iVar4 = FUN_00e4c7e4(param_1);
        if (iVar4 == -1) {
          *(undefined4 *)(param_1 + 0x6f8) = 0xffffffff;
          goto LAB_00e4c330;
        }
        uVar12 = *(uint *)(param_1 + 0x6f8);
        uVar7 = *(int *)(param_1 + 0x6f4) + (iVar4 << (ulong)(uVar12 & 0x1f));
        iVar4 = uVar12 + 8;
        *(uint *)(param_1 + 0x6f4) = uVar7;
        *(int *)(param_1 + 0x6f8) = iVar4;
      } while ((int)(uVar12 + 7) < 0 != SCARRY4(uVar12,7));
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x6f4);
    }
    *(uint *)(param_1 + 0x6f4) = uVar7 >> 1;
    *(int *)(param_1 + 0x6f8) = iVar4 + -1;
    if ((uVar7 & 1) == 0) break;
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(undefined4 *)(param_1 + 0x9c) = 0x23;
      return 0;
    }
    do {
      iVar4 = FUN_00e4c7e4(param_1);
      *(undefined4 *)(param_1 + 0x6f8) = 0;
    } while (iVar4 != -1);
    iVar4 = *(int *)(param_1 + 0x98);
  }
LAB_00e4c330:
  uVar7 = *(int *)(param_1 + 0x1f0) - 1;
  if (*(int *)(param_1 + 0x1f0) < 1) {
    uVar6 = 0;
  }
  else if (uVar7 >> 0xe == 0) {
    if (uVar7 < 0x10) {
      uVar6 = (ulong)(char)(&DAT_004c5180)[uVar7];
    }
    else if (uVar7 < 0x200) {
      uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 5] + 5);
    }
    else {
      uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 10] + 10);
    }
  }
  else if (uVar7 >> 0x18 == 0) {
    if (uVar7 >> 0x13 == 0) {
      uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 0xf] + 0xf);
    }
    else {
      uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 0x14] + 0x14);
    }
  }
  else if (uVar7 >> 0x1d == 0) {
    uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 0x19] + 0x19);
  }
  else {
    uVar6 = (ulong)((int)(char)(&DAT_004c5180)[uVar7 >> 0x1e] + 0x1e);
  }
  iVar4 = FUN_00e4c5b8(param_1,uVar6);
  if (iVar4 == -1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1f0) <= iVar4) {
    return 0;
  }
  *param_6 = iVar4;
  lVar8 = param_1 + (long)iVar4 * 6;
  bVar1 = *(byte *)(lVar8 + 500);
  uVar7 = (uint)bVar1;
  if (bVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x6f8);
    iVar11 = *(int *)(param_1 + 0xac);
    if (-1 < iVar4) {
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6f4) = 0;
        do {
          iVar4 = FUN_00e4c7e4(param_1);
          if (iVar4 == -1) {
            uVar12 = 0;
            goto LAB_00e4c52c;
          }
          uVar7 = *(uint *)(param_1 + 0x6f8);
          uVar9 = *(int *)(param_1 + 0x6f4) + (iVar4 << (ulong)(uVar7 & 0x1f));
          iVar4 = uVar7 + 8;
          *(uint *)(param_1 + 0x6f4) = uVar9;
          *(int *)(param_1 + 0x6f8) = iVar4;
        } while ((int)(uVar7 + 7) < 0 != SCARRY4(uVar7,7));
      }
      else {
        uVar9 = *(uint *)(param_1 + 0x6f4);
      }
      iVar4 = iVar4 + -1;
      uVar12 = uVar9 & 1;
      *(int *)(param_1 + 0x6f8) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6f4) = 0;
        do {
          iVar4 = FUN_00e4c7e4(param_1);
          if (iVar4 == -1) goto LAB_00e4c52c;
          uVar7 = *(uint *)(param_1 + 0x6f8);
          uVar9 = *(int *)(param_1 + 0x6f4) + (iVar4 << (ulong)(uVar7 & 0x1f));
          iVar4 = uVar7 + 8;
          *(uint *)(param_1 + 0x6f4) = uVar9;
          *(int *)(param_1 + 0x6f8) = iVar4;
        } while ((int)(uVar7 + 7) < 0 != SCARRY4(uVar7,7));
      }
      else {
        uVar9 = uVar9 >> 1;
      }
      uVar7 = uVar9 & 1;
      iVar4 = iVar4 + -1;
      *(uint *)(param_1 + 0x6f4) = uVar9 >> 1;
      goto LAB_00e4c534;
    }
    uVar12 = 0;
    uVar7 = 0;
    goto LAB_00e4c538;
  }
  iVar11 = *(int *)(param_1 + 0xa8);
  bVar3 = true;
  iVar4 = iVar11 >> 1;
LAB_00e4c570:
  *param_2 = 0;
  iVar10 = iVar4;
LAB_00e4c578:
  *param_3 = iVar10;
  if ((bVar3) || (uVar7 != 0)) {
    *param_4 = iVar4;
  }
  else {
    *param_4 = iVar11 * 3 - *(int *)(param_1 + 0xa8) >> 2;
    iVar11 = *(int *)(param_1 + 0xa8) + iVar11 * 3 >> 2;
  }
  *param_5 = iVar11;
  return 1;
LAB_00e4c52c:
  uVar7 = 0;
  iVar4 = -1;
LAB_00e4c534:
  *(int *)(param_1 + 0x6f8) = iVar4;
LAB_00e4c538:
  cVar2 = *(char *)(lVar8 + 500);
  iVar4 = iVar11 >> 1;
  bVar3 = cVar2 == '\0';
  if ((cVar2 != '\0') && (uVar12 == 0)) {
    *param_2 = iVar11 - *(int *)(param_1 + 0xa8) >> 2;
    iVar10 = *(int *)(param_1 + 0xa8) + iVar11 >> 2;
    goto LAB_00e4c578;
  }
  goto LAB_00e4c570;
}


