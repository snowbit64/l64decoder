// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AstStatDeclareGlobal
// Entry Point: 00ee1634
// Size: 72 bytes
// Signature: undefined __thiscall AstStatDeclareGlobal(AstStatDeclareGlobal * this, Location * param_1, AstName * param_2, AstType * param_3)


/* Luau::AstStatDeclareGlobal::AstStatDeclareGlobal(Luau::Location const&, Luau::AstName const&,
   Luau::AstType*) */

void __thiscall
Luau::AstStatDeclareGlobal::AstStatDeclareGlobal
          (AstStatDeclareGlobal *this,Location *param_1,AstName *param_2,AstType *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = AstRtti<Luau::AstStatDeclareGlobal>::value;
  *(undefined ***)this = &PTR___cxa_pure_virtual_01016430;
  *(undefined4 *)(this + 8) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0x1c] = (AstStatDeclareGlobal)0x0;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0xc) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined ***)this = &PTR_visit_01015bf8;
  *(undefined8 *)(this + 0x20) = uVar2;
  *(AstType **)(this + 0x28) = param_3;
  return;
}


