// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VehicleNavigationAgentEntity
// Entry Point: 007340a4
// Size: 340 bytes
// Signature: undefined __thiscall ~VehicleNavigationAgentEntity(VehicleNavigationAgentEntity * this)


/* VehicleNavigationAgentEntity::~VehicleNavigationAgentEntity() */

void __thiscall
VehicleNavigationAgentEntity::~VehicleNavigationAgentEntity(VehicleNavigationAgentEntity *this)

{
  int iVar1;
  void *pvVar2;
  void **ppvVar3;
  UpdateRenderingManager *this_00;
  void **ppvVar4;
  long *plVar5;
  void **ppvVar6;
  void **ppvVar7;
  
  *(undefined ***)this = &PTR__VehicleNavigationAgentEntity_00fda910;
  *(undefined ***)(this + 0x20) = &PTR__VehicleNavigationAgentEntity_00fda938;
  if (this[0x88] != (VehicleNavigationAgentEntity)0x0) {
                    /* try { // try from 007340e4 to 00734197 has its CatchHandler @ 007341f8 */
    DynamicAvoidance::removeObstacle
              (*(DynamicAvoidance **)(this + 0x40),*(Obstacle **)(this + 0x48));
  }
  ppvVar6 = *(void ***)(this + 0x48);
  if (ppvVar6 != (void **)0x0) {
    pvVar2 = ppvVar6[8];
    if (pvVar2 != (void *)0x0) {
      ppvVar6[9] = pvVar2;
      operator_delete(pvVar2);
    }
    ppvVar7 = (void **)ppvVar6[4];
    if (ppvVar7 != (void **)0x0) {
      ppvVar4 = (void **)ppvVar6[5];
      ppvVar3 = ppvVar7;
      if (ppvVar4 != ppvVar7) {
        do {
          ppvVar3 = ppvVar4 + -5;
          pvVar2 = *ppvVar3;
          if (pvVar2 != (void *)0x0) {
            ppvVar4[-4] = pvVar2;
            operator_delete(pvVar2);
          }
          ppvVar4 = ppvVar3;
        } while (ppvVar3 != ppvVar7);
        ppvVar3 = (void **)ppvVar6[4];
      }
      ppvVar6[5] = ppvVar7;
      operator_delete(ppvVar3);
    }
    pvVar2 = *ppvVar6;
    if (pvVar2 != (void *)0x0) {
      ppvVar6[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(ppvVar6);
  }
  if (this[0x68] != (VehicleNavigationAgentEntity)0x0) {
    this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
    UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x20));
  }
  VehicleNavigationPlanner::cancelPlanning
            (*(VehicleNavigationPlanner **)(this + 0x28),*(VehicleNavigationAgent **)(this + 0x38),
             true);
  VehicleNavigationMapGenerator::unregisterAgent
            (*(VehicleNavigationMapGenerator **)(this + 0x30),this);
  plVar5 = *(long **)(this + 0x38);
  iVar1 = FUN_00f27700(0xffffffff,plVar5 + 1);
  if (iVar1 < 2) {
                    /* try { // try from 007341b8 to 007341bf has its CatchHandler @ 007341f8 */
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  pvVar2 = *(void **)(this + 0x128);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x108);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar2;
    operator_delete(pvVar2);
  }
  Entity::~Entity((Entity *)this);
  return;
}


