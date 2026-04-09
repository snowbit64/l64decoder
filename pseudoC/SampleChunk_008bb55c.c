// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SampleChunk
// Entry Point: 008bb55c
// Size: 128 bytes
// Signature: undefined __thiscall ~SampleChunk(SampleChunk * this)


/* SampleChunk::~SampleChunk() */

void __thiscall SampleChunk::~SampleChunk(SampleChunk *this)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__SampleChunk_00fddc18;
  *(undefined ***)this = &PTR__SampleChunk_00fddc18;
  *(undefined ***)(this + 0x10) = &PTR__SampleChunk_00fddc60;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
    ppuVar1 = *(undefined ***)this;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 008bb5a8 to 008bb5af has its CatchHandler @ 008bb5dc */
  (*(code *)ppuVar1[4])(this);
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  Resource::~Resource((Resource *)this);
  return;
}


