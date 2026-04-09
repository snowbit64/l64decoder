// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ConditionalAnimationItem_const&>
// Entry Point: 00865d44
// Size: 356 bytes
// Signature: void __thiscall __push_back_slow_path<ConditionalAnimationItem_const&>(vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>> * this, ConditionalAnimationItem * param_1)


/* void std::__ndk1::vector<ConditionalAnimationItem,
   std::__ndk1::allocator<ConditionalAnimationItem>
   >::__push_back_slow_path<ConditionalAnimationItem const&>(ConditionalAnimationItem const&) */

void __thiscall
std::__ndk1::vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>>::
__push_back_slow_path<ConditionalAnimationItem_const&>
          (vector<ConditionalAnimationItem,std::__ndk1::allocator<ConditionalAnimationItem>> *this,
          ConditionalAnimationItem *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ConditionalAnimationItem *pCVar6;
  void *local_70;
  ConditionalAnimationItem *local_68;
  ConditionalAnimationItem *local_60;
  void *pvStack_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar3 * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_50 = (long *)(this + 0x10);
  lVar4 = *local_50 - *(long *)this >> 3;
  uVar5 = lVar4 * -0x2108421084210842;
  if (uVar1 <= uVar5) {
    uVar1 = uVar5;
  }
  if (0x84210842108420 < (ulong)(lVar4 * -0x1084210842108421)) {
    uVar1 = 0x108421084210842;
  }
  if (uVar1 == 0) {
    local_70 = (void *)0x0;
  }
  else {
    if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_70 = operator_new(uVar1 * 0xf8);
  }
  pCVar6 = (ConditionalAnimationItem *)((long)local_70 + lVar3 * 8);
  pvStack_58 = (void *)((long)local_70 + uVar1 * 0xf8);
  local_68 = pCVar6;
  local_60 = pCVar6;
                    /* try { // try from 00865e1c to 00865e3b has its CatchHandler @ 00865ea8 */
  ConditionalAnimationItem::ConditionalAnimationItem(pCVar6,param_1);
  local_60 = pCVar6 + 0xf8;
  __swap_out_circular_buffer(this,(__split_buffer *)&local_70);
  pCVar6 = local_68;
  while (local_60 != pCVar6) {
    local_60 = local_60 + -0xf8;
    ConditionalAnimationItem::~ConditionalAnimationItem(local_60);
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


