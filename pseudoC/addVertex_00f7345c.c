// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addVertex
// Entry Point: 00f7345c
// Size: 84 bytes
// Signature: undefined __thiscall addVertex(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* btVoronoiSimplexSolver::addVertex(btVector3 const&, btVector3 const&, btVector3 const&) */

void __thiscall
btVoronoiSimplexSolver::addVertex
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)param_1;
  iVar1 = *(int *)this;
  *(undefined8 *)(this + 300) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x124) = uVar2;
  this[0x164] = (btVoronoiSimplexSolver)0x1;
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xc) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 4) = uVar2;
  iVar1 = *(int *)this;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 0x5c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 0x54) = uVar2;
  iVar1 = *(int *)this;
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xac) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xa4) = uVar2;
  *(int *)this = *(int *)this + 1;
  return;
}


