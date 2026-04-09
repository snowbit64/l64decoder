// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: arraySizeErrorCheck
// Entry Point: 00c1b430
// Size: 140 bytes
// Signature: undefined __thiscall arraySizeErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, AST_TypedNode * param_2, uint * param_3)


/* GISLParserContext::arraySizeErrorCheck(GsTSourceLoc const&, AST_TypedNode*, unsigned int&) */

undefined8 __thiscall
GISLParserContext::arraySizeErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,AST_TypedNode *param_2,uint *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
  if ((lVar1 == 0) || (1 < *(int *)(*(long *)(lVar1 + 0x20) + 8) - 5U)) {
    error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),
          "array size must be a constant int/uint expression",&DAT_0050a39f,&DAT_0050a39f);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    *param_3 = *(uint *)(*(long *)(lVar1 + 0x48) + 4);
  }
  return uVar2;
}


