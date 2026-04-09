// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifySourceIsBeingDestroyed
// Entry Point: 00b0c99c
// Size: 148 bytes
// Signature: undefined __thiscall notifySourceIsBeingDestroyed(SoftAudioDevice * this, SoftAudioSource * param_1)


/* SoftAudioDevice::notifySourceIsBeingDestroyed(SoftAudioSource*) */

void __thiscall
SoftAudioDevice::notifySourceIsBeingDestroyed(SoftAudioDevice *this,SoftAudioSource *param_1)

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
                    /* try { // try from 00b0c9dc to 00b0c9e7 has its CatchHandler @ 00b0ca34 */
  std::__ndk1::
  __hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
  ::__erase_unique<SoftAudioSource*>
            ((__hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
              *)(this + 0x78),&local_58);
  *(int *)(this + 0x1ba4) = *(int *)(this + 0x1ba4) + -1;
  *(int *)(this + 0x1b98) = *(int *)(this + 0x1b98) + -1;
                    /* try { // try from 00b0ca00 to 00b0ca07 has its CatchHandler @ 00b0ca30 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


