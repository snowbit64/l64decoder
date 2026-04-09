// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAllAmbientSamples
// Entry Point: 008bc860
// Size: 268 bytes
// Signature: undefined removeAllAmbientSamples(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoundPlayer::removeAllAmbientSamples() */

void SoundPlayer::removeAllAmbientSamples(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  Mutex::enterCriticalSection();
  std::__ndk1::
  __deque_base<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
  clear();
                    /* try { // try from 008bc88c to 008bc893 has its CatchHandler @ 008bc96c */
  Mutex::leaveCriticalSection();
  Mutex::enterCriticalSection();
  lVar1 = *(long *)(in_x0 + 0x28);
  for (lVar4 = *(long *)(in_x0 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + 0x48) {
    lVar2 = *(long *)(lVar4 + 0x20);
    for (lVar5 = *(long *)(lVar4 + 0x18); lVar5 != lVar2; lVar5 = lVar5 + 0x68) {
      if (*(long **)(lVar5 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar5 + 0x18) + 8))();
      }
    }
  }
  Mutex::leaveCriticalSection();
  lVar4 = *(long *)(in_x0 + 0x20);
  lVar1 = *(long *)(in_x0 + 0x28);
  while (lVar5 = lVar1, lVar5 != lVar4) {
    pbVar6 = *(byte **)(lVar5 + -0x30);
    lVar1 = lVar5 + -0x48;
    if (pbVar6 != (byte *)0x0) {
      pbVar3 = *(byte **)(lVar5 + -0x28);
      pbVar7 = pbVar6;
      if (pbVar3 != pbVar6) {
        do {
          pbVar7 = pbVar3 + -0x68;
          if ((*pbVar7 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -0x58));
          }
          pbVar3 = pbVar7;
        } while (pbVar7 != pbVar6);
        pbVar7 = *(byte **)(lVar5 + -0x30);
      }
      *(byte **)(lVar5 + -0x28) = pbVar6;
      operator_delete(pbVar7);
    }
  }
  *(long *)(in_x0 + 0x28) = lVar4;
  return;
}


