// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: disassembleInst
// Entry Point: 00c3e230
// Size: 500 bytes
// Signature: undefined __thiscall disassembleInst(IR_InstructionSequence * this, uint * param_1, char * param_2, vector * param_3)


/* IR_InstructionSequence::disassembleInst(unsigned int const*, char*, std::__ndk1::vector<IR_Const,
   std::__ndk1::allocator<IR_Const> >*) const */

void __thiscall
IR_InstructionSequence::disassembleInst
          (IR_InstructionSequence *this,uint *param_1,char *param_2,vector *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar3 = param_1[1];
  uVar2 = uVar3 >> 0x10;
  uVar9 = (ulong)uVar2;
  if ((int)*param_1 < 0xd4) {
    strcpy(param_2,*(char **)(s_instructionNames + (ulong)*param_1 * 8));
  }
  else {
    FUN_00c3e18c(param_2,0xffffffffffffffff,"?%8.8X?");
  }
  sVar4 = strlen(param_2);
  pcVar5 = param_2 + sVar4;
  if ((long)sVar4 < 0xc) {
    memset(pcVar5,0x20,0xc - sVar4);
    pcVar5 = param_2 + 0xc;
  }
  if (uVar2 == 1) {
    pcVar5 = (char *)printReg(this,pcVar5,param_1[2],(vector *)0x0);
  }
  else {
    pcVar6 = pcVar5 + 1;
    *pcVar5 = '(';
    if (0xffff < uVar3) {
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      pcVar6 = (char *)printReg(this,pcVar6,param_1[2],(vector *)0x0);
      if (0x1ffff < uVar3) {
        lVar10 = (ulong)uVar2 - 1;
        puVar7 = param_1 + 3;
        do {
          *pcVar6 = ',';
          pcVar6 = (char *)printReg(this,pcVar6 + 1,*puVar7,(vector *)0x0);
          lVar10 = lVar10 + -1;
          puVar7 = puVar7 + 1;
        } while (lVar10 != 0);
      }
    }
    pcVar5 = pcVar6 + 1;
    *pcVar6 = ')';
  }
  if ((int)((ulong)uVar3 & 0xffff) != 0) {
    uVar1 = uVar9 + 2;
    uVar8 = 0;
    do {
      pcVar6 = pcVar5 + 1;
      *pcVar5 = ',';
      if (*param_1 == 4) {
        if ((uVar8 & 0xfffffffd) == 0 || uVar1 == uVar8) goto LAB_00c3e38c;
      }
      else if ((*param_1 == 2) && ((((int)uVar8 == 0 || ((int)uVar8 == 3)) || (uVar9 + 3 == uVar8)))
              ) {
LAB_00c3e38c:
        pcVar6 = pcVar5 + 2;
        pcVar5[1] = ' ';
      }
      pcVar5 = (char *)printReg(this,pcVar6,param_1[uVar1 + uVar8],param_3);
      uVar8 = uVar8 + 1;
    } while (((ulong)uVar3 & 0xffff) != uVar8);
  }
  *pcVar5 = '\0';
  return;
}


