// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioDevice
// Entry Point: 00b0ba34
// Size: 292 bytes
// Signature: undefined __thiscall ~SoftAudioDevice(SoftAudioDevice * this)


/* SoftAudioDevice::~SoftAudioDevice() */

void __thiscall SoftAudioDevice::~SoftAudioDevice(SoftAudioDevice *this)

{
  void **ppvVar1;
  void *pvVar2;
  FDNReverbEffect *pFVar3;
  Soloud *this_00;
  long lVar4;
  
  *(undefined ***)this = &PTR__SoftAudioDevice_00fe7868;
                    /* try { // try from 00b0ba5c to 00b0ba5f has its CatchHandler @ 00b0bb58 */
  SoLoud::Soloud::unlockPauseMutex();
  lVar4 = 0;
  do {
    if (*(long **)(this + lVar4 + 0xea0) != (long *)0x0) {
      (**(code **)(**(long **)(this + lVar4 + 0xea0) + 0x10))();
      pFVar3 = *(FDNReverbEffect **)(this + lVar4 + 0xea8);
      if (pFVar3 != (FDNReverbEffect *)0x0) {
        FDNReverbEffect::~FDNReverbEffect(pFVar3);
        operator_delete(pFVar3);
      }
      pFVar3 = *(FDNReverbEffect **)(this + lVar4 + 0xeb0);
      if (pFVar3 != (FDNReverbEffect *)0x0) {
        FDNReverbEffect::~FDNReverbEffect(pFVar3);
        operator_delete(pFVar3);
      }
    }
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xc0);
  this_00 = *(Soloud **)(this + 8);
  if (this_00 != (Soloud *)0x0) {
    SoLoud::Soloud::~Soloud(this_00);
    operator_delete(this_00);
  }
  lVar4 = 0xc00;
  do {
    pvVar2 = *(void **)(this + lVar4 + 0x288);
    if (pvVar2 != (void *)0x0) {
      *(void **)(this + lVar4 + 0x290) = pvVar2;
      operator_delete(pvVar2);
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0);
  ppvVar1 = (void **)*(void **)(this + 0x88);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *(void **)(this + 0x78);
  *(undefined8 *)(this + 0x78) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x50));
  pvVar2 = *(void **)(this + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x10));
  return;
}


