// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LastBlockSize
// Entry Point: 00cd9124
// Size: 156 bytes
// Signature: undefined __cdecl LastBlockSize(StreamTransformation * param_1, BlockPaddingScheme param_2)


/* CryptoPP::StreamTransformationFilter::LastBlockSize(CryptoPP::StreamTransformation&,
   CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme) */

undefined4
CryptoPP::StreamTransformationFilter::LastBlockSize
          (StreamTransformation *param_1,BlockPaddingScheme param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  code **ppcVar5;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x58))();
  if (iVar1 == 0) {
    uVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1);
    if (uVar3 < 2) {
      return 0;
    }
    uVar4 = (**(code **)(*(long *)param_1 + 0x80))(param_1);
    if (param_2 < 2) {
      return 0;
    }
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    ppcVar5 = (code **)(*(long *)param_1 + 0x28);
  }
  else {
    ppcVar5 = (code **)(*(long *)param_1 + 0x58);
  }
  uVar2 = (**ppcVar5)(param_1);
  return uVar2;
}


