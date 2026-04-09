// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteDescriptorBindingTypes
// Entry Point: 00aed198
// Size: 176 bytes
// Signature: undefined __thiscall WriteDescriptorBindingTypes(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectDescriptorBinding * param_2, uint param_3)


/* SpvReflectToYaml::WriteDescriptorBindingTypes(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectDescriptorBinding const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteDescriptorBindingTypes
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectDescriptorBinding *param_2,
          uint param_3)

{
  SpvReflectTypeDescription *pSVar1;
  SpvReflectToYaml **ppSVar2;
  SpvReflectToYaml **ppSVar3;
  SpvReflectToYaml **ppSVar4;
  
  WriteBlockVariableTypes(this,param_1,(SpvReflectBlockVariable *)(param_2 + 0x40),param_3);
  if (*(SpvReflectDescriptorBinding **)(param_2 + 0x230) != (SpvReflectDescriptorBinding *)0x0) {
    WriteDescriptorBindingTypes
              (this,param_1,*(SpvReflectDescriptorBinding **)(param_2 + 0x230),param_3);
  }
  pSVar1 = *(SpvReflectTypeDescription **)(param_2 + 0x238);
  if (pSVar1 == (SpvReflectTypeDescription *)0x0) {
    return;
  }
  ppSVar2 = (SpvReflectToYaml **)(this + 0x18);
  ppSVar3 = (SpvReflectToYaml **)*ppSVar2;
  ppSVar4 = ppSVar2;
  if (ppSVar3 != (SpvReflectToYaml **)0x0) {
    do {
      if (ppSVar3[4] >= pSVar1) {
        ppSVar4 = ppSVar3;
      }
      ppSVar3 = (SpvReflectToYaml **)ppSVar3[ppSVar3[4] < pSVar1];
    } while (ppSVar3 != (SpvReflectToYaml **)0x0);
    if ((ppSVar4 != ppSVar2) && (ppSVar4[4] <= pSVar1)) {
      return;
    }
  }
  WriteTypeDescription(this,param_1,pSVar1,param_3);
  return;
}


