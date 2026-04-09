// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitInsert
// Entry Point: 00c3d3cc
// Size: 96 bytes
// Signature: undefined __thiscall emitInsert(IR_InstructionSequence * this, uint param_1, IR_OPCODE param_2, uint param_3)


/* IR_InstructionSequence::emitInsert(unsigned int, IR_OPCODE, unsigned int) */

void __thiscall
IR_InstructionSequence::emitInsert
          (IR_InstructionSequence *this,uint param_1,IR_OPCODE param_2,uint param_3)

{
  long lVar1;
  IR_OPCODE local_34;
  undefined4 uStack_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = 0x10000;
  local_34 = param_2;
  local_2c = param_3;
  emit(this,&local_34,3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


