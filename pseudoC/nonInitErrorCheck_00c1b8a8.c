// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: nonInitErrorCheck
// Entry Point: 00c1b8a8
// Size: 288 bytes
// Signature: undefined __thiscall nonInitErrorCheck(GISLParserContext * this, GsTSourceLoc * param_1, SHC_String * param_2, SHC_String * param_3, SHC_Type * param_4)


/* GISLParserContext::nonInitErrorCheck(GsTSourceLoc const&, SHC_String const*, SHC_String const*,
   SHC_Type&) */

undefined8 __thiscall
GISLParserContext::nonInitErrorCheck
          (GISLParserContext *this,GsTSourceLoc *param_1,SHC_String *param_2,SHC_String *param_3,
          SHC_Type *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  GsTSymbolTableLevel *this_00;
  char *pcVar4;
  long *plVar5;
  SHC_String *pSVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar2 = reservedErrorCheck(this,param_1,param_2);
  if ((uVar2 & 1) != 0) {
    this[0x18] = (GISLParserContext)0x1;
  }
  puVar3 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(this + 0x58),0x98);
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  puVar3[4] = 0;
  *puVar3 = &PTR__GsTSymbol_00fee830;
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  uVar8 = *(undefined8 *)(param_4 + 0x28);
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  uVar12 = *(undefined8 *)(param_4 + 8);
  uVar11 = *(undefined8 *)param_4;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[10] = uVar8;
  puVar3[9] = uVar7;
  puVar3[8] = uVar10;
  puVar3[7] = uVar9;
  puVar3[6] = uVar12;
  puVar3[5] = uVar11;
  plVar5 = *(long **)this;
  iVar1 = *(int *)(plVar5 + 3);
  this_00 = *(GsTSymbolTableLevel **)
             (*plVar5 + ((plVar5[1] - *plVar5) * 0x20000000 + -0x100000000 >> 0x20) * 8);
  *(int *)(plVar5 + 3) = iVar1 + 1;
  *(int *)(puVar3 + 3) = iVar1 + 1;
  uVar2 = GsTSymbolTableLevel::insert(this_00,(GsTSymbol *)puVar3);
  if ((uVar2 & 1) == 0) {
    param_2 = (SHC_String *)puVar3[1];
    pcVar4 = "redefinition";
  }
  else {
    if ((**(uint **)(param_4 + 8) | (*(uint **)(param_4 + 8))[2]) != 0) {
      return 0;
    }
    pcVar4 = "illegal use of type \'void\'";
  }
  pSVar6 = *(SHC_String **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pSVar6 = param_2 + 1;
  }
  error((GsTSourceLoc)this,*(char **)param_1,*(char **)(param_1 + 2),pcVar4,pSVar6,&DAT_0050a39f);
  return 1;
}


