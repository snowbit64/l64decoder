// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_filter_row_avg3_neon
// Entry Point: 00dccfe4
// Size: 136 bytes
// Signature: undefined png_read_filter_row_avg3_neon(void)


void png_read_filter_row_avg3_neon(long param_1,undefined (*param_2) [16],undefined (*param_3) [16])

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  long lVar4;
  undefined (*pauVar5) [16];
  undefined (*pauVar6) [16];
  undefined auVar7 [16];
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined auVar18 [16];
  undefined auVar19 [16];
  
  lVar4 = *(long *)(param_1 + 8);
  if (0 < lVar4) {
    auVar19 = *param_2;
    uVar10 = 0;
    auVar7 = NEON_ext(auVar19,auVar19,8,1);
    pauVar5 = param_2;
    do {
      auVar3 = *param_3;
      auVar2 = *param_3;
      auVar1 = *param_3;
      uVar11 = NEON_uhadd(uVar10,*(undefined8 *)*param_3,1);
      auVar13 = NEON_ext(*param_3,*param_3,3,1);
      auVar18 = NEON_ext(*param_3,*param_3,6,1);
      cVar14 = (char)uVar11 + auVar19[0];
      cVar15 = (char)((ulong)uVar11 >> 8) + auVar19[1];
      cVar16 = (char)((ulong)uVar11 >> 0x10) + auVar19[2];
      cVar17 = (char)((ulong)uVar11 >> 0x18) + auVar19[3];
      uVar10 = auVar7._0_8_;
      uVar12 = NEON_ext(auVar19._0_8_,uVar10,3,1);
      uVar8 = NEON_ext(auVar19._0_8_,uVar10,6,1);
      uVar10 = NEON_ext(uVar10,uVar10,1,1);
      uVar11 = NEON_uhadd(CONCAT17((char)((ulong)uVar11 >> 0x38) + auVar19[7],
                                   CONCAT16((char)((ulong)uVar11 >> 0x30) + auVar19[6],
                                            CONCAT15((char)((ulong)uVar11 >> 0x28) + auVar19[5],
                                                     CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                              auVar19[4],
                                                              CONCAT13(cVar17,CONCAT12(cVar16,
                                                  CONCAT11(cVar15,cVar14))))))),auVar13._0_8_,1);
      *(uint *)*pauVar5 = CONCAT13(cVar17,CONCAT12(cVar16,CONCAT11(cVar15,cVar14)));
      uVar9 = CONCAT13((char)((ulong)uVar11 >> 0x18) + (char)((ulong)uVar12 >> 0x18),
                       CONCAT12((char)((ulong)uVar11 >> 0x10) + (char)((ulong)uVar12 >> 0x10),
                                CONCAT11((char)((ulong)uVar11 >> 8) + (char)((ulong)uVar12 >> 8),
                                         (char)uVar11 + (char)uVar12)));
      uVar11 = NEON_uhadd(CONCAT17((char)((ulong)uVar11 >> 0x38) + (char)((ulong)uVar12 >> 0x38),
                                   CONCAT16((char)((ulong)uVar11 >> 0x30) +
                                            (char)((ulong)uVar12 >> 0x30),
                                            CONCAT15((char)((ulong)uVar11 >> 0x28) +
                                                     (char)((ulong)uVar12 >> 0x28),
                                                     CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                              (char)((ulong)uVar12 >> 0x20),uVar9)))
                                  ),auVar18._0_8_,1);
      *(undefined4 *)(*pauVar5 + 3) = uVar9;
      auVar19 = NEON_ext(auVar1,auVar2,8,1);
      cVar14 = (char)uVar11 + (char)uVar8;
      cVar15 = (char)((ulong)uVar11 >> 8) + (char)((ulong)uVar8 >> 8);
      cVar16 = (char)((ulong)uVar11 >> 0x10) + (char)((ulong)uVar8 >> 0x10);
      cVar17 = (char)((ulong)uVar11 >> 0x18) + (char)((ulong)uVar8 >> 0x18);
      auVar19 = NEON_ext(auVar3,auVar19,9,1);
      *(uint *)(*pauVar5 + 6) = CONCAT13(cVar17,CONCAT12(cVar16,CONCAT11(cVar15,cVar14)));
      uVar8 = NEON_uhadd(CONCAT17((char)((ulong)uVar11 >> 0x38) + (char)((ulong)uVar8 >> 0x38),
                                  CONCAT16((char)((ulong)uVar11 >> 0x30) +
                                           (char)((ulong)uVar8 >> 0x30),
                                           CONCAT15((char)((ulong)uVar11 >> 0x28) +
                                                    (char)((ulong)uVar8 >> 0x28),
                                                    CONCAT14((char)((ulong)uVar11 >> 0x20) +
                                                             (char)((ulong)uVar8 >> 0x20),
                                                             CONCAT13(cVar17,CONCAT12(cVar16,
                                                  CONCAT11(cVar15,cVar14))))))),auVar19._0_8_,1);
      pauVar6 = (undefined (*) [16])(*pauVar5 + 0xc);
      auVar19 = *pauVar6;
      uVar9 = CONCAT13((char)((ulong)uVar8 >> 0x18) + (char)((ulong)uVar10 >> 0x18),
                       CONCAT12((char)((ulong)uVar8 >> 0x10) + (char)((ulong)uVar10 >> 0x10),
                                CONCAT11((char)((ulong)uVar8 >> 8) + (char)((ulong)uVar10 >> 8),
                                         (char)uVar8 + (char)uVar10)));
      uVar10 = CONCAT17((char)((ulong)uVar8 >> 0x38) + (char)((ulong)uVar10 >> 0x38),
                        CONCAT16((char)((ulong)uVar8 >> 0x30) + (char)((ulong)uVar10 >> 0x30),
                                 CONCAT15((char)((ulong)uVar8 >> 0x28) +
                                          (char)((ulong)uVar10 >> 0x28),
                                          CONCAT14((char)((ulong)uVar8 >> 0x20) +
                                                   (char)((ulong)uVar10 >> 0x20),uVar9))));
      auVar7 = NEON_ext(auVar19,auVar19,8,1);
      *(undefined4 *)(*pauVar5 + 9) = uVar9;
      param_3 = (undefined (*) [16])(*param_3 + 0xc);
      pauVar5 = pauVar6;
    } while (pauVar6 < (undefined (*) [16])(*param_2 + lVar4));
  }
  return;
}


