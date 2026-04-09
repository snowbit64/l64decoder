// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 0070f540
// Size: 200 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>&> * this)


/* std::__ndk1::__split_buffer<AnimalSoundSource::Group,
   std::__ndk1::allocator<AnimalSoundSource::Group>&>::~__split_buffer() */

void __thiscall
std::__ndk1::
__split_buffer<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>&>::
~__split_buffer(__split_buffer<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>&>
                *this)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  lVar1 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10);
  while (lVar3 != lVar1) {
    pbVar4 = *(byte **)(lVar3 + -0x18);
    *(byte **)(this + 0x10) = (byte *)(lVar3 + -0x58);
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = *(byte **)(lVar3 + -0x10);
      pbVar5 = pbVar4;
      if (pbVar2 != pbVar4) {
        do {
          pbVar5 = pbVar2 + -0x18;
          if ((*pbVar5 & 1) != 0) {
            operator_delete(*(void **)(pbVar2 + -8));
          }
          pbVar2 = pbVar5;
        } while (pbVar5 != pbVar4);
        pbVar5 = *(byte **)(lVar3 + -0x18);
      }
      *(byte **)(lVar3 + -0x10) = pbVar4;
      operator_delete(pbVar5);
    }
    if ((*(byte *)(lVar3 + -0x58) & 1) != 0) {
      operator_delete(*(void **)(lVar3 + -0x48));
    }
    lVar3 = *(long *)(this + 0x10);
  }
  if (*(void **)this == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)this);
  return;
}


