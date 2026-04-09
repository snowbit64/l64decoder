// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~KeyframedTransformation
// Entry Point: 007497a4
// Size: 140 bytes
// Signature: undefined __thiscall ~KeyframedTransformation(KeyframedTransformation * this)


/* KeyframedTransformation::~KeyframedTransformation() */

void __thiscall KeyframedTransformation::~KeyframedTransformation(KeyframedTransformation *this)

{
  void *pvVar1;
  long lVar2;
  
  if (*(void **)(this + 200) == (void *)0x0) {
    pvVar1 = *(void **)(this + 8);
    if (0 < (int)((ulong)(*(long *)(this + 0x10) - (long)pvVar1) >> 3)) {
      lVar2 = 0;
      do {
                    /* try { // try from 007497ec to 007497ef has its CatchHandler @ 00749830 */
        CompressedTransformationKeyFrame::destroy
                  (*(CompressedTransformationKeyFrame **)((long)pvVar1 + lVar2 * 8));
        pvVar1 = *(void **)(this + 8);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)((ulong)(*(long *)(this + 0x10) - (long)pvVar1) >> 3));
    }
  }
  else {
    free(*(void **)(this + 200));
    pvVar1 = *(void **)(this + 8);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


