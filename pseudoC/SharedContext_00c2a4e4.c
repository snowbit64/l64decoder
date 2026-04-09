// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SharedContext
// Entry Point: 00c2a4e4
// Size: 60 bytes
// Signature: undefined __thiscall SharedContext(SharedContext * this, ShaderLanguage param_1, vector * param_2, IR_TypeSet * param_3)


/* IR_HllConvertUtil::SharedContext::SharedContext(ShaderLanguage,
   std::__ndk1::vector<ShaderStructLayout, std::__ndk1::allocator<ShaderStructLayout> >&,
   IR_TypeSet*) */

void __thiscall
IR_HllConvertUtil::SharedContext::SharedContext
          (SharedContext *this,ShaderLanguage param_1,vector *param_2,IR_TypeSet *param_3)

{
  *(undefined4 *)this = 0;
  *(vector **)(this + 8) = param_2;
  IR_TypeSet::IR_TypeSet((IR_TypeSet *)(this + 0x10),param_3);
  *(ShaderLanguage *)this = param_1;
  this[0xde0] = (SharedContext)0x0;
  return;
}


