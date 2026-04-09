// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateBlock
// Entry Point: 00c79368
// Size: 120 bytes
// Signature: undefined __thiscall GenerateBlock(RandomNumberGenerator * this, uchar * param_1, ulong param_2)


/* CryptoPP::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned long) */

void __thiscall
CryptoPP::RandomNumberGenerator::GenerateBlock
          (RandomNumberGenerator *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  undefined **local_58;
  undefined **ppuStack_50;
  uchar *local_40;
  ulong uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = &PTR__BufferedTransformation_01007ee0;
  ppuStack_50 = &PTR__ArraySink_01008070;
  local_30 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  (**(code **)(*(long *)this + 0x58))(this,&local_58,&DEFAULT_CHANNEL,param_2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


