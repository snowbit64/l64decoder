// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteInterfaceVariableTypes
// Entry Point: 00aed248
// Size: 200 bytes
// Signature: undefined __thiscall WriteInterfaceVariableTypes(SpvReflectToYaml * this, basic_ostream * param_1, SpvReflectInterfaceVariable * param_2, uint param_3)


/* SpvReflectToYaml::WriteInterfaceVariableTypes(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, SpvReflectInterfaceVariable const&, unsigned int) */

void __thiscall
SpvReflectToYaml::WriteInterfaceVariableTypes
          (SpvReflectToYaml *this,basic_ostream *param_1,SpvReflectInterfaceVariable *param_2,
          uint param_3)

{
  SpvReflectTypeDescription *pSVar1;
  SpvReflectToYaml **ppSVar2;
  SpvReflectToYaml **ppSVar3;
  SpvReflectToYaml **ppSVar4;
  long lVar5;
  ulong uVar6;
  
  pSVar1 = *(SpvReflectTypeDescription **)(param_2 + 0x160);
  if (pSVar1 != (SpvReflectTypeDescription *)0x0) {
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
      if ((ppSVar4 != ppSVar2) && (ppSVar4[4] <= pSVar1)) goto LAB_00aed2c0;
    }
    WriteTypeDescription(this,param_1,pSVar1,param_3);
  }
LAB_00aed2c0:
  if (*(int *)(param_2 + 0x148) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      WriteInterfaceVariableTypes
                (this,param_1,(SpvReflectInterfaceVariable *)(*(long *)(param_2 + 0x150) + lVar5),
                 param_3);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x170;
    } while (uVar6 < *(uint *)(param_2 + 0x148));
  }
  return;
}


