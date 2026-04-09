// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00df5f04
// Entry Point: 00df5f04
// Size: 5436 bytes
// Signature: undefined FUN_00df5f04(void)


undefined8 FUN_00df5f04(long param_1)

{
  size_t __nmemb;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint *puVar15;
  void *pvVar16;
  void *pvVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  uint uVar36;
  int iVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  uint *puVar41;
  code *pcVar42;
  long lVar43;
  ulong *puVar44;
  uint uVar45;
  int *piVar46;
  int *piVar47;
  ulong uVar48;
  ulong uVar49;
  int iVar50;
  ulong uVar51;
  int iVar52;
  uint *puVar53;
  uint *puVar54;
  uint *puVar55;
  long lVar56;
  size_t __nmemb_00;
  long lVar57;
  undefined4 *puVar58;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_88;
  long local_80;
  
  uVar13 = *(uint *)(param_1 + 8);
  uVar14 = 0xffffffe9;
  uVar4 = *(uint *)(param_1 + 4) >> 3;
  uVar38 = (ulong)~*(uint *)(param_1 + 0x30) & 1;
  uVar34 = (ulong)(*(uint *)(param_1 + 0x30) >> 1 ^ 0xffffffff) & 1;
  uVar5 = uVar13 >> 3;
  uVar26 = (ulong)uVar5;
  uVar38 = uVar38 + uVar4 >> uVar38;
  uVar39 = uVar34 + uVar26 >> uVar34;
  uVar23 = uVar4 + 3 >> 2;
  uVar24 = (uint)uVar38;
  uVar36 = (uint)uVar39;
  uVar11 = uVar5 + 3 >> 2;
  uVar49 = uVar39 * uVar38;
  uVar31 = uVar24 + 3 >> 2;
  uVar45 = uVar36 + 3 >> 2;
  uVar34 = (ulong)uVar23 * (ulong)uVar11;
  uVar12 = uVar45 * uVar31;
  uVar29 = uVar12 * 2;
  uVar32 = (uint)uVar34;
  uVar33 = uVar29 + uVar32;
  if ((((uVar49 <= uVar49 * 2) && ((uVar34 & 0xffffffff00000000) == 0)) && (uVar12 <= uVar29)) &&
     (CARRY4(uVar29,uVar32) == false)) {
    local_88 = uVar26 * uVar4;
    __nmemb = uVar49 * 2 + local_88;
    local_80 = uVar49 + local_88;
    puVar53 = (uint *)(param_1 + 0x98);
    *puVar53 = uVar4;
    *(uint *)(param_1 + 0x9c) = uVar5;
    *(uint *)(param_1 + 0x100) = uVar31;
    *(uint *)(param_1 + 0x104) = uVar45;
    *(uint *)(param_1 + 0xd8) = uVar31;
    *(uint *)(param_1 + 0xdc) = uVar45;
    uVar34 = uVar34 & 0xffffffff;
    *(uint *)(param_1 + 0xe8) = uVar24;
    *(uint *)(param_1 + 0xec) = uVar36;
    __nmemb_00 = uVar34 << 2;
    *(uint *)(param_1 + 0xc0) = uVar24;
    *(uint *)(param_1 + 0xc4) = uVar36;
    uVar48 = (ulong)(uVar12 + uVar32);
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(long *)(param_1 + 0xa8) = local_88;
    *(uint *)(param_1 + 0xb0) = uVar23;
    *(uint *)(param_1 + 0xb4) = uVar11;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(uint *)(param_1 + 0xbc) = uVar32;
    *(long *)(param_1 + 0xf0) = local_80;
    *(ulong *)(param_1 + 0xf8) = uVar49;
    *(long *)(param_1 + 200) = local_88;
    *(ulong *)(param_1 + 0xd0) = uVar49;
    *(uint *)(param_1 + 0x108) = uVar12 + uVar32;
    *(uint *)(param_1 + 0x10c) = uVar12;
    *(uint *)(param_1 + 0xe0) = uVar32;
    *(uint *)(param_1 + 0xe4) = uVar12;
    *(size_t *)(param_1 + 0x128) = __nmemb;
    puVar15 = (uint *)calloc(__nmemb,4);
    *(uint **)(param_1 + 0x110) = puVar15;
    pvVar16 = malloc(__nmemb * 2);
    *(uint *)(param_1 + 0x140) = uVar33;
    *(void **)(param_1 + 0x120) = pvVar16;
    pvVar17 = malloc((ulong)uVar33 << 7);
    *(void **)(param_1 + 0x130) = pvVar17;
    pvVar18 = calloc((ulong)uVar33,1);
    *(void **)(param_1 + 0x138) = pvVar18;
    *(uint *)(param_1 + 0x158) = uVar23 << 1;
    *(uint *)(param_1 + 0x15c) = uVar11 << 1;
    *(size_t *)(param_1 + 0x160) = __nmemb_00;
    pvVar19 = calloc(__nmemb_00,0x60);
    *(void **)(param_1 + 0x148) = pvVar19;
    pvVar20 = calloc(__nmemb_00,1);
    *(void **)(param_1 + 0x150) = pvVar20;
    pvVar21 = malloc(__nmemb * 8);
    uVar14 = 0xffffffff;
    *(void **)(param_1 + 0x168) = pvVar21;
    if ((((puVar15 != (uint *)0x0) && (pvVar16 != (void *)0x0)) &&
        ((pvVar17 != (void *)0x0 && ((pvVar18 != (void *)0x0 && (pvVar19 != (void *)0x0)))))) &&
       ((uVar14 = 0xffffffff, pvVar20 != (void *)0x0 && (pvVar21 != (void *)0x0)))) {
      uVar33 = *(uint *)(param_1 + 0x98);
      if (7 < uVar13) {
        uVar13 = 0;
        uVar29 = 0;
        lVar22 = 0;
        uVar23 = uVar5;
        if (3 < uVar5) {
          uVar23 = 4;
        }
        if (uVar23 < 2) {
          uVar23 = 1;
        }
        uVar11 = uVar33;
        if (3 < (int)uVar33) {
          uVar11 = 4;
        }
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        do {
          if (0 < (int)uVar33) {
            lVar43 = 0;
            uVar31 = uVar11;
            uVar45 = uVar33;
            do {
              uVar12 = uVar45 - 4;
              uVar49 = (ulong)uVar29;
              if (3 < (int)uVar45) {
                uVar45 = 4;
              }
              uVar25 = 0;
              if (uVar45 < 2) {
                uVar45 = 1;
              }
              puVar1 = (undefined8 *)((long)pvVar17 + uVar49 * 0x80);
              lVar57 = lVar43 + lVar22;
              piVar46 = &DAT_0054be6c;
              uVar51 = (ulong)uVar31 & 0xfffffffe;
              puVar1[0xd] = 0xffffffffffffffff;
              puVar1[0xc] = 0xffffffffffffffff;
              puVar1[0xf] = 0xffffffffffffffff;
              puVar1[0xe] = 0xffffffffffffffff;
              puVar1[9] = 0xffffffffffffffff;
              puVar1[8] = 0xffffffffffffffff;
              puVar1[0xb] = 0xffffffffffffffff;
              puVar1[10] = 0xffffffffffffffff;
              puVar1[5] = 0xffffffffffffffff;
              puVar1[4] = 0xffffffffffffffff;
              puVar1[7] = 0xffffffffffffffff;
              puVar1[6] = 0xffffffffffffffff;
              puVar1[1] = 0xffffffffffffffff;
              *puVar1 = 0xffffffffffffffff;
              puVar1[3] = 0xffffffffffffffff;
              puVar1[2] = 0xffffffffffffffff;
              puVar58 = &DAT_0054be64;
              do {
                if (uVar31 < 2) {
                  uVar40 = 0;
LAB_00df6a90:
                  lVar56 = uVar40 << 3;
                  do {
                    piVar47 = (int *)((long)puVar58 + lVar56);
                    lVar3 = lVar57 + uVar40;
                    uVar40 = uVar40 + 1;
                    lVar56 = lVar56 + 8;
                    *(long *)((long)pvVar17 +
                             (long)piVar47[2] * 8 + (long)*piVar47 * 0x20 + uVar49 * 0x80) = lVar3;
                  } while (uVar45 != uVar40);
                }
                else {
                  uVar40 = 0;
                  piVar47 = piVar46;
                  do {
                    iVar37 = *piVar47;
                    iVar52 = piVar47[2];
                    lVar56 = lVar57 + uVar40;
                    uVar40 = uVar40 + 2;
                    *(long *)((long)pvVar17 +
                             (long)*piVar47 * 8 + (long)piVar47[-2] * 0x20 + uVar49 * 0x80) = lVar56
                    ;
                    *(long *)((long)pvVar17 + (long)iVar52 * 8 + (long)iVar37 * 0x20 + uVar49 * 0x80
                             ) = lVar56 + 1;
                    piVar47 = piVar47 + 4;
                  } while (((ulong)uVar45 & 0xfffffffe) != uVar40);
                  uVar40 = uVar51;
                  if (uVar51 != uVar31) goto LAB_00df6a90;
                }
                lVar57 = lVar57 + (int)uVar33;
                uVar25 = uVar25 + 1;
                piVar46 = piVar46 + 8;
                puVar58 = puVar58 + 8;
              } while (uVar25 != uVar23);
              puVar1 = (undefined8 *)((long)pvVar17 + uVar49 * 0x80);
              lVar43 = lVar43 + 4;
              uVar31 = uVar12;
              if (3 < (int)uVar12) {
                uVar31 = 4;
              }
              uVar29 = uVar29 + 1;
              if (uVar31 < 2) {
                uVar31 = 1;
              }
              *(byte *)((long)pvVar18 + uVar49) =
                   ~(byte)((ulong)puVar1[0xe] >> 0x3a) & 0x20 |
                   ~(byte)((ulong)puVar1[8] >> 0x3b) & 0x10 |
                   ~(byte)((ulong)puVar1[4] >> 0x3c) & 8 |
                   ~(byte)((ulong)*puVar1 >> 0x3d) & 4 | *(byte *)((long)pvVar18 + uVar49);
              uVar45 = uVar12;
            } while ((int)lVar43 < (int)uVar33);
          }
          uVar13 = uVar13 + 4;
          uVar23 = (int)uVar26 - 4;
          uVar26 = (ulong)uVar23;
          lVar22 = lVar22 + (int)(uVar33 << 2);
          if (3 < (int)uVar23) {
            uVar23 = 4;
          }
          if (uVar23 < 2) {
            uVar23 = 1;
          }
        } while (uVar13 < uVar5);
      }
      if (uVar36 != 0) {
        uVar13 = 0;
        uVar29 = 0;
        uVar26 = uVar39 & 0xffffffff;
        uVar23 = uVar36;
        if (3 < (int)uVar36) {
          uVar23 = 4;
        }
        if (uVar23 < 2) {
          uVar23 = 1;
        }
        uVar11 = uVar24;
        if (3 < (int)uVar24) {
          uVar11 = 4;
        }
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        do {
          if (uVar24 != 0) {
            lVar22 = 0;
            uVar49 = uVar38 & 0xffffffff;
            uVar31 = uVar11;
            do {
              uVar45 = (uint)uVar49;
              uVar12 = uVar45 - 4;
              uVar25 = (ulong)uVar29;
              if (3 < (int)uVar45) {
                uVar45 = 4;
              }
              uVar49 = 0;
              if (uVar45 < 2) {
                uVar45 = 1;
              }
              puVar1 = (undefined8 *)((long)pvVar17 + uVar25 * 0x80 + uVar34 * 0x80);
              uVar51 = (ulong)uVar31 & 0xfffffffe;
              lVar43 = lVar22 + local_88;
              piVar46 = &DAT_0054be6c;
              puVar1[0xd] = 0xffffffffffffffff;
              puVar1[0xc] = 0xffffffffffffffff;
              puVar1[0xf] = 0xffffffffffffffff;
              puVar1[0xe] = 0xffffffffffffffff;
              puVar1[9] = 0xffffffffffffffff;
              puVar1[8] = 0xffffffffffffffff;
              puVar1[0xb] = 0xffffffffffffffff;
              puVar1[10] = 0xffffffffffffffff;
              puVar1[5] = 0xffffffffffffffff;
              puVar1[4] = 0xffffffffffffffff;
              puVar1[7] = 0xffffffffffffffff;
              puVar1[6] = 0xffffffffffffffff;
              puVar1[1] = 0xffffffffffffffff;
              *puVar1 = 0xffffffffffffffff;
              puVar1[3] = 0xffffffffffffffff;
              puVar1[2] = 0xffffffffffffffff;
              puVar58 = &DAT_0054be64;
              do {
                if (uVar31 < 2) {
                  uVar40 = 0;
LAB_00df6314:
                  lVar57 = uVar40 << 3;
                  do {
                    piVar47 = (int *)((long)puVar58 + lVar57);
                    lVar56 = lVar43 + uVar40;
                    uVar40 = uVar40 + 1;
                    lVar57 = lVar57 + 8;
                    *(long *)((long)pvVar17 +
                             (long)piVar47[2] * 8 +
                             (long)*piVar47 * 0x20 + uVar25 * 0x80 + uVar34 * 0x80) = lVar56;
                  } while (uVar45 != uVar40);
                }
                else {
                  uVar40 = 0;
                  piVar47 = piVar46;
                  do {
                    iVar37 = *piVar47;
                    iVar52 = piVar47[2];
                    lVar57 = lVar43 + uVar40;
                    lVar56 = uVar25 * 0x80 + uVar34 * 0x80;
                    uVar40 = uVar40 + 2;
                    *(long *)((long)pvVar17 + (long)*piVar47 * 8 + (long)piVar47[-2] * 0x20 + lVar56
                             ) = lVar57;
                    *(long *)((long)pvVar17 + (long)iVar52 * 8 + (long)iVar37 * 0x20 + lVar56) =
                         lVar57 + 1;
                    piVar47 = piVar47 + 4;
                  } while (((ulong)uVar45 & 0xfffffffe) != uVar40);
                  uVar40 = uVar51;
                  if (uVar51 != uVar31) goto LAB_00df6314;
                }
                lVar43 = lVar43 + (uVar38 & 0xffffffff);
                uVar49 = uVar49 + 1;
                piVar46 = piVar46 + 8;
                puVar58 = puVar58 + 8;
              } while (uVar49 != uVar23);
              puVar1 = (undefined8 *)((long)pvVar17 + uVar25 * 0x80 + uVar34 * 0x80);
              lVar22 = lVar22 + 4;
              uVar29 = uVar29 + 1;
              uVar31 = uVar12;
              if (3 < (int)uVar12) {
                uVar31 = 4;
              }
              if (uVar31 < 2) {
                uVar31 = 1;
              }
              uVar49 = (ulong)uVar12;
              *(byte *)((long)pvVar18 + uVar25 + uVar34) =
                   ~(byte)((ulong)puVar1[0xe] >> 0x3a) & 0x20 |
                   ~(byte)((ulong)puVar1[8] >> 0x3b) & 0x10 |
                   ~(byte)((ulong)puVar1[4] >> 0x3c) & 8 |
                   ~(byte)((ulong)*puVar1 >> 0x3d) & 4 | *(byte *)((long)pvVar18 + uVar25 + uVar34);
            } while ((int)lVar22 < (int)uVar24);
          }
          uVar23 = (int)uVar26 - 4;
          uVar26 = (ulong)uVar23;
          if (3 < (int)uVar23) {
            uVar23 = 4;
          }
          local_88 = local_88 + (int)(uVar24 << 2);
          uVar13 = uVar13 + 4;
          if (uVar23 < 2) {
            uVar23 = 1;
          }
        } while (uVar13 < uVar36);
      }
      if (uVar36 != 0) {
        uVar13 = 0;
        uVar29 = 0;
        uVar23 = uVar36;
        if (3 < (int)uVar36) {
          uVar23 = 4;
        }
        if (uVar23 < 2) {
          uVar23 = 1;
        }
        uVar11 = uVar24;
        if (3 < (int)uVar24) {
          uVar11 = 4;
        }
        uVar39 = uVar39 & 0xffffffff;
        if (uVar11 < 2) {
          uVar11 = 1;
        }
        do {
          if (uVar24 != 0) {
            lVar22 = 0;
            uVar26 = uVar38 & 0xffffffff;
            uVar31 = uVar11;
            do {
              uVar45 = (uint)uVar26;
              uVar12 = uVar45 - 4;
              uVar34 = (ulong)uVar29;
              if (3 < (int)uVar45) {
                uVar45 = 4;
              }
              uVar26 = 0;
              if (uVar45 < 2) {
                uVar45 = 1;
              }
              puVar1 = (undefined8 *)((long)pvVar17 + uVar34 * 0x80 + uVar48 * 0x80);
              piVar46 = &DAT_0054be6c;
              uVar49 = (ulong)uVar31 & 0xfffffffe;
              lVar43 = lVar22 + local_80;
              puVar1[0xd] = 0xffffffffffffffff;
              puVar1[0xc] = 0xffffffffffffffff;
              puVar1[0xf] = 0xffffffffffffffff;
              puVar1[0xe] = 0xffffffffffffffff;
              puVar1[9] = 0xffffffffffffffff;
              puVar1[8] = 0xffffffffffffffff;
              puVar1[0xb] = 0xffffffffffffffff;
              puVar1[10] = 0xffffffffffffffff;
              puVar1[5] = 0xffffffffffffffff;
              puVar1[4] = 0xffffffffffffffff;
              puVar1[7] = 0xffffffffffffffff;
              puVar1[6] = 0xffffffffffffffff;
              puVar1[1] = 0xffffffffffffffff;
              *puVar1 = 0xffffffffffffffff;
              puVar1[3] = 0xffffffffffffffff;
              puVar1[2] = 0xffffffffffffffff;
              puVar58 = &DAT_0054be64;
              do {
                if (uVar31 < 2) {
                  uVar25 = 0;
LAB_00df652c:
                  lVar57 = uVar25 << 3;
                  do {
                    piVar47 = (int *)((long)puVar58 + lVar57);
                    lVar56 = lVar43 + uVar25;
                    uVar25 = uVar25 + 1;
                    lVar57 = lVar57 + 8;
                    *(long *)((long)pvVar17 +
                             (long)piVar47[2] * 8 +
                             (long)*piVar47 * 0x20 + uVar34 * 0x80 + uVar48 * 0x80) = lVar56;
                  } while (uVar45 != uVar25);
                }
                else {
                  uVar25 = 0;
                  piVar47 = piVar46;
                  do {
                    iVar37 = *piVar47;
                    iVar52 = piVar47[2];
                    lVar57 = lVar43 + uVar25;
                    lVar56 = uVar34 * 0x80 + uVar48 * 0x80;
                    uVar25 = uVar25 + 2;
                    *(long *)((long)pvVar17 + (long)*piVar47 * 8 + (long)piVar47[-2] * 0x20 + lVar56
                             ) = lVar57;
                    *(long *)((long)pvVar17 + (long)iVar52 * 8 + (long)iVar37 * 0x20 + lVar56) =
                         lVar57 + 1;
                    piVar47 = piVar47 + 4;
                  } while (((ulong)uVar45 & 0xfffffffe) != uVar25);
                  uVar25 = uVar49;
                  if (uVar49 != uVar31) goto LAB_00df652c;
                }
                lVar43 = lVar43 + (uVar38 & 0xffffffff);
                uVar26 = uVar26 + 1;
                piVar46 = piVar46 + 8;
                puVar58 = puVar58 + 8;
              } while (uVar26 != uVar23);
              puVar1 = (undefined8 *)((long)pvVar17 + uVar34 * 0x80 + uVar48 * 0x80);
              lVar22 = lVar22 + 4;
              uVar29 = uVar29 + 1;
              uVar31 = uVar12;
              if (3 < (int)uVar12) {
                uVar31 = 4;
              }
              if (uVar31 < 2) {
                uVar31 = 1;
              }
              uVar26 = (ulong)uVar12;
              *(byte *)((long)pvVar18 + uVar34 + uVar48) =
                   ~(byte)((ulong)puVar1[0xe] >> 0x3a) & 0x20 |
                   ~(byte)((ulong)puVar1[8] >> 0x3b) & 0x10 |
                   ~(byte)((ulong)puVar1[4] >> 0x3c) & 8 |
                   ~(byte)((ulong)*puVar1 >> 0x3d) & 4 | *(byte *)((long)pvVar18 + uVar34 + uVar48);
            } while ((int)lVar22 < (int)uVar24);
          }
          uVar23 = (int)uVar39 - 4;
          uVar39 = (ulong)uVar23;
          if (3 < (int)uVar23) {
            uVar23 = 4;
          }
          local_80 = local_80 + (int)(uVar24 << 2);
          if (uVar23 < 2) {
            uVar23 = 1;
          }
          uVar13 = uVar13 + 4;
        } while (uVar13 < uVar36);
      }
      iVar37 = *(int *)(param_1 + 0x9c);
      if ((0 < iVar37) && (0 < (int)uVar33)) {
        uVar38 = 0;
        pcVar42 = (code *)(&PTR_FUN_01013208)[*(int *)(param_1 + 0x30)];
        iVar52 = 0;
        local_a8 = 1;
        local_b8 = 2;
        local_b0 = 3;
        do {
          if (0 < (int)uVar33) {
            uVar13 = (uint)uVar38 | 2;
            uVar26 = 0;
            iVar37 = iVar52;
            do {
              while( true ) {
                iVar28 = iVar37;
                uVar34 = (uint)(iVar52 << 2) + uVar26;
                uVar39 = uVar34 & 0xffffffff;
                lVar22 = (long)(int)uVar33;
                plVar2 = (long *)((long)pvVar19 + uVar39 * 0x60);
                plVar2[9] = -1;
                plVar2[8] = -1;
                plVar2[0xb] = -1;
                plVar2[10] = -1;
                plVar2[5] = -1;
                plVar2[4] = -1;
                plVar2[7] = -1;
                plVar2[6] = -1;
                plVar2[1] = -1;
                *plVar2 = -1;
                plVar2[3] = -1;
                plVar2[2] = -1;
                if (((long)uVar26 < lVar22) && ((long)uVar38 < (long)*(int *)(param_1 + 0x9c))) {
                  lVar43 = uVar26 + uVar38 * lVar22;
                  lVar22 = uVar26 + local_a8 * lVar22;
                  *plVar2 = lVar43;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 8) = lVar43 + 1;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 0x10) = lVar22;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 0x18) = lVar22 + 1;
                  (*pcVar42)(plVar2,puVar53,uVar26 & 0xffffffff,uVar38 & 0xffffffff);
                }
                else {
                  *(undefined *)((long)pvVar20 + uVar39) = 0xff;
                }
                uVar29 = (uint)uVar26 | 2;
                uVar49 = (ulong)uVar29;
                uVar39 = uVar34 & 0xffffffff | 3;
                plVar2 = (long *)((long)pvVar19 + uVar39 * 0x60);
                uVar33 = *puVar53;
                plVar2[9] = -1;
                plVar2[8] = -1;
                plVar2[0xb] = -1;
                plVar2[10] = -1;
                plVar2[5] = -1;
                plVar2[4] = -1;
                plVar2[7] = -1;
                plVar2[6] = -1;
                plVar2[1] = -1;
                *plVar2 = -1;
                plVar2[3] = -1;
                plVar2[2] = -1;
                if (((int)uVar29 < (int)uVar33) && ((long)uVar38 < (long)*(int *)(param_1 + 0x9c)))
                {
                  lVar43 = uVar38 * (long)(int)uVar33;
                  lVar22 = (uVar38 | 1) * (long)(int)uVar33;
                  *plVar2 = lVar43 + uVar49;
                  *(ulong *)((long)pvVar19 + uVar39 * 0x60 + 8) = lVar43 + (uVar49 | 1);
                  *(ulong *)((long)pvVar19 + uVar39 * 0x60 + 0x10) = lVar22 + uVar49;
                  *(ulong *)((long)pvVar19 + uVar39 * 0x60 + 0x18) = lVar22 + (uVar49 | 1);
                  (*pcVar42)(plVar2,puVar53,uVar29,uVar38 & 0xffffffff);
                }
                else {
                  *(undefined *)((long)pvVar20 + uVar39) = 0xff;
                }
                uVar39 = uVar34 & 0xffffffff | 1;
                plVar2 = (long *)((long)pvVar19 + uVar39 * 0x60);
                lVar22 = (long)(int)*puVar53;
                plVar2[9] = -1;
                plVar2[8] = -1;
                plVar2[0xb] = -1;
                plVar2[10] = -1;
                plVar2[5] = -1;
                plVar2[4] = -1;
                plVar2[7] = -1;
                plVar2[6] = -1;
                plVar2[1] = -1;
                *plVar2 = -1;
                plVar2[3] = -1;
                plVar2[2] = -1;
                if (((long)uVar26 < lVar22) && ((int)uVar13 < *(int *)(param_1 + 0x9c))) {
                  lVar43 = uVar26 + local_b8 * lVar22;
                  lVar22 = uVar26 + local_b0 * lVar22;
                  *plVar2 = lVar43;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 8) = lVar43 + 1;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 0x10) = lVar22;
                  *(long *)((long)pvVar19 + uVar39 * 0x60 + 0x18) = lVar22 + 1;
                  (*pcVar42)(plVar2,puVar53,uVar26 & 0xffffffff,uVar13);
                }
                else {
                  *(undefined *)((long)pvVar20 + uVar39) = 0xff;
                }
                uVar34 = uVar34 & 0xffffffff | 2;
                plVar2 = (long *)((long)pvVar19 + uVar34 * 0x60);
                uVar33 = *puVar53;
                plVar2[9] = -1;
                plVar2[8] = -1;
                plVar2[0xb] = -1;
                plVar2[10] = -1;
                plVar2[5] = -1;
                plVar2[4] = -1;
                plVar2[7] = -1;
                plVar2[6] = -1;
                plVar2[1] = -1;
                *plVar2 = -1;
                plVar2[3] = -1;
                plVar2[2] = -1;
                if (((int)uVar33 <= (int)uVar29) || (*(int *)(param_1 + 0x9c) <= (int)uVar13))
                break;
                lVar43 = (long)(int)uVar33 * (long)(int)uVar13;
                lVar22 = ((long)(int)uVar13 | 1U) * (long)(int)uVar33;
                *plVar2 = lVar43 + uVar49;
                *(ulong *)((long)pvVar19 + uVar34 * 0x60 + 0x18) = lVar22 + (uVar49 | 1);
                *(ulong *)((long)pvVar19 + uVar34 * 0x60 + 8) = lVar43 + (uVar49 | 1);
                *(ulong *)((long)pvVar19 + uVar34 * 0x60 + 0x10) = lVar22 + uVar49;
                (*pcVar42)(plVar2,puVar53,uVar29,uVar13);
                uVar33 = *puVar53;
                uVar26 = uVar26 + 4;
                iVar37 = iVar28 + 1;
                if ((int)uVar33 <= (int)uVar26) goto LAB_00df65e8;
              }
              *(undefined *)((long)pvVar20 + uVar34) = 0xff;
              uVar26 = uVar26 + 4;
              iVar37 = iVar28 + 1;
            } while ((int)uVar26 < (int)uVar33);
LAB_00df65e8:
            iVar52 = iVar28 + 1;
            iVar37 = *(int *)(param_1 + 0x9c);
          }
          uVar38 = uVar38 + 4;
          local_a8 = local_a8 + 4;
          local_b0 = local_b0 + 4;
          local_b8 = local_b8 + 4;
        } while ((long)uVar38 < (long)iVar37);
        puVar15 = *(uint **)(param_1 + 0x110);
      }
      lVar22 = 0;
      *(undefined4 *)(param_1 + 0x2ec) = 0;
      puVar53 = puVar15;
      do {
        iVar28 = *(int *)(param_1 + 0x14);
        iVar10 = *(int *)(param_1 + 0x18);
        iVar37 = *(int *)(param_1 + 0xc) + iVar28;
        iVar52 = *(int *)(param_1 + 0x10) + iVar10;
        iVar30 = iVar37;
        if (lVar22 != 0) {
          uVar33 = *(uint *)(param_1 + 0x30) & 1;
          iVar30 = iVar37 + 1 >> 1;
          if (uVar33 != 0) {
            iVar30 = iVar37;
          }
          iVar28 = iVar28 >> (uVar33 ^ 1);
          if ((*(uint *)(param_1 + 0x30) >> 1 & 1) == 0) {
            iVar52 = iVar52 + 1 >> 1;
            iVar10 = iVar10 >> 1;
          }
        }
        lVar43 = param_1 + lVar22 * 0x28;
        puVar15 = puVar15 + *(long *)(lVar43 + 0xa8);
        if (puVar53 < puVar15) {
          piVar46 = (int *)(lVar43 + 0x98);
          if ((iVar30 <= iVar28) || (iVar52 <= iVar10)) {
            iVar37 = *piVar46;
            if (iVar37 < 1) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            do {
              puVar41 = puVar53;
              if (0 < iVar37) {
                puVar54 = puVar53 + iVar37;
                if (puVar53 + iVar37 <= puVar53 + 1) {
                  puVar54 = puVar53 + 1;
                }
                if (0x1b < (long)puVar54 + ~(ulong)puVar53) {
                  puVar44 = (ulong *)(puVar53 + 4);
                  uVar38 = ((long)puVar54 + ~(ulong)puVar53 >> 2) + 1;
                  uVar34 = uVar38 & 0x7ffffffffffffff8;
                  puVar41 = puVar53 + uVar34;
                  uVar26 = uVar34;
                  do {
                    uVar26 = uVar26 - 8;
                    puVar44[-1] = puVar44[-1] | 0x200000002;
                    puVar44[-2] = puVar44[-2] | 0x200000002;
                    puVar44[1] = puVar44[1] | 0x200000002;
                    *puVar44 = *puVar44 | 0x200000002;
                    puVar44 = puVar44 + 4;
                  } while (uVar26 != 0);
                  if (uVar38 == uVar34) goto joined_r0x00df7374;
                }
                do {
                  puVar53 = puVar41 + 1;
                  *puVar41 = *puVar41 | 2;
                  puVar41 = puVar53;
                } while (puVar53 < puVar53 + iVar37);
              }
joined_r0x00df7374:
              puVar53 = puVar41;
              if (puVar15 <= puVar53) goto LAB_00df6af4;
              iVar37 = *piVar46;
            } while( true );
          }
          iVar37 = *piVar46;
          if (iVar37 < 1) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          lVar57 = (long)iVar10;
          lVar43 = (long)iVar52;
          uVar38 = 0;
          uVar26 = 8;
          do {
            if (0 < iVar37) {
              puVar41 = puVar53 + iVar37;
              if ((iVar10 < (int)uVar26) && ((long)uVar38 < lVar43)) {
                uVar34 = uVar38 | 3;
                uVar39 = uVar38 | 4;
                uVar49 = uVar38 | 5;
                uVar48 = uVar38 | 6;
                uVar25 = uVar38 | 7;
                puVar54 = puVar53;
                uVar33 = 0;
                do {
                  while ((uVar13 = uVar33 + 8, (int)uVar13 <= iVar28 || (iVar30 <= (int)uVar33))) {
                    puVar53 = puVar54 + 1;
                    *puVar54 = *puVar54 | 2;
                    puVar54 = puVar53;
                    uVar33 = uVar13;
                    if (puVar41 <= puVar53) goto LAB_00df7330;
                  }
                  if (((int)uVar33 < iVar28) ||
                     (((iVar30 < (int)uVar13 || ((long)uVar38 < lVar57)) || (iVar52 < (int)uVar26)))
                     ) {
                    uVar29 = (uint)(iVar28 <= (int)(uVar33 | 2) && (int)(uVar33 | 2) < iVar30);
                    uVar23 = (uint)(iVar28 <= (int)(uVar33 | 3) && (int)(uVar33 | 3) < iVar30);
                    uVar11 = (uint)(iVar28 <= (int)(uVar33 | 6) && (int)(uVar33 | 6) < iVar30);
                    uVar31 = (uint)(iVar28 <= (int)(uVar33 | 1) && (int)(uVar33 | 1) < iVar30);
                    uVar45 = (uint)(iVar28 <= (int)(uVar33 | 7) && (int)(uVar33 | 7) < iVar30);
                    uVar12 = uVar31;
                    if (iVar28 <= (int)uVar33) {
                      uVar12 = uVar31 + 1;
                    }
                    uVar4 = (uint)(iVar28 <= (int)(uVar33 | 4) && (int)(uVar33 | 4) < iVar30);
                    uVar5 = (uint)(iVar28 <= (int)(uVar33 | 5) && (int)(uVar33 | 5) < iVar30);
                    iVar37 = uVar12 + uVar29 + uVar23 + uVar4 + uVar5 + uVar11 + uVar45;
                    if ((long)uVar38 < lVar57) {
                      uVar27 = 0;
                      iVar50 = 0;
                    }
                    else {
                      uVar51 = 2;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      uVar40 = 4;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 8;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x10;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x20;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x40;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar27 = 0x80;
                      if (uVar45 == 0) {
                        uVar27 = 0;
                      }
                      uVar27 = uVar51 | iVar28 <= (int)uVar33 | uVar40 | uVar35 | uVar6 | uVar7 |
                               uVar8 | uVar27;
                      iVar50 = iVar37;
                    }
                    if (lVar57 <= (long)(uVar38 | 1) && (long)(uVar38 | 1) < lVar43) {
                      uVar51 = 0x200;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x400;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x800;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x1000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x2000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x4000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x8000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 8 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                    }
                    if ((long)(uVar38 | 2) < lVar57 || lVar43 <= (long)(uVar38 | 2)) {
                      if (lVar57 <= (long)uVar34 && (long)uVar34 < lVar43) goto LAB_00df6fd4;
LAB_00df6efc:
                      if (lVar57 <= (long)uVar39 && (long)uVar39 < lVar43) goto LAB_00df705c;
LAB_00df6f04:
                      if (lVar57 <= (long)uVar49 && (long)uVar49 < lVar43) goto LAB_00df70e0;
LAB_00df6f08:
                      if (lVar57 <= (long)uVar48 && (long)uVar48 < lVar43) goto LAB_00df7164;
LAB_00df6f0c:
                      if (lVar57 <= (long)uVar25 && (long)uVar25 < lVar43) goto LAB_00df71e8;
LAB_00df6f10:
                      uVar40 = (ulong)*(uint *)(param_1 + 0x2ec);
                      uVar51 = uVar40;
                      if ((int)*(uint *)(param_1 + 0x2ec) < 1) goto LAB_00df7278;
LAB_00df6f20:
                      uVar35 = 0;
                      puVar44 = (ulong *)(param_1 + 0x2f0);
                      do {
                        if (*puVar44 == uVar27) goto LAB_00df7290;
                        uVar35 = uVar35 + 1;
                        puVar44 = puVar44 + 2;
                        uVar40 = uVar51;
                      } while (uVar51 != uVar35);
                    }
                    else {
                      uVar51 = 0x20000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x40000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x80000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x100000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x200000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x400000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x800000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x10 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      if (lVar57 > (long)uVar34 || (long)uVar34 >= lVar43) goto LAB_00df6efc;
LAB_00df6fd4:
                      uVar51 = 0x2000000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x4000000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x8000000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x10000000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x20000000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x40000000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x80000000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x18 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      if (lVar57 > (long)uVar39 || (long)uVar39 >= lVar43) goto LAB_00df6f04;
LAB_00df705c:
                      uVar51 = 0x200000000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x400000000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x800000000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x1000000000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x2000000000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x4000000000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x8000000000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x20 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      if (lVar57 > (long)uVar49 || (long)uVar49 >= lVar43) goto LAB_00df6f08;
LAB_00df70e0:
                      uVar51 = 0x20000000000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x40000000000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x80000000000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x100000000000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x200000000000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x400000000000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x800000000000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x28 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      if (lVar57 > (long)uVar48 || (long)uVar48 >= lVar43) goto LAB_00df6f0c;
LAB_00df7164:
                      uVar51 = 0x2000000000000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      iVar50 = iVar37 + iVar50;
                      uVar40 = 0x4000000000000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x8000000000000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x10000000000000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x20000000000000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x40000000000000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x80000000000000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x30 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      if (lVar57 > (long)uVar25 || (long)uVar25 >= lVar43) goto LAB_00df6f10;
LAB_00df71e8:
                      iVar50 = iVar37 + iVar50;
                      uVar51 = 0x200000000000000;
                      if (uVar31 == 0) {
                        uVar51 = 0;
                      }
                      uVar40 = 0x400000000000000;
                      if (uVar29 == 0) {
                        uVar40 = 0;
                      }
                      uVar35 = 0x800000000000000;
                      if (uVar23 == 0) {
                        uVar35 = 0;
                      }
                      uVar6 = 0x1000000000000000;
                      if (uVar4 == 0) {
                        uVar6 = 0;
                      }
                      uVar7 = 0x2000000000000000;
                      if (uVar5 == 0) {
                        uVar7 = 0;
                      }
                      uVar8 = 0x4000000000000000;
                      if (uVar11 == 0) {
                        uVar8 = 0;
                      }
                      uVar9 = 0x8000000000000000;
                      if (uVar45 == 0) {
                        uVar9 = 0;
                      }
                      uVar27 = uVar27 | (ulong)(iVar28 <= (int)uVar33) << 0x38 | uVar51 | uVar40 |
                               uVar35 | uVar6 | uVar7 | uVar8 | uVar9;
                      uVar40 = (ulong)*(uint *)(param_1 + 0x2ec);
                      uVar51 = uVar40;
                      if (0 < (int)*(uint *)(param_1 + 0x2ec)) goto LAB_00df6f20;
LAB_00df7278:
                      uVar51 = 0;
                    }
                    lVar56 = param_1 + uVar51 * 0x10;
                    *(int *)(param_1 + 0x2ec) = (int)uVar40 + 1;
                    *(ulong *)(lVar56 + 0x2f0) = uVar27;
                    *(int *)(lVar56 + 0x2f8) = iVar50;
                    uVar35 = uVar51;
LAB_00df7290:
                    *puVar54 = *puVar54 & 0xffff0000 |
                               *puVar54 & 0x7ff | ((uint)uVar35 & 0x1f) << 0xb;
                  }
                  else {
                    *puVar54 = *puVar54 | 0xf800;
                  }
                  puVar53 = puVar54 + 1;
                  puVar54 = puVar53;
                  uVar33 = uVar13;
                } while (puVar53 < puVar41);
              }
              else {
                puVar54 = puVar53 + iVar37;
                if (puVar53 + iVar37 <= puVar53 + 1) {
                  puVar54 = puVar53 + 1;
                }
                puVar55 = puVar53;
                if (0x1b < (long)puVar54 + ~(ulong)puVar53) {
                  puVar44 = (ulong *)(puVar53 + 4);
                  uVar38 = ((long)puVar54 + ~(ulong)puVar53 >> 2) + 1;
                  uVar39 = uVar38 & 0x7ffffffffffffff8;
                  puVar53 = puVar53 + uVar39;
                  uVar34 = uVar39;
                  do {
                    uVar34 = uVar34 - 8;
                    puVar44[-1] = puVar44[-1] | 0x200000002;
                    puVar44[-2] = puVar44[-2] | 0x200000002;
                    puVar44[1] = puVar44[1] | 0x200000002;
                    *puVar44 = *puVar44 | 0x200000002;
                    puVar44 = puVar44 + 4;
                  } while (uVar34 != 0);
                  puVar55 = puVar53;
                  if (uVar38 == uVar39) goto LAB_00df7330;
                }
                do {
                  puVar53 = puVar55 + 1;
                  *puVar55 = *puVar55 | 2;
                  puVar55 = puVar53;
                } while (puVar53 < puVar41);
              }
            }
LAB_00df7330:
            if (puVar15 <= puVar53) break;
            iVar37 = *piVar46;
            uVar38 = uVar26;
            uVar26 = uVar26 + 8;
          } while( true );
        }
LAB_00df6af4:
        lVar22 = lVar22 + 1;
      } while (lVar22 != 3);
      uVar14 = 0;
    }
  }
  return uVar14;
}


