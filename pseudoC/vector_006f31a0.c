// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 006f31a0
// Size: 152 bytes
// Signature: undefined __thiscall vector(vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> * this, vector * param_1)


/* std::__ndk1::vector<ShaderStructLayout::Field, std::__ndk1::allocator<ShaderStructLayout::Field>
   >::vector(std::__ndk1::vector<ShaderStructLayout::Field,
   std::__ndk1::allocator<ShaderStructLayout::Field> > const&) */

void __thiscall
std::__ndk1::vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::
vector(vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>> *this,
      vector *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  basic_string *pbVar4;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* try { // try from 006f3230 to 006f3237 has its CatchHandler @ 006f3238 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 006f31d0 to 006f31d7 has its CatchHandler @ 006f3238 */
    pbVar4 = (basic_string *)operator_new(uVar3);
    *(basic_string **)this = pbVar4;
    *(basic_string **)(this + 8) = pbVar4;
    *(basic_string **)(this + 0x10) = pbVar4 + ((long)uVar3 >> 5) * 8;
    lVar2 = *(long *)(param_1 + 8);
    for (lVar1 = *(long *)param_1; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
                    /* try { // try from 006f31f8 to 006f3203 has its CatchHandler @ 006f3240 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(pbVar4);
      *(undefined8 *)(pbVar4 + 6) = *(undefined8 *)(lVar1 + 0x18);
      pbVar4 = pbVar4 + 8;
    }
    *(basic_string **)(this + 8) = pbVar4;
  }
  return;
}


