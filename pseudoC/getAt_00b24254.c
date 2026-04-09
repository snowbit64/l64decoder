// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAt
// Entry Point: 00b24254
// Size: 40 bytes
// Signature: undefined __thiscall getAt(USBPacketBuffer * this, uint param_1)


/* USBPacketBuffer::getAt(unsigned int) const */

undefined __thiscall USBPacketBuffer::getAt(USBPacketBuffer *this,uint param_1)

{
  if ((undefined *)(*(long *)(this + 0x18) + (ulong)param_1) < *(undefined **)(this + 0x10)) {
    return *(undefined *)(*(long *)(this + 0x18) + (ulong)param_1);
  }
  *this = (USBPacketBuffer)0x1;
  return 0;
}


