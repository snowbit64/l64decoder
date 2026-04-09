// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reloadCellDelayed
// Entry Point: 00a6f150
// Size: 420 bytes
// Signature: undefined __thiscall reloadCellDelayed(LocalGeometryTransformGroup * this, GridCellData * param_1, bool param_2)


/* LocalGeometryTransformGroup::reloadCellDelayed(LocalGeometryTransformGroup::GridCellData*, bool)
    */

void __thiscall
LocalGeometryTransformGroup::reloadCellDelayed
          (LocalGeometryTransformGroup *this,GridCellData *param_1,bool param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  void *__dest;
  void *__src;
  uint uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x20);
  if (param_2) {
    if ((*(ushort *)(param_1 + 0x20) >> 1 & 1) != 0) {
      unloadCellDelayed(this,param_1);
      return;
    }
  }
  else {
    if ((uVar4 & 3) == 2) {
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
          uVar4 = (uint)*(ushort *)(param_1 + 0x20);
        }
      }
      uVar4 = uVar4 | 1;
      *(GridCellData **)(*(long *)(this + 0x1a8) + uVar5 * 8) = param_1;
      *(short *)(this + 0x1a0) = (short)uVar5 + 1;
      *(short *)(param_1 + 0x20) = (short)uVar4;
    }
    if ((uVar4 >> 2 & 1) == 0) {
      RawTransformGroup::updateWorldTransformation();
      uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(this + 0xb8),
                         *(float *)(this + 200) * 0.0);
      uVar6 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(this + 0xc0),
                         *(float *)(this + 0xd0) * 0.0);
      fVar11 = *(float *)(this + 0xe8);
      fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(this + 0xd8),uVar7);
      fVar10 = *(float *)(this + 0xf0);
      fVar9 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(this + 0xe0),uVar6);
      if ((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance);
        if (iVar3 != 0) {
          LocalGeometryLoadBalancer::getInstance()::instance = 0;
          DAT_02112a48 = 0;
          DAT_02112a50 = 0;
          __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                       &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
        }
      }
      LocalGeometryLoadBalancer::addLoadRequest
                ((LocalGeometryLoadBalancer *)&LocalGeometryLoadBalancer::getInstance()::instance,
                 this,*(short *)(param_1 + 8),*(short *)(param_1 + 10),fVar11 + fVar8,fVar10 + fVar9
                );
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 4;
    }
  }
  return;
}


