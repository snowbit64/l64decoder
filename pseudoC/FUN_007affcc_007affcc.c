// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007affcc
// Entry Point: 007affcc
// Size: 60 bytes
// Signature: undefined FUN_007affcc(void)


void FUN_007affcc(FoliageSystemDesc *param_1,uint *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FoliageSystemDesc::getState(param_1,*param_2,param_2[4],param_2[8],true);
  if (pcVar1 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(pcVar1);
  }
  return;
}


