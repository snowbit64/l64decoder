// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b24234
// Size: 16 bytes
// Signature: undefined __thiscall init(USBPacketBuffer * this, bool param_1)


/* USBPacketBuffer::init(bool) */

void __thiscall USBPacketBuffer::init(USBPacketBuffer *this,bool param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *this = (USBPacketBuffer)param_1;
  return;
}


