// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<CryptoPP::WindowSlider>
// Entry Point: 00cbf0fc
// Size: 516 bytes
// Signature: void __thiscall __push_back_slow_path<CryptoPP::WindowSlider>(vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> * this, WindowSlider * param_1)


/* void std::__ndk1::vector<CryptoPP::WindowSlider, std::__ndk1::allocator<CryptoPP::WindowSlider>
   >::__push_back_slow_path<CryptoPP::WindowSlider>(CryptoPP::WindowSlider&&) */

void __thiscall
std::__ndk1::vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>>::
__push_back_slow_path<CryptoPP::WindowSlider>
          (vector<CryptoPP::WindowSlider,std::__ndk1::allocator<CryptoPP::WindowSlider>> *this,
          WindowSlider *param_1)

{
  ulong uVar1;
  long lVar2;
  Integer *pIVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  Integer *pIVar8;
  undefined8 uVar9;
  void *local_80;
  Integer *local_78;
  Integer *local_70;
  void *pvStack_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  local_60 = (long *)(this + 0x10);
  lVar6 = *local_60 - *(long *)this >> 4;
  uVar7 = lVar6 * -0x2492492492492492;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (0x124924924924923 < (ulong)(lVar6 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x249249249249249;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x70);
  }
  pIVar8 = (Integer *)((long)pvVar4 + lVar5 * 0x10);
  pvStack_68 = (void *)((long)pvVar4 + uVar1 * 0x70);
  local_80 = pvVar4;
  local_78 = pIVar8;
  local_70 = pIVar8;
                    /* try { // try from 00cbf1dc to 00cbf1e7 has its CatchHandler @ 00cbf350 */
  CryptoPP::Integer::Integer(pIVar8,(Integer *)param_1);
                    /* try { // try from 00cbf1f8 to 00cbf1fb has its CatchHandler @ 00cbf300 */
  CryptoPP::Integer::Integer
            ((Integer *)((long)pvVar4 + lVar5 * 0x10 + 0x30),(Integer *)(param_1 + 0x30));
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  local_70 = pIVar8 + 0x70;
  *(undefined8 *)((long)pvVar4 + lVar5 * 0x10 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)((long)pvVar4 + lVar5 * 0x10 + 0x60) = uVar9;
                    /* try { // try from 00cbf214 to 00cbf21f has its CatchHandler @ 00cbf350 */
  __swap_out_circular_buffer(this,(__split_buffer *)&local_80);
  pIVar8 = local_78;
  while (pIVar3 = local_70, local_70 != pIVar8) {
    *(undefined ***)(local_70 + -0x40) = &PTR__Integer_0100c890;
    pvVar4 = *(void **)(local_70 + -0x20);
    uVar1 = *(ulong *)(local_70 + -0x30);
    if (*(ulong *)(local_70 + -0x28) <= *(ulong *)(local_70 + -0x30)) {
      uVar1 = *(ulong *)(local_70 + -0x28);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar4 + uVar1 * 4 + -4) = 0;
    }
    local_70 = local_70 + -0x70;
                    /* try { // try from 00cbf278 to 00cbf27b has its CatchHandler @ 00cbf364 */
    CryptoPP::UnalignedDeallocate(pvVar4);
    pvVar4 = *(void **)(pIVar3 + -0x50);
    *(undefined ***)(pIVar3 + -0x70) = &PTR__Integer_0100c890;
    uVar1 = *(ulong *)(pIVar3 + -0x60);
    if (*(ulong *)(pIVar3 + -0x58) <= *(ulong *)(pIVar3 + -0x60)) {
      uVar1 = *(ulong *)(pIVar3 + -0x58);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)((long)pvVar4 + uVar1 * 4 + -4) = 0;
    }
                    /* try { // try from 00cbf234 to 00cbf237 has its CatchHandler @ 00cbf368 */
    CryptoPP::UnalignedDeallocate(pvVar4);
  }
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


