// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrameAudio
// Entry Point: 00c7304c
// Size: 232 bytes
// Signature: undefined __thiscall getFrameAudio(TheoraVideoDecoder * this, void * param_1)


/* TheoraVideoDecoder::getFrameAudio(void*) */

void __thiscall TheoraVideoDecoder::getFrameAudio(TheoraVideoDecoder *this,void *param_1)

{
  void **ppvVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  
  ppvVar5 = (void **)(this + 200);
  ppvVar4 = (void **)*ppvVar5;
  while (ppvVar4 == (void **)0x0) {
    ppvVar3 = *(void ***)(this + 0xc0);
    do {
      ppvVar4 = (void **)*ppvVar3;
      ppvVar1 = (void **)FUN_00f275d0(ppvVar4,0,ppvVar3);
    } while (ppvVar4 != ppvVar1);
    *ppvVar5 = ppvVar4;
    if (ppvVar4 != (void **)0x0) break;
    ThreadUtil::usleep(100);
    ppvVar4 = (void **)*ppvVar5;
  }
  do {
    ppvVar1 = ppvVar5;
    ppvVar3 = ppvVar4;
    ppvVar4 = (void **)ppvVar3[1];
    ppvVar5 = ppvVar3 + 1;
  } while (ppvVar4 != (void **)0x0);
  *ppvVar1 = (void *)0x0;
  FUN_00f27700(0xffffffff,*(long *)(this + 0xc0) + 8);
  Semaphore::post();
  if (*ppvVar3 == (void *)0x0) {
    memset(param_1,0,(ulong)*(uint *)(this + 0x100));
    this[0x51] = (TheoraVideoDecoder)0x1;
    pvVar2 = *ppvVar3;
  }
  else {
    memcpy(param_1,*ppvVar3,(ulong)*(uint *)(this + 0x100));
    pvVar2 = *ppvVar3;
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  operator_delete(ppvVar3);
  return;
}


