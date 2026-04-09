// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~FoliageTransformGroup
// Entry Point: 00a694e4
// Size: 300 bytes
// Signature: undefined __thiscall ~FoliageTransformGroup(FoliageTransformGroup * this)


/* FoliageTransformGroup::~FoliageTransformGroup() */

void __thiscall FoliageTransformGroup::~FoliageTransformGroup(FoliageTransformGroup *this)

{
  int iVar1;
  BuddyAllocator *this_00;
  
  *(undefined ***)this = &PTR__FoliageTransformGroup_00fe3ad8;
  *(undefined ***)(this + 0x158) = &PTR__FoliageTransformGroup_00fe3b88;
  *(undefined ***)(this + 0x1e0) = &PTR__FoliageTransformGroup_00fe3bb0;
  *(undefined ***)(this + 0x1f0) = &PTR__FoliageTransformGroup_00fe3be0;
  if (*(int *)(this + 0x1e8) == 3) {
                    /* try { // try from 00a69528 to 00a6954f has its CatchHandler @ 00a69624 */
    LocalGeometryTransformGroup::unloadAll();
  }
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar1 != 0)
     ) {
                    /* try { // try from 00a695d8 to 00a695e3 has its CatchHandler @ 00a69610 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::unregisterSoftInstances
            ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
             (TransformGroup *)this);
  if (*(long **)(this + 0x200) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x200) + 8))();
  }
  if (*(void **)(this + 0x240) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x240));
  }
  if (*(long **)(this + 0x250) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x250) + 8))();
  }
  if (*(void **)(this + 600) != (void *)0x0) {
    operator_delete__(*(void **)(this + 600));
  }
  this_00 = *(BuddyAllocator **)(this + 0x268);
  if (this_00 != (BuddyAllocator *)0x0) {
    BuddyAllocator::~BuddyAllocator(this_00);
    operator_delete(this_00);
  }
  if (*(FoliageBendingSystem **)(this + 0x270) != (FoliageBendingSystem *)0x0) {
                    /* try { // try from 00a695b0 to 00a695b7 has its CatchHandler @ 00a69624 */
    FoliageBendingSystem::onFoliageTransformGroupDeleted
              (*(FoliageBendingSystem **)(this + 0x270),this);
  }
  TerrainDetailTransformGroup::~TerrainDetailTransformGroup((TerrainDetailTransformGroup *)this);
  return;
}


