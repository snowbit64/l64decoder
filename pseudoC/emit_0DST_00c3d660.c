// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emit_0DST
// Entry Point: 00c3d660
// Size: 96 bytes
// Signature: undefined __thiscall emit_0DST(IR_InstructionSequence * this, IR_OPCODE param_1, uint param_2, uint param_3, uint param_4)


/* IR_InstructionSequence::emit_0DST(IR_OPCODE, unsigned int, unsigned int, unsigned int) */

void __thiscall
IR_InstructionSequence::emit_0DST
          (IR_InstructionSequence *this,IR_OPCODE param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  IR_OPCODE local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = 3;
  local_3c = param_1;
  local_34 = param_2;
  uStack_30 = param_3;
  local_2c = param_4;
  emit(this,&local_3c,5,0xffffffff);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


