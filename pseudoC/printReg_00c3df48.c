// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printReg
// Entry Point: 00c3df48
// Size: 532 bytes
// Signature: undefined __thiscall printReg(IR_InstructionSequence * this, char * param_1, uint param_2, vector * param_3)


/* IR_InstructionSequence::printReg(char*, unsigned int, std::__ndk1::vector<IR_Const,
   std::__ndk1::allocator<IR_Const> >*) const */

char * __thiscall
IR_InstructionSequence::printReg
          (IR_InstructionSequence *this,char *param_1,uint param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  char *__dest;
  char *pcVar5;
  ulong uVar6;
  int *piVar7;
  int *this_00;
  byte local_60;
  undefined7 local_5f;
  undefined4 uStack_58;
  undefined local_54;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar6 = (ulong)param_2;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((int)param_2 < 0) {
    this_00 = (int *)(*(long *)(*(long *)this + 0x80) + (ulong)(param_2 & 0x7fffffff) * 0x18);
    IR_Const::format((IR_Const *)this_00,param_1);
    piVar7 = *(int **)(this_00 + 4);
    if ((piVar7 == (int *)0x0) || ((*piVar7 == 0 && (*this_00 != 0xe)))) goto LAB_00c3e124;
    sVar4 = strlen(param_1);
    pcVar5 = param_1 + sVar4;
    __dest = pcVar5 + 1;
    *pcVar5 = '(';
    IR_Type::getTypeString((IR_LANGUAGE)piVar7);
    pcVar5 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar5 = local_50;
    }
    pcVar5 = strcpy(__dest,pcVar5);
                    /* try { // try from 00c3e034 to 00c3e03b has its CatchHandler @ 00c3e15c */
    lVar2 = __strlen_chk(pcVar5,0xffffffffffffffff);
    param_1 = (char *)((long)(__dest + lVar2) + 1);
    *(undefined2 *)(__dest + lVar2) = 0x29;
  }
  else {
    lVar2 = IR_RegisterSet::getRegisterName((IR_RegisterSet *)(*(long *)this + 0x98),param_2);
    lVar3 = IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),param_2);
    if (lVar3 == 0) {
      local_54 = 0;
      local_60 = 0x16;
      local_5f = 0x54204c4c554e3c;
      uStack_58 = 0x3e455059;
    }
    else {
      IR_Type::getTypeString((IR_LANGUAGE)lVar3);
    }
    pcVar5 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar5 = local_50;
    }
    if (lVar2 == 0) {
      FUN_00c3e18c(param_1,0xffffffffffffffff,"R%u(%s)",uVar6,pcVar5);
    }
    else {
                    /* try { // try from 00c3e098 to 00c3e0cf has its CatchHandler @ 00c3e16c */
      FUN_00c3e18c(param_1,0xffffffffffffffff,"R%u{%s %s}",uVar6,pcVar5,lVar2);
    }
    if (param_3 != (vector *)0x0) {
      lVar3 = *(long *)param_3;
                    /* try { // try from 00c3e0d8 to 00c3e107 has its CatchHandler @ 00c3e170 */
      lVar2 = __strlen_chk(param_1,0xffffffffffffffff);
      pcVar5 = param_1 + lVar2 + 1;
      param_1[lVar2] = '[';
      IR_Const::format((IR_Const *)(lVar3 + uVar6 * 0x10),pcVar5);
      lVar2 = __strlen_chk(pcVar5,0xffffffffffffffff);
      param_1 = (char *)((long)(pcVar5 + lVar2) + 1);
      *(undefined2 *)(pcVar5 + lVar2) = 0x5d;
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00c3e124:
  sVar4 = strlen(param_1);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1 + sVar4;
}


