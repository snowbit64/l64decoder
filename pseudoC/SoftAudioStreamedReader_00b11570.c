// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioStreamedReader
// Entry Point: 00b11570
// Size: 172 bytes
// Signature: undefined __thiscall ~SoftAudioStreamedReader(SoftAudioStreamedReader * this)


/* SoftAudioStreamedReader::~SoftAudioStreamedReader() */

void __thiscall SoftAudioStreamedReader::~SoftAudioStreamedReader(SoftAudioStreamedReader *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  *(undefined ***)this = &PTR__SoftAudioStreamedReader_00fe7f10;
                    /* try { // try from 00b1159c to 00b115ab has its CatchHandler @ 00b1161c */
  (**(code **)(**(long **)(this + 0x10) + 0x20))();
  SoftAudioBuffer::notifyBufferDeallocated(*(SoftAudioBuffer **)(this + 8),*(uint *)(this + 0x74));
  if (*(void **)(this + 0x20) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x20));
  }
  lVar3 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  if (lVar2 != lVar3) {
    uVar4 = 0;
    do {
      pvVar1 = *(void **)(lVar3 + uVar4 * 8);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
        lVar3 = *(long *)(this + 0x28);
        lVar2 = *(long *)(this + 0x30);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar2 - lVar3 >> 3));
  }
  std::__ndk1::__deque_base<float*,std::__ndk1::allocator<float*>>::~__deque_base
            ((__deque_base<float*,std::__ndk1::allocator<float*>> *)(this + 0x40));
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


