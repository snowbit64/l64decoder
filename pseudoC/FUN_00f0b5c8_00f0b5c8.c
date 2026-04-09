// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0b5c8
// Entry Point: 00f0b5c8
// Size: 532 bytes
// Signature: undefined FUN_00f0b5c8(void)


int FUN_00f0b5c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar3 = *(undefined2 *)(param_1 + 0x50);
  lVar12 = *(long *)(param_1 + 0x20);
  lVar13 = *(long *)(param_1 + 0x40);
  cVar2 = *(char *)(param_1 + 5);
  iVar5 = FUN_00f0a814();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    lVar10 = *(long *)(param_1 + 0x30);
    puVar8[1] = puVar8[-1];
    *puVar8 = puVar8[-2];
    puVar8 = (undefined8 *)(lVar10 + param_5);
    uVar7 = *puVar8;
    lVar10 = *(long *)(param_1 + 8);
    *(undefined8 *)(lVar10 + -8) = puVar8[1];
    *(undefined8 *)(lVar10 + -0x10) = uVar7;
    lVar10 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) - lVar10 < 0x11) {
      iVar1 = *(int *)(param_1 + 0x48);
      iVar4 = iVar1 << 1;
      if (iVar1 < 1) {
        iVar4 = iVar1 + 1;
      }
                    /* try { // try from 00f0b650 to 00f0b673 has its CatchHandler @ 00f0b7dc */
      FUN_00f0a950(param_1,iVar4);
      lVar10 = *(long *)(param_1 + 8);
    }
    *(long *)(param_1 + 8) = lVar10 + 0x10;
    FUN_00f0ac4c(param_1,lVar10 + -0x10,1);
  }
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 5) = 0;
    *(undefined2 *)(param_1 + 0x50) = uVar3;
    pcVar9 = *(code **)(*(long *)(param_1 + 0x18) + 0x1078);
  }
  else {
    *(undefined2 *)(param_1 + 0x50) = uVar3;
    pcVar9 = *(code **)(*(long *)(param_1 + 0x18) + 0x1078);
  }
  if ((pcVar9 != (code *)0x0) && ((*pcVar9)(param_1), *(char *)(param_1 + 3) == '\x06')) {
    return 0;
  }
  uVar11 = lVar12 - lVar13;
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x30) + param_4);
  FUN_00f0bb9c(param_1,puVar8);
  if (iVar5 - 2U < 2) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + -0x10);
    puVar8[1] = *(undefined8 *)(*(long *)(param_1 + 8) + -8);
    *puVar8 = uVar7;
  }
  else {
    if (iVar5 == 5) {
      pcVar6 = "error in error handling";
      uVar7 = 0x17;
    }
    else {
      if (iVar5 != 4) goto LAB_00f0b734;
      pcVar6 = "not enough memory";
      uVar7 = 0x11;
    }
    uVar7 = FUN_00f128c0(param_1,pcVar6,uVar7);
    *puVar8 = uVar7;
    *(undefined4 *)((long)puVar8 + 0xc) = 5;
  }
LAB_00f0b734:
  lVar12 = *(long *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(lVar12 + uVar11);
  *(ulong *)(param_1 + 0x20) = lVar12 + uVar11;
  *(undefined8 **)(param_1 + 8) = puVar8 + 2;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  if ((20000 < (int)*(uint *)(param_1 + 0x4c)) && ((int)(uVar11 >> 3) * -0x33333333 < 19999)) {
    lVar13 = FUN_00f10724(param_1,lVar12,(ulong)*(uint *)(param_1 + 0x4c) * 0x28,800000,
                          *(undefined *)(param_1 + 2));
    *(undefined4 *)(param_1 + 0x4c) = 20000;
    *(long *)(param_1 + 0x38) = lVar13 + 0xc34d8;
    *(long *)(param_1 + 0x40) = lVar13;
    *(long *)(param_1 + 0x20) = lVar13 + (*(long *)(param_1 + 0x20) - lVar12);
  }
  return iVar5;
}


