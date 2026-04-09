// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00c83a2c
// Size: 380 bytes
// Signature: undefined __thiscall reserve(vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> * this, ulong param_1)


/* std::__ndk1::vector<CryptoPP::WindowSlider, std::__ndk1::allocator<CryptoPP::WindowSlider>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::reserve
          (vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *this,
          ulong param_1)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *local_70;
  long local_68;
  long local_60;
  void *pvStack_58;
  vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = *(long *)this;
  if ((ulong)((*(long *)(this + 0x10) - lVar4 >> 4) * 0x6db6db6db6db6db7) < param_1) {
    local_50 = this + 0x10;
    lVar5 = *(long *)(this + 8);
    if (0x249249249249249 < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    local_70 = operator_new(param_1 * 0x70);
    local_68 = (long)local_70 + (lVar5 - lVar4);
    pvStack_58 = (void *)((long)local_70 + param_1 * 0x70);
    local_60 = local_68;
                    /* try { // try from 00c83ac8 to 00c83ad3 has its CatchHandler @ 00c83ba8 */
    __swap_out_circular_buffer(this,(__split_buffer *)&local_70);
    lVar4 = local_68;
    while (lVar5 = local_60, local_60 != lVar4) {
      *(undefined ***)(local_60 + -0x40) = &PTR__Integer_0100c890;
      pvVar3 = *(void **)(local_60 + -0x20);
      uVar2 = *(ulong *)(local_60 + -0x30);
      if (*(ulong *)(local_60 + -0x28) <= *(ulong *)(local_60 + -0x30)) {
        uVar2 = *(ulong *)(local_60 + -0x28);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
      }
      local_60 = local_60 + -0x70;
                    /* try { // try from 00c83b2c to 00c83b2f has its CatchHandler @ 00c83bbc */
      CryptoPP::UnalignedDeallocate(pvVar3);
      pvVar3 = *(void **)(lVar5 + -0x50);
      *(undefined ***)(lVar5 + -0x70) = &PTR__Integer_0100c890;
      uVar2 = *(ulong *)(lVar5 + -0x60);
      if (*(ulong *)(lVar5 + -0x58) <= *(ulong *)(lVar5 + -0x60)) {
        uVar2 = *(ulong *)(lVar5 + -0x58);
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined4 *)((long)pvVar3 + uVar2 * 4 + -4) = 0;
      }
                    /* try { // try from 00c83ae8 to 00c83aeb has its CatchHandler @ 00c83bc0 */
      CryptoPP::UnalignedDeallocate(pvVar3);
    }
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


