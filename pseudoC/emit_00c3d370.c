// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit
// Entry Point: 00c3d370
// Size: 92 bytes
// Signature: undefined __thiscall emit(IR_InstructionSequence * this, IR_OPCODE param_1, uint param_2, uint param_3)


/* IR_InstructionSequence::emit(IR_OPCODE, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::emit
          (IR_InstructionSequence *this,IR_OPCODE param_1,uint param_2,uint param_3)

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
  local_38 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  emit(this,&local_38,4,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


