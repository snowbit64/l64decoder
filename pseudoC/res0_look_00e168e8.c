// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: res0_look
// Entry Point: 00e168e8
// Size: 656 bytes
// Signature: undefined res0_look(void)


/* WARNING: Removing unreachable block (ram,0x00e16a5c) */

long * res0_look(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined auVar3 [16];
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  void **ppvVar8;
  undefined4 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  size_t __nmemb;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined auVar26 [16];
  
  plVar5 = (long *)calloc(1,0x50);
  lVar11 = *(long *)(param_1 + 8);
  iVar21 = *(int *)(param_2 + 0x1c);
  *plVar5 = param_2;
  uVar1 = *(uint *)(param_2 + 0x14);
  __nmemb = (size_t)(int)uVar1;
  lVar19 = *(long *)(lVar11 + 0x30);
  lVar11 = (long)iVar21 * 0x60;
  *(uint *)(plVar5 + 1) = uVar1;
  lVar14 = *(long *)(lVar19 + 0x1328);
  uVar16 = *(ulong *)(lVar14 + lVar11);
  plVar5[2] = lVar14;
  plVar5[3] = lVar14 + lVar11;
  pvVar6 = calloc(__nmemb,8);
  plVar5[4] = (long)pvVar6;
  if ((int)uVar1 < 1) {
    uVar17 = 0;
  }
  else {
    uVar20 = 0;
    uVar17 = 0;
    iVar21 = 0;
    do {
      uVar4 = ov_ilog(*(undefined4 *)(param_2 + 0x20 + uVar20 * 4));
      if (uVar4 != 0) {
        uVar10 = uVar4;
        if ((int)uVar4 <= (int)uVar17) {
          uVar10 = uVar17;
        }
        pvVar7 = calloc((long)(int)uVar4,8);
        *(void **)((long)pvVar6 + uVar20 * 8) = pvVar7;
        uVar17 = uVar10;
        if (0 < (int)uVar4) {
          uVar10 = *(uint *)(param_2 + 0x20 + uVar20 * 4);
          uVar12 = 0;
          do {
            if ((uVar10 >> (ulong)((uint)uVar12 & 0x1f) & 1) != 0) {
              lVar11 = (long)iVar21;
              iVar21 = iVar21 + 1;
              *(long *)(*(long *)((long)pvVar6 + uVar20 * 8) + uVar12 * 8) =
                   *(long *)(lVar19 + 0x1328) + (long)*(int *)(param_2 + 0x120 + lVar11 * 4) * 0x60;
            }
            uVar12 = uVar12 + 1;
          } while (uVar4 != uVar12);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar1);
  }
  uVar20 = 1;
  uVar4 = (uint)uVar16;
  *(undefined4 *)(plVar5 + 5) = 1;
  if ((int)uVar4 < 1) {
    *(uint *)((long)plVar5 + 0xc) = uVar17;
    ppvVar8 = (void **)malloc(8);
    plVar5[6] = (long)ppvVar8;
    goto LAB_00e16ad8;
  }
  if (uVar4 < 8) {
    uVar10 = 0;
    uVar20 = 1;
LAB_00e16aac:
    iVar21 = uVar4 - uVar10;
    do {
      uVar20 = (ulong)((int)uVar20 * uVar1);
      iVar21 = iVar21 + -1;
    } while (iVar21 != 0);
  }
  else {
    uVar10 = uVar4 & 0xfffffff8;
    iVar21 = 1;
    iVar22 = 1;
    iVar23 = 1;
    iVar24 = 1;
    iVar29 = 1;
    iVar25 = 1;
    iVar27 = 1;
    iVar28 = 1;
    uVar2 = uVar10;
    do {
      iVar21 = iVar21 * uVar1;
      iVar22 = iVar22 * uVar1;
      iVar23 = iVar23 * uVar1;
      iVar24 = iVar24 * uVar1;
      uVar2 = uVar2 - 8;
      iVar25 = iVar25 * uVar1;
      iVar27 = iVar27 * uVar1;
      iVar28 = iVar28 * uVar1;
      iVar29 = iVar29 * uVar1;
    } while (uVar2 != 0);
    iVar25 = iVar25 * iVar21;
    iVar27 = iVar27 * iVar22;
    auVar26._4_4_ = iVar27;
    auVar26._0_4_ = iVar25;
    auVar26._8_4_ = iVar28 * iVar23;
    auVar26._12_4_ = iVar29 * iVar24;
    auVar3._4_4_ = iVar27;
    auVar3._0_4_ = iVar25;
    auVar3._8_4_ = iVar28 * iVar23;
    auVar3._12_4_ = iVar29 * iVar24;
    auVar26 = NEON_ext(auVar26,auVar3,8,1);
    uVar20 = (ulong)(uint)(iVar25 * auVar26._0_4_ * iVar27 * auVar26._4_4_);
    if (uVar10 != uVar4) goto LAB_00e16aac;
  }
  *(int *)(plVar5 + 5) = (int)uVar20;
  *(uint *)((long)plVar5 + 0xc) = uVar17;
  ppvVar8 = (void **)malloc(-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3);
  plVar5[6] = (long)ppvVar8;
  if ((int)uVar20 < 1) {
    return plVar5;
  }
LAB_00e16ad8:
  uVar16 = uVar16 & 0xffffffff;
  uVar12 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
  if ((int)uVar4 < 1) {
    do {
      pvVar6 = malloc(uVar12);
      uVar20 = uVar20 - 1;
      *ppvVar8 = pvVar6;
      ppvVar8 = ppvVar8 + 1;
    } while (uVar20 != 0);
  }
  else {
    uVar18 = 0;
    iVar21 = 0;
    if (uVar1 != 0) {
      iVar21 = (int)uVar20 / (int)uVar1;
    }
    do {
      puVar9 = (undefined4 *)malloc(uVar12);
      ppvVar8[uVar18] = puVar9;
      uVar13 = uVar16;
      lVar11 = (long)iVar21;
      uVar15 = uVar18;
      do {
        lVar14 = 0;
        if (lVar11 != 0) {
          lVar14 = (long)uVar15 / lVar11;
        }
        uVar13 = uVar13 - 1;
        uVar15 = uVar15 - lVar14 * lVar11;
        lVar19 = 0;
        if (__nmemb != 0) {
          lVar19 = lVar11 / (long)__nmemb;
        }
        *puVar9 = (int)lVar14;
        puVar9 = puVar9 + 1;
        lVar11 = lVar19;
      } while (uVar13 != 0);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar20);
  }
  return plVar5;
}


