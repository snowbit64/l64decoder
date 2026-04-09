// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: notifySourceStopsPlaying
// Entry Point: 00b0cb6c
// Size: 176 bytes
// Signature: undefined __thiscall notifySourceStopsPlaying(SoftAudioDevice * this, SoftAudioSource * param_1)


/* SoftAudioDevice::notifySourceStopsPlaying(SoftAudioSource*) */

void __thiscall
SoftAudioDevice::notifySourceStopsPlaying(SoftAudioDevice *this,SoftAudioSource *param_1)

{
  SoftAudioSource **ppSVar1;
  int iVar2;
  SoftAudioSource **ppSVar3;
  ulong uVar4;
  ulong uVar5;
  
  Mutex::enterCriticalSection();
  ppSVar1 = *(SoftAudioSource ***)(this + 0x38);
  iVar2 = (int)(*(long *)(this + 0x40) - (long)ppSVar1 >> 3);
  if (iVar2 != 0) {
    uVar5 = (ulong)(*(long *)(this + 0x40) - (long)ppSVar1) >> 3 & 0xffffffff;
    ppSVar3 = ppSVar1;
    do {
      if (*ppSVar3 == param_1) {
        uVar5 = (ulong)(iVar2 - 1);
        *ppSVar3 = ppSVar1[uVar5];
        uVar4 = *(long *)(this + 0x40) - *(long *)(this + 0x38) >> 3;
        if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
          if (uVar5 < uVar4) {
            *(ulong *)(this + 0x40) = *(long *)(this + 0x38) + uVar5 * 8;
          }
        }
        else {
          std::__ndk1::vector<SoftAudioSource*,std::__ndk1::allocator<SoftAudioSource*>>::__append
                    ((vector<SoftAudioSource*,std::__ndk1::allocator<SoftAudioSource*>> *)
                     (this + 0x38),uVar5 - uVar4);
        }
        *(int *)(this + 0x1ba0) = *(int *)(this + 0x1ba0) + -1;
        break;
      }
      ppSVar3 = ppSVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  Mutex::leaveCriticalSection();
  return;
}


