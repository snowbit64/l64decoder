// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftAudioStreamedReader
// Entry Point: 00b1136c
// Size: 444 bytes
// Signature: undefined __thiscall SoftAudioStreamedReader(SoftAudioStreamedReader * this, SoftAudioBuffer * param_1, IStreamedAudioData * param_2, uint param_3, uint param_4, uint param_5)


/* SoftAudioStreamedReader::SoftAudioStreamedReader(SoftAudioBuffer*, IStreamedAudioData*, unsigned
   int, unsigned int, unsigned int) */

void __thiscall
SoftAudioStreamedReader::SoftAudioStreamedReader
          (SoftAudioStreamedReader *this,SoftAudioBuffer *param_1,IStreamedAudioData *param_2,
          uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *this_00;
  ulong uVar8;
  long lVar9;
  
  uVar3 = (ulong)param_5;
  *(undefined8 *)(this + 0x68) = 0;
  this_00 = (long *)(this + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *this_00 = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__SoftAudioStreamedReader_00fe7f10;
  *(SoftAudioBuffer **)(this + 8) = param_1;
  lVar4 = *(long *)param_2;
  *(IStreamedAudioData **)(this + 0x10) = param_2;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 00b113dc to 00b1140b has its CatchHandler @ 00b11528 */
  uVar1 = (**(code **)(lVar4 + 0x10))(param_2);
  uVar8 = (ulong)uVar1;
  *(uint *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = 0;
  uVar6 = *(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3;
  if (uVar6 < uVar3) {
    std::__ndk1::vector<float*,std::__ndk1::allocator<float*>>::__append
              ((vector<float*,std::__ndk1::allocator<float*>> *)this_00,uVar3 - uVar6);
    uVar8 = (ulong)*(uint *)(this + 0x70);
  }
  else if (uVar3 < uVar6) {
    *(ulong *)(this + 0x30) = *(long *)(this + 0x28) + uVar3 * 8;
  }
  if (param_5 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = (uint)uVar8 / param_3;
    }
    lVar4 = 0;
    do {
      lVar9 = *this_00;
                    /* try { // try from 00b1147c to 00b114bf has its CatchHandler @ 00b11530 */
      pvVar2 = operator_new__((ulong)(uVar1 * param_4) << 2);
      *(void **)(lVar9 + lVar4) = pvVar2;
      lVar7 = *(long *)(this + 0x48);
      *(uint *)(this + 0x74) = *(int *)(this + 0x74) + uVar1 * param_4 * 4;
      lVar5 = *(long *)(this + 0x68);
      uVar6 = 0;
      if (*(long *)(this + 0x50) - lVar7 != 0) {
        uVar6 = (*(long *)(this + 0x50) - lVar7) * 0x40 - 1;
      }
      uVar8 = lVar5 + *(long *)(this + 0x60);
      if (uVar6 == uVar8) {
        std::__ndk1::deque<float*,std::__ndk1::allocator<float*>>::__add_back_capacity();
        lVar5 = *(long *)(this + 0x68);
        pvVar2 = *(void **)(lVar9 + lVar4);
        lVar7 = *(long *)(this + 0x48);
        uVar8 = *(long *)(this + 0x60) + lVar5;
      }
      lVar4 = lVar4 + 8;
      lVar7 = *(long *)(lVar7 + (uVar8 >> 6 & 0x3fffffffffffff8));
      *(long *)(this + 0x68) = lVar5 + 1;
      *(void **)(lVar7 + (uVar8 & 0x1ff) * 8) = pvVar2;
    } while (uVar3 * 8 - lVar4 != 0);
    uVar8 = (ulong)*(uint *)(this + 0x70);
  }
                    /* try { // try from 00b114cc to 00b1150b has its CatchHandler @ 00b1152c */
  pvVar2 = operator_new__(uVar8);
  *(void **)(this + 0x20) = pvVar2;
  uVar1 = *(int *)(this + 0x74) + (int)uVar8;
  *(uint *)(this + 0x74) = uVar1;
  SoftAudioBuffer::notifyBufferAllocated(*(SoftAudioBuffer **)(this + 8),uVar1);
  *(uint *)(this + 0x78) = param_3;
  *(uint *)(this + 0x7c) = param_4;
  *(undefined4 *)(this + 0x80) = 0xffffffff;
  this[0x84] = (SoftAudioStreamedReader)0x0;
  (**(code **)(**(long **)(this + 0x10) + 0x18))();
  return;
}


