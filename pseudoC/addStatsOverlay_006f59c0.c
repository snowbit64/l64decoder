// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStatsOverlay
// Entry Point: 006f59c0
// Size: 272 bytes
// Signature: undefined __thiscall addStatsOverlay(StatsOverlayManager * this, StatsOverlay * param_1, uint param_2)


/* StatsOverlayManager::addStatsOverlay(StatsOverlay*, unsigned int) */

void __thiscall
StatsOverlayManager::addStatsOverlay(StatsOverlayManager *this,StatsOverlay *param_1,uint param_2)

{
  ulong uVar1;
  StatsOverlay **ppSVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppSVar2 = *(StatsOverlay ***)(this + 8);
  if (ppSVar2 == *(StatsOverlay ***)(this + 0x10)) {
    __src = *(void **)this;
    __n = (long)ppSVar2 - (long)__src;
    uVar1 = ((long)__n >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 3)) {
      uVar1 = (long)__n >> 3;
    }
    if (0x7fffffffffffffef < __n) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x10);
    ppSVar2 = (StatsOverlay **)((long)__dest + ((long)__n >> 4) * 0x10);
    *ppSVar2 = param_1;
    *(uint *)(ppSVar2 + 1) = param_2;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)this = __dest;
    *(StatsOverlay ***)(this + 8) = ppSVar2 + 2;
    *(void **)(this + 0x10) = (void *)((long)__dest + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppSVar2 = param_1;
    *(uint *)(ppSVar2 + 1) = param_2;
    *(StatsOverlay ***)(this + 8) = ppSVar2 + 2;
  }
  param_1[8] = (StatsOverlay)0x0;
                    /* WARNING: Could not recover jumptable at 0x006f5ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x18))(param_1,0);
  return;
}


