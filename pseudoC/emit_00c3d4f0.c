// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit
// Entry Point: 00c3d4f0
// Size: 100 bytes
// Signature: undefined __thiscall emit(IR_InstructionSequence * this, IR_OPCODE param_1, uint param_2, uint param_3, uint param_4, uint param_5)


/* IR_InstructionSequence::emit(IR_OPCODE, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
IR_InstructionSequence::emit
          (IR_InstructionSequence *this,IR_OPCODE param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  long lVar1;
  IR_OPCODE local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_3c = 0x10003;
  local_40 = param_1;
  local_38 = param_2;
  uStack_34 = param_3;
  local_30 = param_4;
  uStack_2c = param_5;
  emit(this,&local_40,6,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


