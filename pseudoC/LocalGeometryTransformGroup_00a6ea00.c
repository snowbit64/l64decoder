// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~LocalGeometryTransformGroup
// Entry Point: 00a6ea00
// Size: 240 bytes
// Signature: undefined __thiscall ~LocalGeometryTransformGroup(LocalGeometryTransformGroup * this)


/* LocalGeometryTransformGroup::~LocalGeometryTransformGroup() */

void __thiscall
LocalGeometryTransformGroup::~LocalGeometryTransformGroup(LocalGeometryTransformGroup *this)

{
  int iVar1;
  UpdateRenderingManager *this_00;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__LocalGeometryTransformGroup_00fe3ce0;
  *(undefined ***)(this + 0x158) = &PTR__LocalGeometryTransformGroup_00fe3d70;
  if (this[0x1c0] != (LocalGeometryTransformGroup)0x0) {
                    /* try { // try from 00a6ea30 to 00a6ea8b has its CatchHandler @ 00a6eaf0 */
    this_00 = (UpdateRenderingManager *)UpdateRenderingManager::getInstance();
    UpdateRenderingManager::removeUpdateableRendered(this_00,(UpdateableRendered *)(this + 0x158));
  }
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  if (*(void **)(this + 0x188) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x188));
  }
  if (*(void **)(this + 0x1a8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1a8));
  }
  if (*(void **)(this + 0x1b8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1b8));
  }
  if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance), iVar1 != 0))
  {
    LocalGeometryLoadBalancer::getInstance()::instance = 0;
    DAT_02112a48 = 0;
    DAT_02112a50 = 0;
    __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                 &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
  }
  LocalGeometryLoadBalancer::removeLoadRequestsFrom
            ((LocalGeometryLoadBalancer *)&LocalGeometryLoadBalancer::getInstance()::instance,this);
  pvVar2 = *(void **)(this + 0x1c8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1d0) = pvVar2;
    operator_delete(pvVar2);
  }
  TransformGroup::~TransformGroup((TransformGroup *)this);
  return;
}


