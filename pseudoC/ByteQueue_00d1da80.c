// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ByteQueue
// Entry Point: 00d1da80
// Size: 156 bytes
// Signature: undefined __thiscall ByteQueue(ByteQueue * this, ulong param_1)


/* CryptoPP::ByteQueue::ByteQueue(unsigned long) */

void __thiscall CryptoPP::ByteQueue::ByteQueue(ByteQueue *this,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Algorithm::Algorithm((Algorithm *)this,false);
  uVar1 = 0x100;
  if (param_1 != 0) {
    uVar1 = param_1;
  }
  this[0x40] = (ByteQueue)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x14] = (ByteQueue)(param_1 == 0);
  *(ulong *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR__ByteQueue_0100f308;
  *(undefined ***)(this + 8) = &PTR__ByteQueue_0100f498;
  puVar2 = (undefined8 *)operator_new(0x38);
  puVar2[2] = 0xffffffffffffffff;
  puVar2[3] = uVar1;
                    /* try { // try from 00d1daf4 to 00d1dafb has its CatchHandler @ 00d1db1c */
  uVar3 = UnalignedAllocate(uVar1);
  *puVar2 = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[4] = uVar3;
  *(undefined8 **)(this + 0x20) = puVar2;
  *(undefined8 **)(this + 0x28) = puVar2;
  return;
}


