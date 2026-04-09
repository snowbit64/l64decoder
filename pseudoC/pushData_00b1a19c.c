// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushData
// Entry Point: 00b1a19c
// Size: 576 bytes
// Signature: undefined __thiscall pushData(VoiceChatStreamedAudioData * this, uchar * param_1, uint param_2, ushort param_3)


/* VoiceChatStreamedAudioData::pushData(unsigned char const*, unsigned int, unsigned short) */

void __thiscall
VoiceChatStreamedAudioData::pushData
          (VoiceChatStreamedAudioData *this,uchar *param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  void *__dest;
  
  if (this[0x507] == (VoiceChatStreamedAudioData)0x0) {
    uVar2 = *(ushort *)(this + 0x504);
  }
  else {
    uVar2 = *(ushort *)(this + 0x504);
    this[0x507] = (VoiceChatStreamedAudioData)0x0;
    param_3 = uVar2 + 1;
  }
  iVar9 = (uint)param_3 - (uint)uVar2;
  if (iVar9 < -0xfc17) {
    iVar7 = 0xffff;
  }
  else {
    if (iVar9 < 0xfc18) goto LAB_00b1a218;
    iVar7 = -0xffff;
  }
  iVar9 = iVar9 + iVar7;
LAB_00b1a218:
  *(ushort *)(this + 0x504) = param_3;
  uVar3 = (uint)(*(int *)(this + 0x4c4) + iVar9) % 0x32;
  *(uint *)(this + 0x4c4) = uVar3;
  if ((*(uint *)(this + (ulong)uVar3 * 0x18 + 0x1c) < param_2) ||
     (*(long *)(this + (ulong)uVar3 * 0x18 + 0x10) == 0)) {
    *(uint *)(this + (ulong)uVar3 * 0x18 + 0x1c) = param_2;
    __dest = operator_new__((ulong)param_2);
    Mutex::enterCriticalSection();
    uVar6 = (ulong)*(uint *)(this + 0x4c4);
    pvVar10 = *(void **)(this + uVar6 * 0x18 + 0x10);
    *(void **)(this + uVar6 * 0x18 + 0x10) = __dest;
  }
  else {
    Mutex::enterCriticalSection();
    uVar6 = (ulong)*(uint *)(this + 0x4c4);
    pvVar10 = (void *)0x0;
    __dest = *(void **)(this + uVar6 * 0x18 + 0x10);
  }
  *(uint *)(this + uVar6 * 0x18 + 0x18) = param_2;
  memcpy(__dest,param_1,(ulong)param_2);
  uVar3 = *(uint *)(this + 0x4c4);
  uVar1 = *(uint *)(this + 0x4c0);
  *(ushort *)(this + (ulong)uVar3 * 0x18 + 0x20) = param_3;
  uVar2 = *(ushort *)(this + (ulong)uVar1 * 0x18 + 0x20);
  iVar9 = 0x32;
  if (uVar1 <= uVar3) {
    iVar9 = 0;
  }
  this[(ulong)uVar3 * 0x18 + 0x22] = (VoiceChatStreamedAudioData)0x1;
  if ((param_3 < uVar2) && ((int)((uint)param_3 - (uint)uVar2) < 0xf)) {
    uVar8 = (uVar1 - 0x19) % 0x32;
    iVar7 = 0x19;
    *(uint *)(this + 0x4c0) = uVar8;
    do {
      iVar7 = iVar7 + -1;
      uVar4 = uVar8 % 0x32;
      uVar8 = uVar8 + 1;
      this[(ulong)uVar4 * 0x18 + 0x22] = (VoiceChatStreamedAudioData)0x1;
    } while (iVar7 != 0);
  }
  uVar3 = (iVar9 - uVar1) + uVar3;
  Mutex::leaveCriticalSection();
  if (pvVar10 != (void *)0x0) {
    operator_delete__(pvVar10);
  }
  if (uVar3 < 0x10) {
    if (uVar3 < 10) {
      uVar5 = 0x3f666666;
    }
    else {
      uVar5 = 0x3f800000;
    }
  }
  else {
    uVar5 = 0x3f8ccccd;
  }
  *(undefined4 *)(this + 0x500) = uVar5;
  return;
}


