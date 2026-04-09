// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxActiveVoiceCount
// Entry Point: 00e3eae0
// Size: 336 bytes
// Signature: undefined __thiscall setMaxActiveVoiceCount(Soloud * this, uint param_1)


/* SoLoud::Soloud::setMaxActiveVoiceCount(unsigned int) */

undefined8 __thiscall SoLoud::Soloud::setMaxActiveVoiceCount(Soloud *this,uint param_1)

{
  ulong *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong *this_00;
  ulong uVar5;
  
  if (param_1 - 0x400 < 0xfffffc01) {
    return 1;
  }
  lockAudioMutex();
  lVar3 = *(long *)(this + 0x90);
  *(uint *)(this + 0x50) = param_1;
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + -8);
    if (lVar4 != 0) {
      lVar4 = lVar4 * 0x18;
      do {
        AlignedFloatBuffer::~AlignedFloatBuffer((AlignedFloatBuffer *)(lVar3 + -0x18 + lVar4));
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
    operator_delete__((long *)(lVar3 + -8));
  }
  if (*(void **)(this + 0x98) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x98));
  }
  uVar5 = (ulong)(param_1 << 1);
  lVar3 = uVar5 * 0x18;
  puVar1 = (ulong *)operator_new__((uVar5 * 3 >> 1) << 4 | 8);
  this_00 = puVar1 + 1;
  *puVar1 = uVar5;
  puVar1 = this_00;
  do {
    AlignedFloatBuffer::AlignedFloatBuffer((AlignedFloatBuffer *)puVar1);
    puVar1 = puVar1 + 3;
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != 0);
  *(ulong **)(this + 0x90) = this_00;
  pvVar2 = operator_new__((ulong)param_1 * 8);
  *(void **)(this + 0x98) = pvVar2;
  if (param_1 << 1 != 0) {
    AlignedFloatBuffer::init((AlignedFloatBuffer *)this_00,0x1000);
    lVar4 = uVar5 - 1;
    lVar3 = 0x18;
    do {
      AlignedFloatBuffer::init((AlignedFloatBuffer *)(*(long *)(this + 0x90) + lVar3),0x1000);
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 != 0);
  }
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x98) + lVar3) = 0;
      lVar3 = lVar3 + 8;
    } while ((ulong)param_1 * 8 - lVar3 != 0);
  }
  this[0x224f0] = (Soloud)0x1;
  unlockAudioMutex();
  return 0;
}


