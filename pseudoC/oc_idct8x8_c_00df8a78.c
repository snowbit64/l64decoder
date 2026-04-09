// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_idct8x8_c
// Entry Point: 00df8a78
// Size: 3920 bytes
// Signature: undefined oc_idct8x8_c(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void oc_idct8x8_c(undefined (*param_1) [16],uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  short sVar34;
  short sVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined (*pauVar58) [16];
  short *psVar59;
  short sVar60;
  short sVar61;
  short sVar62;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar73;
  undefined2 uVar74;
  undefined2 uVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  undefined2 uVar82;
  short sVar83;
  undefined2 uVar84;
  int iVar85;
  int iVar87;
  int iVar88;
  undefined in_q4 [16];
  undefined auVar86 [16];
  int iVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  int iVar93;
  undefined2 uVar94;
  undefined2 uVar95;
  undefined2 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 uVar100;
  undefined8 uVar101;
  int iVar103;
  undefined in_q16 [16];
  int iVar104;
  undefined auVar102 [16];
  undefined8 uVar105;
  undefined auVar106 [16];
  int iVar107;
  int iVar108;
  int iVar109;
  int iVar110;
  int iVar111;
  undefined auVar112 [16];
  undefined auVar113 [16];
  short sVar114;
  short sVar115;
  int iVar116;
  int iVar117;
  int iVar118;
  int iVar119;
  short sVar120;
  undefined auVar121 [16];
  undefined auVar122 [16];
  undefined auVar123 [16];
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  undefined8 uVar128;
  undefined auVar129 [16];
  undefined auVar130 [16];
  undefined auVar131 [16];
  short sVar132;
  short local_118 [4];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  short local_108 [5];
  undefined6 uStack_fe;
  short local_f8 [5];
  undefined6 uStack_ee;
  short local_e8 [5];
  undefined6 uStack_de;
  short local_d8 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  short local_c8 [4];
  undefined8 uStack_c0;
  short local_b8 [4];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  short local_a8 [4];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  if ((int)param_2 < 3) {
    iVar104 = *(short *)*param_1 * 0xb505;
    iVar107 = *(short *)(*param_1 + 2) * 0xfb15;
    iVar116 = *(short *)(*param_1 + 2) * 0x31f1 >> 0x10;
    iVar118 = iVar104 >> 0x10;
    iVar103 = *(short *)param_1[1] * 0xb505 >> 0x10;
    iVar108 = iVar103 * 0x31f1;
    sVar60 = (short)((uint)iVar107 >> 0x10);
    sVar132 = (short)((uint)iVar104 >> 0x10);
    iVar103 = iVar103 * 0xfb15;
    sVar72 = (short)((uint)((short)(sVar60 + sVar132) * 0xb505) >> 0x10);
    sVar80 = (short)((uint)iVar103 >> 0x10);
    sVar61 = (short)((uint)((iVar103 >> 0x10) * 0xb505) >> 0x10);
    sVar62 = (short)((uint)((iVar108 >> 0x10) * 0xb505) >> 0x10);
    sVar114 = sVar61 + sVar62;
    sVar61 = sVar61 - sVar62;
    sVar65 = (short)((uint)((iVar107 >> 0x10) * 0xb505) >> 0x10);
    sVar127 = (short)((uint)(iVar116 * 0xb505) >> 0x10);
    sVar62 = sVar65 + sVar127;
    *(short *)*param_1 = sVar72 + sVar80;
    sVar65 = sVar65 - sVar127;
    *(short *)param_1[1] = sVar114 + sVar72;
    sVar127 = (short)((uint)iVar108 >> 0x10);
    *(short *)param_1[2] = sVar61 + sVar72;
    *(short *)param_1[3] = sVar72 + sVar127;
    *(short *)param_1[4] = sVar72 - sVar127;
    *(short *)param_1[5] = sVar72 - sVar61;
    sVar67 = (short)((uint)((short)(sVar62 + sVar132) * 0xb505) >> 0x10);
    *(short *)param_1[7] = sVar72 - sVar80;
    *(short *)param_1[6] = sVar72 - sVar114;
    *(short *)(*param_1 + 2) = sVar67 + sVar80;
    *(short *)(param_1[2] + 2) = sVar67 + sVar61;
    *(short *)(param_1[3] + 2) = sVar67 + sVar127;
    *(short *)(param_1[4] + 2) = sVar67 - sVar127;
    *(short *)(param_1[5] + 2) = sVar67 - sVar61;
    sVar72 = (short)((uint)((short)(sVar65 + sVar132) * 0xb505) >> 0x10);
    *(short *)(param_1[6] + 2) = sVar67 - sVar114;
    *(short *)(param_1[7] + 2) = sVar67 - sVar80;
    *(short *)(*param_1 + 4) = sVar72 + sVar80;
    *(short *)(param_1[1] + 4) = sVar72 + sVar114;
    *(short *)(param_1[2] + 4) = sVar72 + sVar61;
    *(short *)(param_1[3] + 4) = sVar72 + sVar127;
    *(short *)(param_1[4] + 4) = sVar72 - sVar127;
    *(short *)(param_1[5] + 4) = sVar72 - sVar61;
    sVar81 = (short)((uint)((iVar116 + iVar118) * 0xb505) >> 0x10);
    *(short *)(param_1[6] + 4) = sVar72 - sVar114;
    *(short *)(*param_1 + 6) = sVar80 + sVar81;
    *(short *)(param_1[1] + 6) = sVar114 + sVar81;
    *(short *)(param_1[7] + 4) = sVar72 - sVar80;
    *(short *)(param_1[3] + 6) = sVar127 + sVar81;
    *(short *)(param_1[4] + 6) = sVar81 - sVar127;
    *(short *)(param_1[5] + 6) = sVar81 - sVar61;
    sVar72 = (short)((uint)((iVar118 - iVar116) * 0xb505) >> 0x10);
    *(short *)(param_1[6] + 6) = sVar81 - sVar114;
    *(short *)(param_1[7] + 6) = sVar81 - sVar80;
    *(short *)(*param_1 + 8) = sVar80 + sVar72;
    *(short *)(param_1[1] + 8) = sVar114 + sVar72;
    *(short *)(param_1[3] + 8) = sVar127 + sVar72;
    *(short *)(param_1[4] + 8) = sVar72 - sVar127;
    *(short *)(param_1[5] + 8) = sVar72 - sVar61;
    sVar65 = (short)((uint)((short)(sVar132 - sVar65) * 0xb505) >> 0x10);
    *(short *)(param_1[7] + 8) = sVar72 - sVar80;
    *(short *)(*param_1 + 10) = sVar65 + sVar80;
    *(short *)(param_1[6] + 8) = sVar72 - sVar114;
    *(short *)(param_1[2] + 10) = sVar65 + sVar61;
    sVar62 = (short)((uint)((short)(sVar132 - sVar62) * 0xb505) >> 0x10);
    *(short *)(param_1[3] + 10) = sVar65 + sVar127;
    *(short *)(param_1[4] + 10) = sVar65 - sVar127;
    *(short *)(param_1[5] + 10) = sVar65 - sVar61;
    *(short *)(param_1[6] + 10) = sVar65 - sVar114;
    *(short *)(param_1[7] + 10) = sVar65 - sVar80;
    *(short *)(param_1[4] + 0xc) = sVar62 - sVar127;
    *(short *)(param_1[1] + 0xc) = sVar62 + sVar114;
    *(short *)(param_1[2] + 6) = sVar61 + sVar81;
    *(short *)(param_1[3] + 0xc) = sVar62 + sVar127;
    sVar60 = (short)((uint)((short)(sVar132 - sVar60) * 0xb505) >> 0x10);
    *(short *)(param_1[7] + 0xc) = sVar62 - sVar80;
    *(short *)(param_1[6] + 0xc) = sVar62 - sVar114;
    *(short *)(param_1[2] + 8) = sVar61 + sVar72;
    *(short *)(*param_1 + 0xe) = sVar60 + sVar80;
    *(short *)(param_1[2] + 0xc) = sVar62 + sVar61;
    *(short *)(param_1[2] + 0xe) = sVar61 + sVar60;
    *(short *)(param_1[3] + 0xe) = sVar60 + sVar127;
    auVar106 = param_1[2];
    uVar99 = *(undefined8 *)(param_1[3] + 8);
    uVar97 = *(undefined8 *)param_1[3];
    *(short *)(param_1[1] + 2) = sVar67 + sVar114;
    *(short *)(param_1[1] + 10) = sVar65 + sVar114;
    *(short *)(*param_1 + 0xc) = sVar62 + sVar80;
    *(short *)(param_1[1] + 0xe) = sVar114 + sVar60;
    *(short *)(param_1[5] + 0xc) = sVar62 - sVar61;
    auVar122 = *param_1;
    uVar101 = *(undefined8 *)(param_1[1] + 8);
    uVar105 = *(undefined8 *)param_1[1];
    *(short *)(param_1[4] + 0xe) = sVar60 - sVar127;
    *(short *)(param_1[5] + 0xe) = sVar60 - sVar61;
    *(short *)(param_1[6] + 0xe) = sVar60 - sVar114;
    *(short *)(param_1[7] + 0xe) = sVar60 - sVar80;
    uVar2 = *(undefined8 *)(param_1[4] + 8);
    uVar128 = *(undefined8 *)param_1[4];
    auVar123 = param_1[5];
    *(ulong *)(param_1[2] + 8) =
         CONCAT26((short)((int)auVar106._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._10_2_ + 8U >> 4),
                                    (short)((int)auVar106._8_2_ + 8U >> 4))));
    *(ulong *)param_1[2] =
         CONCAT26((short)((int)auVar106._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._2_2_ + 8U >> 4),
                                    (short)((int)auVar106._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[3] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar99 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar99 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar99 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar99 + 8U >> 4))));
    *(ulong *)param_1[3] =
         CONCAT26((short)((int)(short)((ulong)uVar97 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar97 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar97 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar97 + 8U >> 4))));
    uVar99 = *(undefined8 *)(param_1[6] + 8);
    uVar97 = *(undefined8 *)param_1[6];
    auVar106 = param_1[7];
    *(ulong *)(*param_1 + 8) =
         CONCAT26((short)((int)auVar122._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._10_2_ + 8U >> 4),
                                    (short)((int)auVar122._8_2_ + 8U >> 4))));
    *(ulong *)*param_1 =
         CONCAT26((short)((int)auVar122._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._2_2_ + 8U >> 4),
                                    (short)((int)auVar122._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[1] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar101 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar101 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar101 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar101 + 8U >> 4))));
    *(ulong *)param_1[1] =
         CONCAT26((short)((int)(short)((ulong)uVar105 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar105 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar105 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar105 + 8U >> 4))));
    *(ulong *)(param_1[4] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar2 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar2 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar2 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar2 + 8U >> 4))));
    *(ulong *)param_1[4] =
         CONCAT26((short)((int)(short)((ulong)uVar128 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar128 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar128 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar128 + 8U >> 4))));
    *(ulong *)(param_1[5] + 8) =
         CONCAT26((short)((int)auVar123._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar123._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar123._10_2_ + 8U >> 4),
                                    (short)((int)auVar123._8_2_ + 8U >> 4))));
    *(ulong *)param_1[5] =
         CONCAT26((short)((int)auVar123._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar123._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar123._2_2_ + 8U >> 4),
                                    (short)((int)auVar123._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[6] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar99 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar99 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar99 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar99 + 8U >> 4))));
    *(ulong *)param_1[6] =
         CONCAT26((short)((int)(short)((ulong)uVar97 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar97 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar97 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar97 + 8U >> 4))));
    *(ulong *)(param_1[7] + 8) =
         CONCAT26((short)((int)auVar106._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._10_2_ + 8U >> 4),
                                    (short)((int)auVar106._8_2_ + 8U >> 4))));
    *(ulong *)param_1[7] =
         CONCAT26((short)((int)auVar106._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._2_2_ + 8U >> 4),
                                    (short)((int)auVar106._0_2_ + 8U >> 4))));
  }
  else if (param_2 < 10) {
    iVar116 = *(short *)(*param_1 + 2) * 0x31f1;
    iVar118 = *(short *)(*param_1 + 6) * 0x8e3a;
    sVar114 = (short)((uint)iVar116 >> 0x10) - (short)((uint)iVar118 >> 0x10);
    sVar132 = (short)((uint)(*(short *)(*param_1 + 6) * 0xd4db) >> 0x10);
    sVar60 = (short)((uint)(*(short *)(*param_1 + 2) * 0xfb15) >> 0x10);
    sVar72 = sVar132 + sVar60;
    sVar62 = (short)((uint)(*(short *)(*param_1 + 4) * 0xec83) >> 0x10);
    sVar61 = (short)((uint)(*(short *)*param_1 * 0xb505) >> 0x10);
    sVar80 = sVar62 + sVar61;
    local_118[0] = sVar72 + sVar80;
    local_a8[0] = sVar80 - sVar72;
    sVar72 = (short)((uint)(*(short *)(*param_1 + 4) * 0x61f8) >> 0x10);
    sVar80 = sVar72 + sVar61;
    sVar72 = sVar61 - sVar72;
    sVar60 = (short)((uint)((short)(sVar60 - sVar132) * 0xb505) >> 0x10);
    sVar127 = (short)((uint)(((iVar118 >> 0x10) + (iVar116 >> 0x10)) * 0xb505) >> 0x10);
    sVar132 = sVar60 + sVar127;
    sVar60 = sVar60 - sVar127;
    sVar61 = sVar61 - sVar62;
    local_f8[0] = sVar60 + sVar72;
    local_c8[0] = sVar72 - sVar60;
    local_b8[0] = sVar80 - sVar132;
    local_e8[0] = sVar114 + sVar61;
    local_d8[0] = sVar61 - sVar114;
    local_108[0] = sVar132 + sVar80;
    iVar116 = *(short *)(param_1[1] + 2) * 0x31f1;
    iVar118 = *(short *)(param_1[1] + 2) * 0xfb15;
    sVar132 = (short)((uint)(*(short *)(param_1[1] + 4) * 0x61f8) >> 0x10);
    sVar62 = (short)((uint)(*(short *)param_1[1] * 0xb505) >> 0x10);
    sVar61 = sVar132 + sVar62;
    sVar132 = sVar62 - sVar132;
    sVar60 = (short)((uint)((iVar118 >> 0x10) * 0xb505) >> 0x10);
    sVar72 = (short)((uint)((iVar116 >> 0x10) * 0xb505) >> 0x10);
    sVar114 = sVar60 + sVar72;
    sVar60 = sVar60 - sVar72;
    sVar80 = (short)((uint)(*(short *)(param_1[1] + 4) * 0xec83) >> 0x10);
    sVar72 = sVar80 + sVar62;
    sVar62 = sVar62 - sVar80;
    local_f8[1] = sVar60 + sVar132;
    sVar80 = (short)((uint)iVar118 >> 0x10);
    local_118[1] = sVar72 + sVar80;
    local_108[1] = sVar114 + sVar61;
    local_c8[1] = sVar132 - sVar60;
    local_b8[1] = sVar61 - sVar114;
    local_a8[1] = sVar72 - sVar80;
    sVar60 = (short)((uint)iVar116 >> 0x10);
    local_e8[1] = sVar62 + sVar60;
    local_d8[1] = sVar62 - sVar60;
    iVar116 = *(short *)(param_1[2] + 2) * 0x31f1;
    iVar118 = *(short *)(param_1[2] + 2) * 0xfb15;
    sVar132 = (short)((uint)iVar116 >> 0x10);
    sVar60 = (short)((uint)(*(short *)param_1[2] * 0xb505) >> 0x10);
    local_d8[2] = sVar60 - sVar132;
    sVar80 = (short)((uint)((iVar116 >> 0x10) * 0xb505) >> 0x10);
    sVar114 = (short)((uint)((iVar118 >> 0x10) * 0xb505) >> 0x10);
    sVar72 = sVar114 - sVar80;
    sVar114 = sVar114 + sVar80;
    sVar80 = (short)((uint)iVar118 >> 0x10);
    local_118[2] = sVar80 + sVar60;
    local_a8[2] = sVar60 - sVar80;
    local_108[2] = sVar114 + sVar60;
    local_b8[2] = sVar60 - sVar114;
    local_c8[2] = sVar60 - sVar72;
    local_f8[2] = sVar72 + sVar60;
    local_e8[2] = sVar132 + sVar60;
    local_118[3] = (short)((uint)(*(short *)param_1[3] * 0xb505) >> 0x10);
    iVar116 = local_118[3] * 0x8e3a;
    iVar118 = local_118[3] * 0x8e3a;
    sVar114 = (short)((uint)(local_118[3] * 0x8e3a) >> 0x10);
    sVar61 = *(short *)param_1[3] >> 0xf;
    sVar115 = (short)((uint)(local_118[3] * 0x8e3a) >> 0x10);
    sVar30 = (short)((uint)(local_118[3] * 0xd4db) >> 0x10);
    sVar60 = (short)((uint)(local_118[1] * 0xfb15) >> 0x10);
    sVar31 = (short)((uint)(local_118[3] * 0xd4db) >> 0x10);
    sVar132 = (short)((uint)(local_108[1] * 0xfb15) >> 0x10);
    sVar33 = (short)((uint)(local_118[3] * 0xd4db) >> 0x10);
    sVar72 = (short)((uint)(local_f8[1] * 0xfb15) >> 0x10);
    sVar35 = (short)((uint)(local_118[3] * 0xd4db) >> 0x10);
    sVar80 = (short)((uint)(local_e8[1] * 0xfb15) >> 0x10);
    sVar23 = (short)((uint)(local_118[1] * 0x31f1) >> 0x10) - sVar114;
    sVar24 = (short)((uint)(local_108[1] * 0x31f1) >> 0x10) - sVar115;
    sVar26 = (short)((uint)(local_f8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar116 >> 0x10);
    sVar28 = (short)((uint)(local_e8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar118 >> 0x10);
    sVar124 = (short)((uint)(local_118[0] * 0xb505) >> 0x10);
    sVar126 = (short)((uint)(local_108[0] * 0xb505) >> 0x10);
    sVar76 = (short)((uint)((short)(sVar60 - sVar30) * 0xb505) >> 0x10);
    sVar62 = (short)((uint)((short)(sVar132 - sVar31) * 0xb505) >> 0x10);
    sVar65 = (short)((uint)((short)(sVar72 - sVar33) * 0xb505) >> 0x10);
    sVar81 = (short)((uint)((short)(sVar80 - sVar35) * 0xb505) >> 0x10);
    sVar30 = sVar30 + sVar60;
    sVar31 = sVar31 + sVar132;
    sVar33 = sVar33 + sVar72;
    sVar35 = sVar35 + sVar80;
    sVar60 = (short)((uint)(local_118[2] * 0x61f8) >> 0x10);
    sVar120 = sVar124 - sVar60;
    sVar127 = (short)((uint)(local_108[2] * 0x61f8) >> 0x10);
    sVar64 = sVar126 - sVar127;
    sVar67 = (short)((uint)(local_f8[2] * 0x61f8) >> 0x10);
    sVar80 = (short)((uint)(local_f8[0] * 0xb505) >> 0x10);
    sVar79 = sVar80 - sVar67;
    sVar19 = (short)((uint)(local_e8[2] * 0x61f8) >> 0x10);
    sVar72 = (short)((uint)(local_e8[0] * 0xb505) >> 0x10);
    sVar54 = sVar72 - sVar19;
    sVar60 = sVar60 + sVar124;
    sVar127 = sVar127 + sVar126;
    sVar67 = sVar67 + sVar80;
    sVar19 = sVar19 + sVar72;
    sVar132 = (short)((uint)(local_118[2] * 0xec83) >> 0x10);
    sVar125 = sVar124 - sVar132;
    sVar32 = (short)((uint)(local_108[2] * 0xec83) >> 0x10);
    sVar25 = sVar126 - sVar32;
    sVar34 = (short)((uint)(local_f8[2] * 0xec83) >> 0x10);
    sVar27 = sVar80 - sVar34;
    sVar36 = (short)((uint)(local_e8[2] * 0xec83) >> 0x10);
    sVar29 = sVar72 - sVar36;
    sVar132 = sVar132 + sVar124;
    sVar32 = sVar32 + sVar126;
    sVar34 = sVar34 + sVar80;
    sVar36 = sVar36 + sVar72;
    sVar72 = (short)((uint)((CONCAT22(sVar61,sVar114) + (local_118[1] * 0x31f1 >> 0x10)) * 0xb505)
                    >> 0x10);
    sVar63 = sVar76 - sVar72;
    sVar61 = (short)((uint)((CONCAT22(sVar61,sVar115) + (local_108[1] * 0x31f1 >> 0x10)) * 0xb505)
                    >> 0x10);
    sVar78 = sVar62 - sVar61;
    sVar114 = (short)((uint)(((iVar116 >> 0x10) + (local_f8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10)
    ;
    sVar83 = sVar65 - sVar114;
    sVar80 = (short)((uint)(((iVar118 >> 0x10) + (local_e8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10);
    sVar53 = sVar81 - sVar80;
    sVar76 = sVar76 + sVar72;
    sVar62 = sVar62 + sVar61;
    sVar65 = sVar65 + sVar114;
    sVar81 = sVar81 + sVar80;
    iVar107 = local_118[3] * 0xd4db;
    iVar108 = local_118[3] * 0xd4db;
    iVar109 = local_118[3] * 0xd4db;
    iVar110 = local_118[3] * 0xd4db;
    iVar116 = local_118[3] * 0x8e3a;
    iVar118 = local_118[3] * 0x8e3a;
    iVar103 = local_118[3] * 0x8e3a;
    iVar104 = local_118[3] * 0x8e3a;
    sVar126 = (short)((uint)(local_d8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar116 >> 0x10);
    sVar21 = (short)((uint)(local_c8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar118 >> 0x10);
    sVar49 = (short)((uint)(local_b8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar103 >> 0x10);
    sVar51 = (short)((uint)(local_a8[1] * 0x31f1) >> 0x10) - (short)((uint)iVar104 >> 0x10);
    sVar90 = (short)((uint)(local_d8[2] * 0x61f8) >> 0x10);
    sVar92 = (short)((uint)(local_c8[2] * 0x61f8) >> 0x10);
    sVar72 = (short)((uint)iVar107 >> 0x10) + (short)((uint)(local_d8[1] * 0xfb15) >> 0x10);
    sVar114 = (short)((uint)iVar108 >> 0x10) + (short)((uint)(local_c8[1] * 0xfb15) >> 0x10);
    sVar37 = (short)((uint)iVar109 >> 0x10) + (short)((uint)(local_b8[1] * 0xfb15) >> 0x10);
    sVar39 = (short)((uint)iVar110 >> 0x10) + (short)((uint)(local_a8[1] * 0xfb15) >> 0x10);
    sVar41 = (short)((uint)(local_d8[0] * 0xb505) >> 0x10);
    sVar42 = sVar41 - sVar90;
    sVar43 = (short)((uint)(local_c8[0] * 0xb505) >> 0x10);
    sVar44 = sVar43 - sVar92;
    sVar115 = (short)((uint)(local_b8[2] * 0x61f8) >> 0x10);
    sVar45 = (short)((uint)(local_b8[0] * 0xb505) >> 0x10);
    sVar46 = sVar45 - sVar115;
    sVar124 = (short)((uint)(local_a8[2] * 0x61f8) >> 0x10);
    sVar47 = (short)((uint)(local_a8[0] * 0xb505) >> 0x10);
    sVar48 = sVar47 - sVar124;
    sVar80 = (short)((uint)(local_d8[2] * 0xec83) >> 0x10);
    sVar20 = sVar41 - sVar80;
    sVar61 = (short)((uint)(local_c8[2] * 0xec83) >> 0x10);
    sVar22 = sVar43 - sVar61;
    sVar38 = (short)((uint)(local_b8[2] * 0xec83) >> 0x10);
    sVar50 = sVar45 - sVar38;
    sVar40 = (short)((uint)(local_a8[2] * 0xec83) >> 0x10);
    sVar52 = sVar47 - sVar40;
    sVar80 = sVar80 + sVar41;
    sVar61 = sVar61 + sVar43;
    sVar38 = sVar38 + sVar45;
    sVar40 = sVar40 + sVar47;
    sVar68 = (short)((uint)((((local_d8[1] * 0xfb15 >> 0x10) - (iVar107 >> 0x10)) * 0x10000 >> 0x10)
                           * 0xb505) >> 0x10);
    sVar70 = (short)((uint)((((local_c8[1] * 0xfb15 >> 0x10) - (iVar108 >> 0x10)) * 0x10000 >> 0x10)
                           * 0xb505) >> 0x10);
    sVar71 = (short)((uint)((((local_b8[1] * 0xfb15 >> 0x10) - (iVar109 >> 0x10)) * 0x10000 >> 0x10)
                           * 0xb505) >> 0x10);
    sVar73 = (short)((uint)((((local_a8[1] * 0xfb15 >> 0x10) - (iVar110 >> 0x10)) * 0x10000 >> 0x10)
                           * 0xb505) >> 0x10);
    sVar90 = sVar90 + sVar41;
    sVar92 = sVar92 + sVar43;
    sVar115 = sVar115 + sVar45;
    sVar124 = sVar124 + sVar47;
    sVar66 = (short)((uint)(((iVar116 >> 0x10) + (local_d8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10);
    sVar41 = sVar68 - sVar66;
    sVar69 = (short)((uint)(((iVar118 >> 0x10) + (local_c8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10);
    sVar43 = sVar70 - sVar69;
    sVar77 = (short)((uint)(((iVar103 >> 0x10) + (local_b8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10);
    sVar45 = sVar71 - sVar77;
    sVar91 = (short)((uint)(((iVar104 >> 0x10) + (local_a8[1] * 0x31f1 >> 0x10)) * 0xb505) >> 0x10);
    sVar47 = sVar73 - sVar91;
    sVar68 = sVar68 + sVar66;
    sVar70 = sVar70 + sVar69;
    sVar71 = sVar71 + sVar77;
    sVar73 = sVar73 + sVar91;
    *(ulong *)*param_1 =
         CONCAT26(sVar35 + sVar36,
                  CONCAT24(sVar33 + sVar34,CONCAT22(sVar31 + sVar32,sVar30 + sVar132)));
    *(ulong *)(*param_1 + 8) =
         CONCAT26(sVar39 + sVar40,
                  CONCAT24(sVar37 + sVar38,CONCAT22(sVar114 + sVar61,sVar72 + sVar80)));
    *(ulong *)param_1[1] =
         CONCAT26(sVar81 + sVar19,
                  CONCAT24(sVar65 + sVar67,CONCAT22(sVar62 + sVar127,sVar76 + sVar60)));
    *(ulong *)(param_1[1] + 8) =
         CONCAT26(sVar73 + sVar124,
                  CONCAT24(sVar71 + sVar115,CONCAT22(sVar70 + sVar92,sVar68 + sVar90)));
    *(ulong *)param_1[2] =
         CONCAT26(sVar53 + sVar54,
                  CONCAT24(sVar83 + sVar79,CONCAT22(sVar78 + sVar64,sVar63 + sVar120)));
    *(ulong *)(param_1[2] + 8) =
         CONCAT26(sVar47 + sVar48,
                  CONCAT24(sVar45 + sVar46,CONCAT22(sVar43 + sVar44,sVar41 + sVar42)));
    *(ulong *)param_1[3] =
         CONCAT26(sVar28 + sVar29,
                  CONCAT24(sVar26 + sVar27,CONCAT22(sVar24 + sVar25,sVar23 + sVar125)));
    *(ulong *)(param_1[3] + 8) =
         CONCAT26(sVar51 + sVar52,
                  CONCAT24(sVar49 + sVar50,CONCAT22(sVar21 + sVar22,sVar126 + sVar20)));
    *(ulong *)param_1[4] =
         CONCAT26(sVar29 - sVar28,
                  CONCAT24(sVar27 - sVar26,CONCAT22(sVar25 - sVar24,sVar125 - sVar23)));
    *(ulong *)(param_1[4] + 8) =
         CONCAT26(sVar52 - sVar51,
                  CONCAT24(sVar50 - sVar49,CONCAT22(sVar22 - sVar21,sVar20 - sVar126)));
    *(ulong *)param_1[5] =
         CONCAT26(sVar54 - sVar53,
                  CONCAT24(sVar79 - sVar83,CONCAT22(sVar64 - sVar78,sVar120 - sVar63)));
    *(ulong *)(param_1[5] + 8) =
         CONCAT26(sVar48 - sVar47,
                  CONCAT24(sVar46 - sVar45,CONCAT22(sVar44 - sVar43,sVar42 - sVar41)));
    uVar2 = *(undefined8 *)(*param_1 + 8);
    uVar128 = *(undefined8 *)*param_1;
    uVar101 = *(undefined8 *)(param_1[1] + 8);
    uVar105 = *(undefined8 *)param_1[1];
    *(ulong *)param_1[6] =
         CONCAT26(sVar19 - sVar81,
                  CONCAT24(sVar67 - sVar65,CONCAT22(sVar127 - sVar62,sVar60 - sVar76)));
    *(ulong *)(param_1[6] + 8) =
         CONCAT26(sVar124 - sVar73,
                  CONCAT24(sVar115 - sVar71,CONCAT22(sVar92 - sVar70,sVar90 - sVar68)));
    uVar99 = *(undefined8 *)(param_1[2] + 8);
    uVar97 = *(undefined8 *)param_1[2];
    auVar106 = param_1[3];
    *(ulong *)param_1[7] =
         CONCAT26(sVar36 - sVar35,
                  CONCAT24(sVar34 - sVar33,CONCAT22(sVar32 - sVar31,sVar132 - sVar30)));
    *(ulong *)(param_1[7] + 8) =
         CONCAT26(sVar40 - sVar39,
                  CONCAT24(sVar38 - sVar37,CONCAT22(sVar61 - sVar114,sVar80 - sVar72)));
    auVar122 = param_1[4];
    auVar123 = param_1[5];
    *(ulong *)(*param_1 + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar2 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar2 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar2 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar2 + 8U >> 4))));
    *(ulong *)*param_1 =
         CONCAT26((short)((int)(short)((ulong)uVar128 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar128 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar128 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar128 + 8U >> 4))));
    *(ulong *)(param_1[1] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar101 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar101 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar101 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar101 + 8U >> 4))));
    *(ulong *)param_1[1] =
         CONCAT26((short)((int)(short)((ulong)uVar105 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar105 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar105 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar105 + 8U >> 4))));
    auVar112 = param_1[6];
    auVar129 = param_1[7];
    *(ulong *)(param_1[2] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar99 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar99 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar99 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar99 + 8U >> 4))));
    *(ulong *)param_1[2] =
         CONCAT26((short)((int)(short)((ulong)uVar97 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar97 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar97 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar97 + 8U >> 4))));
    *(ulong *)(param_1[3] + 8) =
         CONCAT26((short)((int)auVar106._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._10_2_ + 8U >> 4),
                                    (short)((int)auVar106._8_2_ + 8U >> 4))));
    *(ulong *)param_1[3] =
         CONCAT26((short)((int)auVar106._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._2_2_ + 8U >> 4),
                                    (short)((int)auVar106._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[4] + 8) =
         CONCAT26((short)((int)auVar122._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._10_2_ + 8U >> 4),
                                    (short)((int)auVar122._8_2_ + 8U >> 4))));
    *(ulong *)param_1[4] =
         CONCAT26((short)((int)auVar122._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._2_2_ + 8U >> 4),
                                    (short)((int)auVar122._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[5] + 8) =
         CONCAT26((short)((int)auVar123._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar123._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar123._10_2_ + 8U >> 4),
                                    (short)((int)auVar123._8_2_ + 8U >> 4))));
    *(ulong *)param_1[5] =
         CONCAT26((short)((int)auVar123._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar123._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar123._2_2_ + 8U >> 4),
                                    (short)((int)auVar123._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[6] + 8) =
         CONCAT26((short)((int)auVar112._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar112._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar112._10_2_ + 8U >> 4),
                                    (short)((int)auVar112._8_2_ + 8U >> 4))));
    *(ulong *)param_1[6] =
         CONCAT26((short)((int)auVar112._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar112._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar112._2_2_ + 8U >> 4),
                                    (short)((int)auVar112._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[7] + 8) =
         CONCAT26((short)((int)auVar129._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar129._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar129._10_2_ + 8U >> 4),
                                    (short)((int)auVar129._8_2_ + 8U >> 4))));
    *(ulong *)param_1[7] =
         CONCAT26((short)((int)auVar129._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar129._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar129._2_2_ + 8U >> 4),
                                    (short)((int)auVar129._0_2_ + 8U >> 4))));
    local_108[3] = local_118[3];
    local_f8[3] = local_118[3];
    local_e8[3] = local_118[3];
    local_d8[3] = local_118[3];
    local_c8[3] = local_118[3];
    local_b8[3] = local_118[3];
    local_a8[3] = local_118[3];
  }
  else {
    psVar59 = local_118;
    pauVar58 = param_1;
    do {
      sVar19 = (short)((uint)(*(short *)(*pauVar58 + 4) * 0x61f8) >> 0x10) -
               (short)((uint)(*(short *)(*pauVar58 + 0xc) * 0xec83) >> 0x10);
      sVar60 = (short)((uint)(*(short *)(*pauVar58 + 2) * 0x31f1) >> 0x10) -
               (short)((uint)(*(short *)(*pauVar58 + 0xe) * 0xfb15) >> 0x10);
      sVar132 = (short)((uint)(*(short *)(*pauVar58 + 10) * 0xd4db) >> 0x10) -
                (short)((uint)(*(short *)(*pauVar58 + 6) * 0x8e3a) >> 0x10);
      sVar80 = (short)((uint)(*(short *)(*pauVar58 + 6) * 0xd4db) >> 0x10) +
               (short)((uint)(*(short *)(*pauVar58 + 10) * 0x8e3a) >> 0x10);
      sVar72 = (short)((uint)(*(short *)(*pauVar58 + 0xe) * 0x31f1) >> 0x10) +
               (short)((uint)(*(short *)(*pauVar58 + 2) * 0xfb15) >> 0x10);
      sVar81 = (short)((uint)(*(short *)(*pauVar58 + 0xc) * 0x61f8) >> 0x10) +
               (short)((uint)(*(short *)(*pauVar58 + 4) * 0xec83) >> 0x10);
      sVar114 = sVar80 + sVar72;
      sVar65 = (short)((uint)((short)(*(short *)(*pauVar58 + 8) + *(short *)*pauVar58) * 0xb505) >>
                      0x10);
      sVar61 = sVar81 + sVar65;
      sVar127 = sVar132 + sVar60;
      sVar67 = (short)((uint)((short)(*(short *)*pauVar58 - *(short *)(*pauVar58 + 8)) * 0xb505) >>
                      0x10);
      sVar62 = sVar19 + sVar67;
      sVar67 = sVar67 - sVar19;
      sVar72 = (short)((uint)((short)(sVar72 - sVar80) * 0xb505) >> 0x10);
      sVar132 = (short)((uint)((short)(sVar60 - sVar132) * 0xb505) >> 0x10);
      sVar60 = sVar72 + sVar132;
      sVar72 = sVar72 - sVar132;
      sVar65 = sVar65 - sVar81;
      *psVar59 = sVar114 + sVar61;
      psVar59[8] = sVar60 + sVar62;
      psVar59[0x10] = sVar72 + sVar67;
      pauVar58 = pauVar58 + 1;
      psVar59[0x18] = sVar127 + sVar65;
      psVar59[0x20] = sVar65 - sVar127;
      psVar59[0x28] = sVar67 - sVar72;
      psVar59[0x30] = sVar62 - sVar60;
      psVar59[0x38] = sVar61 - sVar114;
      psVar59 = psVar59 + 1;
    } while (psVar59 < local_108);
    sVar72 = (short)uStack_ee;
    uVar74 = (undefined2)((uint6)uStack_ee >> 0x10);
    uVar75 = (undefined2)((uint6)uStack_ee >> 0x20);
    uVar105 = CONCAT26(local_f8[3],CONCAT24(local_f8[2],CONCAT22(local_f8[1],local_f8[0])));
    auVar123._2_2_ = local_f8[1];
    auVar123._0_2_ = local_f8[0];
    auVar123._4_2_ = local_f8[2];
    auVar123._6_2_ = local_f8[3];
    auVar123._8_2_ = local_f8[4];
    auVar122._2_2_ = local_f8[1];
    auVar122._0_2_ = local_f8[0];
    auVar122._4_2_ = local_f8[2];
    auVar122._6_2_ = local_f8[3];
    auVar122._8_2_ = local_f8[4];
    auVar106._2_2_ = local_f8[1];
    auVar106._0_2_ = local_f8[0];
    auVar106._4_2_ = local_f8[2];
    auVar106._6_2_ = local_f8[3];
    auVar106._8_2_ = local_f8[4];
    auVar4._2_2_ = local_118[1];
    auVar4._0_2_ = local_118[0];
    auVar4._4_2_ = local_118[2];
    auVar4._6_2_ = local_118[3];
    auVar4._8_4_ = uStack_110;
    auVar3._2_2_ = local_118[1];
    auVar3._0_2_ = local_118[0];
    auVar3._4_2_ = local_118[2];
    auVar3._6_2_ = local_118[3];
    auVar3._8_4_ = uStack_110;
    auVar121._2_2_ = local_118[1];
    auVar121._0_2_ = local_118[0];
    auVar121._4_2_ = local_118[2];
    auVar121._6_2_ = local_118[3];
    auVar121._8_4_ = uStack_110;
    sVar80 = (short)uStack_de;
    uVar82 = (undefined2)((uint6)uStack_de >> 0x10);
    uVar84 = (undefined2)((uint6)uStack_de >> 0x20);
    auVar113._2_2_ = local_e8[1];
    auVar113._0_2_ = local_e8[0];
    auVar113._4_2_ = local_e8[2];
    auVar113._6_2_ = local_e8[3];
    auVar113._8_2_ = local_e8[4];
    auVar129._2_2_ = local_e8[1];
    auVar129._0_2_ = local_e8[0];
    auVar129._4_2_ = local_e8[2];
    auVar129._6_2_ = local_e8[3];
    auVar129._8_2_ = local_e8[4];
    auVar112._2_2_ = local_e8[1];
    auVar112._0_2_ = local_e8[0];
    auVar112._4_2_ = local_e8[2];
    auVar112._6_2_ = local_e8[3];
    auVar112._8_2_ = local_e8[4];
    uVar94 = (undefined2)uStack_fe;
    uVar95 = (undefined2)((uint6)uStack_fe >> 0x10);
    uVar96 = (undefined2)((uint6)uStack_fe >> 0x20);
    auVar9._2_2_ = local_108[1];
    auVar9._0_2_ = local_108[0];
    auVar9._4_2_ = local_108[2];
    auVar9._6_2_ = local_108[3];
    auVar9._8_2_ = local_108[4];
    auVar8._2_2_ = local_108[1];
    auVar8._0_2_ = local_108[0];
    auVar8._4_2_ = local_108[2];
    auVar8._6_2_ = local_108[3];
    auVar8._8_2_ = local_108[4];
    auVar7._2_2_ = local_108[1];
    auVar7._0_2_ = local_108[0];
    auVar7._4_2_ = local_108[2];
    auVar7._6_2_ = local_108[3];
    auVar7._8_2_ = local_108[4];
    auVar102._6_10_ = in_q16._6_10_;
    auVar102._4_2_ = local_f8[3];
    auVar102._2_2_ = local_e8[1];
    auVar102._0_2_ = local_f8[1];
    auVar86._6_10_ = in_q4._6_10_;
    auVar86._4_2_ = local_f8[1];
    auVar86._2_2_ = local_e8[0];
    auVar86._0_2_ = local_f8[0];
    uVar101 = NEON_ext(uVar105,CONCAT26(local_e8[3],auVar102._0_6_),4,1);
    uVar105 = NEON_ext(uVar105,CONCAT26(local_e8[1],auVar86._0_6_),4,1);
    auVar106._10_2_ = sVar72;
    auVar106._12_2_ = uVar74;
    auVar106._14_2_ = uVar75;
    auVar112._10_2_ = sVar80;
    auVar112._12_2_ = uVar82;
    auVar112._14_2_ = uVar84;
    auVar112 = a64_TBL(ZEXT816(0),auVar106,auVar112,_DAT_004c42e0);
    auVar121._12_4_ = uStack_10c;
    auVar7._10_2_ = uVar94;
    auVar7._12_2_ = uVar95;
    auVar7._14_2_ = uVar96;
    auVar121 = a64_TBL(ZEXT816(0),auVar121,auVar7,_DAT_004c4160);
    sVar65 = (short)((ulong)uVar105 >> 0x20);
    sVar67 = (short)((ulong)uVar105 >> 0x30);
    auVar122._10_2_ = sVar72;
    auVar122._12_2_ = uVar74;
    auVar122._14_2_ = uVar75;
    auVar129._10_2_ = sVar80;
    auVar129._12_2_ = uVar82;
    auVar129._14_2_ = uVar84;
    auVar122 = a64_TBL(ZEXT816(0),auVar122,auVar129,_DAT_004c5a40);
    auVar3._12_4_ = uStack_10c;
    auVar8._10_2_ = uVar94;
    auVar8._12_2_ = uVar95;
    auVar8._14_2_ = uVar96;
    auVar106 = a64_TBL(ZEXT816(0),auVar3,auVar8,_DAT_004c5150);
    auVar123._10_2_ = sVar72;
    auVar123._12_2_ = uVar74;
    auVar123._14_2_ = uVar75;
    auVar113._10_2_ = sVar80;
    auVar113._12_2_ = uVar82;
    auVar113._14_2_ = uVar84;
    auVar123 = a64_TBL(ZEXT816(0),auVar123,auVar113,_DAT_004c5320);
    auVar4._12_4_ = uStack_10c;
    auVar9._10_2_ = uVar94;
    auVar9._12_2_ = uVar95;
    auVar9._14_2_ = uVar96;
    auVar129 = a64_TBL(ZEXT816(0),auVar4,auVar9,_DAT_004c38b0);
    uVar105 = NEON_ext(CONCAT26(local_108[3],
                                CONCAT24(local_118[3],CONCAT22(local_108[1],local_118[1]))),
                       CONCAT26(local_118[3],
                                CONCAT24(local_118[2],CONCAT22(local_118[1],local_118[0]))),4,1);
    sVar61 = (short)((ulong)uVar101 >> 0x20);
    sVar62 = (short)((ulong)uVar101 >> 0x30);
    sVar60 = (short)((ulong)uVar105 >> 0x10);
    iVar107 = (local_118[1] * 0x31f1 >> 0x10) - (auVar129._0_2_ * 0xfb15 >> 0x10);
    iVar108 = (local_108[1] * 0x31f1 >> 0x10) - (auVar129._2_2_ * 0xfb15 >> 0x10);
    iVar109 = (sVar61 * 0x31f1 >> 0x10) - (auVar123._4_2_ * 0xfb15 >> 0x10);
    iVar110 = (sVar62 * 0x31f1 >> 0x10) - (auVar123._6_2_ * 0xfb15 >> 0x10);
    iVar116 = (auVar121._0_2_ * 0xd4db >> 0x10) - ((short)uVar105 * 0x8e3a >> 0x10);
    iVar118 = (auVar121._2_2_ * 0xd4db >> 0x10) - (sVar60 * 0x8e3a >> 0x10);
    iVar103 = (sVar72 * 0xd4db >> 0x10) - (local_f8[3] * 0x8e3a >> 0x10);
    iVar104 = (sVar80 * 0xd4db >> 0x10) - (local_e8[3] * 0x8e3a >> 0x10);
    auVar18._2_2_ = local_d8[1];
    auVar18._0_2_ = local_d8[0];
    auVar18._4_2_ = local_d8[2];
    auVar18._6_2_ = local_d8[3];
    auVar18._8_4_ = uStack_d0;
    auVar17._2_2_ = local_d8[1];
    auVar17._0_2_ = local_d8[0];
    auVar17._4_2_ = local_d8[2];
    auVar17._6_2_ = local_d8[3];
    auVar17._8_4_ = uStack_d0;
    auVar16._2_2_ = local_d8[1];
    auVar16._0_2_ = local_d8[0];
    auVar16._4_2_ = local_d8[2];
    auVar16._6_2_ = local_d8[3];
    auVar16._8_4_ = uStack_d0;
    sVar132 = (short)((uint)((short)uVar105 * 0xd4db) >> 0x10) +
              (short)((uint)(auVar121._0_2_ * 0x8e3a) >> 0x10);
    sVar114 = (short)((uint)(sVar60 * 0xd4db) >> 0x10) +
              (short)((uint)(auVar121._2_2_ * 0x8e3a) >> 0x10);
    sVar72 = (short)((uint)(local_f8[3] * 0xd4db) >> 0x10) +
             (short)((uint)(sVar72 * 0x8e3a) >> 0x10);
    sVar80 = (short)((uint)(local_e8[3] * 0xd4db) >> 0x10) +
             (short)((uint)(sVar80 * 0x8e3a) >> 0x10);
    auVar57._2_2_ = local_c8[1];
    auVar57._0_2_ = local_c8[0];
    auVar57._4_2_ = local_c8[2];
    auVar57._6_2_ = local_c8[3];
    auVar57._8_8_ = uStack_c0;
    auVar56._2_2_ = local_c8[1];
    auVar56._0_2_ = local_c8[0];
    auVar56._4_2_ = local_c8[2];
    auVar56._6_2_ = local_c8[3];
    auVar56._8_8_ = uStack_c0;
    auVar55._2_2_ = local_c8[1];
    auVar55._0_2_ = local_c8[0];
    auVar55._4_2_ = local_c8[2];
    auVar55._6_2_ = local_c8[3];
    auVar55._8_8_ = uStack_c0;
    auVar130._0_4_ = (auVar129._0_2_ * 0x31f1 >> 0x10) + (local_118[1] * 0xfb15 >> 0x10);
    auVar130._4_4_ = (auVar129._2_2_ * 0x31f1 >> 0x10) + (local_108[1] * 0xfb15 >> 0x10);
    auVar130._8_4_ = (auVar123._4_2_ * 0x31f1 >> 0x10) + (sVar61 * 0xfb15 >> 0x10);
    auVar130._12_4_ = (auVar123._6_2_ * 0x31f1 >> 0x10) + (sVar62 * 0xfb15 >> 0x10);
    sVar115 = (short)((uint)(local_118[2] * 0x61f8) >> 0x10) -
              (short)((uint)(auVar106._0_2_ * 0xec83) >> 0x10);
    sVar126 = (short)((uint)(local_108[2] * 0x61f8) >> 0x10) -
              (short)((uint)(auVar106._2_2_ * 0xec83) >> 0x10);
    sVar21 = (short)((uint)(local_f8[2] * 0x61f8) >> 0x10) -
             (short)((uint)(auVar122._4_2_ * 0xec83) >> 0x10);
    sVar23 = (short)((uint)(local_e8[2] * 0x61f8) >> 0x10) -
             (short)((uint)(auVar122._6_2_ * 0xec83) >> 0x10);
    sVar127 = (short)((uint)((short)(local_108[4] + local_108[0]) * 0xb505) >> 0x10);
    uVar105 = CONCAT26(local_b8[3],CONCAT24(local_b8[2],CONCAT22(local_b8[1],local_b8[0])));
    auVar12._2_2_ = local_b8[1];
    auVar12._0_2_ = local_b8[0];
    auVar12._4_2_ = local_b8[2];
    auVar12._6_2_ = local_b8[3];
    auVar12._8_4_ = uStack_b0;
    auVar11._2_2_ = local_b8[1];
    auVar11._0_2_ = local_b8[0];
    auVar11._4_2_ = local_b8[2];
    auVar11._6_2_ = local_b8[3];
    auVar11._8_4_ = uStack_b0;
    auVar10._2_2_ = local_b8[1];
    auVar10._0_2_ = local_b8[0];
    auVar10._4_2_ = local_b8[2];
    auVar10._6_2_ = local_b8[3];
    auVar10._8_4_ = uStack_b0;
    auVar15._2_2_ = local_a8[1];
    auVar15._0_2_ = local_a8[0];
    auVar15._4_2_ = local_a8[2];
    auVar15._6_2_ = local_a8[3];
    auVar15._8_4_ = uStack_a0;
    auVar14._2_2_ = local_a8[1];
    auVar14._0_2_ = local_a8[0];
    auVar14._4_2_ = local_a8[2];
    auVar14._6_2_ = local_a8[3];
    auVar14._8_4_ = uStack_a0;
    auVar13._2_2_ = local_a8[1];
    auVar13._0_2_ = local_a8[0];
    auVar13._4_2_ = local_a8[2];
    auVar13._6_2_ = local_a8[3];
    auVar13._8_4_ = uStack_a0;
    sVar77 = (short)((uint)(auVar106._0_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_118[2] * 0xec83) >> 0x10);
    sVar78 = (short)((uint)(auVar106._2_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_108[2] * 0xec83) >> 0x10);
    sVar79 = (short)((uint)(auVar122._4_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_f8[2] * 0xec83) >> 0x10);
    sVar83 = (short)((uint)(auVar122._6_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_e8[2] * 0xec83) >> 0x10);
    sVar73 = (short)iVar116 + (short)iVar107;
    sVar53 = (short)iVar118 + (short)iVar108;
    sVar50 = (short)iVar103 + (short)iVar109;
    sVar46 = (short)iVar104 + (short)iVar110;
    sVar63 = sVar132 + (short)auVar130._0_4_;
    sVar68 = sVar114 + (short)auVar130._4_4_;
    sVar70 = sVar72 + (short)auVar130._8_4_;
    sVar71 = sVar80 + (short)auVar130._12_4_;
    auVar131._6_10_ = auVar130._6_10_;
    auVar131._4_2_ = local_b8[1];
    auVar131._2_2_ = local_a8[0];
    auVar131._0_2_ = local_b8[0];
    sVar60 = (short)((uint)((short)((short)uStack_110 + local_118[0]) * 0xb505) >> 0x10);
    sVar76 = sVar60 - sVar77;
    sVar54 = sVar127 - sVar78;
    sVar62 = (short)((uint)((short)(auVar112._4_2_ + sVar65) * 0xb505) >> 0x10);
    sVar51 = sVar62 - sVar79;
    sVar61 = (short)((uint)((short)(auVar112._6_2_ + sVar67) * 0xb505) >> 0x10);
    sVar47 = sVar61 - sVar83;
    sVar77 = sVar77 + sVar60;
    sVar78 = sVar78 + sVar127;
    sVar79 = sVar79 + sVar62;
    sVar83 = sVar83 + sVar61;
    sVar62 = (short)((uint)((short)(local_118[0] - (short)uStack_110) * 0xb505) >> 0x10);
    sVar43 = sVar62 - sVar115;
    sVar127 = (short)((uint)((short)(local_108[0] - local_108[4]) * 0xb505) >> 0x10);
    sVar45 = sVar127 - sVar126;
    sVar61 = (short)((uint)((short)(sVar65 - auVar112._4_2_) * 0xb505) >> 0x10);
    sVar39 = sVar61 - sVar21;
    sVar60 = (short)((uint)((short)(sVar67 - auVar112._6_2_) * 0xb505) >> 0x10);
    sVar25 = sVar60 - sVar23;
    sVar115 = sVar115 + sVar62;
    sVar126 = sVar126 + sVar127;
    sVar21 = sVar21 + sVar61;
    sVar23 = sVar23 + sVar60;
    uVar101 = NEON_ext(uVar105,CONCAT26(local_a8[3],
                                        CONCAT24(local_b8[3],CONCAT22(local_a8[1],local_b8[1]))),4,1
                      );
    sVar61 = (short)((uint)(((iVar107 - iVar116) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar19 = (short)((uint)((short)((short)auVar130._0_4_ - sVar132) * 0xb505) >> 0x10);
    sVar42 = sVar19 - sVar61;
    sVar62 = (short)((uint)(((iVar108 - iVar118) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar124 = (short)((uint)((short)((short)auVar130._4_4_ - sVar114) * 0xb505) >> 0x10);
    sVar44 = sVar124 - sVar62;
    sVar132 = (short)((uint)(((iVar109 - iVar103) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar20 = (short)((uint)((short)((short)auVar130._8_4_ - sVar72) * 0xb505) >> 0x10);
    sVar38 = sVar20 - sVar132;
    sVar60 = (short)((uint)(((iVar110 - iVar104) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar22 = (short)((uint)((short)((short)auVar130._12_4_ - sVar80) * 0xb505) >> 0x10);
    sVar24 = sVar22 - sVar60;
    uVar128 = NEON_ext(uVar105,CONCAT26(local_a8[1],auVar131._0_6_),4,1);
    sVar19 = sVar19 + sVar61;
    sVar124 = sVar124 + sVar62;
    sVar20 = sVar20 + sVar132;
    sVar22 = sVar22 + sVar60;
    uVar105 = NEON_ext(CONCAT26(local_c8[3],CONCAT24(local_d8[3],CONCAT22(local_c8[1],local_d8[1])))
                       ,CONCAT26(local_d8[3],CONCAT24(local_d8[2],CONCAT22(local_d8[1],local_d8[0]))
                                ),4,1);
    auVar16._12_4_ = uStack_cc;
    auVar112 = a64_TBL(ZEXT816(0),auVar16,auVar55,_DAT_004c4160);
    auVar10._12_4_ = uStack_ac;
    auVar13._12_4_ = uStack_9c;
    auVar129 = a64_TBL(ZEXT816(0),auVar10,auVar13,_DAT_004c5320);
    auVar17._12_4_ = uStack_cc;
    auVar113 = a64_TBL(ZEXT816(0),auVar17,auVar56,_DAT_004c38b0);
    auVar11._12_4_ = uStack_ac;
    auVar14._12_4_ = uStack_9c;
    auVar106 = a64_TBL(ZEXT816(0),auVar11,auVar14,_DAT_004c42e0);
    auVar12._12_4_ = uStack_ac;
    auVar15._12_4_ = uStack_9c;
    auVar122 = a64_TBL(ZEXT816(0),auVar12,auVar15,_DAT_004c5a40);
    auVar18._12_4_ = uStack_cc;
    auVar123 = a64_TBL(ZEXT816(0),auVar18,auVar57,_DAT_004c5150);
    iVar118 = (int)(short)((uint)uStack_b0 >> 0x10);
    iVar111 = (int)(short)((uint)uStack_a0 >> 0x10);
    iVar116 = (int)(short)((ulong)uVar105 >> 0x10);
    sVar60 = (short)((ulong)uVar101 >> 0x20);
    sVar132 = (short)((ulong)uVar101 >> 0x30);
    sVar127 = (short)((ulong)uVar128 >> 0x20);
    sVar67 = (short)((ulong)uVar128 >> 0x30);
    iVar107 = (local_d8[1] * 0x31f1 >> 0x10) - (auVar113._0_2_ * 0xfb15 >> 0x10);
    iVar108 = (local_c8[1] * 0x31f1 >> 0x10) - (auVar113._2_2_ * 0xfb15 >> 0x10);
    iVar109 = (sVar60 * 0x31f1 >> 0x10) - (auVar129._4_2_ * 0xfb15 >> 0x10);
    iVar110 = (sVar132 * 0x31f1 >> 0x10) - (auVar129._6_2_ * 0xfb15 >> 0x10);
    iVar85 = (auVar112._0_2_ * 0xd4db >> 0x10) - ((short)uVar105 * 0x8e3a >> 0x10);
    iVar87 = ((uint)(auVar112._2_2_ * 0xd4db) >> 0x10) - (iVar116 * 0x8e3a >> 0x10);
    iVar88 = (iVar118 * 0xd4db >> 0x10) - (local_b8[3] * 0x8e3a >> 0x10);
    iVar89 = (iVar111 * 0xd4db >> 0x10) - (local_a8[3] * 0x8e3a >> 0x10);
    iVar103 = ((uint)((short)uVar105 * 0xd4db) >> 0x10) + (auVar112._0_2_ * 0x8e3a >> 0x10);
    iVar104 = ((uint)(iVar116 * 0xd4db) >> 0x10) + (auVar112._2_2_ * 0x8e3a >> 0x10);
    iVar117 = (local_b8[3] * 0xd4db >> 0x10) + (iVar118 * 0x8e3a >> 0x10);
    iVar119 = (local_a8[3] * 0xd4db >> 0x10) + (iVar111 * 0x8e3a >> 0x10);
    iVar116 = ((uint)(auVar113._0_2_ * 0x31f1) >> 0x10) + (local_d8[1] * 0xfb15 >> 0x10);
    iVar118 = ((uint)(auVar113._2_2_ * 0x31f1) >> 0x10) + (local_c8[1] * 0xfb15 >> 0x10);
    iVar111 = (auVar129._4_2_ * 0x31f1 >> 0x10) + (sVar60 * 0xfb15 >> 0x10);
    iVar93 = (auVar129._6_2_ * 0x31f1 >> 0x10) + (sVar132 * 0xfb15 >> 0x10);
    sVar80 = (short)((uint)(local_d8[2] * 0x61f8) >> 0x10) -
             (short)((uint)(auVar123._0_2_ * 0xec83) >> 0x10);
    sVar114 = (short)((uint)(local_c8[2] * 0x61f8) >> 0x10) -
              (short)((uint)(auVar123._2_2_ * 0xec83) >> 0x10);
    sVar27 = (short)((uint)(local_b8[2] * 0x61f8) >> 0x10) -
             (short)((uint)(auVar122._4_2_ * 0xec83) >> 0x10);
    sVar29 = (short)((uint)(local_a8[2] * 0x61f8) >> 0x10) -
             (short)((uint)(auVar122._6_2_ * 0xec83) >> 0x10);
    sVar69 = (short)((uint)(auVar123._0_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_d8[2] * 0xec83) >> 0x10);
    sVar72 = (short)((uint)(auVar123._2_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_c8[2] * 0xec83) >> 0x10);
    sVar49 = (short)((uint)(auVar122._4_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_b8[2] * 0xec83) >> 0x10);
    sVar41 = (short)((uint)(auVar122._6_2_ * 0x61f8) >> 0x10) +
             (short)((uint)(local_a8[2] * 0xec83) >> 0x10);
    sVar91 = (short)iVar103 + (short)iVar116;
    sVar52 = (short)iVar104 + (short)iVar118;
    sVar48 = (short)iVar117 + (short)iVar111;
    sVar40 = (short)iVar119 + (short)iVar93;
    sVar60 = (short)((uint)((short)((short)uStack_d0 + local_d8[0]) * 0xb505) >> 0x10);
    sVar64 = sVar60 - sVar69;
    sVar132 = (short)((uint)((short)((short)uStack_c0 + local_c8[0]) * 0xb505) >> 0x10);
    sVar66 = sVar132 - sVar72;
    sVar61 = (short)((uint)((short)(auVar106._4_2_ + sVar127) * 0xb505) >> 0x10);
    sVar35 = sVar61 - sVar49;
    sVar62 = (short)((uint)((short)(auVar106._6_2_ + sVar67) * 0xb505) >> 0x10);
    sVar37 = sVar62 - sVar41;
    sVar69 = sVar69 + sVar60;
    sVar72 = sVar72 + sVar132;
    sVar49 = sVar49 + sVar61;
    sVar41 = sVar41 + sVar62;
    sVar60 = (short)((uint)((short)(local_d8[0] - (short)uStack_d0) * 0xb505) >> 0x10);
    sVar65 = sVar60 - sVar80;
    sVar132 = (short)((uint)((short)(local_c8[0] - (short)uStack_c0) * 0xb505) >> 0x10);
    sVar81 = sVar132 - sVar114;
    sVar61 = (short)((uint)((short)(sVar127 - auVar106._4_2_) * 0xb505) >> 0x10);
    sVar31 = sVar61 - sVar27;
    sVar62 = (short)((uint)((short)(sVar67 - auVar106._6_2_) * 0xb505) >> 0x10);
    sVar33 = sVar62 - sVar29;
    sVar80 = sVar80 + sVar60;
    sVar114 = sVar114 + sVar132;
    sVar27 = sVar27 + sVar61;
    sVar29 = sVar29 + sVar62;
    sVar61 = (short)((uint)(((iVar107 - iVar85) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar60 = (short)((uint)(((iVar116 - iVar103) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar127 = sVar60 - sVar61;
    sVar62 = (short)((uint)(((iVar108 - iVar87) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar132 = (short)((uint)(((iVar118 - iVar104) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar67 = sVar132 - sVar62;
    sVar34 = (short)((uint)(((iVar109 - iVar88) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar26 = (short)((uint)(((iVar111 - iVar117) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar30 = sVar26 - sVar34;
    sVar36 = (short)((uint)(((iVar110 - iVar89) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar28 = (short)((uint)(((iVar93 - iVar119) * 0x10000 >> 0x10) * 0xb505) >> 0x10);
    sVar32 = sVar28 - sVar36;
    sVar60 = sVar60 + sVar61;
    sVar132 = sVar132 + sVar62;
    sVar26 = sVar26 + sVar34;
    sVar28 = sVar28 + sVar36;
    sVar61 = (short)iVar85 + (short)iVar107;
    sVar62 = (short)iVar87 + (short)iVar108;
    sVar34 = (short)iVar88 + (short)iVar109;
    sVar36 = (short)iVar89 + (short)iVar110;
    *(ulong *)*param_1 =
         CONCAT26(sVar71 + sVar83,
                  CONCAT24(sVar70 + sVar79,CONCAT22(sVar68 + sVar78,sVar63 + sVar77)));
    *(ulong *)(*param_1 + 8) =
         CONCAT26(sVar40 + sVar41,
                  CONCAT24(sVar48 + sVar49,CONCAT22(sVar52 + sVar72,sVar91 + sVar69)));
    *(ulong *)param_1[1] =
         CONCAT26(sVar22 + sVar23,
                  CONCAT24(sVar20 + sVar21,CONCAT22(sVar124 + sVar126,sVar19 + sVar115)));
    *(ulong *)(param_1[1] + 8) =
         CONCAT26(sVar28 + sVar29,
                  CONCAT24(sVar26 + sVar27,CONCAT22(sVar132 + sVar114,sVar60 + sVar80)));
    *(ulong *)param_1[2] =
         CONCAT26(sVar24 + sVar25,
                  CONCAT24(sVar38 + sVar39,CONCAT22(sVar44 + sVar45,sVar42 + sVar43)));
    *(ulong *)(param_1[2] + 8) =
         CONCAT26(sVar32 + sVar33,
                  CONCAT24(sVar30 + sVar31,CONCAT22(sVar67 + sVar81,sVar127 + sVar65)));
    *(ulong *)param_1[3] =
         CONCAT26(sVar46 + sVar47,
                  CONCAT24(sVar50 + sVar51,CONCAT22(sVar53 + sVar54,sVar73 + sVar76)));
    *(ulong *)(param_1[3] + 8) =
         CONCAT26(sVar36 + sVar37,
                  CONCAT24(sVar34 + sVar35,CONCAT22(sVar62 + sVar66,sVar61 + sVar64)));
    *(ulong *)param_1[4] =
         CONCAT26(sVar47 - sVar46,
                  CONCAT24(sVar51 - sVar50,CONCAT22(sVar54 - sVar53,sVar76 - sVar73)));
    *(ulong *)(param_1[4] + 8) =
         CONCAT26(sVar37 - sVar36,
                  CONCAT24(sVar35 - sVar34,CONCAT22(sVar66 - sVar62,sVar64 - sVar61)));
    uVar2 = *(undefined8 *)(*param_1 + 8);
    uVar128 = *(undefined8 *)*param_1;
    auVar106 = param_1[1];
    *(ulong *)param_1[5] =
         CONCAT26(sVar25 - sVar24,
                  CONCAT24(sVar39 - sVar38,CONCAT22(sVar45 - sVar44,sVar43 - sVar42)));
    *(ulong *)(param_1[5] + 8) =
         CONCAT26(sVar33 - sVar32,
                  CONCAT24(sVar31 - sVar30,CONCAT22(sVar81 - sVar67,sVar65 - sVar127)));
    *(ulong *)param_1[6] =
         CONCAT26(sVar23 - sVar22,
                  CONCAT24(sVar21 - sVar20,CONCAT22(sVar126 - sVar124,sVar115 - sVar19)));
    *(ulong *)(param_1[6] + 8) =
         CONCAT26(sVar29 - sVar28,
                  CONCAT24(sVar27 - sVar26,CONCAT22(sVar114 - sVar132,sVar80 - sVar60)));
    auVar122 = param_1[2];
    uVar101 = *(undefined8 *)(param_1[3] + 8);
    uVar105 = *(undefined8 *)param_1[3];
    *(ulong *)param_1[7] =
         CONCAT26(sVar83 - sVar71,
                  CONCAT24(sVar79 - sVar70,CONCAT22(sVar78 - sVar68,sVar77 - sVar63)));
    *(ulong *)(param_1[7] + 8) =
         CONCAT26(sVar41 - sVar40,
                  CONCAT24(sVar49 - sVar48,CONCAT22(sVar72 - sVar52,sVar69 - sVar91)));
    *(ulong *)(*param_1 + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar2 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar2 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar2 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar2 + 8U >> 4))));
    *(ulong *)*param_1 =
         CONCAT26((short)((int)(short)((ulong)uVar128 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar128 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar128 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar128 + 8U >> 4))));
    *(ulong *)(param_1[1] + 8) =
         CONCAT26((short)((int)auVar106._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._10_2_ + 8U >> 4),
                                    (short)((int)auVar106._8_2_ + 8U >> 4))));
    *(ulong *)param_1[1] =
         CONCAT26((short)((int)auVar106._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar106._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar106._2_2_ + 8U >> 4),
                                    (short)((int)auVar106._0_2_ + 8U >> 4))));
    uVar97 = *(undefined8 *)(param_1[4] + 8);
    uVar128 = *(undefined8 *)param_1[4];
    uVar6 = *(undefined8 *)(param_1[5] + 8);
    uVar5 = *(undefined8 *)param_1[5];
    uVar99 = *(undefined8 *)(param_1[6] + 8);
    uVar2 = *(undefined8 *)param_1[6];
    uVar100 = *(undefined8 *)(param_1[7] + 8);
    uVar98 = *(undefined8 *)param_1[7];
    *(ulong *)(param_1[2] + 8) =
         CONCAT26((short)((int)auVar122._14_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._12_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._10_2_ + 8U >> 4),
                                    (short)((int)auVar122._8_2_ + 8U >> 4))));
    *(ulong *)param_1[2] =
         CONCAT26((short)((int)auVar122._6_2_ + 8U >> 4),
                  CONCAT24((short)((int)auVar122._4_2_ + 8U >> 4),
                           CONCAT22((short)((int)auVar122._2_2_ + 8U >> 4),
                                    (short)((int)auVar122._0_2_ + 8U >> 4))));
    *(ulong *)(param_1[3] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar101 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar101 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar101 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar101 + 8U >> 4))));
    *(ulong *)param_1[3] =
         CONCAT26((short)((int)(short)((ulong)uVar105 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar105 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar105 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar105 + 8U >> 4))));
    *(ulong *)(param_1[4] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar97 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar97 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar97 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar97 + 8U >> 4))));
    *(ulong *)param_1[4] =
         CONCAT26((short)((int)(short)((ulong)uVar128 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar128 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar128 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar128 + 8U >> 4))));
    *(ulong *)(param_1[5] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar6 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar6 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar6 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar6 + 8U >> 4))));
    *(ulong *)param_1[5] =
         CONCAT26((short)((int)(short)((ulong)uVar5 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar5 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar5 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar5 + 8U >> 4))));
    *(ulong *)(param_1[6] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar99 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar99 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar99 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar99 + 8U >> 4))));
    *(ulong *)param_1[6] =
         CONCAT26((short)((int)(short)((ulong)uVar2 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar2 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar2 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar2 + 8U >> 4))));
    *(ulong *)(param_1[7] + 8) =
         CONCAT26((short)((int)(short)((ulong)uVar100 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar100 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar100 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar100 + 8U >> 4))));
    *(ulong *)param_1[7] =
         CONCAT26((short)((int)(short)((ulong)uVar98 >> 0x30) + 8U >> 4),
                  CONCAT24((short)((int)(short)((ulong)uVar98 >> 0x20) + 8U >> 4),
                           CONCAT22((short)((int)(short)((ulong)uVar98 >> 0x10) + 8U >> 4),
                                    (short)((int)(short)uVar98 + 8U >> 4))));
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


