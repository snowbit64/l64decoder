// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadCell
// Entry Point: 00a6fa0c
// Size: 216 bytes
// Signature: undefined __thiscall unloadCell(LocalGeometryTransformGroup * this, GridCellData * param_1)


/* LocalGeometryTransformGroup::unloadCell(LocalGeometryTransformGroup::GridCellData*) */

void __thiscall
LocalGeometryTransformGroup::unloadCell(LocalGeometryTransformGroup *this,GridCellData *param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x20) >> 2 & 1) != 0) {
    if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance), iVar1 != 0
       )) {
      LocalGeometryLoadBalancer::getInstance()::instance = 0;
      DAT_02112a48 = 0;
      DAT_02112a50 = 0;
      __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                   &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
    }
    LocalGeometryLoadBalancer::removeLoadRequest
              ((LocalGeometryLoadBalancer *)&LocalGeometryLoadBalancer::getInstance()::instance,this
               ,*(short *)(param_1 + 8),*(short *)(param_1 + 10));
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffb;
  }
  (**(code **)(*(long *)this + 0x50))(this,param_1);
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffd;
  if (*(ScenegraphNode **)param_1 != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)param_1,false);
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


