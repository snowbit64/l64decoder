// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 008bbb9c
// Size: 124 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>> * this)


/* Lockable<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,
   std::__ndk1::allocator<SoundPlayer::SampleLoadInfo> > >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>>
::~Lockable(Lockable<std::__ndk1::deque<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>>
            *this)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  std::__ndk1::
  __deque_base<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
  clear();
  ppvVar1 = *(void ***)(this + 0x38);
  ppvVar3 = *(void ***)(this + 0x30);
  if (*(void ***)(this + 0x30) != ppvVar1) {
    do {
      ppvVar4 = ppvVar3 + 1;
      operator_delete(*ppvVar3);
      ppvVar3 = ppvVar4;
    } while (ppvVar4 != ppvVar1);
    lVar2 = *(long *)(this + 0x38) - *(long *)(this + 0x30);
    if (lVar2 != 0) {
      *(ulong *)(this + 0x38) = *(long *)(this + 0x38) + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28));
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


