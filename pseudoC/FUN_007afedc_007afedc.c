// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afedc
// Entry Point: 007afedc
// Size: 60 bytes
// Signature: undefined FUN_007afedc(void)


void FUN_007afedc(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLayer(param_1,*param_2,param_2[4],true);
  if (lVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + 0x30));
  }
  return;
}


