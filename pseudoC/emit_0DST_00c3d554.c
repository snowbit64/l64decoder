// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit_0DST
// Entry Point: 00c3d554
// Size: 84 bytes
// Signature: undefined __thiscall emit_0DST(IR_InstructionSequence * this, IR_OPCODE param_1)


/* IR_InstructionSequence::emit_0DST(IR_OPCODE) */

void __thiscall IR_InstructionSequence::emit_0DST(IR_InstructionSequence *this,IR_OPCODE param_1)

{
  long lVar1;
  IR_OPCODE local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2c = 0;
  local_30 = param_1;
  emit(this,&local_30,2,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


