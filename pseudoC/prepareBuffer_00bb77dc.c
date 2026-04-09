// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareBuffer
// Entry Point: 00bb77dc
// Size: 1060 bytes
// Signature: undefined __cdecl prepareBuffer(uchar * param_1, uint param_2, char * param_3)


/* LuauScriptSystem::prepareBuffer(unsigned char*, unsigned int, char const*) */

void LuauScriptSystem::prepareBuffer(uchar *param_1,uint param_2,char *param_3)

{
  uchar *puVar1;
  uchar uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint5 uVar6;
  ulong uVar7;
  uint uVar8;
  uchar *puVar9;
  uchar *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
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
  int iVar48;
  short sVar49;
  int iVar50;
  uchar auStack_158 [256];
  long local_58;
  
  puVar10 = (uchar *)(ulong)param_2;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar8 = (uint)param_3;
  if (uVar8 != 0) {
    uVar2 = *puVar10;
    if (uVar2 == '\x01') goto LAB_00bb7bd0;
    if (uVar2 == '\x03') {
      uVar13 = (ulong)param_3 & 0xffffffff;
      puVar11 = (undefined8 *)(puVar10 + 1);
      *puVar10 = '\x01';
      uVar12 = 0;
      if ((0xf < uVar8) && (0xffffffffffffffef < uVar13 - 0x11)) {
        if ((puVar11 < &LUC_ENCRYPT_SHIFTS2 + uVar13) &&
           ("\x0f\v\x01\b\x02\x03\x03\b\x04\x03\x01\x04\a\b\x149AESCipher" <= puVar10 + uVar13 + 1))
        {
          uVar12 = 0;
        }
        else {
          cVar28 = '\x01';
          iVar50 = 0;
          uVar12 = (ulong)param_3 & 0xfffffff0;
          uVar14 = uVar12;
          puVar15 = puVar11;
          cVar16 = '\x0e';
          cVar17 = '\x0f';
          cVar18 = '\f';
          cVar19 = '\r';
          cVar20 = '\n';
          cVar21 = '\v';
          cVar22 = '\b';
          cVar23 = '\t';
          cVar24 = '\x02';
          cVar25 = '\x03';
          iVar48 = 4;
          sVar49 = 5;
          cVar26 = '\x06';
          cVar27 = '\a';
          do {
            uVar14 = uVar14 - 0x10;
            uVar7 = (ulong)CONCAT24(sVar49,iVar48) & 0xffffffff0000ffff;
            uVar6 = CONCAT14(cVar28,iVar50) & 0xff000000ff;
            uVar5 = puVar15[1];
            uVar4 = *puVar15;
            iVar50 = iVar50 + 0x10;
            cVar28 = cVar28 + '\x10';
            puVar15[1] = CONCAT17(cVar17 + (char)((ulong)uVar5 >> 0x38) + '\x15',
                                  CONCAT16(cVar16 + (char)((ulong)uVar5 >> 0x30) + '\t',
                                           CONCAT15(cVar19 + (char)((ulong)uVar5 >> 0x28) + '\b',
                                                    CONCAT14(cVar18 + (char)((ulong)uVar5 >> 0x20) +
                                                             '\x05',CONCAT13(cVar21 + (char)((ulong)
                                                  uVar5 >> 0x18) + '\x02',
                                                  CONCAT12(cVar20 + (char)((ulong)uVar5 >> 0x10) +
                                                           '\x04',CONCAT11(cVar23 + (char)((ulong)
                                                  uVar5 >> 8) + '\x05',cVar22 + (char)uVar5 + '\t'))
                                                  )))));
            *puVar15 = CONCAT17(cVar27 + (char)((ulong)uVar4 >> 0x38) + '\x04',
                                CONCAT16(cVar26 + (char)((ulong)uVar4 >> 0x30) + '\x04',
                                         CONCAT15((char)(uVar7 >> 0x20) +
                                                  (char)((ulong)uVar4 >> 0x28) + '\x03',
                                                  CONCAT14((char)uVar7 +
                                                           (char)((ulong)uVar4 >> 0x20) + '\t',
                                                           CONCAT13(cVar25 + (char)((ulong)uVar4 >>
                                                                                   0x18) + '\x02',
                                                                    CONCAT12(cVar24 + (char)((ulong)
                                                  uVar4 >> 0x10) + '\f',
                                                  CONCAT11((char)(uVar6 >> 0x20) +
                                                           (char)((ulong)uVar4 >> 8) + '\x10',
                                                           (char)uVar6 + (char)uVar4 + '\x06')))))))
            ;
            puVar15 = puVar15 + 2;
            cVar16 = cVar16 + '\x10';
            cVar17 = cVar17 + '\x10';
            cVar18 = cVar18 + '\x10';
            cVar19 = cVar19 + '\x10';
            cVar20 = cVar20 + '\x10';
            cVar21 = cVar21 + '\x10';
            cVar22 = cVar22 + '\x10';
            cVar23 = cVar23 + '\x10';
            cVar24 = cVar24 + '\x10';
            cVar25 = cVar25 + '\x10';
            iVar48 = iVar48 + 0x10;
            sVar49 = sVar49 + 0x10;
            cVar26 = cVar26 + '\x10';
            cVar27 = cVar27 + '\x10';
          } while (uVar14 != 0);
          if (uVar12 == uVar13) goto LAB_00bb7bd0;
        }
      }
      do {
        uVar14 = uVar12 + 1;
        *(char *)((long)puVar11 + uVar12) =
             *(char *)((long)puVar11 + uVar12) + (char)uVar14 + (&LUC_ENCRYPT_SHIFTS2)[uVar12 & 0xf]
        ;
        uVar12 = uVar14;
      } while (uVar13 != uVar14);
      goto LAB_00bb7bd0;
    }
    if (uVar2 == '\x02') {
      uVar8 = uVar8 - 1;
      uVar12 = (ulong)uVar8;
      puVar11 = (undefined8 *)(puVar10 + 1);
      *puVar10 = '\x01';
      if (uVar8 != 0) {
        uVar13 = 0;
        if ((0xf < uVar8) && (0xfffffffffffffff7 < uVar12 - 9)) {
          if ((puVar11 < &LUC_ENCRYPT_SHIFTS1 + uVar12) &&
             ("\v\t\x02\b\x03\x03\x03\x05\x0f\v\x01\b\x02\x03\x03\b\x04\x03\x01\x04\a\b\x149AESCipher"
              <= puVar10 + uVar12 + 1)) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar12 & 0xfffffff0;
            cVar24 = '\b';
            cVar25 = '\t';
            cVar26 = '\n';
            cVar27 = '\v';
            cVar28 = '\f';
            cVar29 = '\r';
            cVar30 = '\x0e';
            cVar31 = '\x0f';
            cVar16 = '\0';
            cVar17 = '\x01';
            cVar18 = '\x02';
            cVar19 = '\x03';
            cVar20 = '\x04';
            cVar21 = '\x05';
            cVar22 = '\x06';
            cVar23 = '\a';
            uVar14 = uVar13;
            puVar15 = puVar11;
            do {
              uVar5 = puVar15[1];
              uVar4 = *puVar15;
              uVar14 = uVar14 - 0x10;
              cVar32 = (char)uVar4 + cVar16;
              cVar33 = (char)((ulong)uVar4 >> 8) + cVar17;
              cVar34 = (char)((ulong)uVar4 >> 0x10) + cVar18;
              cVar35 = (char)((ulong)uVar4 >> 0x18) + cVar19;
              cVar36 = (char)((ulong)uVar4 >> 0x20) + cVar20;
              cVar37 = (char)((ulong)uVar4 >> 0x28) + cVar21;
              cVar38 = (char)((ulong)uVar4 >> 0x30) + cVar22;
              cVar39 = (char)((ulong)uVar4 >> 0x38) + cVar23;
              cVar40 = (char)uVar5 + cVar24;
              cVar41 = (char)((ulong)uVar5 >> 8) + cVar25;
              cVar42 = (char)((ulong)uVar5 >> 0x10) + cVar26;
              cVar43 = (char)((ulong)uVar5 >> 0x18) + cVar27;
              cVar44 = (char)((ulong)uVar5 >> 0x20) + cVar28;
              cVar45 = (char)((ulong)uVar5 >> 0x28) + cVar29;
              cVar46 = (char)((ulong)uVar5 >> 0x30) + cVar30;
              cVar47 = (char)((ulong)uVar5 >> 0x38) + cVar31;
              cVar16 = cVar16 + '\x10';
              cVar17 = cVar17 + '\x10';
              cVar18 = cVar18 + '\x10';
              cVar19 = cVar19 + '\x10';
              cVar20 = cVar20 + '\x10';
              cVar21 = cVar21 + '\x10';
              cVar22 = cVar22 + '\x10';
              cVar23 = cVar23 + '\x10';
              cVar24 = cVar24 + '\x10';
              cVar25 = cVar25 + '\x10';
              cVar26 = cVar26 + '\x10';
              cVar27 = cVar27 + '\x10';
              cVar28 = cVar28 + '\x10';
              cVar29 = cVar29 + '\x10';
              cVar30 = cVar30 + '\x10';
              cVar31 = cVar31 + '\x10';
              puVar15[1] = CONCAT17(cVar47,CONCAT16(cVar46,CONCAT15(cVar45,CONCAT14(cVar44,CONCAT13(
                                                  cVar43,CONCAT12(cVar42,CONCAT11(cVar41,cVar40)))))
                                                  ));
              *puVar15 = CONCAT17(cVar39 + '\x03',
                                  CONCAT16(cVar38 + '\x03',
                                           CONCAT15(cVar37 + '\x03',
                                                    CONCAT14(cVar36 + '\b',
                                                             CONCAT13(cVar35 + '\x02',
                                                                      CONCAT12(cVar34 + '\t',
                                                                               CONCAT11(cVar33 + 
                                                  '\v',cVar32 + '\x14')))))));
              puVar15 = puVar15 + 2;
            } while (uVar14 != 0);
            if (uVar13 == uVar12) goto LAB_00bb7bd0;
          }
        }
        do {
          *(char *)((long)puVar11 + uVar13) =
               *(char *)((long)puVar11 + uVar13) + (char)uVar13 + (&LUC_ENCRYPT_SHIFTS1)[uVar13 & 7]
          ;
          uVar13 = uVar13 + 1;
        } while (uVar12 != uVar13);
      }
      goto LAB_00bb7bd0;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x128);
  puVar1 = puVar10 + ((ulong)param_3 & 0xffffffff);
  if ((uVar8 & 1) != 0) {
    FUN_00bb6bf0(auStack_158,0x100,0x100,"--#%s",s_preprocessOptionNames);
    uVar8 = __strlen_chk(auStack_158,0x100);
    puVar9 = (uchar *)StringUtil::findInBuffer(puVar10,puVar1,auStack_158,uVar8);
    if (puVar9 != (uchar *)0x0) {
      do {
        memset(puVar9,0x20,(ulong)uVar8);
        puVar9 = (uchar *)StringUtil::findInBuffer(puVar9,puVar1,auStack_158,uVar8);
      } while (puVar9 != (uchar *)0x0);
    }
    uVar8 = *(uint *)(param_1 + 0x128);
  }
  if ((uVar8 >> 1 & 1) != 0) {
    FUN_00bb6bf0(auStack_158,0x100,0x100,"--#%s",PTR_s_profile_010453b0);
    uVar8 = __strlen_chk(auStack_158,0x100);
    puVar9 = (uchar *)StringUtil::findInBuffer(puVar10,puVar1,auStack_158,uVar8);
    if (puVar9 != (uchar *)0x0) {
      do {
        memset(puVar9,0x20,(ulong)uVar8);
        puVar9 = (uchar *)StringUtil::findInBuffer(puVar9,puVar1,auStack_158,uVar8);
      } while (puVar9 != (uchar *)0x0);
    }
    uVar8 = *(uint *)(param_1 + 0x128);
  }
  if ((uVar8 >> 2 & 1) != 0) {
    FUN_00bb6bf0(auStack_158,0x100,0x100,"--#%s",PTR_s_textureStreaming_010453b8);
    uVar8 = __strlen_chk(auStack_158,0x100);
    puVar10 = (uchar *)StringUtil::findInBuffer(puVar10,puVar1,auStack_158,uVar8);
    if (puVar10 != (uchar *)0x0) {
      do {
        memset(puVar10,0x20,(ulong)uVar8);
        puVar10 = (uchar *)StringUtil::findInBuffer(puVar10,puVar1,auStack_158,uVar8);
      } while (puVar10 != (uchar *)0x0);
    }
  }
LAB_00bb7bd0:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


