// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61418
// Entry Point: 00d61418
// Size: 604 bytes
// Signature: undefined FUN_00d61418(void)


void FUN_00d61418(long param_1,ulong **param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  ulong *puVar11;
  byte *pbVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  byte *pbVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar16 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar17 = uVar16 & 0xfffffff0;
      uVar18 = uVar16 & 0xfffffff8;
      do {
        lVar19 = (ulong)param_4 * 8;
        puVar11 = *(ulong **)(*param_3 + lVar19);
        puVar22 = *(ulong **)(param_3[1] + lVar19);
        puVar20 = *(ulong **)(param_3[2] + lVar19);
        puVar13 = *param_2;
        if (uVar2 < 8) {
LAB_00d61560:
          puVar14 = puVar13;
          uVar15 = 0;
LAB_00d61564:
          lVar19 = uVar16 - uVar15;
          pbVar12 = (byte *)((long)puVar11 + uVar15);
          pbVar21 = (byte *)((long)puVar20 + uVar15);
          pcVar10 = (char *)((long)puVar22 + uVar15);
          do {
            cVar27 = *(char *)puVar14;
            lVar19 = lVar19 + -1;
            cVar28 = *(char *)((long)puVar14 + 1);
            cVar30 = *(char *)((long)puVar14 + 2);
            puVar14 = (ulong *)((long)puVar14 + 3);
            *pbVar12 = cVar27 - cVar28 ^ 0x80;
            *pcVar10 = cVar28;
            *pbVar21 = cVar30 - cVar28 ^ 0x80;
            pbVar12 = pbVar12 + 1;
            pbVar21 = pbVar21 + 1;
            pcVar10 = pcVar10 + 1;
          } while (lVar19 != 0);
        }
        else {
          puVar14 = (ulong *)((long)puVar22 + uVar16);
          puVar23 = (ulong *)((long)puVar11 + uVar16);
          puVar25 = (ulong *)((long)puVar20 + uVar16);
          puVar26 = (ulong *)((long)puVar13 + uVar16 * 3);
          if ((((puVar11 < puVar14 && puVar22 < puVar23) || (puVar11 < puVar25 && puVar20 < puVar23)
               ) || (puVar11 < puVar26 && puVar13 < puVar23)) ||
             (((puVar22 < puVar25 && puVar20 < puVar14 || (puVar22 < puVar26 && puVar13 < puVar14))
              || (puVar20 < puVar26 && puVar13 < puVar25)))) goto LAB_00d61560;
          uVar15 = uVar17;
          puVar14 = puVar20;
          puVar23 = puVar22;
          puVar25 = puVar11;
          puVar26 = puVar13;
          if (uVar2 < 0x10) {
            uVar15 = 0;
LAB_00d61604:
            puVar14 = (ulong *)((long)puVar13 + uVar18 * 3);
            pcVar10 = (char *)((long)puVar13 + uVar15 * 3);
            lVar19 = uVar15 - uVar18;
            puVar13 = (ulong *)((long)puVar11 + uVar15);
            puVar24 = (undefined8 *)((long)puVar22 + uVar15);
            puVar23 = (ulong *)((long)puVar20 + uVar15);
            do {
              cVar27 = *pcVar10;
              cVar28 = pcVar10[1];
              cVar52 = pcVar10[2];
              pcVar3 = pcVar10 + 3;
              cVar30 = pcVar10[4];
              cVar54 = pcVar10[5];
              pcVar4 = pcVar10 + 6;
              cVar32 = pcVar10[7];
              cVar56 = pcVar10[8];
              pcVar5 = pcVar10 + 9;
              cVar34 = pcVar10[10];
              cVar58 = pcVar10[0xb];
              pcVar6 = pcVar10 + 0xc;
              cVar36 = pcVar10[0xd];
              cVar60 = pcVar10[0xe];
              pcVar7 = pcVar10 + 0xf;
              cVar38 = pcVar10[0x10];
              cVar62 = pcVar10[0x11];
              pcVar8 = pcVar10 + 0x12;
              cVar40 = pcVar10[0x13];
              cVar64 = pcVar10[0x14];
              pcVar9 = pcVar10 + 0x15;
              cVar42 = pcVar10[0x16];
              cVar66 = pcVar10[0x17];
              pcVar10 = pcVar10 + 0x18;
              lVar19 = lVar19 + 8;
              *puVar13 = CONCAT17(*pcVar9 - cVar42,
                                  CONCAT16(*pcVar8 - cVar40,
                                           CONCAT15(*pcVar7 - cVar38,
                                                    CONCAT14(*pcVar6 - cVar36,
                                                             CONCAT13(*pcVar5 - cVar34,
                                                                      CONCAT12(*pcVar4 - cVar32,
                                                                               CONCAT11(*pcVar3 - 
                                                  cVar30,cVar27 - cVar28))))))) ^ 0x8080808080808080
              ;
              *puVar24 = CONCAT17(cVar42,CONCAT16(cVar40,CONCAT15(cVar38,CONCAT14(cVar36,CONCAT13(
                                                  cVar34,CONCAT12(cVar32,CONCAT11(cVar30,cVar28)))))
                                                 ));
              *puVar23 = CONCAT17(cVar66 - cVar42,
                                  CONCAT16(cVar64 - cVar40,
                                           CONCAT15(cVar62 - cVar38,
                                                    CONCAT14(cVar60 - cVar36,
                                                             CONCAT13(cVar58 - cVar34,
                                                                      CONCAT12(cVar56 - cVar32,
                                                                               CONCAT11(cVar54 - 
                                                  cVar30,cVar52 - cVar28))))))) ^ 0x8080808080808080
              ;
              puVar13 = puVar13 + 1;
              puVar24 = puVar24 + 1;
              puVar23 = puVar23 + 1;
            } while (lVar19 != 0);
            uVar15 = uVar18;
            if (uVar18 == uVar16) goto LAB_00d61464;
            goto LAB_00d61564;
          }
          do {
            cVar27 = *(char *)puVar26;
            cVar66 = *(char *)((long)puVar26 + 1);
            cVar51 = *(char *)((long)puVar26 + 2);
            cVar28 = *(char *)((long)puVar26 + 3);
            cVar29 = *(char *)((long)puVar26 + 4);
            cVar53 = *(char *)((long)puVar26 + 5);
            cVar30 = *(char *)((long)puVar26 + 6);
            cVar31 = *(char *)((long)puVar26 + 7);
            cVar55 = *(char *)(puVar26 + 1);
            cVar32 = *(char *)((long)puVar26 + 9);
            cVar33 = *(char *)((long)puVar26 + 10);
            cVar57 = *(char *)((long)puVar26 + 0xb);
            cVar34 = *(char *)((long)puVar26 + 0xc);
            cVar35 = *(char *)((long)puVar26 + 0xd);
            cVar59 = *(char *)((long)puVar26 + 0xe);
            cVar36 = *(char *)((long)puVar26 + 0xf);
            cVar37 = *(char *)(puVar26 + 2);
            cVar61 = *(char *)((long)puVar26 + 0x11);
            cVar38 = *(char *)((long)puVar26 + 0x12);
            cVar39 = *(char *)((long)puVar26 + 0x13);
            cVar63 = *(char *)((long)puVar26 + 0x14);
            cVar40 = *(char *)((long)puVar26 + 0x15);
            cVar41 = *(char *)((long)puVar26 + 0x16);
            cVar65 = *(char *)((long)puVar26 + 0x17);
            cVar42 = *(char *)(puVar26 + 3);
            cVar43 = *(char *)((long)puVar26 + 0x19);
            cVar67 = *(char *)((long)puVar26 + 0x1a);
            cVar52 = *(char *)((long)puVar26 + 0x1b);
            cVar44 = *(char *)((long)puVar26 + 0x1c);
            cVar68 = *(char *)((long)puVar26 + 0x1d);
            cVar54 = *(char *)((long)puVar26 + 0x1e);
            cVar45 = *(char *)((long)puVar26 + 0x1f);
            cVar69 = *(char *)(puVar26 + 4);
            cVar56 = *(char *)((long)puVar26 + 0x21);
            cVar46 = *(char *)((long)puVar26 + 0x22);
            cVar70 = *(char *)((long)puVar26 + 0x23);
            cVar58 = *(char *)((long)puVar26 + 0x24);
            cVar47 = *(char *)((long)puVar26 + 0x25);
            cVar71 = *(char *)((long)puVar26 + 0x26);
            cVar60 = *(char *)((long)puVar26 + 0x27);
            cVar48 = *(char *)(puVar26 + 5);
            cVar72 = *(char *)((long)puVar26 + 0x29);
            cVar62 = *(char *)((long)puVar26 + 0x2a);
            cVar49 = *(char *)((long)puVar26 + 0x2b);
            cVar73 = *(char *)((long)puVar26 + 0x2c);
            cVar64 = *(char *)((long)puVar26 + 0x2d);
            cVar50 = *(char *)((long)puVar26 + 0x2e);
            cVar74 = *(char *)((long)puVar26 + 0x2f);
            uVar15 = uVar15 - 0x10;
            puVar23[1] = CONCAT17(cVar50,CONCAT16(cVar49,CONCAT15(cVar48,CONCAT14(cVar47,CONCAT13(
                                                  cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar43)))))
                                                 ));
            *puVar23 = CONCAT17(cVar41,CONCAT16(cVar39,CONCAT15(cVar37,CONCAT14(cVar35,CONCAT13(
                                                  cVar33,CONCAT12(cVar31,CONCAT11(cVar29,cVar66)))))
                                               ));
            puVar25[1] = CONCAT17(cVar64 - cVar50,
                                  CONCAT16(cVar62 - cVar49,
                                           CONCAT15(cVar60 - cVar48,
                                                    CONCAT14(cVar58 - cVar47,
                                                             CONCAT13(cVar56 - cVar46,
                                                                      CONCAT12(cVar54 - cVar45,
                                                                               CONCAT11(cVar52 - 
                                                  cVar44,cVar42 - cVar43))))))) ^ 0x8080808080808080
            ;
            *puVar25 = CONCAT17(cVar40 - cVar41,
                                CONCAT16(cVar38 - cVar39,
                                         CONCAT15(cVar36 - cVar37,
                                                  CONCAT14(cVar34 - cVar35,
                                                           CONCAT13(cVar32 - cVar33,
                                                                    CONCAT12(cVar30 - cVar31,
                                                                             CONCAT11(cVar28 - 
                                                  cVar29,cVar27 - cVar66))))))) ^ 0x8080808080808080
            ;
            puVar14[1] = CONCAT17(cVar74 - cVar50,
                                  CONCAT16(cVar73 - cVar49,
                                           CONCAT15(cVar72 - cVar48,
                                                    CONCAT14(cVar71 - cVar47,
                                                             CONCAT13(cVar70 - cVar46,
                                                                      CONCAT12(cVar69 - cVar45,
                                                                               CONCAT11(cVar68 - 
                                                  cVar44,cVar67 - cVar43))))))) ^ 0x8080808080808080
            ;
            *puVar14 = CONCAT17(cVar65 - cVar41,
                                CONCAT16(cVar63 - cVar39,
                                         CONCAT15(cVar61 - cVar37,
                                                  CONCAT14(cVar59 - cVar35,
                                                           CONCAT13(cVar57 - cVar33,
                                                                    CONCAT12(cVar55 - cVar31,
                                                                             CONCAT11(cVar53 - 
                                                  cVar29,cVar51 - cVar66))))))) ^ 0x8080808080808080
            ;
            puVar14 = puVar14 + 2;
            puVar23 = puVar23 + 2;
            puVar25 = puVar25 + 2;
            puVar26 = puVar26 + 6;
          } while (uVar15 != 0);
          if (uVar17 != uVar16) {
            uVar15 = uVar17;
            if ((uVar2 >> 3 & 1) != 0) goto LAB_00d61604;
            puVar14 = (ulong *)((long)puVar13 + uVar17 * 3);
            goto LAB_00d61564;
          }
        }
LAB_00d61464:
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}


