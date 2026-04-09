// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__vector_base
// Entry Point: 006ff9c4
// Size: 216 bytes
// Signature: undefined __thiscall ~__vector_base(__vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>> * this)


/* std::__ndk1::__vector_base<AnimalSoundSource::Group,
   std::__ndk1::allocator<AnimalSoundSource::Group> >::~__vector_base() */

void __thiscall
std::__ndk1::
__vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>::
~__vector_base(__vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>
               *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar2 = *(byte **)this;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar4 = pbVar2;
  pbVar3 = *(byte **)(this + 8);
  if (*(byte **)(this + 8) != pbVar2) {
    do {
      pbVar5 = *(byte **)(pbVar3 + -0x18);
      pbVar4 = pbVar3 + -0x58;
      if (pbVar5 != (byte *)0x0) {
        pbVar1 = *(byte **)(pbVar3 + -0x10);
        pbVar6 = pbVar5;
        if (pbVar1 != pbVar5) {
          do {
            pbVar6 = pbVar1 + -0x18;
            if ((*pbVar6 & 1) != 0) {
              operator_delete(*(void **)(pbVar1 + -8));
            }
            pbVar1 = pbVar6;
          } while (pbVar6 != pbVar5);
          pbVar6 = *(byte **)(pbVar3 + -0x18);
        }
        *(byte **)(pbVar3 + -0x10) = pbVar5;
        operator_delete(pbVar6);
      }
      if ((*pbVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -0x48));
      }
      pbVar3 = pbVar4;
    } while (pbVar4 != pbVar2);
    pbVar4 = *(byte **)this;
  }
  *(byte **)(this + 8) = pbVar2;
  operator_delete(pbVar4);
  return;
}


