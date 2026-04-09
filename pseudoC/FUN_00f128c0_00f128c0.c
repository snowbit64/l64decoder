// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f128c0
// Entry Point: 00f128c0
// Size: 684 bytes
// Signature: undefined FUN_00f128c0(void)


undefined * FUN_00f128c0(long param_1,int *param_2,ulong param_3)

{
  uint uVar1;
  undefined uVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  void *__s;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  void **ppvVar16;
  
  if (param_3 < 0x20) {
    uVar15 = param_3 & 0xffffffff;
    uVar6 = param_3;
    piVar8 = param_2;
    if (param_3 != 0) goto LAB_00f1295c;
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar14 = 0;
    uVar15 = param_3 & 0xffffffff;
    uVar6 = param_3;
    piVar7 = param_2;
    do {
      piVar8 = piVar7 + 3;
      uVar6 = uVar6 - 0xc;
      uVar1 = piVar7[2] + (int)uVar15;
      uVar14 = (uVar1 ^ *piVar7 + uVar14) - (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar9 = (uVar14 ^ piVar7[1] + uVar9) - (uVar14 >> 0xb | uVar14 * 0x200000);
      uVar15 = (ulong)((uVar9 ^ uVar1) - (uVar9 >> 0x19 | uVar9 * 0x80));
      piVar7 = piVar8;
    } while (0x1f < uVar6);
LAB_00f1295c:
    do {
      uVar14 = (uint)uVar15;
      uVar4 = uVar6 - 1;
      uVar14 = uVar14 * 0x20 + (uVar14 >> 2) + (uint)*(byte *)((long)piVar8 + (uVar6 - 1)) ^ uVar14;
      uVar15 = (ulong)uVar14;
      uVar6 = uVar4;
    } while (uVar4 != 0);
  }
  plVar13 = *(long **)(param_1 + 0x18);
  for (puVar12 = *(undefined **)
                  (*plVar13 + (long)(int)(*(int *)((long)plVar13 + 0xc) - 1U & uVar14) * 8);
      puVar12 != (undefined *)0x0; puVar12 = *(undefined **)(puVar12 + 8)) {
    if ((*(uint *)(puVar12 + 0x14) == param_3) &&
       (iVar5 = memcmp(param_2,puVar12 + 0x18,param_3), iVar5 == 0)) {
      if ((puVar12[1] & 0xb) != (~*(byte *)(plVar13 + 4) & 3)) {
        return puVar12;
      }
      puVar12[1] = puVar12[1] ^ 3;
      return puVar12;
    }
  }
  if (0x40000000 < param_3) {
LAB_00f12b64:
                    /* WARNING: Subroutine does not return */
    FUN_00f1007c(param_1);
  }
  puVar12 = (undefined *)FUN_00f10278(param_1,param_3 + 0x19,*(undefined *)(param_1 + 4));
  uVar2 = *(undefined *)(param_1 + 4);
  bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 0x20);
  *puVar12 = 5;
  puVar12[2] = uVar2;
  *(undefined2 *)(puVar12 + 4) = 0x8000;
  *(uint *)(puVar12 + 0x10) = uVar14;
  *(int *)(puVar12 + 0x14) = (int)param_3;
  puVar12[1] = bVar3 & 3;
  memcpy(puVar12 + 0x18,param_2,param_3);
  (puVar12 + 0x18)[param_3] = 0;
  plVar13 = *(long **)(param_1 + 0x18);
  iVar5 = *(int *)(plVar13 + 1);
  uVar9 = *(uint *)((long)plVar13 + 0xc);
  lVar11 = *plVar13;
  lVar10 = (ulong)(uVar9 - 1 & uVar14) * 8;
  *(uint *)(plVar13 + 1) = iVar5 + 1U;
  *(undefined8 *)(puVar12 + 8) = *(undefined8 *)(lVar11 + lVar10);
  *(undefined **)(lVar11 + lVar10) = puVar12;
  if (((int)uVar9 < 0x40000000) && (uVar9 < iVar5 + 1U)) {
    if ((int)uVar9 < 0) goto LAB_00f12b64;
    uVar14 = uVar9 * 2;
    __s = (void *)FUN_00f10090(param_1,(ulong)uVar14 << 3,0);
    ppvVar16 = *(void ***)(param_1 + 0x18);
    if (uVar9 != 0) {
      memset(__s,0,(ulong)uVar14 << 3);
    }
    uVar9 = *(uint *)((long)ppvVar16 + 0xc);
    if (0 < (int)uVar9) {
      uVar6 = 0;
      do {
        lVar10 = *(long *)((long)*ppvVar16 + uVar6 * 8);
        while (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 8);
          uVar1 = *(uint *)(lVar10 + 0x10) & uVar14 - 1;
          uVar15 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          *(undefined8 *)(lVar10 + 8) = *(undefined8 *)((long)__s + uVar15);
          *(long *)((long)__s + uVar15) = lVar10;
          lVar10 = lVar11;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar9);
    }
    FUN_00f1043c(param_1,*ppvVar16,(long)(int)uVar9 << 3,0);
    *(uint *)((long)ppvVar16 + 0xc) = uVar14;
    *ppvVar16 = __s;
  }
  return puVar12;
}


