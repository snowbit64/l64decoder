// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifySourceStartsFadingOut
// Entry Point: 00b0cc1c
// Size: 140 bytes
// Signature: undefined __thiscall notifySourceStartsFadingOut(SoftAudioDevice * this, SoftAudioSource * param_1)


/* SoftAudioDevice::notifySourceStartsFadingOut(SoftAudioSource*) */

void __thiscall
SoftAudioDevice::notifySourceStartsFadingOut(SoftAudioDevice *this,SoftAudioSource *param_1)

{
  long lVar1;
  SoftAudioSource *local_58;
  SoftAudioDevice *pSStack_50;
  __hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
  *local_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  pSStack_50 = this + 0x50;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_58 = param_1;
  local_48 = (__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
              *)(this + 0x78);
  Mutex::enterCriticalSection();
                    /* try { // try from 00b0cc5c to 00b0cc6b has its CatchHandler @ 00b0ccac */
  std::__ndk1::
  __hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
  ::__emplace_unique_key_args<SoftAudioSource*,SoftAudioSource*const&>
            ((__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
              *)(this + 0x78),&local_58,&local_58);
  *(int *)(this + 0x1ba4) = *(int *)(this + 0x1ba4) + 1;
                    /* try { // try from 00b0cc78 to 00b0cc7f has its CatchHandler @ 00b0cca8 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


