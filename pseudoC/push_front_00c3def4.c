// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_front
// Entry Point: 00c3def4
// Size: 84 bytes
// Signature: undefined __thiscall push_front(IR_InstructionSequence * this, uint * param_1)


/* IR_InstructionSequence::push_front(unsigned int*) */

void __thiscall IR_InstructionSequence::push_front(IR_InstructionSequence *this,uint *param_1)

{
  long lVar1;
  uint *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  std::__ndk1::vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>>::insert
            ((vector<unsigned_int*,std::__ndk1::allocator<unsigned_int*>> *)(this + 0x20),
             (__wrap_iter)*(undefined8 *)(this + 0x20),&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


