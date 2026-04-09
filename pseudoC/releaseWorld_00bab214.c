// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseWorld
// Entry Point: 00bab214
// Size: 224 bytes
// Signature: undefined __thiscall releaseWorld(Bt2PhysicsContextManager * this, Bt2World * param_1, btCollisionConfiguration * param_2)


/* Bt2PhysicsContextManager::releaseWorld(Bt2World*, btCollisionConfiguration*) */

Bt2PhysicsContextManager * __thiscall
Bt2PhysicsContextManager::releaseWorld
          (Bt2PhysicsContextManager *this,Bt2World *param_1,btCollisionConfiguration *param_2)

{
  int iVar1;
  long *plVar2;
  Bt2PhysicsContextManager *pBVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1 != (Bt2World *)0x0) {
    iVar1 = (**(code **)(*(long *)param_1 + 0xe8))(param_1);
    if (iVar1 == 2) {
      plVar2 = (long *)(**(code **)(*(long *)param_1 + 200))(param_1);
    }
    else {
      plVar2 = (long *)0x0;
    }
    plVar4 = *(long **)(param_1 + 0x28);
    plVar5 = *(long **)(param_1 + 0x60);
    this = (Bt2PhysicsContextManager *)(**(code **)(*(long *)param_1 + 8))(param_1);
    if (plVar2 != (long *)0x0) {
      this = (Bt2PhysicsContextManager *)(**(code **)(*plVar2 + 8))(plVar2);
    }
    if (plVar5 != (long *)0x0) {
      this = (Bt2PhysicsContextManager *)(**(code **)(*plVar5 + 8))(plVar5);
    }
    if (plVar4 != (long *)0x0) {
      this = (Bt2PhysicsContextManager *)(**(code **)(*plVar4 + 8))(plVar4);
    }
    if (param_2 != (btCollisionConfiguration *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00bab2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pBVar3 = (Bt2PhysicsContextManager *)(**(code **)(*(long *)param_2 + 8))(param_2);
      return pBVar3;
    }
  }
  return this;
}


