// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFreeSample
// Entry Point: 00710184
// Size: 248 bytes
// Signature: undefined __thiscall getFreeSample(AnimalSoundSystem * this, uint param_1)


/* AnimalSoundSystem::getFreeSample(unsigned int) */

undefined4 __thiscall AnimalSoundSystem::getFreeSample(AnimalSoundSystem *this,uint param_1)

{
  void *__dest;
  size_t __n;
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_50,
             (vector *)(*(long *)(this + 0x18) + (ulong)param_1 * 0x58 + 0x20));
  if (local_50 != local_48) {
    do {
                    /* try { // try from 00710220 to 00710227 has its CatchHandler @ 0071027c */
      iVar2 = MathUtil::getRandomMinMax(0,(int)((ulong)((long)local_48 - (long)local_50) >> 2) + -1)
      ;
      uVar4 = *(undefined4 *)((long)local_50 + (long)iVar2 * 4);
                    /* try { // try from 0071023c to 0071023f has its CatchHandler @ 00710280 */
      uVar3 = AudioSource::isPlaying();
      if ((uVar3 & 1) == 0) goto LAB_007101d0;
      __dest = (void *)((long)local_50 + (long)iVar2 * 4);
      __n = (long)local_48 - (long)(void *)((long)__dest + 4);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 4),__n);
      }
      local_48 = (void *)((long)__dest + __n);
    } while (local_50 != local_48);
  }
  uVar4 = 0xffffffff;
LAB_007101d0:
  if (local_50 != (void *)0x0) {
    local_48 = local_50;
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


