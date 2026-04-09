// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap
// Entry Point: 00d0ca08
// Size: 140 bytes
// Signature: undefined __thiscall swap(MessageQueue * this, MessageQueue * param_1)


/* CryptoPP::MessageQueue::swap(CryptoPP::MessageQueue&) */

void __thiscall CryptoPP::MessageQueue::swap(MessageQueue *this,MessageQueue *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  ByteQueue::swap((ByteQueue *)(this + 0x18),(ByteQueue *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(this + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x68);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar2 = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(this + 0x80);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(this + 0x80) = uVar3;
  uVar2 = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(this + 0x88);
  *(undefined8 *)(this + 0x78) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(this + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  return;
}


