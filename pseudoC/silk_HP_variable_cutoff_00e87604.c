// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_HP_variable_cutoff
// Entry Point: 00e87604
// Size: 348 bytes
// Signature: undefined silk_HP_variable_cutoff(void)


void silk_HP_variable_cutoff(long param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x11bd) != '\x02') {
    return;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x11c0) != 0) {
    iVar4 = (*(int *)(param_1 + 0x11e0) * 0x3e80000) / *(int *)(param_1 + 0x11c0);
  }
  iVar2 = silk_lin2log(iVar4);
  iVar4 = *(int *)(param_1 + 0x1268);
  sVar1 = silk_lin2log(0x3c0000);
  iVar2 = (iVar2 - (*(int *)(param_1 + 8) >> 8)) +
          (int)(((ulong)((long)(short)iVar4 * (long)(iVar4 * -4)) >> 0x10) *
                (long)(short)((short)iVar2 - sVar1) >> 0x10) + -0x800;
  iVar4 = iVar2 * 3;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  if (iVar4 == -0x33 || iVar4 + 0x33 < 0 != SCARRY4(iVar4,0x33)) {
    iVar4 = -0x33;
  }
  if (0x32 < iVar4) {
    iVar4 = 0x33;
  }
  *(int *)(param_1 + 8) =
       *(int *)(param_1 + 8) +
       (int)((ulong)((long)(iVar4 * *(short *)(param_1 + 0x11b4)) * 0x199a) >> 0x10);
  iVar2 = silk_lin2log(0x3c);
  iVar2 = iVar2 * 0x100;
  iVar3 = silk_lin2log(100);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar2 == iVar3 * 0x100 || iVar2 + iVar3 * -0x100 < 0 != SBORROW4(iVar2,iVar3 * 0x100)) {
    iVar2 = silk_lin2log(100);
    if (iVar4 == iVar2 * 0x100 || iVar4 + iVar2 * -0x100 < 0 != SBORROW4(iVar4,iVar2 * 0x100)) {
      iVar4 = *(int *)(param_1 + 8);
      iVar2 = silk_lin2log(0x3c);
      if (iVar4 + iVar2 * -0x100 < 0 == SBORROW4(iVar4,iVar2 * 0x100)) goto LAB_00e87748;
      goto LAB_00e87738;
    }
LAB_00e8771c:
    uVar5 = 100;
  }
  else {
    iVar2 = silk_lin2log(0x3c);
    if (iVar4 == iVar2 * 0x100 || iVar4 + iVar2 * -0x100 < 0 != SBORROW4(iVar4,iVar2 * 0x100)) {
      iVar4 = *(int *)(param_1 + 8);
      iVar2 = silk_lin2log(100);
      if (iVar4 + iVar2 * -0x100 < 0 == SBORROW4(iVar4,iVar2 * 0x100)) {
LAB_00e87748:
        iVar4 = *(int *)(param_1 + 8);
        goto LAB_00e8774c;
      }
      goto LAB_00e8771c;
    }
LAB_00e87738:
    uVar5 = 0x3c;
  }
  iVar4 = silk_lin2log(uVar5);
  iVar4 = iVar4 << 8;
LAB_00e8774c:
  *(int *)(param_1 + 8) = iVar4;
  return;
}


