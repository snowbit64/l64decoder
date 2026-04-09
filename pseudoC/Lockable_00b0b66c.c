// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Lockable
// Entry Point: 00b0b66c
// Size: 72 bytes
// Signature: undefined __thiscall ~Lockable(Lockable<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>> * this)


/* Lockable<std::__ndk1::unordered_set<SoftAudioSource*, std::__ndk1::hash<SoftAudioSource*>,
   std::__ndk1::equal_to<SoftAudioSource*>, std::__ndk1::allocator<SoftAudioSource*> >
   >::~Lockable() */

void __thiscall
Lockable<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>>
::~Lockable(Lockable<std::__ndk1::unordered_set<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>>
            *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)(this + 0x38);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)this);
  return;
}


