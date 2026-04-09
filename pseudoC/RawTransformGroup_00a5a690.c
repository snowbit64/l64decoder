// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RawTransformGroup
// Entry Point: 00a5a690
// Size: 236 bytes
// Signature: undefined __thiscall ~RawTransformGroup(RawTransformGroup * this)


/* RawTransformGroup::~RawTransformGroup() */

void __thiscall RawTransformGroup::~RawTransformGroup(RawTransformGroup *this)

{
  int iVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__RawTransformGroup_00fe3950;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  plVar2 = *(long **)(this + 0x110);
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00f27700(0xffffffff,plVar2 + 1), iVar1 < 2)) {
                    /* try { // try from 00a5a6e8 to 00a5a717 has its CatchHandler @ 00a5a790 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if (*(long *)(this + 0xf8) != 0) {
    if (((VisibilityConditionManager::getInstance()::instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&VisibilityConditionManager::getInstance()::instance),
       iVar1 != 0)) {
                    /* try { // try from 00a5a744 to 00a5a74f has its CatchHandler @ 00a5a77c */
      VisibilityConditionManager::VisibilityConditionManager
                ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance)
      ;
      __cxa_atexit(VisibilityConditionManager::~VisibilityConditionManager,
                   &VisibilityConditionManager::getInstance()::instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&VisibilityConditionManager::getInstance()::instance);
    }
    VisibilityConditionManager::releaseVisibilityCondition
              ((VisibilityConditionManager *)&VisibilityConditionManager::getInstance()::instance,
               *(VisibilityCondition **)(this + 0xf8));
  }
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  ScenegraphNode::~ScenegraphNode((ScenegraphNode *)this);
  return;
}


