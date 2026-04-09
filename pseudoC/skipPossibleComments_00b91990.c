// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: skipPossibleComments
// Entry Point: 00b91990
// Size: 412 bytes
// Signature: undefined __thiscall skipPossibleComments(Preprocessor * this, uint * param_1, COMMENT_MODE param_2, bool param_3)


/* Preprocessor::skipPossibleComments(unsigned int*, Preprocessor::COMMENT_MODE, bool) */

void __thiscall
Preprocessor::skipPossibleComments
          (Preprocessor *this,uint *param_1,COMMENT_MODE param_2,bool param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(char *)(*(long *)(this + 0x38) + 0x4d) == '\0') {
    cVar4 = getChar(this,*param_1);
    if (cVar4 != '\0') {
LAB_00b91a08:
      lVar7 = *(long *)(this + 0x30);
      lVar8 = *(long *)(lVar7 + 0x90);
      if (*(long *)(lVar7 + 0x98) != lVar8) {
        uVar9 = 0;
        do {
          pbVar1 = (byte *)(lVar8 + uVar9 * 0x40);
          uVar5 = *(uint *)(pbVar1 + (ulong)param_2 * 4 + 0x34);
          if ((uVar5 != 1) && (!param_3 || (uVar5 & 3) == 0)) {
            lVar8 = lVar8 + uVar9 * 0x40;
            pbVar2 = pbVar1 + 1;
            if ((*pbVar1 & 1) != 0) {
              pbVar2 = *(byte **)(lVar8 + 0x10);
            }
            uVar6 = matchSequence(this,(char *)pbVar2,param_1);
            if ((uVar6 & 1) != 0) goto code_r0x00b91a80;
            lVar7 = *(long *)(this + 0x30);
          }
          lVar8 = *(long *)(lVar7 + 0x90);
          uVar9 = (ulong)((int)uVar9 + 1);
          if ((ulong)(*(long *)(lVar7 + 0x98) - lVar8 >> 6) <= uVar9) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
code_r0x00b91a80:
  pcVar3 = (char *)(lVar8 + 0x19);
  if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
    pcVar3 = *(char **)(lVar8 + 0x28);
  }
  uVar5 = findCommentEnd(this,pcVar3,*(char *)(lVar8 + 0x30),*(char *)(lVar8 + 0x31),*param_1,
                         *(uint *)(pbVar1 + (ulong)param_2 * 4 + 0x34));
  *param_1 = uVar5;
  pcVar3 = (char *)(lVar8 + 0x19);
  if ((*(byte *)(lVar8 + 0x18) & 1) != 0) {
    pcVar3 = *(char **)(lVar8 + 0x28);
  }
  if ((((*pcVar3 != '\0') && (uVar9 = matchSequence(this,pcVar3,param_1), (uVar9 & 1) != 0)) &&
      (*param_1 != 0)) &&
     ((uVar9 = getChar(this,*param_1 - 1), ((uint)uVar9 & 0xff) < 0x21 &&
      ((1L << (uVar9 & 0x3f) & 0x100000600U) != 0)))) {
    *param_1 = *param_1 - 1;
  }
  cVar4 = getChar(this,*param_1);
  if (cVar4 == '\0') {
    return;
  }
  goto LAB_00b91a08;
}


