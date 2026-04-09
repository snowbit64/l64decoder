// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emitInsert
// Entry Point: 00c3d42c
// Size: 96 bytes
// Signature: undefined __thiscall emitInsert(IR_InstructionSequence * this, uint param_1, IR_OPCODE param_2, uint param_3, uint param_4)


/* IR_InstructionSequence::emitInsert(unsigned int, IR_OPCODE, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::emitInsert
          (IR_InstructionSequence *this,uint param_1,IR_OPCODE param_2,uint param_3,uint param_4)

{
  long lVar1;
  IR_OPCODE local_38;
  undefined4 uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_34 = 0x10001;
  local_38 = param_2;
  local_30 = param_3;
  uStack_2c = param_4;
  emit(this,&local_38,4,param_1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


