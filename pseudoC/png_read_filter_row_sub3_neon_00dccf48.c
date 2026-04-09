// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_filter_row_sub3_neon
// Entry Point: 00dccf48
// Size: 100 bytes
// Signature: undefined png_read_filter_row_sub3_neon(void)


void png_read_filter_row_sub3_neon(long param_1,undefined (*param_2) [16])

{
  undefined8 uVar1;
  long lVar2;
  undefined (*pauVar3) [16];
  undefined (*pauVar4) [16];
  undefined uVar5;
  undefined uVar6;
  undefined uVar7;
  undefined uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  char cVar13;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar14;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  
  lVar2 = *(long *)(param_1 + 8);
  if (0 < lVar2) {
    uVar1 = *(undefined8 *)*param_2;
    cVar13 = (char)uVar1;
    cVar15 = (char)((ulong)uVar1 >> 8);
    cVar16 = (char)((ulong)uVar1 >> 0x10);
    cVar17 = (char)((ulong)uVar1 >> 0x18);
    uVar5 = (undefined)((ulong)uVar1 >> 0x20);
    uVar6 = (undefined)((ulong)uVar1 >> 0x28);
    uVar7 = (undefined)((ulong)uVar1 >> 0x30);
    uVar8 = (undefined)((ulong)uVar1 >> 0x38);
    uVar10 = 0;
    auVar12 = NEON_ext(*param_2,*param_2,8,1);
    pauVar3 = param_2;
    do {
      uVar11 = auVar12._0_8_;
      uVar14 = NEON_ext(CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(cVar17,
                                                  CONCAT12(cVar16,CONCAT11(cVar15,cVar13))))))),
                        uVar11,3,1);
      cVar18 = cVar13 + (char)uVar10;
      cVar19 = cVar15 + (char)(uVar10 >> 8);
      cVar20 = cVar16 + (char)(uVar10 >> 0x10);
      cVar21 = cVar17 + (char)(uVar10 >> 0x18);
      uVar1 = NEON_ext(CONCAT17(uVar8,CONCAT16(uVar7,CONCAT15(uVar6,CONCAT14(uVar5,CONCAT13(cVar17,
                                                  CONCAT12(cVar16,CONCAT11(cVar15,cVar13))))))),
                       uVar11,6,1);
      uVar11 = NEON_ext(uVar11,uVar11,1,1);
      cVar13 = (char)uVar14 + cVar18;
      cVar15 = (char)((ulong)uVar14 >> 8) + cVar19;
      cVar16 = (char)((ulong)uVar14 >> 0x10) + cVar20;
      cVar17 = (char)((ulong)uVar14 >> 0x18) + cVar21;
      *(uint *)*pauVar3 = CONCAT13(cVar21,CONCAT12(cVar20,CONCAT11(cVar19,cVar18)));
      cVar18 = cVar13 + (char)uVar1;
      cVar19 = cVar15 + (char)((ulong)uVar1 >> 8);
      cVar20 = cVar16 + (char)((ulong)uVar1 >> 0x10);
      cVar21 = cVar17 + (char)((ulong)uVar1 >> 0x18);
      *(uint *)(*pauVar3 + 3) = CONCAT13(cVar17,CONCAT12(cVar16,CONCAT11(cVar15,cVar13)));
      pauVar4 = (undefined (*) [16])(*pauVar3 + 0xc);
      uVar1 = *(undefined8 *)*pauVar4;
      cVar13 = (char)uVar1;
      cVar15 = (char)((ulong)uVar1 >> 8);
      cVar16 = (char)((ulong)uVar1 >> 0x10);
      cVar17 = (char)((ulong)uVar1 >> 0x18);
      uVar5 = (undefined)((ulong)uVar1 >> 0x20);
      uVar6 = (undefined)((ulong)uVar1 >> 0x28);
      uVar7 = (undefined)((ulong)uVar1 >> 0x30);
      uVar8 = (undefined)((ulong)uVar1 >> 0x38);
      uVar9 = CONCAT13(cVar21 + (char)((ulong)uVar11 >> 0x18),
                       CONCAT12(cVar20 + (char)((ulong)uVar11 >> 0x10),
                                CONCAT11(cVar19 + (char)((ulong)uVar11 >> 8),cVar18 + (char)uVar11))
                      );
      uVar10 = (ulong)uVar9;
      *(uint *)(*pauVar3 + 6) = CONCAT13(cVar21,CONCAT12(cVar20,CONCAT11(cVar19,cVar18)));
      auVar12 = NEON_ext(*pauVar4,*pauVar4,8,1);
      *(uint *)(*pauVar3 + 9) = uVar9;
      pauVar3 = pauVar4;
    } while (pauVar4 < (undefined (*) [16])(*param_2 + lVar2));
  }
  return;
}


