// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CodeTraverser
// Entry Point: 00c0fc08
// Size: 128 bytes
// Signature: undefined __thiscall CodeTraverser(CodeTraverser * this)


/* CodeTraverser::CodeTraverser() */

void __thiscall CodeTraverser::CodeTraverser(CodeTraverser *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00fed398;
  *(code **)(this + 8) = traverseDeclaration;
  *(code **)(this + 0x10) = traverseSymbol;
  *(code **)(this + 0x18) = traverseConstant;
  *(code **)(this + 0x20) = traverseBinary;
  *(code **)(this + 0x28) = traverseUnary;
  *(undefined4 *)(this + 0x50) = 0;
  *(code **)(this + 0x30) = traverseSelection;
  *(code **)(this + 0x38) = traverseAggregate;
  *(undefined2 *)(this + 0x54) = 1;
  *(code **)(this + 0x40) = traverseLoop;
  *(code **)(this + 0x48) = traverseBranch;
  this[0x56] = (CodeTraverser)0x1;
  *(undefined8 *)(this + 0x58) = 0;
  return;
}


