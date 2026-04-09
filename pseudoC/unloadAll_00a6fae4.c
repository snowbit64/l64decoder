// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadAll
// Entry Point: 00a6fae4
// Size: 288 bytes
// Signature: undefined unloadAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LocalGeometryTransformGroup::unloadAll() */

void LocalGeometryTransformGroup::unloadAll(void)

{
  ushort uVar1;
  int iVar2;
  LocalGeometryTransformGroup *in_x0;
  uint uVar3;
  GridCellData *pGVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(in_x0 + 400);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          pGVar4 = *(GridCellData **)(*(long *)(in_x0 + 0x180) + (long)(iVar5 + iVar2 * iVar6) * 8);
          uVar1 = *(ushort *)(pGVar4 + 0x20);
          uVar3 = uVar1 & 0xfffe;
          *(short *)(pGVar4 + 0x20) = (short)uVar3;
          if ((uVar1 >> 1 & 1) != 0) {
            unloadCell(in_x0,pGVar4);
            uVar3 = (uint)*(ushort *)(pGVar4 + 0x20);
          }
          if ((uVar3 >> 2 & 1) != 0) {
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
                      ((LocalGeometryLoadBalancer *)
                       &LocalGeometryLoadBalancer::getInstance()::instance,in_x0,
                       *(short *)(pGVar4 + 8),*(short *)(pGVar4 + 10));
            *(ushort *)(pGVar4 + 0x20) = *(ushort *)(pGVar4 + 0x20) & 0xfffb;
          }
          iVar2 = *(int *)(in_x0 + 400);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  *(undefined2 *)(in_x0 + 0x1a0) = 0;
  return;
}


