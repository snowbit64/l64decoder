// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Spy
// Entry Point: 00d0ca94
// Size: 88 bytes
// Signature: undefined __thiscall Spy(MessageQueue * this, ulong * param_1)


/* CryptoPP::MessageQueue::Spy(unsigned long&) const */

undefined8 __thiscall CryptoPP::MessageQueue::Spy(MessageQueue *this,ulong *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = ByteQueue::Spy((ByteQueue *)(this + 0x18),param_1);
  uVar2 = (**(code **)(*(long *)this + 0x98))(this);
  if (*param_1 <= uVar2) {
    uVar2 = *param_1;
  }
  *param_1 = uVar2;
  return uVar1;
}


