// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unget
// Entry Point: 00d1eca0
// Size: 80 bytes
// Signature: undefined __thiscall Unget(ByteQueue * this, uchar param_1)


/* CryptoPP::ByteQueue::Unget(unsigned char) */

void __thiscall CryptoPP::ByteQueue::Unget(ByteQueue *this,uchar param_1)

{
  long lVar1;
  uchar local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c[0] = param_1;
  Unget(this,local_2c,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


