// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ByteQueue
// Entry Point: 00d1db4c
// Size: 36 bytes
// Signature: undefined __thiscall ByteQueue(ByteQueue * this, ByteQueue * param_1)


/* CryptoPP::ByteQueue::ByteQueue(CryptoPP::ByteQueue const&) */

void __thiscall CryptoPP::ByteQueue::ByteQueue(ByteQueue *this,ByteQueue *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined ***)this = &PTR__ByteQueue_0100f308;
  *(undefined ***)(this + 8) = &PTR__ByteQueue_0100f498;
  CopyFrom(this,param_1);
  return;
}


