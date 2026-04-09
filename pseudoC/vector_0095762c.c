// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 0095762c
// Size: 208 bytes
// Signature: undefined __thiscall vector(vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>> * this, vector * param_1)


/* std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection>
   >::vector(std::__ndk1::vector<MaterialShaderManager::CodeInjection,
   std::__ndk1::allocator<MaterialShaderManager::CodeInjection> > const&) */

void __thiscall
std::__ndk1::
vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
::vector(vector<MaterialShaderManager::CodeInjection,std::__ndk1::allocator<MaterialShaderManager::CodeInjection>>
         *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  long lVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar2 >> 4) * -0x5555555555555555)) {
                    /* try { // try from 009576f4 to 009576fb has its CatchHandler @ 009576fc */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00957680 to 00957683 has its CatchHandler @ 009576fc */
    pbVar3 = (basic_string *)operator_new(uVar2);
    *(basic_string **)this = pbVar3;
    *(basic_string **)(this + 8) = pbVar3;
    *(basic_string **)(this + 0x10) = pbVar3 + ((long)uVar2 >> 4) * 4;
    lVar5 = *(long *)param_1;
    lVar1 = *(long *)(param_1 + 8);
    if (lVar5 != lVar1) {
      do {
        pbVar4 = pbVar3;
                    /* try { // try from 009576a8 to 009576b3 has its CatchHandler @ 00957704 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar4);
                    /* try { // try from 009576bc to 009576c7 has its CatchHandler @ 0095770c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar4 + 6);
        lVar5 = lVar5 + 0x30;
        pbVar3 = pbVar4 + 0xc;
      } while (lVar5 != lVar1);
      pbVar3 = pbVar4 + 0xc;
    }
    *(basic_string **)(this + 8) = pbVar3;
  }
  return;
}


