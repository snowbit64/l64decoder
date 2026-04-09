// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f1266c
// Entry Point: 00f1266c
// Size: 596 bytes
// Signature: undefined FUN_00f1266c(void)


long FUN_00f1266c(long param_1,long param_2)

{
  int *__s2;
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  void *__s;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  void **ppvVar14;
  long lVar15;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  uVar10 = (ulong)uVar2;
  __s2 = (int *)(param_2 + 0x18);
  if (uVar2 < 0x20) {
    uVar5 = uVar10;
    uVar12 = uVar10;
    uVar11 = uVar2;
    piVar7 = __s2;
    if (uVar2 == 0) goto LAB_00f12724;
  }
  else {
    uVar9 = 0;
    uVar11 = 0;
    uVar5 = uVar10;
    piVar6 = __s2;
    uVar12 = uVar10;
    do {
      piVar7 = piVar6 + 3;
      uVar5 = uVar5 - 0xc;
      uVar1 = piVar6[2] + (int)uVar12;
      uVar11 = (uVar1 ^ *piVar6 + uVar11) - (uVar1 >> 0xe | uVar1 * 0x40000);
      uVar9 = (uVar11 ^ piVar6[1] + uVar9) - (uVar11 >> 0xb | uVar11 * 0x200000);
      uVar12 = (ulong)((uVar9 ^ uVar1) - (uVar9 >> 0x19 | uVar9 * 0x80));
      piVar6 = piVar7;
    } while (0x1f < uVar5);
  }
  do {
    uVar11 = (uint)uVar12;
    uVar3 = uVar5 - 1;
    uVar11 = uVar11 * 0x20 + (uVar11 >> 2) + (uint)*(byte *)((long)piVar7 + (uVar5 - 1)) ^ uVar11;
    uVar5 = uVar3;
    uVar12 = (ulong)uVar11;
  } while (uVar3 != 0);
LAB_00f12724:
  plVar13 = *(long **)(param_1 + 0x18);
  uVar9 = *(int *)((long)plVar13 + 0xc) - 1U & uVar11;
  lVar15 = *(long *)(*plVar13 + (long)(int)uVar9 * 8);
  while( true ) {
    if (lVar15 == 0) {
      lVar8 = (long)(int)uVar9 * 8;
      *(uint *)(param_2 + 0x10) = uVar11;
      *(undefined *)(param_2 + uVar10 + 0x18) = 0;
      lVar15 = *plVar13;
      *(undefined2 *)(param_2 + 4) = 0x8000;
      iVar4 = *(int *)(plVar13 + 1);
      uVar2 = *(uint *)((long)plVar13 + 0xc);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(lVar15 + lVar8);
      *(long *)(lVar15 + lVar8) = param_2;
      *(uint *)(plVar13 + 1) = iVar4 + 1U;
      if ((uVar2 < iVar4 + 1U) && ((int)uVar2 < 0x40000000)) {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00f1007c(param_1);
        }
        uVar11 = uVar2 * 2;
        __s = (void *)FUN_00f10090(param_1,(ulong)uVar11 << 3,0);
        ppvVar14 = *(void ***)(param_1 + 0x18);
        if (uVar2 != 0) {
          memset(__s,0,(ulong)uVar11 << 3);
        }
        uVar2 = *(uint *)((long)ppvVar14 + 0xc);
        if (0 < (int)uVar2) {
          uVar10 = 0;
          do {
            lVar15 = *(long *)((long)*ppvVar14 + uVar10 * 8);
            while (lVar15 != 0) {
              lVar8 = *(long *)(lVar15 + 8);
              uVar9 = *(uint *)(lVar15 + 0x10) & uVar11 - 1;
              uVar5 = -(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3;
              *(undefined8 *)(lVar15 + 8) = *(undefined8 *)((long)__s + uVar5);
              *(long *)((long)__s + uVar5) = lVar15;
              lVar15 = lVar8;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar2);
        }
        FUN_00f1043c(param_1,*ppvVar14,(long)(int)uVar2 << 3,0);
        *(uint *)((long)ppvVar14 + 0xc) = uVar11;
        *ppvVar14 = __s;
      }
      return param_2;
    }
    if ((*(uint *)(lVar15 + 0x14) == uVar2) &&
       (iVar4 = memcmp((void *)(lVar15 + 0x18),__s2,uVar10), iVar4 == 0)) break;
    lVar15 = *(long *)(lVar15 + 8);
  }
  if ((*(byte *)(lVar15 + 1) & 0xb) != (~*(byte *)(plVar13 + 4) & 3)) {
    return lVar15;
  }
  *(byte *)(lVar15 + 1) = *(byte *)(lVar15 + 1) ^ 3;
  return lVar15;
}


