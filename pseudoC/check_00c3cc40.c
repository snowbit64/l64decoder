// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: check
// Entry Point: 00c3cc40
// Size: 288 bytes
// Signature: undefined __thiscall check(IR_InstructionSequence * this, uint * param_1, uint param_2)


/* IR_InstructionSequence::check(unsigned int const*, unsigned int) */

ulong __thiscall
IR_InstructionSequence::check(IR_InstructionSequence *this,uint *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  IR_Type *this_00;
  IR_Type *pIVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (*param_1 == 0x1a) {
    uVar2 = *(uint *)((long)param_1 + ((ulong)(param_1[1] >> 0xe) & 0x3fffc) + 8);
    if (-1 < (int)(uVar2 | param_1[2])) {
      this_00 = (IR_Type *)
                IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),param_1[2])
      ;
      pIVar3 = (IR_Type *)
               IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),uVar2);
      if (this_00 != pIVar3) {
        IR_Type::compatibleWithMOV(this_00,pIVar3);
      }
    }
  }
  uVar2 = param_1[1];
  lVar1 = (ulong)(uVar2 >> 0x10) + 2;
  if (((int)lVar1 + (uVar2 & 0xffff) == param_2) && ((int)*param_1 < 0xd4)) {
    pcVar5 = *(char **)(s_instructionTemplates + (ulong)*param_1 * 8);
    if (*pcVar5 == '\0') {
      return (ulong)(uVar2 == 0);
    }
    uVar4 = checkSide(this,pcVar5,param_1 + 2,uVar2 >> 0x10);
    if ((uVar4 & 1) != 0) {
      pcVar5 = strchr(pcVar5,0x3a);
      uVar4 = checkSide(this,pcVar5 + 1,param_1 + lVar1,uVar2 & 0xffff);
      return uVar4;
    }
  }
  return 0;
}


