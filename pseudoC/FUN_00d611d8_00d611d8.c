// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d611d8
// Entry Point: 00d611d8
// Size: 576 bytes
// Signature: undefined FUN_00d611d8(void)


void FUN_00d611d8(long param_1,undefined8 *param_2,long *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined uVar23;
  undefined uVar24;
  undefined uVar25;
  undefined uVar26;
  undefined uVar27;
  undefined uVar28;
  undefined uVar29;
  undefined uVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  undefined uVar47;
  undefined uVar48;
  undefined uVar49;
  undefined uVar50;
  undefined uVar51;
  undefined uVar52;
  undefined uVar53;
  undefined uVar54;
  undefined uVar55;
  undefined uVar56;
  undefined uVar57;
  undefined uVar58;
  undefined uVar59;
  undefined uVar60;
  undefined uVar61;
  undefined uVar62;
  undefined uVar63;
  undefined uVar64;
  undefined uVar65;
  undefined uVar66;
  undefined uVar67;
  undefined uVar68;
  undefined uVar69;
  undefined uVar70;
  undefined uVar71;
  undefined uVar72;
  undefined uVar73;
  undefined uVar74;
  undefined uVar75;
  undefined uVar76;
  undefined uVar77;
  undefined uVar78;
  undefined uVar79;
  undefined uVar80;
  undefined uVar81;
  undefined uVar82;
  undefined uVar83;
  undefined uVar84;
  undefined uVar85;
  undefined uVar86;
  undefined uVar87;
  undefined uVar88;
  undefined uVar89;
  undefined uVar90;
  undefined uVar91;
  undefined uVar92;
  undefined uVar93;
  undefined uVar94;
  undefined uVar95;
  undefined uVar96;
  undefined uVar97;
  undefined uVar98;
  undefined uVar99;
  undefined uVar100;
  undefined uVar101;
  undefined uVar102;
  undefined uVar103;
  undefined uVar104;
  undefined uVar105;
  undefined uVar106;
  undefined uVar107;
  undefined uVar108;
  undefined uVar109;
  undefined uVar110;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar15 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar16 = uVar15 & 0xffffffe0;
      uVar17 = uVar15 & 0xfffffff8;
      do {
        lVar18 = (ulong)param_4 * 8;
        puVar11 = *(undefined **)(*param_3 + lVar18);
        puVar10 = *(undefined **)(param_3[1] + lVar18);
        puVar19 = *(undefined **)(param_3[2] + lVar18);
        puVar12 = (undefined *)*param_2;
        if (uVar2 < 8) {
LAB_00d6131c:
          puVar13 = puVar12;
          uVar20 = 0;
LAB_00d61320:
          lVar18 = uVar15 - uVar20;
          puVar12 = puVar10 + uVar20;
          puVar10 = puVar11 + uVar20;
          puVar11 = puVar19 + uVar20;
          do {
            lVar18 = lVar18 + -1;
            *puVar10 = *puVar13;
            *puVar12 = puVar13[1];
            puVar19 = puVar13 + 2;
            puVar13 = puVar13 + 3;
            *puVar11 = *puVar19;
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (lVar18 != 0);
        }
        else {
          puVar13 = puVar10 + uVar15;
          puVar3 = puVar11 + uVar15;
          puVar4 = puVar19 + uVar15;
          puVar5 = puVar12 + uVar15 * 3;
          if ((((puVar11 < puVar13 && puVar10 < puVar3) || (puVar11 < puVar4 && puVar19 < puVar3))
              || (puVar11 < puVar5 && puVar12 < puVar3)) ||
             (((puVar10 < puVar4 && puVar19 < puVar13 || (puVar10 < puVar5 && puVar12 < puVar13)) ||
              (puVar19 < puVar5 && puVar12 < puVar4)))) goto LAB_00d6131c;
          if (uVar2 < 0x20) {
            uVar20 = 0;
LAB_00d613ac:
            puVar13 = puVar12 + uVar17 * 3;
            puVar12 = puVar12 + uVar20 * 3;
            lVar18 = uVar20 - uVar17;
            puVar14 = (undefined8 *)(puVar11 + uVar20);
            puVar21 = (undefined8 *)(puVar10 + uVar20);
            puVar22 = (undefined8 *)(puVar19 + uVar20);
            do {
              uVar23 = *puVar12;
              uVar24 = puVar12[1];
              uVar40 = puVar12[2];
              puVar3 = puVar12 + 3;
              uVar25 = puVar12[4];
              uVar42 = puVar12[5];
              puVar4 = puVar12 + 6;
              uVar26 = puVar12[7];
              uVar44 = puVar12[8];
              puVar5 = puVar12 + 9;
              uVar27 = puVar12[10];
              uVar46 = puVar12[0xb];
              puVar6 = puVar12 + 0xc;
              uVar28 = puVar12[0xd];
              uVar48 = puVar12[0xe];
              puVar7 = puVar12 + 0xf;
              uVar29 = puVar12[0x10];
              uVar50 = puVar12[0x11];
              puVar8 = puVar12 + 0x12;
              uVar30 = puVar12[0x13];
              uVar52 = puVar12[0x14];
              puVar9 = puVar12 + 0x15;
              uVar31 = puVar12[0x16];
              uVar54 = puVar12[0x17];
              puVar12 = puVar12 + 0x18;
              lVar18 = lVar18 + 8;
              *puVar14 = CONCAT17(*puVar9,CONCAT16(*puVar8,CONCAT15(*puVar7,CONCAT14(*puVar6,
                                                  CONCAT13(*puVar5,CONCAT12(*puVar4,CONCAT11(*puVar3
                                                  ,uVar23)))))));
              *puVar21 = CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(uVar28,CONCAT13(
                                                  uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar24)))))
                                                 ));
              *puVar22 = CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(uVar48,CONCAT13(
                                                  uVar46,CONCAT12(uVar44,CONCAT11(uVar42,uVar40)))))
                                                 ));
              puVar14 = puVar14 + 1;
              puVar21 = puVar21 + 1;
              puVar22 = puVar22 + 1;
            } while (lVar18 != 0);
            uVar20 = uVar17;
            if (uVar17 == uVar15) goto LAB_00d61220;
            goto LAB_00d61320;
          }
          puVar14 = (undefined8 *)(puVar19 + 0x10);
          puVar21 = (undefined8 *)(puVar11 + 0x10);
          puVar22 = (undefined8 *)(puVar10 + 0x10);
          puVar13 = puVar12;
          uVar20 = uVar16;
          do {
            uVar20 = uVar20 - 0x20;
            uVar23 = *puVar13;
            uVar31 = puVar13[1];
            uVar39 = puVar13[2];
            uVar24 = puVar13[3];
            uVar40 = puVar13[4];
            uVar41 = puVar13[5];
            uVar25 = puVar13[6];
            uVar42 = puVar13[7];
            uVar43 = puVar13[8];
            uVar26 = puVar13[9];
            uVar44 = puVar13[10];
            uVar45 = puVar13[0xb];
            uVar27 = puVar13[0xc];
            uVar46 = puVar13[0xd];
            uVar47 = puVar13[0xe];
            uVar28 = puVar13[0xf];
            uVar48 = puVar13[0x10];
            uVar49 = puVar13[0x11];
            uVar29 = puVar13[0x12];
            uVar50 = puVar13[0x13];
            uVar51 = puVar13[0x14];
            uVar30 = puVar13[0x15];
            uVar52 = puVar13[0x16];
            uVar53 = puVar13[0x17];
            uVar54 = puVar13[0x19];
            uVar55 = puVar13[0x1a];
            uVar32 = puVar13[0x1c];
            uVar56 = puVar13[0x1d];
            uVar33 = puVar13[0x1f];
            uVar57 = puVar13[0x20];
            uVar34 = puVar13[0x22];
            uVar58 = puVar13[0x23];
            uVar35 = puVar13[0x25];
            uVar59 = puVar13[0x26];
            uVar36 = puVar13[0x28];
            uVar60 = puVar13[0x29];
            uVar37 = puVar13[0x2b];
            uVar61 = puVar13[0x2c];
            uVar38 = puVar13[0x2e];
            uVar62 = puVar13[0x2f];
            uVar63 = puVar13[0x30];
            uVar79 = puVar13[0x31];
            uVar95 = puVar13[0x32];
            uVar64 = puVar13[0x33];
            uVar80 = puVar13[0x34];
            uVar96 = puVar13[0x35];
            uVar65 = puVar13[0x36];
            uVar81 = puVar13[0x37];
            uVar97 = puVar13[0x38];
            uVar66 = puVar13[0x39];
            uVar82 = puVar13[0x3a];
            uVar98 = puVar13[0x3b];
            uVar67 = puVar13[0x3c];
            uVar83 = puVar13[0x3d];
            uVar99 = puVar13[0x3e];
            uVar68 = puVar13[0x3f];
            uVar84 = puVar13[0x40];
            uVar100 = puVar13[0x41];
            uVar69 = puVar13[0x42];
            uVar85 = puVar13[0x43];
            uVar101 = puVar13[0x44];
            uVar70 = puVar13[0x45];
            uVar86 = puVar13[0x46];
            uVar102 = puVar13[0x47];
            uVar71 = puVar13[0x48];
            uVar87 = puVar13[0x49];
            uVar103 = puVar13[0x4a];
            uVar72 = puVar13[0x4b];
            uVar88 = puVar13[0x4c];
            uVar104 = puVar13[0x4d];
            uVar73 = puVar13[0x4e];
            uVar89 = puVar13[0x4f];
            uVar105 = puVar13[0x50];
            uVar74 = puVar13[0x51];
            uVar90 = puVar13[0x52];
            uVar106 = puVar13[0x53];
            uVar75 = puVar13[0x54];
            uVar91 = puVar13[0x55];
            uVar107 = puVar13[0x56];
            uVar76 = puVar13[0x57];
            uVar92 = puVar13[0x58];
            uVar108 = puVar13[0x59];
            uVar77 = puVar13[0x5a];
            uVar93 = puVar13[0x5b];
            uVar109 = puVar13[0x5c];
            uVar78 = puVar13[0x5d];
            uVar94 = puVar13[0x5e];
            uVar110 = puVar13[0x5f];
            puVar21[-1] = CONCAT17(puVar13[0x2d],
                                   CONCAT16(puVar13[0x2a],
                                            CONCAT15(puVar13[0x27],
                                                     CONCAT14(puVar13[0x24],
                                                              CONCAT13(puVar13[0x21],
                                                                       CONCAT12(puVar13[0x1e],
                                                                                CONCAT11(puVar13[
                                                  0x1b],puVar13[0x18])))))));
            puVar21[-2] = CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,CONCAT13(
                                                  uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))))
                                                  ));
            puVar22[-1] = CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,CONCAT13(
                                                  uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar54)))))
                                                  ));
            puVar22[-2] = CONCAT17(uVar52,CONCAT16(uVar50,CONCAT15(uVar48,CONCAT14(uVar46,CONCAT13(
                                                  uVar44,CONCAT12(uVar42,CONCAT11(uVar40,uVar31)))))
                                                  ));
            puVar14[-1] = CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,CONCAT13(
                                                  uVar58,CONCAT12(uVar57,CONCAT11(uVar56,uVar55)))))
                                                  ));
            puVar14[-2] = CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,CONCAT13(
                                                  uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)))))
                                                  ));
            puVar21[1] = CONCAT17(uVar78,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14(uVar75,CONCAT13(
                                                  uVar74,CONCAT12(uVar73,CONCAT11(uVar72,uVar71)))))
                                                 ));
            *puVar21 = CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,CONCAT13(
                                                  uVar66,CONCAT12(uVar65,CONCAT11(uVar64,uVar63)))))
                                               ));
            puVar22[1] = CONCAT17(uVar94,CONCAT16(uVar93,CONCAT15(uVar92,CONCAT14(uVar91,CONCAT13(
                                                  uVar90,CONCAT12(uVar89,CONCAT11(uVar88,uVar87)))))
                                                 ));
            *puVar22 = CONCAT17(uVar86,CONCAT16(uVar85,CONCAT15(uVar84,CONCAT14(uVar83,CONCAT13(
                                                  uVar82,CONCAT12(uVar81,CONCAT11(uVar80,uVar79)))))
                                               ));
            puVar14[1] = CONCAT17(uVar110,CONCAT16(uVar109,CONCAT15(uVar108,CONCAT14(uVar107,
                                                  CONCAT13(uVar106,CONCAT12(uVar105,CONCAT11(uVar104
                                                  ,uVar103)))))));
            *puVar14 = CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(uVar99,CONCAT13(
                                                  uVar98,CONCAT12(uVar97,CONCAT11(uVar96,uVar95)))))
                                                ));
            puVar14 = puVar14 + 4;
            puVar21 = puVar21 + 4;
            puVar22 = puVar22 + 4;
            puVar13 = puVar13 + 0x60;
          } while (uVar20 != 0);
          if (uVar16 != uVar15) {
            uVar20 = uVar16;
            if ((uVar2 & 0x18) != 0) goto LAB_00d613ac;
            puVar13 = puVar12 + uVar16 * 3;
            goto LAB_00d61320;
          }
        }
LAB_00d61220:
        param_2 = param_2 + 1;
        param_4 = param_4 + 1;
        bVar1 = 1 < param_5;
        param_5 = param_5 + -1;
      } while (bVar1);
    }
  }
  return;
}


