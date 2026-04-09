// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTeleportList
// Entry Point: 00740d90
// Size: 644 bytes
// Signature: undefined createTeleportList(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationGridAdapter::createTeleportList() */

void VehicleNavigationGridAdapter::createTeleportList(void)

{
  ulong uVar1;
  undefined2 uVar2;
  long lVar4;
  uint uVar5;
  int iVar6;
  long *in_x0;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 *puVar12;
  long lVar13;
  void *__src;
  size_t __n;
  ulong uVar14;
  PlanarPose aPStack_78 [16];
  long local_68;
  undefined2 uVar3;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar13 = *(long *)(*in_x0 + 0x18);
  uVar10 = (*(long *)(*in_x0 + 0x20) - lVar13 >> 4) * 0xcccd;
  if ((uVar10 & 0xffff) != 0) {
    uVar14 = 0;
    while( true ) {
      lVar13 = lVar13 + uVar14 * 0x50;
      if (*(char *)(lVar13 + 0x18) != '\0') {
        uVar5 = (uint)lVar13;
        RoadSegment::getPositionAndDirection(uVar5,0.0,(PlanarPose *)0x0);
        uVar7 = getClosestNode((VehicleNavigationGridAdapter *)in_x0,aPStack_78);
        iVar6 = Spline::getNumOfCV();
        RoadSegment::getPositionAndDirection(uVar5,1.0,(PlanarPose *)(ulong)(iVar6 - 2));
        uVar8 = getClosestNode((VehicleNavigationGridAdapter *)in_x0,aPStack_78);
        puVar12 = (undefined2 *)in_x0[0xe];
        uVar2 = (undefined2)((ulong)uVar7 >> 0x20);
        uVar3 = (undefined2)((ulong)uVar8 >> 0x20);
        if (puVar12 < (undefined2 *)in_x0[0xf]) {
          *puVar12 = (short)uVar14;
          *(int *)(puVar12 + 1) = (int)uVar7;
          *(int *)(puVar12 + 4) = (int)uVar8;
          puVar12[3] = uVar2;
          puVar12[6] = uVar3;
          in_x0[0xe] = (long)(puVar12 + 7);
        }
        else {
          __src = (void *)in_x0[0xd];
          __n = (long)puVar12 - (long)__src;
          uVar1 = ((long)__n >> 1) * 0x6db6db6db6db6db7 + 1;
          if (0x1249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          lVar13 = (long)(undefined2 *)in_x0[0xf] - (long)__src >> 1;
          uVar11 = lVar13 * -0x2492492492492492;
          if (uVar1 <= uVar11) {
            uVar1 = uVar11;
          }
          if (0x924924924924923 < (ulong)(lVar13 * 0x6db6db6db6db6db7)) {
            uVar1 = 0x1249249249249249;
          }
          if (0x1249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          pvVar9 = operator_new(uVar1 * 0xe);
          puVar12 = (undefined2 *)((long)pvVar9 + ((long)__n >> 1) * 2);
          *puVar12 = (short)uVar14;
          puVar12[3] = uVar2;
          *(int *)(puVar12 + 1) = (int)uVar7;
          puVar12[6] = uVar3;
          *(int *)(puVar12 + 4) = (int)uVar8;
          if (0 < (long)__n) {
            memcpy((void *)((long)puVar12 - __n),__src,__n);
          }
          in_x0[0xd] = (long)(void *)((long)puVar12 - __n);
          in_x0[0xe] = (long)(puVar12 + 7);
          in_x0[0xf] = (long)((long)pvVar9 + uVar1 * 0xe);
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
      }
      uVar14 = uVar14 + 1;
      if (uVar14 == (uVar10 & 0xffff)) break;
      lVar13 = *(long *)(*in_x0 + 0x18);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


