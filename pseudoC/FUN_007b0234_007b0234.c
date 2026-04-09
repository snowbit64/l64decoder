// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b0234
// Entry Point: 007b0234
// Size: 72 bytes
// Signature: undefined FUN_007b0234(void)


void FUN_007b0234(FoliageSystemDesc *param_1,uint *param_2)

{
  long lVar1;
  
  lVar1 = FoliageSystemDesc::getLod
                    (param_1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],true);
  if (lVar1 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(lVar1 + 8));
  }
  return;
}


