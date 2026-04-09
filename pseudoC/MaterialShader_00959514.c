// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MaterialShader
// Entry Point: 00959514
// Size: 196 bytes
// Signature: undefined __thiscall MaterialShader(MaterialShader * this, IProgramObject * param_1, MaterialShaderHash * param_2, map * param_3, map * param_4, uint param_5, ShaderStructLayout * param_6)


/* MaterialShader::MaterialShader(IProgramObject*, MaterialShaderHash const&,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, unsigned int, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, unsigned int> > > const*,
   unsigned int, ShaderStructLayout const*) */

void __thiscall
MaterialShader::MaterialShader
          (MaterialShader *this,IProgramObject *param_1,MaterialShaderHash *param_2,map *param_3,
          map *param_4,uint param_5,ShaderStructLayout *param_6)

{
  map *pmVar1;
  map *pmVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(IProgramObject **)(this + 0x88) = param_1;
  *(undefined ***)this = &PTR__MaterialShader_00fe0470;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x26) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x1e) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x16) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0xe) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x3c) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x36) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x2e) = 0xffffffffffffffff;
  *(undefined2 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x98) = uVar4;
  *(undefined8 *)(this + 0x90) = uVar3;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x5a) = 0xffff000000000000;
  *(undefined8 *)(this + 0x62) = 0xffffffff;
  *(undefined2 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  if (param_3 == (map *)0x0) {
    pmVar1 = (map *)0x0;
  }
  else {
    pmVar1 = (map *)0x0;
    if (*(long *)(param_3 + 0x10) != 0) {
      pmVar1 = param_3;
    }
  }
  if (param_4 == (map *)0x0) {
    pmVar2 = (map *)0x0;
  }
  else {
    pmVar2 = (map *)0x0;
    if (*(long *)(param_4 + 0x10) != 0) {
      pmVar2 = param_4;
    }
  }
                    /* try { // try from 009595b8 to 009595c7 has its CatchHandler @ 009595d8 */
  fillAutoConstantList(this,pmVar1,pmVar2,param_5,param_6);
  *(undefined8 *)(this + 0xa0) = 0;
  return;
}


