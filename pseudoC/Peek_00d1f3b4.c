// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Peek
// Entry Point: 00d1f3b4
// Size: 176 bytes
// Signature: undefined __thiscall Peek(Walker * this, uchar * param_1)


/* CryptoPP::ByteQueue::Walker::Peek(unsigned char&) const */

void __thiscall CryptoPP::ByteQueue::Walker::Peek(Walker *this,uchar *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_68,false);
  local_70 = 0;
  local_68 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_60 = &PTR__ArraySink_01008070;
  uStack_40 = 0;
  local_48 = 1;
  local_50 = param_1;
  (**(code **)(*(long *)this + 0x120))(this,&local_68,&local_70,1,&DEFAULT_CHANNEL,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_70);
}


