// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetNodeSize
// Entry Point: 00d1db30
// Size: 28 bytes
// Signature: undefined __thiscall SetNodeSize(ByteQueue * this, ulong param_1)


/* CryptoPP::ByteQueue::SetNodeSize(unsigned long) */

void __thiscall CryptoPP::ByteQueue::SetNodeSize(ByteQueue *this,ulong param_1)

{
  ulong uVar1;
  
  uVar1 = 0x100;
  if (param_1 != 0) {
    uVar1 = param_1;
  }
  this[0x14] = (ByteQueue)(param_1 == 0);
  *(ulong *)(this + 0x18) = uVar1;
  return;
}


