// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftAudioBuffer
// Entry Point: 00b0e984
// Size: 220 bytes
// Signature: undefined __thiscall ~SoftAudioBuffer(SoftAudioBuffer * this)


/* SoftAudioBuffer::~SoftAudioBuffer() */

void __thiscall SoftAudioBuffer::~SoftAudioBuffer(SoftAudioBuffer *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__SoftAudioBuffer_00fe7aa8;
                    /* try { // try from 00b0e9ac to 00b0e9b3 has its CatchHandler @ 00b0ea64 */
  Mutex::enterCriticalSection();
  lVar2 = *(long *)(this + 0x68);
  if (*(long *)(this + 0x70) != lVar2) {
    uVar3 = 0;
    do {
                    /* try { // try from 00b0e9c8 to 00b0e9cb has its CatchHandler @ 00b0ea70 */
      stb_vorbis_close(*(undefined8 *)(lVar2 + uVar3 * 8));
      lVar2 = *(long *)(this + 0x68);
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 < (ulong)(*(long *)(this + 0x70) - lVar2 >> 3));
  }
                    /* try { // try from 00b0e9e0 to 00b0e9e7 has its CatchHandler @ 00b0ea60 */
  Mutex::leaveCriticalSection();
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x50));
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x60));
  }
  if (*(uint *)(this + 0x20) != 0) {
                    /* try { // try from 00b0ea0c to 00b0ea1b has its CatchHandler @ 00b0ea68 */
    SoftAudioDevice::notifyBufferDeallocated
              (*(SoftAudioDevice **)(this + 0x40),*(uint *)(this + 0x20));
  }
  SoftAudioDevice::notifyBufferIsBeingDestroyed
            (*(SoftAudioDevice **)(this + 0x40),(IAudioBuffer *)this);
  Mutex::~Mutex((Mutex *)(this + 0x84));
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  if (((byte)this[0x28] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}


