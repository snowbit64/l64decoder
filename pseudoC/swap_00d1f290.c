// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: swap
// Entry Point: 00d1f290
// Size: 96 bytes
// Signature: undefined __thiscall swap(ByteQueue * this, ByteQueue * param_1)


/* CryptoPP::ByteQueue::swap(CryptoPP::ByteQueue&) */

void __thiscall CryptoPP::ByteQueue::swap(ByteQueue *this,ByteQueue *param_1)

{
  undefined8 uVar1;
  ByteQueue BVar2;
  ByteQueue BVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(this + 0x18);
  uVar4 = *(undefined8 *)(this + 0x20);
  BVar2 = param_1[0x14];
  BVar3 = this[0x14];
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  this[0x14] = BVar2;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(this + 0x28);
  param_1[0x14] = BVar3;
  BVar2 = param_1[0x40];
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar4;
  BVar3 = this[0x40];
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  this[0x40] = BVar2;
  uVar4 = *(undefined8 *)(this + 0x30);
  uVar6 = *(undefined8 *)(this + 0x38);
  param_1[0x40] = BVar3;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  return;
}


