// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deflateInit2_
// Entry Point: 00e25fec
// Size: 748 bytes
// Signature: undefined deflateInit2_(void)


undefined8
deflateInit2_(long param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
             char *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  
  if (param_7 == (char *)0x0) {
    return 0xfffffffa;
  }
  if (param_8 != 0x70) {
    return 0xfffffffa;
  }
  if (*param_7 != '1') {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  pcVar9 = *(code **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pcVar9 == (code *)0x0) {
    pcVar9 = zcalloc;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(code **)(param_1 + 0x40) = zcalloc;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00e260ac;
LAB_00e26044:
    uVar10 = 6;
    if (param_2 != 0xffffffff) {
      uVar10 = param_2;
    }
    if (-1 < (int)param_4) goto LAB_00e26054;
LAB_00e260c8:
    uVar11 = 0;
    uVar4 = -param_4;
  }
  else {
    if (*(long *)(param_1 + 0x48) != 0) goto LAB_00e26044;
LAB_00e260ac:
    *(code **)(param_1 + 0x48) = zcfree;
    uVar10 = 6;
    if (param_2 != 0xffffffff) {
      uVar10 = param_2;
    }
    if ((int)param_4 < 0) goto LAB_00e260c8;
LAB_00e26054:
    uVar4 = param_4 - 0x10;
    if (param_4 < 0x10) {
      bVar5 = 0;
      uVar11 = 1;
      uVar4 = param_4;
      goto joined_r0x00e260f4;
    }
    uVar11 = 2;
  }
  bVar5 = 1;
joined_r0x00e260f4:
  if (((((param_6 < 5) && (uVar10 < 10)) && (param_3 == 8)) &&
      ((0xfffffff6 < param_5 - 10U && (7 < uVar4)))) && (uVar4 < 0x10)) {
    if ((bool)(uVar4 == 8 & bVar5)) {
      return 0xfffffffe;
    }
    uVar1 = 9;
    if (uVar4 != 8) {
      uVar1 = uVar4;
    }
    plVar6 = (long *)(*pcVar9)(*(undefined8 *)(param_1 + 0x50),1,0x1740);
    if (plVar6 != (long *)0x0) {
      iVar2 = 1 << (ulong)(uVar1 & 0x1f);
      *(undefined4 *)(plVar6 + 1) = 0x2a;
      *(long **)(param_1 + 0x38) = plVar6;
      *(int *)(plVar6 + 0xb) = iVar2 + -1;
      iVar3 = 1 << (ulong)(param_5 + 7U & 0x1f);
      *plVar6 = param_1;
      *(undefined4 *)(plVar6 + 6) = uVar11;
      plVar6[7] = 0;
      *(int *)((long)plVar6 + 0x84) = iVar3;
      *(uint *)(plVar6 + 0x11) = param_5 + 7U;
      pcVar9 = *(code **)(param_1 + 0x40);
      *(int *)((long)plVar6 + 0x8c) = iVar3 + -1;
      *(uint *)(plVar6 + 0x12) = (param_5 + 9U & 0xff) / 3;
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      *(int *)(plVar6 + 10) = iVar2;
      *(uint *)((long)plVar6 + 0x54) = uVar1;
      lVar8 = (*pcVar9)(uVar7,iVar2,2);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      plVar6[0xc] = lVar8;
      lVar8 = (**(code **)(param_1 + 0x40))(uVar7,*(undefined4 *)(plVar6 + 10),2);
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      plVar6[0xe] = lVar8;
      lVar8 = (**(code **)(param_1 + 0x40))(uVar7,*(undefined4 *)((long)plVar6 + 0x84),2);
      plVar6[0xf] = lVar8;
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      plVar6[0x2e7] = 0;
      iVar2 = 1 << (ulong)(param_5 + 6U & 0x1f);
      pcVar9 = *(code **)(param_1 + 0x40);
      *(int *)(plVar6 + 0x2e1) = iVar2;
      lVar8 = (*pcVar9)(uVar7,iVar2,4);
      uVar4 = *(uint *)(plVar6 + 0x2e1);
      plVar6[2] = lVar8;
      plVar6[3] = (ulong)uVar4 << 2;
      if (((plVar6[0xc] != 0) && (plVar6[0xe] != 0)) && ((plVar6[0xf] != 0 && (lVar8 != 0)))) {
        *(uint *)((long)plVar6 + 0xc4) = uVar10;
        *(uint *)(plVar6 + 0x19) = param_6;
        plVar6[0x2e2] = lVar8 + (ulong)(uVar4 & 0xfffffffe);
        plVar6[0x2e0] = lVar8 + (ulong)uVar4 * 3;
        *(undefined *)(plVar6 + 9) = 8;
        uVar7 = deflateReset(param_1);
        return uVar7;
      }
      *(undefined4 *)(plVar6 + 1) = 0x29a;
      *(undefined8 *)(param_1 + 0x30) = 0x4d2f02;
      deflateEnd(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}


