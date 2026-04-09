// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: constructArray
// Entry Point: 00c1db94
// Size: 184 bytes
// Signature: undefined __cdecl constructArray(AST_AggregateNode * param_1, SHC_Type * param_2, GsTOperator param_3, GsTSourceLoc param_4)


/* GISLParserContext::constructArray(AST_AggregateNode*, SHC_Type const*, GsTOperator, GsTSourceLoc)
    */

SHC_Type *
GISLParserContext::constructArray
          (AST_AggregateNode *param_1,SHC_Type *param_2,GsTOperator param_3,GsTSourceLoc param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  char *in_x4;
  char *in_x5;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined8 *)(ulong)param_3;
  uVar1 = *(uint *)(puVar2[1] + 0x10);
  uVar3 = (uint)((ulong)(*(long *)(param_2 + 0x58) - *(long *)(param_2 + 0x50)) >> 3);
  if (uVar3 <= uVar1 && uVar1 != uVar3) {
    pcVar4 = "too few arguments to array constructor, expected %u got %u";
  }
  else {
    if (uVar3 <= uVar1) {
      uVar7 = puVar2[3];
      uVar6 = puVar2[2];
      uVar5 = puVar2[4];
      uVar9 = puVar2[1];
      uVar8 = *puVar2;
      *(undefined8 *)(param_2 + 0x40) = puVar2[5];
      *(undefined8 *)(param_2 + 0x38) = uVar5;
      *(undefined8 *)(param_2 + 0x30) = uVar7;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x48) = 0x87;
      *(undefined8 *)(param_2 + 0x20) = uVar9;
      *(undefined8 *)(param_2 + 0x18) = uVar8;
      return param_2;
    }
    pcVar4 = "too many arguments to array constructor, expected %u got %u";
  }
  error((GsTSourceLoc)param_1,in_x4,in_x5,"","constructor",pcVar4);
  param_1[0x18] = (AST_AggregateNode)0x1;
  return (SHC_Type *)0x0;
}


