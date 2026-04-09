// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: traverse
// Entry Point: 00c17d5c
// Size: 196 bytes
// Signature: undefined __thiscall traverse(AST_Loop * this, AST_Traverser * param_1)


/* AST_Loop::traverse(AST_Traverser*) */

void __thiscall AST_Loop::traverse(AST_Loop *this,AST_Traverser *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if (((param_1[0x4c] == (AST_Traverser)0x0) || (*(code **)(param_1 + 0x38) == (code *)0x0)) ||
     (uVar1 = (**(code **)(param_1 + 0x38))(1,this,param_1), (uVar1 & 1) != 0)) {
    puVar2 = *(undefined8 **)(this + 0x20);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    puVar2 = *(undefined8 **)(this + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    puVar2 = *(undefined8 **)(this + 0x28);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    if ((param_1[0x4d] != (AST_Traverser)0x0) && (*(code **)(param_1 + 0x38) != (code *)0x0)) {
      (**(code **)(param_1 + 0x38))(0,this,param_1);
    }
  }
  return;
}


