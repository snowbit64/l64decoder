// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseNumber
// Entry Point: 00b298b8
// Size: 548 bytes
// Signature: undefined __cdecl parseNumber(Atom * param_1, char * * param_2, ExtType param_3)


/* JSONUtil::parseNumber(JSONUtil::Atom&, char const*&, JSONUtil::ExtType) */

undefined8 JSONUtil::parseNumber(Atom *param_1,char **param_2,ExtType param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  pbVar7 = (byte *)*param_2;
  bVar1 = *pbVar7;
  while (bVar1 - 1 < 0x20) {
    pbVar7 = pbVar7 + 1;
    *param_2 = (char *)pbVar7;
    bVar1 = *pbVar7;
  }
  uVar4 = (uint)bVar1;
  uVar5 = uVar4;
  if (uVar4 == 0x2d) {
    *param_2 = (char *)(pbVar7 + 1);
    pbVar8 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    uVar5 = (uint)*pbVar8;
  }
  if (uVar5 - 0x3a < 0xfffffff6) {
LAB_00b29a30:
    uVar3 = 0;
  }
  else {
    if (uVar5 == 0x30) {
      pbVar8 = pbVar7 + 1;
      dVar11 = 0.0;
      *param_2 = (char *)pbVar8;
      bVar1 = pbVar7[1];
      pbVar7 = pbVar8;
      if (bVar1 == 0x2e) goto LAB_00b2998c;
LAB_00b2994c:
      uVar5 = (uint)bVar1;
    }
    else {
      uVar9 = 0;
      pbVar8 = pbVar7;
      do {
        pbVar8 = pbVar8 + 1;
        *param_2 = (char *)pbVar8;
        iVar6 = uVar5 + uVar9 * 10;
        bVar1 = *pbVar8;
        uVar5 = (uint)bVar1;
        uVar9 = iVar6 - 0x30;
      } while (bVar1 - 0x30 < 10);
      dVar11 = (double)(ulong)uVar9;
      pbVar7 = pbVar8;
      if (bVar1 != 0x2e) goto LAB_00b2994c;
LAB_00b2998c:
      pbVar7 = pbVar8 + 1;
      *param_2 = (char *)pbVar7;
      bVar1 = pbVar8[1];
      uVar5 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        dVar12 = 0.1;
        pbVar8 = pbVar8 + 2;
        uVar5 = (uint)bVar1;
        do {
          pbVar7 = pbVar8;
          iVar6 = uVar5 - 0x30;
          *param_2 = (char *)pbVar7;
          uVar5 = (uint)*pbVar7;
          dVar11 = (double)NEON_fmadd(dVar12,(double)iVar6,dVar11);
          dVar12 = dVar12 * 0.1;
          pbVar8 = pbVar7 + 1;
        } while (*pbVar7 - 0x30 < 10);
      }
    }
    if ((uVar5 | 0x20) == 0x65) {
      pbVar8 = pbVar7 + 1;
      *param_2 = (char *)pbVar8;
      if (pbVar7[1] == 0x2d) {
        bVar2 = true;
LAB_00b29a10:
        pbVar8 = pbVar7 + 2;
        *param_2 = (char *)pbVar8;
      }
      else {
        if (pbVar7[1] == 0x2b) {
          bVar2 = false;
          goto LAB_00b29a10;
        }
        bVar2 = false;
      }
      if (*pbVar8 - 0x3a < 0xfffffff6) goto LAB_00b29a30;
      iVar6 = 0;
      uVar5 = (uint)*pbVar8;
      do {
        uVar9 = uVar5;
        iVar10 = iVar6;
        pbVar8 = pbVar8 + 1;
        *param_2 = (char *)pbVar8;
        iVar6 = uVar9 + iVar10 * 10 + -0x30;
        uVar5 = (uint)*pbVar8;
      } while (*pbVar8 - 0x30 < 10);
      if (iVar6 == 0) {
        dVar12 = 1.0;
      }
      else {
        dVar12 = 1.0;
        iVar6 = uVar9 + iVar10 * 10 + -0x30;
        do {
          dVar12 = dVar12 * 10.0;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (bVar2) {
        dVar11 = dVar11 / dVar12;
      }
      else {
        dVar11 = dVar11 * dVar12;
      }
    }
    dVar12 = -dVar11;
    if (uVar4 != 0x2d) {
      dVar12 = dVar11;
    }
    Atom::clear();
    uVar3 = 1;
    param_1[1] = SUB41(param_3,0);
    *(double *)(param_1 + 8) = dVar12;
    *param_1 = (Atom)0x2;
  }
  return uVar3;
}


