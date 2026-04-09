// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d6dc04
// Entry Point: 00d6dc04
// Size: 772 bytes
// Signature: undefined FUN_00d6dc04(void)


void FUN_00d6dc04(long param_1,long param_2,long *param_3,void **param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined uVar3;
  uint3 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  ulong uVar48;
  
  lVar16 = *(long *)(param_1 + 0x210) + (long)*(int *)(param_2 + 4);
  uVar15 = *(uint *)(param_1 + 0x30);
  uVar23 = *(uint *)(param_1 + 0x154);
  uVar24 = (ulong)uVar23;
  uVar2 = *(int *)(param_2 + 0x24) * *(int *)(param_2 + 0x1c);
  bVar27 = *(byte *)(lVar16 + 0x90);
  bVar26 = *(byte *)(lVar16 + 0x9a);
  uVar22 = (ulong)bVar26;
  iVar18 = uVar2 * bVar27;
  if (0 < (int)(iVar18 - uVar15)) {
    if ((int)uVar23 < 1) {
      return;
    }
    plVar25 = param_3;
    do {
      memset((void *)(*plVar25 + (ulong)uVar15),
             (uint)*(byte *)((long)(void *)(*plVar25 + (ulong)uVar15) + -1),
             (ulong)(iVar18 + ~uVar15) + 1);
      uVar24 = uVar24 - 1;
      plVar25 = plVar25 + 1;
    } while (uVar24 != 0);
    uVar23 = *(uint *)(param_1 + 0x154);
  }
  if ((0 < (int)uVar23) && (uVar2 != 0)) {
    uVar24 = uVar22 * bVar27;
    uVar15 = (uint)(uVar24 >> 1);
    uVar23 = (uint)uVar24;
    if (bVar26 == 0) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar15 / uVar23;
      }
      do {
        memset(*param_4,uVar5,(ulong)uVar2);
        param_4 = param_4 + 1;
      } while (0 < *(int *)(param_1 + 0x154));
    }
    else if (bVar27 == 0) {
      uVar5 = 0;
      if (uVar23 != 0) {
        uVar5 = uVar15 / uVar23;
      }
      iVar18 = 0;
      do {
        memset(*param_4,uVar5,(ulong)uVar2);
        iVar18 = iVar18 + (uint)bVar26;
        param_4 = param_4 + 1;
      } while (iVar18 < *(int *)(param_1 + 0x154));
    }
    else {
      uVar23 = (uint)bVar27;
      uVar15 = uVar23 - 1;
      lVar16 = 0;
      uVar1 = (ulong)uVar15 + 1;
      lVar17 = 0;
      uVar19 = uVar1 & 0x1fffffff8;
      uVar20 = uVar1 & 0x1fffffff0;
      do {
        uVar6 = 0;
        uVar5 = 0;
        puVar21 = (undefined *)param_4[lVar16];
        do {
          uVar8 = 0;
          lVar10 = 0;
          uVar7 = (ulong)uVar6;
          do {
            lVar13 = param_3[uVar8 + lVar17];
            pbVar9 = (byte *)(lVar13 + uVar7);
            if (uVar15 < 7) {
              iVar18 = 0;
LAB_00d6de78:
              iVar18 = uVar23 - iVar18;
              do {
                iVar18 = iVar18 + -1;
                lVar10 = lVar10 + (ulong)*pbVar9;
                pbVar9 = pbVar9 + 1;
              } while (iVar18 != 0);
            }
            else if (uVar15 < 0xf) {
              uVar14 = 0;
LAB_00d6dd60:
              lVar34 = 0;
              lVar31 = 0;
              lVar33 = 0;
              pbVar9 = pbVar9 + uVar19;
              lVar35 = 0;
              lVar36 = 0;
              lVar37 = 0;
              lVar38 = 0;
              lVar32 = uVar14 - uVar19;
              puVar11 = (undefined8 *)(lVar13 + uVar7 + uVar14);
              do {
                uVar39 = *puVar11;
                lVar32 = lVar32 + 8;
                uVar4 = CONCAT12((char)((ulong)uVar39 >> 8),(short)uVar39) & 0xff00ff;
                bVar26 = (byte)((ulong)uVar39 >> 0x18);
                bVar28 = (byte)((ulong)uVar39 >> 0x28);
                bVar29 = (byte)((ulong)uVar39 >> 0x38);
                bVar27 = (byte)(uVar4 >> 0x10);
                lVar37 = lVar37 + ((ulong)CONCAT14(bVar29,(uint)(byte)((ulong)uVar39 >> 0x30)) &
                                  0xffffffff);
                lVar38 = lVar38 + (ulong)bVar29;
                lVar35 = lVar35 + ((ulong)((uint6)CONCAT14(bVar28,(uint)CONCAT12(bVar28,(ushort)(
                                                  byte)((ulong)uVar39 >> 0x20))) & 0xffff0000ffff) &
                                  0xffffffff);
                lVar36 = lVar36 + (ulong)bVar28;
                lVar31 = lVar31 + ((ulong)CONCAT14(bVar26,(uint)(byte)((ulong)uVar39 >> 0x10)) &
                                  0xffffffff);
                lVar33 = lVar33 + (ulong)bVar26;
                lVar10 = lVar10 + ((ulong)((uint6)CONCAT14(bVar27,(uint)uVar4) & 0xffff0000ffff) &
                                  0xffffffff);
                lVar34 = lVar34 + (ulong)bVar27;
                puVar11 = puVar11 + 1;
              } while (lVar32 != 0);
              iVar18 = (int)uVar19;
              lVar10 = lVar10 + lVar35 + lVar31 + lVar37 + lVar34 + lVar36 + lVar33 + lVar38;
              if (uVar1 != uVar19) goto LAB_00d6de78;
            }
            else {
              lVar33 = 0;
              lVar32 = 0;
              lVar31 = 0;
              lVar36 = 0;
              lVar37 = 0;
              lVar34 = 0;
              lVar35 = 0;
              lVar43 = 0;
              lVar44 = 0;
              lVar38 = 0;
              lVar40 = 0;
              lVar45 = 0;
              lVar46 = 0;
              lVar41 = 0;
              lVar42 = 0;
              puVar12 = (ulong *)(lVar13 + uVar7);
              uVar14 = uVar20;
              do {
                uVar48 = puVar12[1];
                uVar47 = *puVar12;
                uVar14 = uVar14 - 0x10;
                bVar27 = (byte)(uVar47 >> 0x18);
                bVar29 = (byte)(uVar47 >> 0x38);
                uVar4 = CONCAT12((char)(uVar48 >> 8),(short)uVar48) & 0xff00ff;
                bVar26 = (byte)(uVar48 >> 0x18);
                bVar28 = (byte)(uVar48 >> 0x28);
                bVar30 = (byte)(uVar48 >> 0x38);
                lVar34 = lVar34 + ((ulong)CONCAT14(bVar29,(uint)(byte)(uVar47 >> 0x30)) & 0xffffffff
                                  );
                lVar35 = lVar35 + (ulong)bVar29;
                lVar38 = lVar38 + ((ulong)CONCAT14(bVar26,(uint)(byte)(uVar48 >> 0x10)) & 0xffffffff
                                  );
                lVar40 = lVar40 + (ulong)bVar26;
                lVar43 = lVar43 + (ulong)(ushort)uVar4;
                lVar44 = lVar44 + (ulong)(byte)(uVar4 >> 0x10);
                lVar36 = lVar36 + (uVar47 >> 0x20 & 0xff);
                lVar37 = lVar37 + (uVar47 >> 0x28 & 0xff);
                lVar32 = lVar32 + ((ulong)CONCAT14(bVar27,(uint)(byte)(uVar47 >> 0x10)) & 0xffffffff
                                  );
                lVar31 = lVar31 + (ulong)bVar27;
                lVar45 = lVar45 + ((ulong)((uint6)CONCAT14(bVar28,(uint)CONCAT12(bVar28,(ushort)(
                                                  byte)(uVar48 >> 0x20))) & 0xffff0000ffff) &
                                  0xffffffff);
                lVar46 = lVar46 + (ulong)bVar28;
                lVar10 = lVar10 + (uVar47 & 0xff);
                lVar33 = lVar33 + (uVar47 >> 8 & 0xff);
                lVar41 = lVar41 + ((ulong)CONCAT14(bVar30,(uint)(byte)(uVar48 >> 0x30)) & 0xffffffff
                                  );
                lVar42 = lVar42 + (ulong)bVar30;
                puVar12 = puVar12 + 2;
              } while (uVar14 != 0);
              lVar10 = lVar10 + lVar43 + lVar36 + lVar45 + lVar32 + lVar38 + lVar34 + lVar41 +
                       lVar33 + lVar44 + lVar37 + lVar46 + lVar31 + lVar40 + lVar35 + lVar42;
              if (uVar1 != uVar20) {
                uVar14 = uVar20;
                if (((uint)uVar1 >> 3 & 1) == 0) {
                  pbVar9 = pbVar9 + uVar20;
                  iVar18 = (int)uVar20;
                  goto LAB_00d6de78;
                }
                goto LAB_00d6dd60;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar22);
          uVar5 = uVar5 + 1;
          uVar6 = uVar6 + uVar23;
          uVar3 = 0;
          if (uVar24 != 0) {
            uVar3 = (undefined)((long)(lVar10 + (uVar24 >> 1)) / (long)uVar24);
          }
          *puVar21 = uVar3;
          puVar21 = puVar21 + 1;
        } while (uVar5 != uVar2);
        lVar17 = lVar17 + uVar22;
        lVar16 = lVar16 + 1;
      } while (lVar17 < *(int *)(param_1 + 0x154));
    }
  }
  return;
}


