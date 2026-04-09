// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConstraints
// Entry Point: 00bb3540
// Size: 124 bytes
// Signature: undefined __thiscall solveConstraints(Bt2World * this, btContactSolverInfo * param_1)


/* Bt2World::solveConstraints(btContactSolverInfo&) */

void __thiscall Bt2World::solveConstraints(Bt2World *this,btContactSolverInfo *param_1)

{
  long lVar1;
  SortVehicleOnIslandPredicate aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (1 < *(int *)(this + 0x1cc)) {
    btAlignedObjectArray<Bt2VehicleSolverBase*>::
    quickSortInternal<Bt2World::SortVehicleOnIslandPredicate>
              ((btAlignedObjectArray<Bt2VehicleSolverBase*> *)(this + 0x1c8),aSStack_40,0,
               *(int *)(this + 0x1cc) + -1);
  }
  btDiscreteDynamicsWorld::solveConstraints((btDiscreteDynamicsWorld *)this,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


