// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit_0DST
// Entry Point: 00c3d5a8
// Size: 92 bytes
// Signature: undefined __thiscall emit_0DST(IR_InstructionSequence * this, IR_OPCODE param_1, uint param_2)


/* IR_InstructionSequence::emit_0DST(IR_OPCODE, unsigned int) */

void __thiscall
IR_InstructionSequence::emit_0DST(IR_InstructionSequence *this,IR_OPCODE param_1,uint param_2)

{
  long lVar1;
  IR_OPCODE local_34;
  undefined4 uStack_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = 1;
  local_34 = param_1;
  local_2c = param_2;
  emit(this,&local_34,3,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


