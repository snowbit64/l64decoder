// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0bdd8
// Entry Point: 00f0bdd8
// Size: 492 bytes
// Signature: undefined FUN_00f0bdd8(void)


ulong FUN_00f0bdd8(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar14 = *(long *)(param_1 + 0x18);
  iVar2 = *(int *)(lVar14 + 0x54);
  iVar3 = *(int *)(lVar14 + 0x58);
  lVar4 = *(long *)(lVar14 + 0x40);
  lVar11 = *(long *)(lVar14 + 0x48);
  if (*(code **)(lVar14 + 0x1040) == (code *)0x0) {
    cVar13 = *(char *)(lVar14 + 0x21);
  }
  else {
    (**(code **)(lVar14 + 0x1040))(param_1,0);
    cVar13 = *(char *)(lVar14 + 0x21);
  }
  if (cVar13 == '\0') {
    uVar15 = lua_clock();
    cVar13 = *(char *)(lVar14 + 0x21);
    *(undefined8 *)(lVar14 + 0x1128) = uVar15;
  }
  lVar6 = FUN_00f0bfc4(param_1,(long)((iVar2 * iVar3) / 100));
  uVar5 = 0;
  if ((long)*(int *)(lVar14 + 0x54) != 0) {
    uVar5 = (ulong)(lVar6 * 100) / (ulong)(long)*(int *)(lVar14 + 0x54);
  }
  uVar7 = *(ulong *)(lVar14 + 0x48);
  if (*(char *)(lVar14 + 0x21) == '\0') {
    dVar16 = *(double *)(lVar14 + 0x1130);
    dVar17 = dVar16 - *(double *)(lVar14 + 0x1138);
    uVar9 = (uVar7 / 100) * (long)*(int *)(lVar14 + 0x50);
    uVar8 = uVar9;
    if (0.001 <= dVar17) {
      lVar11 = *(long *)(lVar14 + 0x1110);
      lVar6 = *(long *)(lVar14 + 0x1118);
      iVar2 = *(int *)(lVar14 + 0x110c);
      iVar10 = (int)((ulong)(lVar11 - *(long *)(lVar14 + 0x1120)) >> 10);
      dVar18 = *(double *)(lVar14 + 0x1128);
      lVar4 = lVar14 + ((ulong)*(uint *)(lVar14 + 0x1108) & 0x1f) * 4;
      *(uint *)(lVar14 + 0x1108) = *(uint *)(lVar14 + 0x1108) + 1;
      iVar3 = *(int *)(lVar4 + 0x1088);
      *(int *)(lVar4 + 0x1088) = iVar10;
      iVar2 = iVar2 + (iVar10 - iVar3);
      *(int *)(lVar14 + 0x110c) = iVar2;
      uVar12 = uVar9 - ((long)((dVar16 - dVar18) *
                              ((double)(unkuint9)(ulong)(lVar11 - lVar6) / dVar17)) +
                       (long)(((double)iVar10 * 0.405 + (double)iVar2 * 0.243) * 1024.0));
      uVar1 = uVar9;
      if ((long)uVar12 <= (long)uVar9) {
        uVar1 = uVar12;
      }
      uVar8 = uVar7;
      if ((long)uVar7 <= (long)uVar12) {
        uVar8 = uVar1;
      }
    }
    *(ulong *)(lVar14 + 0x40) = uVar8;
    *(ulong *)(lVar14 + 0x1120) = uVar9;
    uVar15 = lua_clock();
    *(undefined8 *)(lVar14 + 0x1138) = uVar15;
    *(undefined8 *)(lVar14 + 0x1118) = *(undefined8 *)(lVar14 + 0x48);
  }
  else {
    uVar8 = lVar11 - lVar4;
    uVar7 = uVar7 + uVar5;
    *(ulong *)(lVar14 + 0x40) = uVar7;
    if (uVar8 <= uVar7) {
      *(ulong *)(lVar14 + 0x40) = uVar7 - uVar8;
    }
  }
  if (*(code **)(lVar14 + 0x1040) != (code *)0x0) {
    (**(code **)(lVar14 + 0x1040))(param_1,cVar13);
  }
  return uVar5;
}


