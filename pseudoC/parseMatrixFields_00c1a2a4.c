// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseMatrixFields
// Entry Point: 00c1a2a4
// Size: 600 bytes
// Signature: undefined __thiscall parseMatrixFields(GISLParserContext * this, SHC_String * param_1, int param_2, int param_3, VectorFields * param_4, GsTSourceLoc * param_5)


/* GISLParserContext::parseMatrixFields(SHC_String const&, int, int, GISLParserUtil::VectorFields&,
   GsTSourceLoc const&) */

undefined8 __thiscall
GISLParserContext::parseMatrixFields
          (GISLParserContext *this,SHC_String *param_1,int param_2,int param_3,VectorFields *param_4
          ,GsTSourceLoc *param_5)

{
  SHC_String *pSVar1;
  ulong uVar2;
  SHC_String SVar3;
  int iVar4;
  undefined auVar5 [16];
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  SHC_String *pSVar10;
  uint uVar11;
  SHC_String *pSVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)(param_4 + 0x10) = 1;
  SVar3 = *param_1;
  pSVar10 = *(SHC_String **)(param_1 + 0x10);
  uVar2 = (ulong)((byte)SVar3 >> 1);
  if (((byte)SVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if (2 < uVar2) {
    pSVar12 = pSVar10;
    if (((byte)SVar3 & 1) == 0) {
      pSVar12 = param_1 + 1;
    }
    if (*pSVar12 == (SHC_String)0x5f) {
      pSVar1 = param_1 + 1;
      if (pSVar12[1] == (SHC_String)0x6d) {
        if ((uVar2 < 0x11) && ((uVar2 & 3) == 0)) {
          pSVar12 = pSVar1;
          if (((byte)SVar3 & 1) != 0) {
            pSVar12 = pSVar10;
          }
          if (*pSVar12 == (SHC_String)0x5f) {
            lVar14 = 0;
            do {
              if (((pSVar12[lVar14 + 1] != (SHC_String)0x6d) ||
                  ((byte)pSVar12[lVar14 + 2] - 0x34 < 0xfffffffc)) ||
                 ((byte)pSVar12[lVar14 + 3] - 0x34 < 0xfffffffc)) break;
              iVar13 = (byte)pSVar12[lVar14 + 2] - 0x30;
              pSVar10 = pSVar12;
              if ((param_3 <= iVar13) ||
                 (iVar4 = (byte)pSVar12[lVar14 + 3] - 0x30, param_2 <= iVar4)) goto LAB_00c1a4cc;
              *(int *)(param_4 + lVar14) = iVar4 + iVar13 * 4;
              SVar3 = *param_1;
              uVar11 = (uint)((byte)SVar3 >> 1);
              if (((byte)SVar3 & 1) != 0) {
                uVar11 = (uint)*(undefined8 *)(param_1 + 8);
              }
              if ((int)uVar11 <= (int)lVar14 + 4) {
                iVar13 = 4;
LAB_00c1a4e8:
                iVar4 = 0;
                if (iVar13 != 0) {
                  iVar4 = (int)uVar11 / iVar13;
                }
                *(int *)(param_4 + 0x10) = iVar4;
                return 1;
              }
              pSVar12 = pSVar1;
              if (((byte)SVar3 & 1) != 0) {
                pSVar12 = *(SHC_String **)(param_1 + 0x10);
              }
              lVar6 = lVar14 + 4;
              lVar14 = lVar14 + 4;
            } while (pSVar12[lVar6] == (SHC_String)0x5f);
          }
        }
      }
      else if ((uVar2 < 0xd) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar2,
              uVar2 == uVar2 / 3 +
                       (SUB168(auVar5 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffffffffffe))) {
        pSVar12 = pSVar1;
        if (((byte)SVar3 & 1) != 0) {
          pSVar12 = pSVar10;
        }
        if (*pSVar12 == (SHC_String)0x5f) {
          lVar14 = 0;
          piVar15 = (int *)param_4;
          do {
            if (((byte)pSVar12[lVar14 + 1] - 0x35 < 0xfffffffc) ||
               ((byte)pSVar12[lVar14 + 2] - 0x35 < 0xfffffffc)) break;
            iVar13 = (byte)pSVar12[lVar14 + 1] - 0x31;
            pSVar10 = pSVar12;
            if ((param_3 <= iVar13) || (iVar4 = (byte)pSVar12[lVar14 + 2] - 0x31, param_2 <= iVar4))
            goto LAB_00c1a4cc;
            *piVar15 = iVar4 + iVar13 * 4;
            SVar3 = *param_1;
            uVar11 = (uint)((byte)SVar3 >> 1);
            if (((byte)SVar3 & 1) != 0) {
              uVar11 = (uint)*(undefined8 *)(param_1 + 8);
            }
            if ((int)uVar11 <= (int)lVar14 + 3) {
              iVar13 = 3;
              goto LAB_00c1a4e8;
            }
            piVar15 = piVar15 + 1;
            pSVar12 = pSVar1;
            if (((byte)SVar3 & 1) != 0) {
              pSVar12 = *(SHC_String **)(param_1 + 0x10);
            }
            lVar6 = lVar14 + 3;
            lVar14 = lVar14 + 3;
          } while (pSVar12[lVar6] == (SHC_String)0x5f);
        }
      }
      pSVar10 = pSVar12;
      pcVar7 = *(char **)param_5;
      pcVar8 = *(char **)(param_5 + 2);
      pcVar9 = "illegal matrix field selection";
      goto LAB_00c1a4bc;
    }
  }
  pcVar7 = *(char **)param_5;
  pcVar8 = *(char **)(param_5 + 2);
  if (((byte)SVar3 & 1) == 0) {
    pSVar10 = param_1 + 1;
  }
  pcVar9 = "illegal matrix field selection";
LAB_00c1a4bc:
  error((GsTSourceLoc)this,pcVar7,pcVar8,pcVar9,pSVar10,&DAT_0050a39f);
  return 0;
LAB_00c1a4cc:
  pcVar7 = *(char **)param_5;
  pcVar8 = *(char **)(param_5 + 2);
  pcVar9 = "matrix field selection out of range";
  goto LAB_00c1a4bc;
}


