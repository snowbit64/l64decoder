// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00d201ec
// Size: 156 bytes
// Signature: undefined __thiscall GenerateBlock(OldRandomPool * this, uchar * param_1, ulong param_2)


/* CryptoPP::OldRandomPool::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::OldRandomPool::GenerateBlock(OldRandomPool *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  undefined **local_68;
  undefined **ppuStack_60;
  uchar *local_50;
  ulong uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Algorithm::Algorithm((Algorithm *)&local_68,false);
  local_40 = 0;
  local_68 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_60 = &PTR__ArraySink_01008070;
  local_50 = param_1;
  uStack_48 = param_2;
  (**(code **)(*(long *)this + 0x58))(this,&local_68,&DEFAULT_CHANNEL,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


