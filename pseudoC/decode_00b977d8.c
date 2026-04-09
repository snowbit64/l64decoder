// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode
// Entry Point: 00b977d8
// Size: 408 bytes
// Signature: undefined __cdecl decode(uchar * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* RLEUtil::decode(unsigned char const*, unsigned int, unsigned int, unsigned int, unsigned int,
   unsigned char*) */

void RLEUtil::decode(uchar *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                    uchar *param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  uint uVar3;
  uchar uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  
  if (param_3 != 1) {
    DebugUtil::message("Error",
                       "RLEUtil: decoding to char array is only supported with input char width 1",
                       (char *)0x0,"T:/src/base/misc/RLEUtil.cpp",0x5d);
    return;
  }
  if (param_2 != 0) {
    uVar7 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar9 = '\0';
    do {
      uVar8 = (ulong)uVar7 + 1;
      uVar4 = param_1[uVar7];
      uVar3 = uVar10 + 1;
      param_6[uVar10] = uVar4;
      uVar12 = 1;
      if (((uVar4 == uVar9) && ((uVar13 & 1) != 0)) && (uVar12 = uVar13, (uint)uVar8 < param_2)) {
        bVar5 = param_1[uVar8];
        uVar12 = (uint)bVar5;
        uVar7 = uVar7 + 2;
        uVar8 = (ulong)uVar7;
        if (bVar5 == 0xff) {
          uVar13 = param_2;
          if (param_2 <= uVar7) {
            uVar13 = uVar7;
          }
          uVar12 = (uint)bVar5;
          do {
            if (uVar13 == uVar8) {
              uVar8 = (ulong)param_2;
              if (uVar12 == 0) goto LAB_00b977fc;
              goto LAB_00b97894;
            }
            pbVar1 = param_1 + uVar8;
            uVar8 = uVar8 + 1;
            uVar12 = uVar12 + *pbVar1;
          } while (*pbVar1 == 0xff);
          uVar8 = uVar8 & 0xffffffff;
          if (uVar12 != 0) goto LAB_00b97894;
        }
        else if (bVar5 != 0) {
LAB_00b97894:
          uVar7 = uVar3;
          if ((uVar12 < 8) || (uVar10 + uVar12 < uVar3)) {
LAB_00b97928:
            do {
              uVar10 = uVar7 + 1;
              param_6[uVar7] = uVar9;
              uVar7 = uVar10;
            } while (uVar12 + uVar3 != uVar10);
          }
          else if (uVar12 < 0x20) {
            uVar7 = 0;
LAB_00b978f0:
            uVar13 = uVar12 & 0xfffffff8;
            iVar11 = uVar7 - uVar13;
            uVar7 = uVar10 + uVar7 + 1;
            do {
              *(ulong *)(param_6 + uVar7) =
                   CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,
                                                  CONCAT12(uVar9,CONCAT11(uVar9,uVar9)))))));
              iVar11 = iVar11 + 8;
              uVar7 = uVar7 + 8;
            } while (iVar11 != 0);
            uVar7 = uVar3 + uVar13;
            if (uVar12 != uVar13) goto LAB_00b97928;
          }
          else {
            uVar7 = uVar12 & 0xffffffe0;
            uVar14 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,
                                                  CONCAT12(uVar9,CONCAT11(uVar9,uVar9)))))));
            uVar13 = uVar3;
            uVar6 = uVar7;
            do {
              puVar2 = (undefined8 *)(param_6 + uVar13);
              uVar6 = uVar6 - 0x20;
              uVar13 = uVar13 + 0x20;
              puVar2[1] = uVar14;
              *puVar2 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9,
                                                  CONCAT12(uVar9,CONCAT11(uVar9,uVar9)))))));
              puVar2[3] = uVar14;
              puVar2[2] = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar9,CONCAT14(uVar9,CONCAT13(uVar9
                                                  ,CONCAT12(uVar9,CONCAT11(uVar9,uVar9)))))));
            } while (uVar6 != 0);
            if (uVar12 != uVar7) {
              if ((uVar12 & 0x18) == 0) {
                uVar7 = uVar3 + uVar7;
                goto LAB_00b97928;
              }
              goto LAB_00b978f0;
            }
          }
          uVar3 = uVar12 + uVar3;
          uVar12 = 0;
        }
      }
LAB_00b977fc:
      uVar13 = uVar12;
      uVar10 = uVar3;
      uVar7 = (uint)uVar8;
      uVar9 = uVar4;
    } while (uVar7 < param_2);
  }
  return;
}


