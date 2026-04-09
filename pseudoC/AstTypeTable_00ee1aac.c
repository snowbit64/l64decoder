// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstTypeTable
// Entry Point: 00ee1aac
// Size: 72 bytes
// Signature: undefined __thiscall AstTypeTable(AstTypeTable * this, Location * param_1, AstArray * param_2, AstTableIndexer * param_3)


/* Luau::AstTypeTable::AstTypeTable(Luau::Location const&, Luau::AstArray<Luau::AstTableProp>
   const&, Luau::AstTableIndexer*) */

void __thiscall
Luau::AstTypeTable::AstTypeTable
          (AstTypeTable *this,Location *param_1,AstArray *param_2,AstTableIndexer *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(this + 8) = AstRtti<Luau::AstTypeTable>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  *(undefined ***)this = &PTR_visit_01015ce8;
  *(undefined8 *)(this + 0x14) = uVar2;
  *(undefined8 *)(this + 0xc) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(AstTableIndexer **)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


