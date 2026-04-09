// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Clip
// Entry Point: 00749294
// Size: 156 bytes
// Signature: undefined __thiscall ~Clip(Clip * this)


/* Clip::~Clip() */

void __thiscall Clip::~Clip(Clip *this)

{
  void *pvVar1;
  long lVar2;
  KeyframedTransformation *this_00;
  long lVar3;
  
  pvVar1 = *(void **)(this + 0x20);
  lVar2 = *(long *)(this + 0x28);
  if (0 < (int)((ulong)(lVar2 - (long)pvVar1) >> 3)) {
    lVar3 = 0;
    do {
      this_00 = *(KeyframedTransformation **)((long)pvVar1 + lVar3 * 8);
      if (this_00 != (KeyframedTransformation *)0x0) {
        KeyframedTransformation::~KeyframedTransformation(this_00);
        operator_delete(this_00);
        pvVar1 = *(void **)(this + 0x20);
        lVar2 = *(long *)(this + 0x28);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)((ulong)(lVar2 - (long)pvVar1) >> 3));
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}


