// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b24244
// Size: 16 bytes
// Signature: undefined __thiscall init(USBPacketBuffer * this, uchar * param_1, uchar * param_2, bool param_3)


/* USBPacketBuffer::init(unsigned char const*, unsigned char const*, bool) */

void __thiscall
USBPacketBuffer::init(USBPacketBuffer *this,uchar *param_1,uchar *param_2,bool param_3)

{
  *(uchar **)(this + 8) = param_1;
  *(uchar **)(this + 0x10) = param_2;
  *(uchar **)(this + 0x18) = param_1;
  *this = (USBPacketBuffer)param_3;
  return;
}


