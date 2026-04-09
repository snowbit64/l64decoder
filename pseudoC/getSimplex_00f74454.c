// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSimplex
// Entry Point: 00f74454
// Size: 72 bytes
// Signature: undefined __thiscall getSimplex(btVoronoiSimplexSolver * this, btVector3 * param_1, btVector3 * param_2, btVector3 * param_3)


/* btVoronoiSimplexSolver::getSimplex(btVector3*, btVector3*, btVector3*) const */

ulong __thiscall
btVoronoiSimplexSolver::getSimplex
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  uVar2 = (ulong)*(uint *)this;
  if (0 < (int)*(uint *)this) {
    lVar3 = 0;
    puVar4 = (undefined8 *)(this + 0x54);
    do {
      uVar5 = puVar4[-10];
      lVar3 = lVar3 + 1;
      *(undefined8 *)((long)param_3 + 8) = puVar4[-9];
      *(undefined8 *)param_3 = uVar5;
      uVar5 = *puVar4;
      *(undefined8 *)((long)param_1 + 8) = puVar4[1];
      *(undefined8 *)param_1 = uVar5;
      puVar1 = puVar4 + 0xb;
      uVar5 = puVar4[10];
      puVar4 = puVar4 + 2;
      *(undefined8 *)((long)param_2 + 8) = *puVar1;
      *(undefined8 *)param_2 = uVar5;
      uVar2 = (ulong)*(int *)this;
      param_1 = (btVector3 *)((long)param_1 + 0x10);
      param_2 = (btVector3 *)((long)param_2 + 0x10);
      param_3 = (btVector3 *)((long)param_3 + 0x10);
    } while (lVar3 < (long)uVar2);
  }
  return uVar2 & 0xffffffff;
}


