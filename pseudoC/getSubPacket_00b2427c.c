// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSubPacket
// Entry Point: 00b2427c
// Size: 88 bytes
// Signature: undefined __thiscall getSubPacket(USBPacketBuffer * this, uint param_1, uint param_2, USBPacketBuffer * param_3)


/* USBPacketBuffer::getSubPacket(unsigned int, unsigned int, USBPacketBuffer&) */

undefined4 __thiscall
USBPacketBuffer::getSubPacket
          (USBPacketBuffer *this,uint param_1,uint param_2,USBPacketBuffer *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  USBPacketBuffer UVar6;
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar5 = *(long *)(this + 8) + (ulong)param_1;
  uVar2 = uVar1;
  if ((uVar1 < uVar5) || (uVar4 = uVar5 + param_2, uVar2 = uVar5, uVar1 < uVar4)) {
    uVar3 = 0;
    UVar6 = (USBPacketBuffer)0x1;
    *this = (USBPacketBuffer)0x1;
    uVar4 = uVar1;
    uVar5 = uVar2;
  }
  else {
    UVar6 = (USBPacketBuffer)0x0;
    uVar3 = 1;
  }
  *(ulong *)(param_3 + 8) = uVar5;
  *(ulong *)(param_3 + 0x10) = uVar4;
  *(ulong *)(param_3 + 0x18) = uVar5;
  *param_3 = UVar6;
  return uVar3;
}


