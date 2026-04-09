// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseVectorFields
// Entry Point: 00c19ce8
// Size: 428 bytes
// Signature: undefined __thiscall parseVectorFields(GISLParserContext * this, SHC_String * param_1, uint param_2, VectorFields * param_3, GsTSourceLoc * param_4)


/* GISLParserContext::parseVectorFields(SHC_String const&, unsigned int,
   GISLParserUtil::VectorFields&, GsTSourceLoc const&) */

void __thiscall
GISLParserContext::parseVectorFields
          (GISLParserContext *this,SHC_String *param_1,uint param_2,VectorFields *param_3,
          GsTSourceLoc *param_4)

{
  ulong uVar1;
  int iVar2;
  SHC_String SVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  SHC_String *pSVar10;
  ulong uVar11;
  SHC_String *pSVar12;
  uint uVar13;
  ulong uVar14;
  int local_38 [4];
  long local_28;
  
  lVar5 = tpidr_el0;
  local_28 = *(long *)(lVar5 + 0x28);
  uVar4 = (uint)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    uVar4 = *(uint *)(param_1 + 8);
  }
  *(uint *)(param_3 + 0x10) = uVar4;
  if (uVar4 < 5) {
    if (uVar4 != 0) {
      uVar11 = 0;
      do {
        pSVar10 = param_1 + 1;
        if (((byte)*param_1 & 1) != 0) {
          pSVar10 = *(SHC_String **)(param_1 + 0x10);
        }
        uVar4 = (byte)pSVar10[uVar11] - 0x61;
        if ((0x19 < uVar4) || ((0x3cf8043U >> (ulong)(uVar4 & 0x1f) & 1) == 0)) {
          pcVar7 = *(char **)param_4;
          pcVar8 = *(char **)(param_4 + 2);
          pcVar9 = "illegal vector field selection";
          goto LAB_00c19e40;
        }
        uVar1 = uVar11 + 1;
        uVar14 = -((ulong)(uVar4 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar4 & 0xff) << 2;
        iVar2 = *(int *)(&DAT_005291e0 + uVar14);
        *(undefined4 *)(param_3 + uVar11 * 4) = *(undefined4 *)(&DAT_00529178 + uVar14);
        uVar4 = *(uint *)(param_3 + 0x10);
        local_38[uVar11] = iVar2;
        uVar11 = uVar1;
      } while (uVar1 < uVar4);
      if (uVar4 != 0) {
        uVar13 = 0;
        do {
          if (param_2 <= *(uint *)(param_3 + (ulong)uVar13 * 4)) {
            SVar3 = *param_1;
            pSVar12 = *(SHC_String **)(param_1 + 0x10);
            pcVar9 = "vector field selection out of range";
LAB_00c19e78:
            pcVar7 = *(char **)param_4;
            pcVar8 = *(char **)(param_4 + 2);
            pSVar10 = param_1 + 1;
            if (((byte)SVar3 & 1) != 0) {
              pSVar10 = pSVar12;
            }
            goto LAB_00c19e40;
          }
          if ((uVar13 != 0) && (local_38[uVar13] != local_38[uVar13 - 1])) {
            SVar3 = *param_1;
            pSVar12 = *(SHC_String **)(param_1 + 0x10);
            pcVar9 = "illegal - vector component fields not from the same set";
            goto LAB_00c19e78;
          }
          uVar13 = uVar13 + 1;
        } while (uVar4 != uVar13);
      }
    }
    uVar6 = 1;
  }
  else {
    pSVar10 = *(SHC_String **)(param_1 + 0x10);
    pcVar9 = "illegal vector field selection";
    pcVar7 = *(char **)param_4;
    pcVar8 = *(char **)(param_4 + 2);
    if (((byte)*param_1 & 1) == 0) {
      pSVar10 = param_1 + 1;
    }
LAB_00c19e40:
    error((GsTSourceLoc)this,pcVar7,pcVar8,pcVar9,pSVar10,&DAT_0050a39f);
    uVar6 = 0;
  }
  if (*(long *)(lVar5 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}


