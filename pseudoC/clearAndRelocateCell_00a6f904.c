// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clearAndRelocateCell
// Entry Point: 00a6f904
// Size: 264 bytes
// Signature: undefined __cdecl clearAndRelocateCell(GridCellData * param_1, int param_2, int param_3, IRenderDevice * param_4)


/* LocalGeometryTransformGroup::clearAndRelocateCell(LocalGeometryTransformGroup::GridCellData*,
   int, int, IRenderDevice*) */

void LocalGeometryTransformGroup::clearAndRelocateCell
               (GridCellData *param_1,int param_2,int param_3,IRenderDevice *param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  GridCellData *pGVar5;
  float fVar6;
  
  pGVar5 = (GridCellData *)(ulong)(uint)param_2;
  uVar1 = *(ushort *)(pGVar5 + 0x20);
  if ((uVar1 >> 1 & 1) != 0) {
    unloadCell((LocalGeometryTransformGroup *)param_1,pGVar5);
    uVar1 = *(ushort *)(pGVar5 + 0x20);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    if (((LocalGeometryLoadBalancer::getInstance()::instance & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LocalGeometryLoadBalancer::getInstance()::instance), iVar4 != 0
       )) {
      LocalGeometryLoadBalancer::getInstance()::instance = 0;
      DAT_02112a48 = 0;
      DAT_02112a50 = 0;
      __cxa_atexit(LocalGeometryLoadBalancer::~LocalGeometryLoadBalancer,
                   &LocalGeometryLoadBalancer::getInstance()::instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LocalGeometryLoadBalancer::getInstance()::instance);
    }
    LocalGeometryLoadBalancer::removeLoadRequest
              ((LocalGeometryLoadBalancer *)&LocalGeometryLoadBalancer::getInstance()::instance,
               (LocalGeometryTransformGroup *)param_1,*(short *)(pGVar5 + 8),*(short *)(pGVar5 + 10)
              );
    *(ushort *)(pGVar5 + 0x20) = *(ushort *)(pGVar5 + 0x20) & 0xfffb;
  }
  sVar2 = *(short *)(pGVar5 + 8) + (short)param_3;
  sVar3 = *(short *)(pGVar5 + 10) + (short)param_4;
  *(short *)(pGVar5 + 8) = sVar2;
  *(short *)(pGVar5 + 10) = sVar3;
  fVar6 = *(float *)(param_1 + 0x160);
  *(float *)(pGVar5 + 0x18) = fVar6 * ((float)(int)sVar2 + 0.5);
  *(float *)(pGVar5 + 0x1c) = fVar6 * ((float)(int)sVar3 + 0.5);
  return;
}


