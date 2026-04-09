// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BusInstance
// Entry Point: 00e3a264
// Size: 156 bytes
// Signature: undefined __thiscall ~BusInstance(BusInstance * this)


/* SoLoud::BusInstance::~BusInstance() */

void __thiscall SoLoud::BusInstance::~BusInstance(BusInstance *this)

{
  int iVar1;
  Soloud *this_00;
  long lVar2;
  
  this_00 = *(Soloud **)(*(long *)(this + 0x1f0) + 0x78);
  iVar1 = *(int *)(this_00 + 0x54);
  *(undefined ***)this = &PTR__BusInstance_01013d88;
  if (0 < iVar1) {
    lVar2 = 0;
    do {
      if ((*(long *)(this_00 + lVar2 * 8 + 0xa0) != 0) &&
         (*(int *)(*(long *)(this_00 + lVar2 * 8 + 0xa0) + 0x184) ==
          *(int *)(*(long *)(this + 0x1f0) + 0xa8))) {
        Soloud::stopVoice(this_00,(uint)lVar2);
        iVar1 = *(int *)(this_00 + 0x54);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
  }
  AlignedFloatBuffer::~AlignedFloatBuffer((AlignedFloatBuffer *)(this + 0x200));
  AudioSourceInstance::~AudioSourceInstance((AudioSourceInstance *)this);
  return;
}


