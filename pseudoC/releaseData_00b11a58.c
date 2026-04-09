// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseData
// Entry Point: 00b11a58
// Size: 120 bytes
// Signature: undefined __thiscall releaseData(SoftAudioStreamedReader * this, AudioBlock * param_1)


/* SoftAudioStreamedReader::releaseData(ISoftAudioReader::AudioBlock const&) */

void __thiscall
SoftAudioStreamedReader::releaseData(SoftAudioStreamedReader *this,AudioBlock *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    lVar2 = *(long *)(this + 0x48);
    lVar3 = *(long *)(this + 0x68);
    uVar1 = 0;
    if (*(long *)(this + 0x50) - lVar2 != 0) {
      uVar1 = (*(long *)(this + 0x50) - lVar2) * 0x40 - 1;
    }
    uVar4 = lVar3 + *(long *)(this + 0x60);
    if (uVar1 == uVar4) {
      std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>::__add_back_capacity();
      lVar3 = *(long *)(this + 0x68);
      lVar2 = *(long *)(this + 0x48);
      uVar4 = *(long *)(this + 0x60) + lVar3;
    }
    lVar2 = *(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8));
    *(long *)(this + 0x68) = lVar3 + 1;
    *(long *)(lVar2 + (uVar4 & 0x1ff) * 8) = lVar5;
  }
  return;
}


