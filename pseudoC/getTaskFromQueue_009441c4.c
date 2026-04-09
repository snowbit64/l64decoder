// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTaskFromQueue
// Entry Point: 009441c4
// Size: 160 bytes
// Signature: undefined __thiscall getTaskFromQueue(I3DStreamingManager * this, I3DLoadTask * * param_1)


/* I3DStreamingManager::getTaskFromQueue(I3DStreamingManager::I3DLoadTask*&) */

bool __thiscall
I3DStreamingManager::getTaskFromQueue(I3DStreamingManager *this,I3DLoadTask **param_1)

{
  I3DLoadTask **ppIVar1;
  I3DLoadTask *pIVar2;
  
  *param_1 = (I3DLoadTask *)0x0;
  Mutex::enterCriticalSection();
  ppIVar1 = *(I3DLoadTask ***)(this + 8);
  do {
    if (ppIVar1 == *(I3DLoadTask ***)(this + 0x10)) {
      if ((*param_1 != (I3DLoadTask *)0x0) || (this[0x38] == (I3DStreamingManager)0x0))
      goto LAB_0094421c;
      ppIVar1 = *(I3DLoadTask ***)(this + 0x20);
      goto LAB_0094424c;
    }
    pIVar2 = *ppIVar1;
    ppIVar1 = ppIVar1 + 1;
  } while (pIVar2[0x4cd] != (I3DLoadTask)0x0);
  goto LAB_00944204;
  while( true ) {
    pIVar2 = *ppIVar1;
    ppIVar1 = ppIVar1 + 1;
    if (pIVar2[0x4cd] == (I3DLoadTask)0x0) break;
LAB_0094424c:
    if (ppIVar1 == *(I3DLoadTask ***)(this + 0x28)) goto LAB_0094421c;
  }
LAB_00944204:
  *param_1 = pIVar2;
  pIVar2[0x4cd] = (I3DLoadTask)0x1;
LAB_0094421c:
  Mutex::leaveCriticalSection();
  return *param_1 != (I3DLoadTask *)0x0;
}


