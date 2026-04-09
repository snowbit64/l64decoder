// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createSpatialIndex
// Entry Point: 007319cc
// Size: 1052 bytes
// Signature: undefined createSpatialIndex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMap::createSpatialIndex() */

void VehicleNavigationMap::createSpatialIndex(void)

{
  undefined2 *puVar1;
  long lVar2;
  BoundingBox *pBVar3;
  short sVar4;
  long in_x0;
  void *__dest;
  BoundingBox *__dest_00;
  uint *__s;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  RoadSegment *this;
  uint uVar11;
  void *__src;
  size_t sVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  ulong local_a0;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 local_88;
  BoundingBox *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)(in_x0 + 0x18);
  *(void **)(in_x0 + 0x38) = *(void **)(in_x0 + 0x30);
  local_80 = (BoundingBox *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  uVar6 = (*(long *)(in_x0 + 0x20) - lVar5 >> 4) * 0xcccd;
  if ((uVar6 & 0xffff) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    local_a0 = 0;
    while( true ) {
      this = (RoadSegment *)(lVar5 + local_a0 * 0x50);
      if (this[0x18] == (RoadSegment)0x0) {
                    /* try { // try from 00731a8c to 00731a8f has its CatchHandler @ 00731e18 */
        sVar4 = Spline::getNumOfCV();
        if ((ushort)(sVar4 - 1U) != 0) {
          uVar11 = 0;
          do {
            puVar1 = *(undefined2 **)(in_x0 + 0x38);
            if (puVar1 < *(undefined2 **)(in_x0 + 0x40)) {
              puVar1[1] = (short)uVar11;
              *puVar1 = (short)local_a0;
              *(undefined2 **)(in_x0 + 0x38) = puVar1 + 2;
            }
            else {
              __src = *(void **)(in_x0 + 0x30);
              sVar12 = (long)puVar1 - (long)__src;
              uVar10 = ((long)sVar12 >> 2) + 1;
              if (uVar10 >> 0x3e != 0) {
                    /* try { // try from 00731dbc to 00731dc3 has its CatchHandler @ 00731e24 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar7 = (long)*(undefined2 **)(in_x0 + 0x40) - (long)__src;
              uVar8 = (long)uVar7 >> 1;
              if (uVar10 <= uVar8) {
                uVar10 = uVar8;
              }
              if (0x7ffffffffffffffb < uVar7) {
                uVar10 = 0x3fffffffffffffff;
              }
              if (uVar10 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar10 >> 0x3e != 0) {
                    /* try { // try from 00731dd8 to 00731de3 has its CatchHandler @ 00731e24 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 00731b54 to 00731b57 has its CatchHandler @ 00731e1c */
                __dest = operator_new(uVar10 << 2);
              }
              puVar1 = (undefined2 *)((long)__dest + ((long)sVar12 >> 2) * 4);
              *puVar1 = (short)local_a0;
              puVar1[1] = (short)uVar11;
              if (0 < (long)sVar12) {
                memcpy(__dest,__src,sVar12);
              }
              *(void **)(in_x0 + 0x30) = __dest;
              *(undefined2 **)(in_x0 + 0x38) = puVar1 + 2;
              *(void **)(in_x0 + 0x40) = (void *)((long)__dest + uVar10 * 4);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
            }
                    /* try { // try from 00731bb8 to 00731c5f has its CatchHandler @ 00731e28 */
            RoadSegment::solveCoordExtremes
                      (this,(float *)&local_88,(float *)&local_90,&fStack_94,&fStack_98,uVar11,0.0,
                       1.0,0);
            RoadSegment::solveCoordExtremes
                      (this,(float *)((ulong)&local_88 | 4),(float *)((ulong)&local_90 | 4),
                       &fStack_94,&fStack_98,uVar11,0.0,1.0,2);
            pBVar3 = local_80;
            if (puVar9 < local_70) {
              *puVar9 = local_88;
              puVar9[1] = local_90;
              puVar9 = puVar9 + 2;
              local_78 = puVar9;
            }
            else {
              sVar12 = (long)puVar9 - (long)local_80;
              uVar10 = ((long)sVar12 >> 4) + 1;
              if (uVar10 >> 0x3c != 0) {
                    /* try { // try from 00731dc4 to 00731dd7 has its CatchHandler @ 00731e20 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar7 = (long)local_70 - (long)local_80 >> 3;
              if (uVar10 <= uVar7) {
                uVar10 = uVar7;
              }
              if (0x7fffffffffffffef < (ulong)((long)local_70 - (long)local_80)) {
                uVar10 = 0xfffffffffffffff;
              }
              if (uVar10 == 0) {
                __dest_00 = (BoundingBox *)0x0;
              }
              else {
                if (uVar10 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                __dest_00 = (BoundingBox *)operator_new(uVar10 << 4);
              }
              puVar9 = (undefined8 *)(__dest_00 + ((long)sVar12 >> 4) * 0x10);
              *puVar9 = local_88;
              puVar9[1] = local_90;
              if (0 < (long)sVar12) {
                memcpy(__dest_00,pBVar3,sVar12);
              }
              puVar9 = puVar9 + 2;
              local_70 = (undefined8 *)(__dest_00 + uVar10 * 0x10);
              local_80 = __dest_00;
              local_78 = puVar9;
              if (pBVar3 != (BoundingBox *)0x0) {
                operator_delete(pBVar3);
              }
            }
            uVar11 = uVar11 + 1;
          } while ((ushort)(sVar4 - 1U) != uVar11);
        }
      }
      local_a0 = local_a0 + 1;
      if (local_a0 == (uVar6 & 0xffff)) break;
      lVar5 = *(long *)(in_x0 + 0x18);
    }
  }
  pBVar3 = local_80;
  uVar10 = (long)puVar9 - (long)local_80;
  uVar6 = (long)uVar10 >> 4 & 0xffffffff;
  uVar11 = (uint)((long)uVar10 >> 4);
  if (uVar6 == 0) {
    __s = (uint *)0x0;
  }
  else {
    uVar6 = uVar6 << 2;
                    /* try { // try from 00731cd8 to 00731cdf has its CatchHandler @ 00731de8 */
    __s = (uint *)operator_new(uVar6);
    memset(__s,0,uVar6);
  }
  if (uVar11 != 0) {
    uVar6 = uVar10 >> 4 & 0xffffffff;
    if (uVar6 < 8) {
      uVar10 = 0;
    }
    else {
      uVar8 = uVar10 >> 4 & 7;
      uVar10 = uVar6 - uVar8;
      uVar15 = 0x300000002;
      uVar13 = 0x100000000;
      puVar9 = (undefined8 *)(__s + 4);
      uVar7 = uVar10;
      do {
        iVar14 = (int)((ulong)uVar13 >> 0x20);
        iVar16 = (int)((ulong)uVar15 >> 0x20);
        uVar7 = uVar7 - 8;
        puVar9[-1] = uVar15;
        puVar9[-2] = uVar13;
        puVar9[1] = CONCAT44(iVar16 + 4,(int)uVar15 + 4);
        *puVar9 = CONCAT44(iVar14 + 4,(int)uVar13 + 4);
        puVar9 = puVar9 + 4;
        uVar13 = CONCAT44(iVar14 + 8,(int)uVar13 + 8);
        uVar15 = CONCAT44(iVar16 + 8,(int)uVar15 + 8);
      } while (uVar7 != 0);
      if (uVar8 == 0) goto LAB_00731d60;
    }
    do {
      __s[uVar10] = (uint)uVar10;
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
  }
LAB_00731d60:
                    /* try { // try from 00731d64 to 00731d73 has its CatchHandler @ 00731dec */
  RectangleTree::buildRectangleNodes((RectangleTree *)(in_x0 + 0x48),uVar11,__s,pBVar3);
  if (__s != (uint *)0x0) {
    operator_delete(__s);
  }
  if (pBVar3 != (BoundingBox *)0x0) {
    operator_delete(pBVar3);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


