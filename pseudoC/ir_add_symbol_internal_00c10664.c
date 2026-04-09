// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ir_add_symbol_internal
// Entry Point: 00c10664
// Size: 144 bytes
// Signature: undefined __thiscall ir_add_symbol_internal(GISLParserUtil * this, int param_1, SHC_String * param_2, SHC_String * param_3, SHC_Type * param_4, GsTSourceLoc param_5, GISLParserContext * param_6)


/* GISLParserUtil::ir_add_symbol_internal(int, SHC_String const*, SHC_String const*, SHC_Type
   const&, GsTSourceLoc, GISLParserContext&) */

void __thiscall
GISLParserUtil::ir_add_symbol_internal
          (GISLParserUtil *this,int param_1,SHC_String *param_2,SHC_String *param_3,
          SHC_Type *param_4,GsTSourceLoc param_5,GISLParserContext *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)SHC_PoolAllocator::allocate(*(SHC_PoolAllocator **)(param_6 + 0x58),0x60);
  *puVar1 = &PTR___cxa_pure_virtual_00fed450;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar5 = *(undefined8 *)(param_3 + 8);
  uVar4 = *(undefined8 *)param_3;
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  *(int *)(puVar1 + 9) = (int)this;
  puVar1[10] = (ulong)(uint)param_1;
  puVar1[0xb] = param_2;
  *puVar1 = &PTR_traverse_00fed5f8;
  puVar1[1] = param_4;
  puVar1[2] = (ulong)param_5;
  puVar1[8] = uVar7;
  puVar1[7] = uVar6;
  puVar1[4] = uVar5;
  puVar1[3] = uVar4;
  puVar1[6] = uVar3;
  puVar1[5] = uVar2;
  return;
}


