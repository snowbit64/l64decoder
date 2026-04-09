// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scalarize
// Entry Point: 00c4e444
// Size: 1248 bytes
// Signature: undefined scalarize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::scalarize() */

void IR_Section::scalarize(void)

{
  undefined (*pauVar1) [16];
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined (*pauVar5) [16];
  undefined8 *puVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  bool bVar10;
  uint uVar11;
  uint uVar12;
  IR_Function **in_x0;
  uint *puVar13;
  IR_Function *pIVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined (*pauVar21) [16];
  ulong uVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  byte bVar27;
  byte bVar32;
  uint3 uVar28;
  byte bVar31;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  ulong uVar29;
  undefined8 uVar30;
  byte bVar37;
  byte bVar38;
  byte bVar42;
  uint3 uVar39;
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined8 uVar40;
  byte bVar47;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  bool local_8c [4];
  void *local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  local_80 = (void *)0x0;
  local_78 = (void *)0x0;
  local_88 = (void *)0x0;
  if (*(uint *)(*in_x0 + 0x98) != 0) {
    uVar22 = (ulong)*(uint *)(*in_x0 + 0x98) * 4;
    local_88 = operator_new(uVar22);
    pvVar3 = (void *)((long)local_88 + uVar22);
    local_78 = pvVar3;
    memset(local_88,0xff,uVar22);
    local_80 = pvVar3;
  }
  pIVar14 = in_x0[4];
  local_8c[0] = false;
  if (in_x0[5] != pIVar14) {
    uVar22 = 0;
    uVar11 = 0;
    do {
      piVar15 = *(int **)(pIVar14 + uVar22 * 8);
      iVar4 = *piVar15;
      uVar12 = piVar15[1];
      if (iVar4 == 0x12) {
        uVar16 = piVar15[2];
        if (-1 < (int)uVar16) {
          uVar12 = *(uint *)((long)piVar15 + ((ulong)(uVar12 >> 0xe) & 0x3fffc) + 8);
                    /* try { // try from 00c4e538 to 00c4e57b has its CatchHandler @ 00c4e930 */
          puVar13 = (uint *)IR_RegisterSet::getRegisterType
                                      ((IR_RegisterSet *)(*in_x0 + 0x98),uVar16);
          if (((*puVar13 - 1 < 2) && (*puVar13 < 3)) && (puVar13[2] - 3 < 7)) {
            pIVar14 = *in_x0;
            if ((int)uVar12 < 0) {
              puVar6 = (undefined8 *)
                       (*(long *)(pIVar14 + 0x80) + (ulong)(uVar12 & 0x7fffffff) * 0x18);
              uStack_68 = puVar6[1];
              local_70 = *puVar6;
                    /* try { // try from 00c4e67c to 00c4e683 has its CatchHandler @ 00c4e930 */
              uVar12 = IR_Function::storeConst(pIVar14,(IR_Const *)&local_70);
              *(uint *)((long)local_88 + (ulong)uVar16 * 4) = uVar12 | 0x80000000;
            }
            else {
              piVar15 = (int *)IR_RegisterSet::getRegisterType
                                         ((IR_RegisterSet *)(pIVar14 + 0x98),uVar12);
              if (*piVar15 == 0) {
                uVar17 = *(uint *)((long)local_88 + (ulong)uVar12 * 4);
              }
              else {
                uVar17 = *(uint *)((long)local_88 + (ulong)uVar12 * 4);
                if (uVar17 == 0xffffffff) goto LAB_00c4e4f0;
              }
              if (uVar17 != 0xffffffff) {
                uVar12 = uVar17;
              }
              *(uint *)((long)local_88 + (ulong)uVar16 * 4) = uVar12;
            }
          }
        }
      }
      else {
        uVar22 = (ulong)uVar12 & 0xffff;
        uVar16 = (uint)uVar22;
        if (iVar4 < 0x1a) {
          if (iVar4 == 0xe) {
            scalarizeInstToConstruct((IR_Section *)in_x0,uVar11,0,(vector *)&local_88,local_8c);
          }
          else if (iVar4 == 0x10) {
            scalarizeInstToConstruct((IR_Section *)in_x0,uVar11,0,(vector *)&local_88,local_8c);
          }
          else if (iVar4 == 0x11) {
            if (uVar16 != 0) {
              lVar2 = (ulong)(uVar12 >> 0x10) + 2;
              iVar4 = piVar15[lVar2];
              if (uVar16 < 8) {
                uVar19 = 0;
                bVar10 = true;
LAB_00c4e884:
                lVar18 = uVar22 - uVar19;
                piVar15 = piVar15 + lVar2 + uVar19;
                do {
                  lVar18 = lVar18 + -1;
                  bVar10 = (bool)(*piVar15 == iVar4 & bVar10);
                  piVar15 = piVar15 + 1;
                } while (lVar18 != 0);
              }
              else {
                uVar23 = (undefined)iVar4;
                uVar24 = (undefined)((uint)iVar4 >> 8);
                uVar25 = (undefined)((uint)iVar4 >> 0x10);
                uVar26 = (undefined)((uint)iVar4 >> 0x18);
                if (uVar16 < 0x10) {
                  bVar10 = true;
                  uVar20 = 0;
LAB_00c4e6c0:
                  uVar19 = (ulong)(uVar12 & 0xffff) & 0xfff8;
                  uVar29 = CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(
                                                  bVar10,CONCAT12(bVar10,CONCAT11(bVar10,bVar10)))))
                                                  ));
                  lVar18 = uVar20 - uVar19;
                  pauVar21 = (undefined (*) [16])(piVar15 + lVar2 + uVar20);
                  do {
                    lVar18 = lVar18 + 8;
                    auVar51[4] = uVar23;
                    auVar51._0_4_ = iVar4;
                    auVar51[5] = uVar24;
                    auVar51[6] = uVar25;
                    auVar51[7] = uVar26;
                    auVar51._8_4_ = iVar4;
                    auVar51._12_4_ = iVar4;
                    auVar49 = NEON_cmeq(*pauVar21,auVar51,4);
                    auVar8[4] = uVar23;
                    auVar8._0_4_ = iVar4;
                    auVar8[5] = uVar24;
                    auVar8[6] = uVar25;
                    auVar8[7] = uVar26;
                    auVar8._8_4_ = iVar4;
                    auVar8._12_4_ = iVar4;
                    auVar48 = NEON_cmeq(pauVar21[1],auVar8,4);
                    uVar29 = CONCAT17(auVar48[12],
                                      CONCAT16(auVar48[8],
                                               CONCAT15(auVar48[4],
                                                        CONCAT14(auVar48[0],
                                                                 CONCAT13(auVar49[12],
                                                                          CONCAT12(auVar49[8],
                                                                                   CONCAT11(auVar49[
                                                  4],auVar49[0]))))))) & uVar29;
                    pauVar21 = pauVar21 + 2;
                  } while (lVar18 != 0);
                  bVar10 = ((uint)(byte)((byte)uVar29 ^ 1) |
                            (uint)(byte)((byte)(uVar29 >> 8) ^ 1) << 1 |
                            (uint)(byte)((byte)(uVar29 >> 0x10) ^ 1) << 2 |
                            (uint)(byte)((byte)(uVar29 >> 0x18) ^ 1) << 3 |
                            (uint)(byte)((byte)(uVar29 >> 0x20) ^ 1) << 4 |
                            (uint)(byte)((byte)(uVar29 >> 0x28) ^ 1) << 5 |
                            (uint)(byte)((byte)(uVar29 >> 0x30) ^ 1) << 6 |
                           (uint)(byte)((byte)(uVar29 >> 0x38) ^ 1) << 7) == 0;
                  if (uVar19 != (uVar12 & 0xffff)) goto LAB_00c4e884;
                }
                else {
                  uVar19 = (ulong)uVar12 & 0xfff0;
                  pauVar21 = (undefined (*) [16])(piVar15 + lVar2);
                  uVar30 = 0x101010101010101;
                  uVar40 = 0x101010101010101;
                  uVar20 = uVar19;
                  do {
                    uVar20 = uVar20 - 0x10;
                    auVar48[4] = uVar23;
                    auVar48._0_4_ = iVar4;
                    auVar48[5] = uVar24;
                    auVar48[6] = uVar25;
                    auVar48[7] = uVar26;
                    auVar48._8_4_ = iVar4;
                    auVar48._12_4_ = iVar4;
                    auVar48 = NEON_cmeq(*pauVar21,auVar48,4);
                    pauVar1 = pauVar21 + 2;
                    pauVar5 = pauVar21 + 3;
                    auVar49[4] = uVar23;
                    auVar49._0_4_ = iVar4;
                    auVar49[5] = uVar24;
                    auVar49[6] = uVar25;
                    auVar49[7] = uVar26;
                    auVar49._8_4_ = iVar4;
                    auVar49._12_4_ = iVar4;
                    auVar49 = NEON_cmeq(pauVar21[1],auVar49,4);
                    pauVar21 = pauVar21 + 4;
                    auVar50[4] = uVar23;
                    auVar50._0_4_ = iVar4;
                    auVar50[5] = uVar24;
                    auVar50[6] = uVar25;
                    auVar50[7] = uVar26;
                    auVar50._8_4_ = iVar4;
                    auVar50._12_4_ = iVar4;
                    auVar51 = NEON_cmeq(*pauVar1,auVar50,4);
                    auVar9[4] = uVar23;
                    auVar9._0_4_ = iVar4;
                    auVar9[5] = uVar24;
                    auVar9[6] = uVar25;
                    auVar9[7] = uVar26;
                    auVar9._8_4_ = iVar4;
                    auVar9._12_4_ = iVar4;
                    auVar50 = NEON_cmeq(*pauVar5,auVar9,4);
                    bVar27 = auVar48[0] & (byte)uVar30;
                    bVar31 = auVar48[4] & (byte)((ulong)uVar30 >> 8);
                    bVar32 = auVar48[8] & (byte)((ulong)uVar30 >> 0x10);
                    bVar33 = auVar48[12] & (byte)((ulong)uVar30 >> 0x18);
                    bVar34 = auVar49[0] & (byte)((ulong)uVar30 >> 0x20);
                    bVar35 = auVar49[4] & (byte)((ulong)uVar30 >> 0x28);
                    bVar36 = auVar49[8] & (byte)((ulong)uVar30 >> 0x30);
                    bVar37 = auVar49[12] & (byte)((ulong)uVar30 >> 0x38);
                    uVar30 = CONCAT17(bVar37,CONCAT16(bVar36,CONCAT15(bVar35,CONCAT14(bVar34,
                                                  CONCAT13(bVar33,CONCAT12(bVar32,CONCAT11(bVar31,
                                                  bVar27)))))));
                    bVar38 = auVar51[0] & (byte)uVar40;
                    bVar41 = auVar51[4] & (byte)((ulong)uVar40 >> 8);
                    bVar42 = auVar51[8] & (byte)((ulong)uVar40 >> 0x10);
                    bVar43 = auVar51[12] & (byte)((ulong)uVar40 >> 0x18);
                    bVar44 = auVar50[0] & (byte)((ulong)uVar40 >> 0x20);
                    bVar45 = auVar50[4] & (byte)((ulong)uVar40 >> 0x28);
                    bVar46 = auVar50[8] & (byte)((ulong)uVar40 >> 0x30);
                    bVar47 = auVar50[12] & (byte)((ulong)uVar40 >> 0x38);
                    uVar40 = CONCAT17(bVar47,CONCAT16(bVar46,CONCAT15(bVar45,CONCAT14(bVar44,
                                                  CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,
                                                  bVar38)))))));
                  } while (uVar20 != 0);
                  uVar28 = CONCAT12(bVar32,CONCAT11(bVar31,bVar27)) ^ 0x10101;
                  uVar39 = CONCAT12(bVar42,CONCAT11(bVar41,bVar38)) ^ 0x10101;
                  bVar10 = (uVar28 & 1 | ((uVar28 & 0xff00) >> 8) << 1 | (uint)(uVar28 >> 0x10) << 2
                            | (uint)(bVar33 ^ 1) << 3 | (uint)(bVar34 ^ 1) << 4 |
                            (uint)(bVar35 ^ 1) << 5 | (uint)(bVar36 ^ 1) << 6 |
                            (uint)(bVar37 ^ 1) << 7 | (uVar39 & 1) << 8 |
                            ((uVar39 & 0xff00) >> 8) << 9 | (uint)(uVar39 >> 0x10) << 10 |
                            (uint)(bVar43 ^ 1) << 0xb | (uint)(bVar44 ^ 1) << 0xc |
                            (uint)(bVar45 ^ 1) << 0xd | (uint)(bVar46 ^ 1) << 0xe |
                           (uint)(bVar47 ^ 1) << 0xf) == 0;
                  if (uVar19 != uVar22) {
                    uVar20 = uVar19;
                    if ((uVar16 >> 3 & 1) == 0) goto LAB_00c4e884;
                    goto LAB_00c4e6c0;
                  }
                }
              }
              if (!bVar10) goto LAB_00c4e4f0;
            }
                    /* try { // try from 00c4e8ac to 00c4e8c3 has its CatchHandler @ 00c4e924 */
            scalarizeInstToConstruct((IR_Section *)in_x0,uVar11,0,(vector *)&local_88,local_8c);
          }
        }
        else if (iVar4 == 0xd3) {
                    /* try { // try from 00c4e4d0 to 00c4e4eb has its CatchHandler @ 00c4e92c */
          uVar11 = scalarizeInst((IR_Section *)in_x0,uVar11,1,2,(vector *)&local_88,local_8c);
        }
        else if (uVar16 == 1) {
                    /* try { // try from 00c4e5b4 to 00c4e663 has its CatchHandler @ 00c4e92c */
          uVar11 = scalarizeInst((IR_Section *)in_x0,uVar11,0,0xffffffff,(vector *)&local_88,
                                 local_8c);
        }
        else {
          uVar11 = scalarizeInst((IR_Section *)in_x0,uVar11,0,1,(vector *)&local_88,local_8c);
        }
      }
LAB_00c4e4f0:
      pIVar14 = in_x0[4];
      uVar11 = uVar11 + 1;
      uVar22 = (ulong)uVar11;
    } while (uVar22 < (ulong)((long)in_x0[5] - (long)pIVar14 >> 3));
  }
                    /* try { // try from 00c4e8c8 to 00c4e8d7 has its CatchHandler @ 00c4e928 */
  checkHssaCorrectness((char *)in_x0);
  bVar10 = local_8c[0];
  if (local_88 != (void *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar10 != false);
  }
  return;
}


