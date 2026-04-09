// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<TextLine_const&>
// Entry Point: 00aefbf4
// Size: 356 bytes
// Signature: void __thiscall __push_back_slow_path<TextLine_const&>(vector<TextLine,std::__ndk1::allocator<TextLine>> * this, TextLine * param_1)


/* void std::__ndk1::vector<TextLine, std::__ndk1::allocator<TextLine>
   >::__push_back_slow_path<TextLine const&>(TextLine const&) */

void __thiscall
std::__ndk1::vector<TextLine,std::__ndk1::allocator<TextLine>>::
__push_back_slow_path<TextLine_const&>
          (vector<TextLine,std::__ndk1::allocator<TextLine>> *this,TextLine *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  TextLine *pTVar6;
  void *local_70;
  TextLine *local_68;
  TextLine *local_60;
  void *pvStack_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar3 * -0x7d05f417d05f417d + 1;
  if (0xbe82fa0be82fa0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_50 = (long *)(this + 0x10);
  lVar4 = *local_50 - *(long *)this >> 3;
  uVar5 = lVar4 * 0x5f417d05f417d06;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x5f417d05f417cf < (ulong)(lVar4 * -0x7d05f417d05f417d)) {
    uVar1 = 0xbe82fa0be82fa0;
  }
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (0xbe82fa0be82fa0 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_70 = operator_new(uVar1 * 0x158);
  }
  pTVar6 = (TextLine *)((long)local_70 + lVar3 * 8);
  pvStack_58 = (void *)((long)local_70 + uVar1 * 0x158);
  local_68 = pTVar6;
  local_60 = pTVar6;
                    /* try { // try from 00aefccc to 00aefceb has its CatchHandler @ 00aefd58 */
  TextLine::TextLine(pTVar6,param_1);
  local_60 = pTVar6 + 0x158;
  __swap_out_circular_buffer(this,(__split_buffer *)&local_70);
  pTVar6 = local_68;
  while (local_60 != pTVar6) {
    local_60 = local_60 + -0x158;
    TextLine::~TextLine(local_60);
  }
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


