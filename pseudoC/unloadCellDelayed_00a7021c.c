// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadCellDelayed
// Entry Point: 00a7021c
// Size: 312 bytes
// Signature: undefined __thiscall unloadCellDelayed(LocalGeometryTransformGroup * this, GridCellData * param_1)


/* LocalGeometryTransformGroup::unloadCellDelayed(LocalGeometryTransformGroup::GridCellData*) */

void __thiscall
LocalGeometryTransformGroup::unloadCellDelayed
          (LocalGeometryTransformGroup *this,GridCellData *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *__dest;
  void *__src;
  ushort uVar4;
  ulong uVar5;
  
  uVar4 = *(ushort *)(param_1 + 0x20);
  if ((uVar4 >> 2 & 1) != 0) {
    if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance), iVar3 != 0
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
    uVar4 = *(ushort *)(param_1 + 0x20) & 0xfffb;
    *(ushort *)(param_1 + 0x20) = uVar4;
  }
  if (*(ScenegraphNode **)param_1 != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)param_1,false);
    uVar4 = *(ushort *)(param_1 + 0x20);
  }
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((uVar4 & 1) == 0) {
    uVar2 = *(ushort *)(this + 0x1a0);
    uVar5 = (ulong)uVar2;
    if (*(ushort *)(this + 0x1a2) <= uVar2) {
      uVar1 = *(ushort *)(this + 0x1a2) + 0x10;
      __src = *(void **)(this + 0x1a8);
      *(ushort *)(this + 0x1a2) = uVar1;
      __dest = operator_new__((ulong)uVar1 << 3);
      *(void **)(this + 0x1a8) = __dest;
      if (uVar2 != 0) {
        memcpy(__dest,__src,uVar5 << 3);
      }
      if (__src != (void *)0x0) {
        operator_delete__(__src);
        uVar5 = (ulong)*(ushort *)(this + 0x1a0);
        uVar4 = *(ushort *)(param_1 + 0x20);
      }
    }
    *(GridCellData **)(*(long *)(this + 0x1a8) + uVar5 * 8) = param_1;
    *(short *)(this + 0x1a0) = (short)uVar5 + 1;
    *(ushort *)(param_1 + 0x20) = uVar4 | 1;
  }
  return;
}


