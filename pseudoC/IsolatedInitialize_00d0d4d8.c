// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00d0d4d8
// Size: 116 bytes
// Signature: undefined __thiscall IsolatedInitialize(MessageQueue * this, NameValuePairs * param_1)


/* CryptoPP::MessageQueue::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::MessageQueue::IsolatedInitialize(MessageQueue *this,NameValuePairs *param_1)

{
  long lVar1;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ByteQueue::IsolatedInitialize((ByteQueue *)(this + 0x18),param_1);
  local_30 = 0;
  std::__ndk1::deque<unsigned_long,std::__ndk1::allocator<unsigned_long>>::assign
            ((deque<unsigned_long,std::__ndk1::allocator<unsigned_long>> *)(this + 0x60),1,&local_30
            );
  local_30 = local_30 & 0xffffffff00000000;
  std::__ndk1::deque<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign
            ((deque<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x90),1,
             (uint *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


