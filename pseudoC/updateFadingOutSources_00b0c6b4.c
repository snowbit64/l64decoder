// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateFadingOutSources
// Entry Point: 00b0c6b4
// Size: 224 bytes
// Signature: undefined updateFadingOutSources(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoftAudioDevice::updateFadingOutSources() */

void SoftAudioDevice::updateFadingOutSources(void)

{
  long lVar1;
  void *pvVar2;
  long in_x0;
  ulong uVar3;
  long lVar4;
  long **pplVar5;
  void *local_60;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x1ba4) != 0) {
    SoLoud::Soloud::lockAudioMutex();
    Mutex::enterCriticalSection();
    pplVar5 = *(long ***)(in_x0 + 0x88);
    while (pvVar2 = local_60, pplVar5 != (long **)0x0) {
                    /* try { // try from 00b0c71c to 00b0c71f has its CatchHandler @ 00b0c798 */
      while (uVar3 = SoftAudioSource::updateFadingOutLocked(), (uVar3 & 1) == 0) {
        pplVar5 = (long **)*pplVar5;
        if (pplVar5 == (long **)0x0) goto LAB_00b0c750;
      }
      pplVar5 = (long **)*pplVar5;
      std::__ndk1::
      __hash_table<SoftAudioSource*,std::__ndk1::hash<SoftAudioSource*>,std::__ndk1::equal_to<SoftAudioSource*>,std::__ndk1::allocator<SoftAudioSource*>>
      ::remove((int)in_x0 + 0x78);
      local_60 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
    }
LAB_00b0c750:
    *(int *)(in_x0 + 0x1ba4) = (int)*(undefined8 *)(in_x0 + 0x90);
                    /* try { // try from 00b0c758 to 00b0c75f has its CatchHandler @ 00b0c794 */
    Mutex::leaveCriticalSection();
    SoLoud::Soloud::unlockAudioMutex();
  }
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


