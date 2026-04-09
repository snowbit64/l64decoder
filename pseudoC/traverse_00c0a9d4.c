// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c0a9d4
// Size: 64 bytes
// Signature: undefined __thiscall traverse(CreateIR * this, AST_Node * param_1, bool param_2)


/* CreateIR::traverse(AST_Node*, bool) */

void __thiscall CreateIR::traverse(CreateIR *this,AST_Node *param_1,bool param_2)

{
  CreateIR CVar1;
  
  CVar1 = this[0xe0];
  this[0xe0] = (CreateIR)param_2;
  (***(code ***)param_1)(param_1,this + 8);
  this[0xe0] = CVar1;
  return;
}


