// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0c6c0
// Entry Point: 00f0c6c0
// Size: 456 bytes
// Signature: undefined FUN_00f0c6c0(void)


void FUN_00f0c6c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x18);
  if (*(byte *)(lVar12 + 0x21) - 1 < 3) {
    *(undefined8 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined8 *)(lVar12 + 0x268) = *(undefined8 *)(lVar12 + 0x260);
    *(undefined *)(lVar12 + 0x21) = 4;
  }
  else if (*(byte *)(lVar12 + 0x21) == 0) goto LAB_00f0c71c;
  do {
    FUN_00f0bfc4(param_1,0xffffffffffffffff);
  } while (*(char *)(lVar12 + 0x21) != '\0');
LAB_00f0c71c:
  for (lVar8 = *(long *)(lVar12 + 0xa90); lVar8 != lVar12 + 0xa78; lVar8 = *(long *)(lVar8 + 0x18))
  {
    *(undefined *)(lVar8 + 3) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x18);
  lVar8 = *(long *)(lVar11 + 0xa70);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  if ((*(byte *)(lVar8 + 1) & 3) != 0) {
    FUN_00f0c8bc(lVar11);
    lVar8 = *(long *)(lVar11 + 0xa70);
  }
  if ((*(byte *)(*(long *)(lVar8 + 0x58) + 1) & 3) != 0) {
    FUN_00f0c8bc(lVar11);
  }
  if ((4 < *(int *)(*(long *)(param_1 + 0x18) + 0xbfc)) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xbf0) + 1) & 3) != 0)) {
    FUN_00f0c8bc(lVar11);
  }
  FUN_00f0d5a4(lVar11);
  *(undefined *)(lVar11 + 0x21) = 1;
  cVar5 = *(char *)(lVar12 + 0x21);
  while (cVar5 != '\0') {
    FUN_00f0bfc4(param_1,0xffffffffffffffff);
    cVar5 = *(char *)(lVar12 + 0x21);
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar7 = uVar3;
  do {
    uVar9 = uVar7;
    uVar1 = uVar9 + 3;
    if (-1 < (int)uVar9) {
      uVar1 = uVar9;
    }
  } while ((0x40 < (int)uVar9) &&
          (uVar7 = uVar9 >> 1, *(uint *)(*(long *)(param_1 + 0x18) + 8) < (uint)((int)uVar1 >> 2)));
  if (uVar9 != uVar3) {
    FUN_00f1250c(param_1);
  }
  iVar4 = *(int *)(lVar12 + 0x58);
  uVar10 = *(ulong *)(lVar12 + 0x48);
  uVar6 = 0;
  if ((long)iVar4 != 0) {
    uVar6 = (uVar10 * (long)((iVar4 * *(int *)(lVar12 + 0x50)) / 100 + -100)) / (ulong)(long)iVar4;
  }
  uVar2 = uVar10;
  if (uVar10 <= uVar6) {
    uVar2 = uVar6;
  }
  *(ulong *)(lVar12 + 0x40) = uVar2;
  *(ulong *)(lVar12 + 0x1120) = (uVar10 / 100) * (long)*(int *)(lVar12 + 0x50);
  return;
}


