// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CharacterSetSource
// Entry Point: 007490e8
// Size: 212 bytes
// Signature: undefined __thiscall ~CharacterSetSource(CharacterSetSource * this)


/* CharacterSet::CharacterSetSource::~CharacterSetSource() */

void __thiscall CharacterSet::CharacterSetSource::~CharacterSetSource(CharacterSetSource *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  Clip *this_00;
  ulong uVar4;
  
  pvVar2 = *(void **)(this + 0x78);
  *(undefined ***)this = &PTR__CharacterSetSource_00fdaa98;
  if (pvVar2 != *(void **)(this + 0x70)) {
    uVar4 = 0;
    pvVar1 = *(void **)(this + 0x70);
    pvVar3 = pvVar2;
    do {
      pvVar2 = pvVar1;
      this_00 = *(Clip **)((long)pvVar2 + uVar4 * 8);
      if (this_00 != (Clip *)0x0) {
        Clip::~Clip(this_00);
        operator_delete(this_00);
        pvVar2 = *(void **)(this + 0x70);
        pvVar3 = *(void **)(this + 0x78);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      pvVar1 = pvVar2;
    } while (uVar4 < (ulong)((long)pvVar3 - (long)pvVar2 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar2;
    operator_delete(pvVar2);
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x10);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)this = &PTR__AtomicRefCounted_00fda810;
  return;
}


