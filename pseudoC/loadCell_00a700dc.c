// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadCell
// Entry Point: 00a700dc
// Size: 272 bytes
// Signature: undefined __thiscall loadCell(LocalGeometryTransformGroup * this, GridCellData * param_1, IRenderDevice * param_2)


/* LocalGeometryTransformGroup::loadCell(LocalGeometryTransformGroup::GridCellData*, IRenderDevice*)
    */

uint __thiscall
LocalGeometryTransformGroup::loadCell
          (LocalGeometryTransformGroup *this,GridCellData *param_1,IRenderDevice *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(*(long *)this + 0x40))();
  if ((uVar3 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    if ((*(ushort *)(param_1 + 0x20) >> 2 & 1) != 0) {
      if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance),
         iVar2 != 0)) {
        LocalGeometryLoadBalancer::getInstance()::instance = 0;
        DAT_02112a48 = 0;
        DAT_02112a50 = 0;
        __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                     &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
      }
      LocalGeometryLoadBalancer::removeLoadRequest
                ((LocalGeometryLoadBalancer *)&LocalGeometryLoadBalancer::getInstance()::instance,
                 this,*(short *)(param_1 + 8),*(short *)(param_1 + 10));
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffb;
    }
    uVar1 = (**(code **)(*(long *)this + 0x48))(this,param_1,param_2);
    uVar3 = *(ulong *)param_1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (uVar3 != 0) {
      uVar3 = (ulong)(*(byte *)(uVar3 + 0x40) & 1);
    }
    param_1[0x28] = SUB81(uVar3,0);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x29] = (GridCellData)0x0;
    if ((*(ushort *)(param_1 + 0x20) >> 1 & 1) == 0) {
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 2;
    }
  }
  return uVar1 & 1;
}


