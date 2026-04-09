// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioLoaderOGG
// Entry Point: 00b08040
// Size: 192 bytes
// Signature: undefined __thiscall ~AudioLoaderOGG(AudioLoaderOGG * this)


/* AudioLoaderOGG::~AudioLoaderOGG() */

void __thiscall AudioLoaderOGG::~AudioLoaderOGG(AudioLoaderOGG *this)

{
  AudioLoaderOGG AVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__AudioLoaderOGG_00fe7288;
  *(undefined ***)(this + 8) = &PTR__AudioLoaderOGG_00fe72e8;
                    /* try { // try from 00b08068 to 00b0806b has its CatchHandler @ 00b08100 */
  stb_vorbis_close(*(undefined8 *)(this + 0x68));
  if (*(long **)(this + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x10) + 8))();
  }
  if (((byte)this[0xa0] & 1) == 0) {
    AVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    AVar1 = this[0x88];
  }
  if (((byte)AVar1 & 1) == 0) {
    AVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    AVar1 = this[0x70];
  }
  if (((byte)AVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x40);
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    pvVar2 = *(void **)(this + 0x40);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x18);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}


