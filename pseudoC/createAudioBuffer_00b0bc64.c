// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAudioBuffer
// Entry Point: 00b0bc64
// Size: 256 bytes
// Signature: undefined __thiscall createAudioBuffer(SoftAudioDevice * this, AudioBufferDesc * param_1)


/* SoftAudioDevice::createAudioBuffer(AudioBufferDesc const&) */

long * __thiscall SoftAudioDevice::createAudioBuffer(SoftAudioDevice *this,AudioBufferDesc *param_1)

{
  uint uVar1;
  uint uVar2;
  long *this_00;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    uVar2 = *(uint *)(this + 0x1bb0);
    uVar1 = *(int *)(this + 0x1bac) + 1;
    if (uVar2 <= uVar1) {
      uVar2 = *(int *)(this + 0x1bac) + 1;
    }
    *(uint *)(this + 0x1bac) = uVar1;
    *(uint *)(this + 0x1bb0) = uVar2;
  }
  else {
    uVar2 = *(uint *)(this + 0x1bb8);
    uVar1 = *(int *)(this + 0x1bb4) + 1;
    if (uVar2 <= uVar1) {
      uVar2 = *(int *)(this + 0x1bb4) + 1;
    }
    *(uint *)(this + 0x1bb4) = uVar1;
    *(uint *)(this + 0x1bb8) = uVar2;
  }
  this_00 = (long *)operator_new(0xb0);
  this_00[5] = 0;
  this_00[4] = 0;
  this_00[7] = 0;
  this_00[6] = 0;
  this_00[0xd] = 0;
  this_00[0xc] = 0;
  this_00[0xf] = 0;
  this_00[0xe] = 0;
  this_00[1] = 0;
  *this_00 = 0;
  this_00[3] = 0;
  this_00[2] = 0;
  this_00[9] = 0;
  this_00[8] = 0;
  this_00[0xb] = 0;
  this_00[10] = 0;
  this_00[0x11] = 0;
  this_00[0x10] = 0;
  this_00[0x13] = 0;
  this_00[0x12] = 0;
  this_00[0x15] = 0;
  this_00[0x14] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  this_00[5] = 0;
  this_00[0xd] = 0;
  *this_00 = (long)&PTR__SoftAudioBuffer_00fe7aa8;
  this_00[0xe] = 0;
  this_00[0xf] = 0;
                    /* try { // try from 00b0bd18 to 00b0bd1f has its CatchHandler @ 00b0bd64 */
  Mutex::Mutex((Mutex *)((long)this_00 + 0x84),true);
  uVar3 = SoftAudioBuffer::init((SoftAudioBuffer *)this_00,param_1,this,*(Soloud **)(this + 8));
  if ((uVar3 & 1) == 0) {
    (**(code **)(*this_00 + 8))(this_00);
    this_00 = (long *)0x0;
  }
  return this_00;
}


