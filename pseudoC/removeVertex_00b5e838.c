// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeVertex
// Entry Point: 00b5e838
// Size: 120 bytes
// Signature: undefined __thiscall removeVertex(SimplexSolver * this, int param_1)


/* SimplexSolver::removeVertex(int) */

void __thiscall SimplexSolver::removeVertex(SimplexSolver *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)this;
  *(uint *)this = iVar1 - 1U;
  uVar4 = *(undefined8 *)(this + (ulong)(iVar1 - 1U) * 0xc + 4);
  *(undefined4 *)((long)(this + (long)param_1 * 0xc + 4) + 8) =
       *(undefined4 *)((long)(this + (ulong)(iVar1 - 1U) * 0xc + 4) + 8);
  uVar3 = *(uint *)this;
  *(undefined8 *)(this + (long)param_1 * 0xc + 4) = uVar4;
  uVar4 = *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x40);
  *(undefined4 *)((long)(this + (long)param_1 * 0xc + 0x40) + 8) =
       *(undefined4 *)((long)(this + (ulong)uVar3 * 0xc + 0x40) + 8);
  uVar3 = *(uint *)this;
  *(undefined8 *)(this + (long)param_1 * 0xc + 0x40) = uVar4;
  uVar2 = *(undefined4 *)((long)(this + (ulong)uVar3 * 0xc + 0x7c) + 8);
  *(undefined8 *)(this + (long)param_1 * 0xc + 0x7c) =
       *(undefined8 *)(this + (ulong)uVar3 * 0xc + 0x7c);
  *(undefined4 *)((long)(this + (long)param_1 * 0xc + 0x7c) + 8) = uVar2;
  return;
}


