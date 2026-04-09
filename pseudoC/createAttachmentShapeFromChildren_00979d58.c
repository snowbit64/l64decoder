// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createAttachmentShapeFromChildren
// Entry Point: 00979d58
// Size: 1612 bytes
// Signature: undefined __cdecl createAttachmentShapeFromChildren(char * param_1, MeshSplitShape * param_2, STREAM_QUEUE param_3)


/* MeshSplitAttachmentGeometry::createAttachmentShapeFromChildren(char const*, MeshSplitShape*,
   StreamManager::STREAM_QUEUE) */

void MeshSplitAttachmentGeometry::createAttachmentShapeFromChildren
               (char *param_1,MeshSplitShape *param_2,STREAM_QUEUE param_3)

{
  size_t __n;
  long *plVar1;
  long lVar2;
  GsShape **__src;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  TriangleSet *this;
  GsShape **ppGVar8;
  void *pvVar9;
  GsShape *pGVar10;
  IndexedTriangleSet *this_00;
  IndexedTriangleSet *pIVar11;
  BoundingVolume *pBVar12;
  MeshSplitAttachmentSharedData *this_01;
  StreamManager *pSVar13;
  MeshSplitAttachmentGeometry *this_02;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  GsShape *pGVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  GsShape **ppGVar26;
  float fVar27;
  float fVar28;
  uint local_138;
  uint local_118;
  uint local_10c;
  void *local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  void *local_e8;
  void *local_e0;
  GsShape **local_d8;
  GsShape **local_d0;
  GsShape **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(param_2 + 0x28);
  local_d8 = (GsShape **)0x0;
  local_d0 = (GsShape **)0x0;
  local_c8 = (GsShape **)0x0;
  uVar17 = *(long *)(param_2 + 0x30) - lVar7;
  uVar25 = uVar17 >> 3 & 0xffffffff;
  if (uVar25 == 0) {
    if ((int)(uVar17 >> 3) != 0) goto LAB_00979ddc;
LAB_0097a098:
    pGVar10 = (GsShape *)0x0;
    pGVar18 = (GsShape *)0x0;
    ppGVar8 = local_d8;
    if (local_d8 == (GsShape **)0x0) goto LAB_0097a358;
  }
  else {
                    /* try { // try from 00979db0 to 00979db3 has its CatchHandler @ 0097a3f4 */
    local_d8 = (GsShape **)operator_new(uVar25 << 3);
    local_c8 = local_d8 + uVar25;
    local_d0 = local_d8;
    if ((int)(uVar17 >> 3) == 0) goto LAB_0097a098;
LAB_00979ddc:
    lVar23 = 0;
    uVar20 = 0;
    lVar19 = 0;
    local_10c = 0;
    ppGVar8 = local_d0;
    local_d8 = local_d0;
    while( true ) {
      pGVar18 = *(GsShape **)(lVar7 + lVar23);
      ppGVar26 = ppGVar8;
                    /* try { // try from 00979e18 to 00979e1b has its CatchHandler @ 0097a404 */
      if ((((((byte)pGVar18[0x11] >> 3 & 1) != 0) && (*(short *)(pGVar18 + 0x196) == 1)) &&
          (*(long *)(pGVar18 + 0x170) != 0)) &&
         (lVar7 = Geometry::getCollisionProxyMesh(), lVar7 != 0)) {
                    /* try { // try from 00979e24 to 00979f3f has its CatchHandler @ 0097a408 */
        this = (TriangleSet *)Geometry::getCollisionProxyMesh();
        lVar7 = TriangleSet::getNormals();
        if (((lVar7 != 0) && (lVar7 = TriangleSet::getTexCoords(this,0), lVar7 != 0)) &&
           ((iVar4 = IndexedTriangleSet::getNumSubsets(), iVar4 == 1 &&
            ((uVar17 = IndexedTriangleSet::is16Bit(), (uVar17 & 1) != 0 &&
             (iVar4 = TriangleSet::getNumVertices(), iVar4 + uVar20 >> 0x10 == 0)))))) {
          if (lVar19 == 0) {
            plVar1 = (long *)(pGVar18 + 0x178);
            if (*(short *)(pGVar18 + 0x196) != 1) {
              plVar1 = *(long **)(pGVar18 + 0x178);
            }
            lVar19 = *plVar1;
            local_118 = TriangleSet::getAttributes();
            local_138 = *(uint *)(pGVar18 + 400);
          }
          plVar1 = (long *)(pGVar18 + 0x178);
          if (*(short *)(pGVar18 + 0x196) != 1) {
            plVar1 = *(long **)(pGVar18 + 0x178);
          }
          if ((lVar19 == *plVar1) &&
             (uVar5 = TriangleSet::getAttributes(), __src = local_d8, local_118 == uVar5)) {
            if (ppGVar8 == local_c8) {
              uVar14 = (long)ppGVar8 - (long)local_d8;
              uVar17 = ((long)uVar14 >> 3) + 1;
              if (uVar17 >> 0x3d != 0) {
                    /* try { // try from 0097a38c to 0097a39f has its CatchHandler @ 0097a3a4 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar17 <= (ulong)((long)uVar14 >> 2)) {
                uVar17 = (long)uVar14 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar14) {
                uVar17 = 0x1fffffffffffffff;
              }
              if (uVar17 == 0) {
                ppGVar8 = (GsShape **)0x0;
              }
              else {
                if (uVar17 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                ppGVar8 = (GsShape **)operator_new(uVar17 << 3);
              }
              ppGVar26 = ppGVar8 + ((long)uVar14 >> 3) + 1;
              ppGVar8[(long)uVar14 >> 3] = pGVar18;
              if (0 < (long)uVar14) {
                memcpy(ppGVar8,__src,uVar14);
              }
              local_c8 = ppGVar8 + uVar17;
              local_d8 = ppGVar8;
              local_d0 = ppGVar26;
              if (__src != (GsShape **)0x0) {
                operator_delete(__src);
              }
            }
            else {
              ppGVar26 = ppGVar8 + 1;
              *ppGVar8 = pGVar18;
              local_d0 = ppGVar26;
            }
                    /* try { // try from 00979f88 to 00979f9b has its CatchHandler @ 0097a408 */
            iVar4 = TriangleSet::getNumVertices();
            iVar6 = IndexedTriangleSet::getNumIndices();
            uVar20 = iVar4 + uVar20;
            local_10c = iVar6 + local_10c;
          }
        }
      }
      ppGVar8 = local_d8;
      if (uVar25 * 8 + -8 == lVar23) break;
      lVar7 = *(long *)(param_2 + 0x28);
      lVar23 = lVar23 + 8;
      ppGVar8 = ppGVar26;
    }
    if (0xfffd < uVar20 - 1) goto LAB_0097a098;
    uVar5 = (uint)((ulong)((long)ppGVar26 - (long)local_d8) >> 3);
    if (0xfffe < uVar5) goto LAB_0097a098;
    uVar17 = (ulong)((long)ppGVar26 - (long)local_d8) >> 3 & 0xffffffff;
    local_f0 = (void *)0x0;
    local_e8 = (void *)0x0;
    local_e0 = (void *)0x0;
    if (uVar17 == 0) {
      local_108 = (void *)0x0;
      local_100 = (void *)0x0;
      local_f8 = (void *)0x0;
    }
    else {
                    /* try { // try from 0097a008 to 0097a00f has its CatchHandler @ 0097a3b8 */
      pvVar9 = operator_new(uVar17 * 0x50);
      local_e0 = (void *)((long)pvVar9 + uVar17 * 0x50);
      __n = ((uVar17 * 0x50 - 0x50) / 0x50) * 0x50 + 0x50;
      local_f0 = pvVar9;
      memset(pvVar9,0,__n);
      local_e8 = (void *)((long)pvVar9 + __n);
      uVar25 = uVar17 * 4;
                    /* try { // try from 0097a05c to 0097a063 has its CatchHandler @ 0097a3a8 */
      local_108 = operator_new(uVar25);
      pvVar9 = (void *)((long)local_108 + uVar25);
      local_f8 = pvVar9;
      memset(local_108,0,uVar25);
      local_100 = pvVar9;
    }
                    /* try { // try from 0097a0b0 to 0097a0b7 has its CatchHandler @ 0097a3fc */
    this_00 = (IndexedTriangleSet *)operator_new(0x90);
                    /* try { // try from 0097a0bc to 0097a0bf has its CatchHandler @ 0097a3e4 */
    IndexedTriangleSet::IndexedTriangleSet(this_00);
                    /* try { // try from 0097a0c8 to 0097a0eb has its CatchHandler @ 0097a3fc */
    TriangleSet::setNumVertices((TriangleSet *)this_00,uVar20,local_118 | 0x200);
    IndexedTriangleSet::setNumIndices(this_00,local_10c);
    IndexedTriangleSet::setNumSubsets(this_00,uVar5);
    if (uVar5 != 0) {
      uVar25 = 0;
      uVar20 = 0;
      uVar22 = 0;
      lVar7 = *(long *)(*(long *)(param_2 + 0x170) + 0x170);
      while( true ) {
        pGVar18 = ppGVar8[uVar25];
                    /* try { // try from 0097a114 to 0097a163 has its CatchHandler @ 0097a418 */
        pIVar11 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
        pBVar12 = (BoundingVolume *)Geometry::getBoundingVolume();
        MeshSplitAttachmentSharedData::getAttachmentGeometry
                  (pIVar11,pBVar12,(Matrix4x4 *)(pGVar18 + 0x78),uVar22,uVar20,(uint)uVar25,this_00,
                   (AttachmentGeometryData *)((long)local_f0 + uVar25 * 0x50));
        sVar3 = TriangleSet::getNumVertices();
        iVar4 = IndexedTriangleSet::getNumIndices();
        lVar23 = *(long *)(lVar7 + 0x2f68);
        local_c0 = *(undefined8 *)(pGVar18 + 0xa8);
        uVar14 = *(long *)(lVar7 + 0x2f70) - lVar23;
        uStack_b8 = CONCAT44(uStack_b8._4_4_,*(undefined4 *)(pGVar18 + 0xb0));
        if ((int)(uVar14 >> 5) == 0) {
          uVar5 = 0;
        }
        else {
          lVar19 = 0;
          uVar21 = 3;
          uVar24 = 0;
          fVar27 = 3.402823e+38;
          while( true ) {
            fVar28 = fVar27;
            lVar16 = *(long *)(lVar7 + 0x2ef0);
            lVar15 = *(long *)(lVar7 + 0x2f50);
                    /* try { // try from 0097a1fc to 0097a203 has its CatchHandler @ 0097a41c */
            fVar27 = (float)MathUtil::pointToTriangleDistanceSquared3D
                                      ((Vector3 *)&local_c0,
                                       (Vector3 *)
                                       (lVar16 + (ulong)*(ushort *)
                                                         (lVar15 + (ulong)*(ushort *)
                                                                           (lVar23 + (ulong)(uVar21 
                                                  - 2) * 8) * 0xc) * 0x10),
                                       (Vector3 *)
                                       (lVar16 + (ulong)*(ushort *)
                                                         (lVar15 + (ulong)*(ushort *)
                                                                           (lVar23 + (ulong)(uVar21 
                                                  - 1) * 8) * 0xc) * 0x10),
                                       (Vector3 *)
                                       (lVar16 + (ulong)*(ushort *)
                                                         (lVar15 + (ulong)*(ushort *)
                                                                           (lVar23 + (ulong)uVar21 *
                                                                                     8) * 0xc) *
                                                 0x10));
            uVar5 = (uint)lVar19;
            if (fVar28 <= fVar27) {
              uVar5 = uVar24;
            }
            if ((uVar14 >> 5 & 0xffffffff) - 1 == lVar19) break;
            lVar23 = *(long *)(lVar7 + 0x2f68);
            uVar21 = uVar21 + 4;
            lVar19 = lVar19 + 1;
            uVar24 = uVar5;
            if (fVar28 <= fVar27) {
              fVar27 = fVar28;
            }
          }
        }
        *(uint *)((long)local_108 + uVar25 * 4) = uVar5 & 0xffff | (uint)uVar25 << 0x10;
        uVar25 = uVar25 + 1;
        if (uVar25 == uVar17) break;
        uVar22 = uVar22 + sVar3;
        uVar20 = iVar4 + uVar20;
        ppGVar8 = local_d8;
      }
    }
                    /* try { // try from 0097a264 to 0097a26b has its CatchHandler @ 0097a3f8 */
    this_01 = (MeshSplitAttachmentSharedData *)operator_new(0x58);
                    /* try { // try from 0097a278 to 0097a283 has its CatchHandler @ 0097a3d4 */
    MeshSplitAttachmentSharedData::MeshSplitAttachmentSharedData
              (this_01,this_00,(vector *)&local_f0);
                    /* try { // try from 0097a284 to 0097a293 has its CatchHandler @ 0097a3f8 */
    pSVar13 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(pSVar13,(Streamable *)this_01,param_3);
                    /* try { // try from 0097a294 to 0097a29b has its CatchHandler @ 0097a400 */
    this_02 = (MeshSplitAttachmentGeometry *)operator_new(0xa8);
                    /* try { // try from 0097a2a0 to 0097a2af has its CatchHandler @ 0097a3d0 */
    MeshSplitAttachmentGeometry(this_02,param_1,(vector *)&local_108,this_01);
                    /* try { // try from 0097a2b0 to 0097a2c7 has its CatchHandler @ 0097a400 */
    pSVar13 = (StreamManager *)StreamManager::getInstance();
    StreamManager::addStreamable(pSVar13,(Streamable *)(this_02 + 0x58),param_3);
    pGVar18 = (GsShape *)operator_new(0x200);
                    /* try { // try from 0097a2cc to 0097a2d7 has its CatchHandler @ 0097a3c0 */
    GsShape::GsShape(pGVar18,param_1,(Geometry *)this_02);
                    /* try { // try from 0097a2dc to 0097a2f3 has its CatchHandler @ 0097a400 */
    GsShape::setShapeFlags(pGVar18,local_138 & 0x100);
    ppGVar8 = local_d8;
    GsShape::copyShapePropertiesFrom(pGVar18,*local_d8);
    uStack_b8 = 0;
    local_c0 = 0x3f800000;
    uStack_a8 = 0;
    uStack_b0 = 0x3f80000000000000;
    uStack_98 = 0x3f800000;
    local_a0 = 0;
    uStack_88 = 0x3f80000000000000;
    uStack_90 = 0;
                    /* try { // try from 0097a31c to 0097a32b has its CatchHandler @ 0097a3bc */
    RawTransformGroup::setTransformation((RawTransformGroup *)pGVar18,(Matrix4x4 *)&local_c0,0);
    if (local_108 != (void *)0x0) {
      local_100 = local_108;
      operator_delete(local_108);
    }
    if (local_f0 != (void *)0x0) {
      local_e8 = local_f0;
      operator_delete(local_f0);
    }
  }
  pGVar10 = pGVar18;
  operator_delete(ppGVar8);
LAB_0097a358:
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pGVar10);
  }
  return;
}


