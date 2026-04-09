// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MessageQueue
// Entry Point: 00d0c414
// Size: 200 bytes
// Signature: undefined __thiscall MessageQueue(MessageQueue * this, uint param_1)


/* CryptoPP::MessageQueue::MessageQueue(unsigned int) */

void __thiscall CryptoPP::MessageQueue::MessageQueue(MessageQueue *this,uint param_1)

{
  long lVar1;
  ulong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)this,false);
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined ***)this = &PTR__MessageQueue_0100e538;
  *(undefined ***)(this + 8) = &PTR__MessageQueue_0100e6c8;
  ByteQueue::ByteQueue((ByteQueue *)(this + 0x18),(ulong)param_1);
  local_40 = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
                    /* try { // try from 00d0c484 to 00d0c493 has its CatchHandler @ 00d0c4ec */
  std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::__append
            ((deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x60),1,&local_40
            );
  local_40 = local_40 & 0xffffffff00000000;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
                    /* try { // try from 00d0c4a4 to 00d0c4b3 has its CatchHandler @ 00d0c4dc */
  std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
            ((deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x90),1,
             (uint *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


