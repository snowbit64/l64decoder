// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: acquireData
// Entry Point: 00b11284
// Size: 212 bytes
// Signature: undefined __thiscall acquireData(SoftAudioStaticReader * this, AudioBlock * param_1, uint * param_2, uint param_3)


/* SoftAudioStaticReader::acquireData(ISoftAudioReader::AudioBlock&, unsigned int&, unsigned int) */

undefined8 __thiscall
SoftAudioStaticReader::acquireData
          (SoftAudioStaticReader *this,AudioBlock *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_00f276a0(0xffffffff,this + 0x20);
  if (iVar1 == -1) {
    if (this[0x18] != (SoftAudioStaticReader)0x0) {
      return 0;
    }
  }
  else {
    *(int *)(this + 0x1c) = iVar1;
    this[0x18] = (SoftAudioStaticReader)0x0;
  }
  lVar3 = *(long *)(this + 8);
  uVar5 = *(uint *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x10);
  *(uint *)(param_1 + 0x10) = uVar5;
  iVar4 = iVar1 - uVar5;
  *(ulong *)param_1 = lVar3 + (ulong)uVar5 * 4;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 == 0) {
    uVar5 = *param_2;
    *param_2 = uVar5 + 1;
    if ((param_3 == 0) || (uVar5 + 1 != param_3)) {
      iVar4 = *(int *)(this + 0x10);
      *(undefined4 *)(this + 0x1c) = 0;
      *(long *)param_1 = lVar3;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 8) = iVar4;
      *(int *)(param_1 + 0xc) = iVar4;
      if (iVar4 != 0) {
        uVar5 = 0;
        goto LAB_00b112e4;
      }
    }
    uVar2 = 0;
    this[0x18] = (SoftAudioStaticReader)0x1;
  }
  else {
LAB_00b112e4:
    uVar2 = 1;
    *(uint *)(this + 0x1c) = uVar5 + iVar4;
  }
  return uVar2;
}


