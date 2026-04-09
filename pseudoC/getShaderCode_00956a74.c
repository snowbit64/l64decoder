// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderCode
// Entry Point: 00956a74
// Size: 148 bytes
// Signature: undefined __thiscall getShaderCode(MaterialShaderManager * this, MaterialShaderHash * param_1, basic_string param_2)


/* MaterialShaderManager::getShaderCode(MaterialShaderHash const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
MaterialShaderManager::getShaderCode
          (MaterialShaderManager *this,MaterialShaderHash *param_1,basic_string param_2)

{
  long lVar1;
  undefined8 *in_x8;
  basic_string local_60 [4];
  void *local_50;
  map *pmStack_48;
  map *pmStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00956aa8 to 00956ab3 has its CatchHandler @ 00956b38 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_60);
                    /* try { // try from 00956ab4 to 00956acf has its CatchHandler @ 00956b08 */
  generateCodeForShaderHash
            (this,param_1,(basic_string)local_60,(basic_string *)in_x8,&pmStack_40,&pmStack_48);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


