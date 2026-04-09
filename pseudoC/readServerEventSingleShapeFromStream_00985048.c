// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerEventSingleShapeFromStream
// Entry Point: 00985048
// Size: 1632 bytes
// Signature: undefined __thiscall readServerEventSingleShapeFromStream(MeshSplitManager * this, GsBitStream * param_1, uint param_2)


/* MeshSplitManager::readServerEventSingleShapeFromStream(GsBitStream*, unsigned int) */

undefined4 __thiscall
MeshSplitManager::readServerEventSingleShapeFromStream
          (MeshSplitManager *this,GsBitStream *param_1,uint param_2)

{
  MeshSplitManager *pMVar1;
  undefined2 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  GsShape *pGVar11;
  RawTransformGroup *this_00;
  Bt2ScenegraphPhysicsContext *this_01;
  MeshSplitManager *pMVar12;
  MeshSplitManager *pMVar13;
  MeshSplitManager **ppMVar14;
  MeshSplitManager **ppMVar15;
  MeshSplitManager **ppMVar16;
  undefined4 uVar17;
  long lVar18;
  long **pplVar19;
  MeshSplitShape *pMVar20;
  long lVar21;
  Node *pNVar22;
  long **local_198;
  long **local_190;
  bool local_17c [4];
  void *local_178;
  void *local_170;
  ushort local_160 [2];
  ushort local_15c [2];
  uint local_158;
  uint local_154;
  Matrix4x4 aMStack_150 [64];
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_d0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  Vector3 aVStack_78 [8];
  uchar auStack_70 [8];
  Vector3 aVStack_68 [8];
  uchar auStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar7 = GsBitStream::readBits(param_1,(uchar *)&local_154,0x20,true);
  if ((((uVar7 & 1) != 0) &&
      (uVar7 = GsBitStream::readBits(param_1,(uchar *)&local_158,0x20,true), (uVar7 & 1) != 0)) &&
     (uVar7 = GsBitStream::readBits(param_1,(uchar *)local_15c,0x10,true), (uVar7 & 1) != 0)) {
    uVar7 = GsBitStream::readBits(param_1,(uchar *)aVStack_68,0x20,true);
    if ((((uVar7 & 1) != 0) &&
        (uVar7 = GsBitStream::readBits(param_1,(uchar *)((ulong)aVStack_68 | 4),0x20,true),
        (uVar7 & 1) != 0)) &&
       (uVar7 = GsBitStream::readBits(param_1,auStack_60,0x20,true), (uVar7 & 1) != 0)) {
      uVar7 = GsBitStream::readBits(param_1,(uchar *)aVStack_78,0x20,true);
      if ((((uVar7 & 1) != 0) &&
          (uVar7 = GsBitStream::readBits(param_1,(uchar *)((ulong)aVStack_78 | 4),0x20,true),
          (uVar7 & 1) != 0)) &&
         ((uVar7 = GsBitStream::readBits(param_1,auStack_70,0x20,true), (uVar7 & 1) != 0 &&
          (uVar7 = GsBitStream::readBits(param_1,(uchar *)local_160,0x10,true), (uVar7 & 1) != 0))))
      {
        std::__ndk1::
        vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
        ::vector((vector<MeshSplitAttachmentGeometry::ShapeAttachment,std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment>>
                  *)&local_178,(ulong)local_160[0]);
        if (local_160[0] != 0) {
          lVar18 = 0;
          uVar7 = 0;
          do {
                    /* try { // try from 00985198 to 009851c3 has its CatchHandler @ 00985708 */
            uVar8 = GsBitStream::readBits(param_1,(uchar *)local_d0,0x10,true);
            if (((uVar8 & 1) == 0) ||
               (uVar8 = GsBitStream::readBits(param_1,(uchar *)&local_110,0x10,true),
               (uVar8 & 1) == 0)) goto LAB_00985214;
            uVar7 = uVar7 + 1;
            puVar2 = (undefined2 *)((long)local_178 + lVar18);
            lVar18 = lVar18 + 4;
            *puVar2 = local_d0[0];
            puVar2[1] = (undefined2)local_110;
          } while (uVar7 < local_160[0]);
        }
        local_17c[0] = false;
                    /* try { // try from 009851f8 to 00985203 has its CatchHandler @ 009856d4 */
        plVar9 = (long *)BrepUtil::readBrepFromStream(param_1,local_17c);
        if ((plVar9 == (long *)0x0) && (local_17c[0] == false)) {
LAB_00985214:
          uVar17 = 0;
        }
        else {
                    /* try { // try from 00985254 to 0098525b has its CatchHandler @ 009856d0 */
          std::__ndk1::vector<Brep*,std::__ndk1::allocator<Brep*>>::vector
                    ((vector<Brep*,std::__ndk1::allocator<Brep*>> *)&local_198,(ulong)local_15c[0]);
          bVar5 = plVar9 != (long *)0x0;
          if (local_15c[0] != 0) {
            uVar7 = 0;
LAB_00985288:
                    /* try { // try from 00985288 to 00985293 has its CatchHandler @ 009856d8 */
            plVar10 = (long *)BrepUtil::readBrepFromStream(param_1,local_17c);
            local_198[uVar7] = plVar10;
            if (local_198[uVar7] != (long *)0x0) goto LAB_00985278;
            if (local_17c[0] != false) {
              bVar5 = false;
              goto LAB_00985278;
            }
            if ((int)uVar7 != 0) {
              lVar18 = 0;
              plVar10 = *local_198;
              while( true ) {
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 8))();
                }
                if (uVar7 - 1 == lVar18) break;
                lVar18 = lVar18 + 1;
                plVar10 = local_198[lVar18];
              }
            }
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
            uVar17 = 0;
            goto LAB_00985680;
          }
LAB_0098530c:
          pMVar13 = *(MeshSplitManager **)(this + 0x128);
          pMVar1 = this + 0x128;
          pMVar12 = pMVar1;
          if (pMVar13 == (MeshSplitManager *)0x0) {
LAB_00985348:
            pMVar12 = pMVar1;
          }
          else {
            do {
              if (*(uint *)(pMVar13 + 0x1c) >= param_2) {
                pMVar12 = pMVar13;
              }
              pMVar13 = *(MeshSplitManager **)
                         (pMVar13 + (ulong)(*(uint *)(pMVar13 + 0x1c) < param_2) * 8);
            } while (pMVar13 != (MeshSplitManager *)0x0);
            if ((pMVar12 == pMVar1) || (param_2 < *(uint *)(pMVar12 + 0x1c))) goto LAB_00985348;
          }
          if (bVar5) {
            ppMVar14 = (MeshSplitManager **)(this + 200);
            ppMVar15 = (MeshSplitManager **)*ppMVar14;
            ppMVar16 = ppMVar14;
            if (ppMVar15 == (MeshSplitManager **)0x0) {
LAB_009853e8:
              if (pMVar12 == pMVar1) goto LAB_00985394;
            }
            else {
              do {
                if (*(uint *)(ppMVar15 + 4) >= local_154) {
                  ppMVar16 = ppMVar15;
                }
                ppMVar15 = (MeshSplitManager **)ppMVar15[*(uint *)(ppMVar15 + 4) < local_154];
              } while (ppMVar15 != (MeshSplitManager **)0x0);
              if (ppMVar16 == ppMVar14) goto LAB_009853e8;
              if (*(uint *)(ppMVar16 + 4) <= local_154 || pMVar12 == pMVar1) goto LAB_00985394;
            }
            lVar18 = *(long *)(this + 0x60);
            uVar7 = *(long *)(this + 0x68) - lVar18;
            if ((int)(uVar7 >> 3) != 0) {
              lVar21 = 0;
              uVar3 = *(uint *)(pMVar12 + 0x20);
              while( true ) {
                pMVar20 = *(MeshSplitShape **)(lVar18 + lVar21);
                    /* try { // try from 00985440 to 00985447 has its CatchHandler @ 009856cc */
                if (((*(uint *)(pMVar20 + 0x208) == uVar3) &&
                    (*(uint *)(pMVar20 + 0x20c) == local_158)) &&
                   ((local_160[0] == 0 || (lVar18 = getAttachmentShape(pMVar20), lVar18 != 0)))) {
                  pNVar22 = *(Node **)(pMVar20 + 0x20);
                  if (((byte)pNVar22[0x10] >> 6 & 1) != 0) {
                    pNVar22 = *(Node **)(pNVar22 + 0x20);
                  }
                    /* try { // try from 009854c0 to 009854c7 has its CatchHandler @ 009856bc */
                  pGVar11 = (GsShape *)getAttachmentShape(pMVar20);
                  local_80 = 0x35a00000;
                  uStack_88 = 0x8000000000000000;
                  local_90 = 0x3f80000000000000;
                    /* try { // try from 009854e8 to 009854f3 has its CatchHandler @ 009856b8 */
                  iVar6 = Brep::classify((Brep *)plVar9,(BrepPlane *)&local_90);
                    /* try { // try from 0098550c to 00985543 has its CatchHandler @ 009856c0 */
                  this_00 = (RawTransformGroup *)
                            createNewShape(this,pNVar22,pMVar20,local_154,uVar3,local_158,iVar6 != 3
                                           ,(Brep *)plVar9,
                                           (uint)((ulong)((long)local_190 - (long)local_198) >> 3),
                                           (Brep **)local_198,pGVar11,(vector *)&local_178,true,
                                           false,1);
                  if (this_00 == (RawTransformGroup *)0x0) {
                    FUN_00f276d0(1,plVar9 + 1);
                    iVar6 = FUN_00f27700(0xffffffff,plVar9 + 1);
                    if (iVar6 < 2) {
                    /* try { // try from 009855c0 to 009855c7 has its CatchHandler @ 009856c0 */
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                    if (local_190 != local_198) {
                      uVar7 = 0;
                      do {
                        pplVar19 = local_198;
                        FUN_00f276d0(1,local_198[uVar7] + 1);
                        plVar9 = pplVar19[uVar7];
                        iVar6 = FUN_00f27700(0xffffffff,plVar9 + 1);
                        if (iVar6 < 2) {
                    /* try { // try from 00985624 to 0098562b has its CatchHandler @ 009856c8 */
                          (**(code **)(*plVar9 + 0x10))(plVar9);
                        }
                        uVar7 = (ulong)((int)uVar7 + 1);
                      } while (uVar7 < (ulong)((long)local_190 - (long)local_198 >> 3));
                    }
                  }
                  else {
                    local_110 = NEON_fmov(0x3f800000,4);
                    local_108 = 0x3f800000;
                    /* try { // try from 0098555c to 0098556f has its CatchHandler @ 009856b4 */
                    Matrix4x4::Matrix4x4
                              ((Matrix4x4 *)local_d0,aVStack_78,(Vector3 *)&local_110,aVStack_68);
                    lVar18 = *(long *)(this_00 + 0x20);
                    if ((lVar18 == 0) || ((*(byte *)(lVar18 + 0x10) >> 5 & 1) == 0)) {
                    /* try { // try from 00985580 to 0098558f has its CatchHandler @ 009856b0 */
                      RawTransformGroup::setTransformation(this_00,(Matrix4x4 *)local_d0,0);
                    }
                    else {
                    /* try { // try from 00985630 to 00985643 has its CatchHandler @ 009856ac */
                      RawTransformGroup::updateWorldTransformation();
                      Matrix4x4::invert3x4((Matrix4x4 *)&local_110,(Matrix4x4 *)(lVar18 + 0xb8));
                      Matrix4x4::mult3x4(aMStack_150,(Matrix4x4 *)&local_110,(Matrix4x4 *)local_d0);
                    /* try { // try from 00985654 to 00985663 has its CatchHandler @ 009856a8 */
                      RawTransformGroup::setTransformation(this_00,aMStack_150,0);
                    }
                    /* try { // try from 00985664 to 00985673 has its CatchHandler @ 009856c4 */
                    ScenegraphPhysicsContextManager::getInstance();
                    this_01 = (Bt2ScenegraphPhysicsContext *)
                              ScenegraphPhysicsContextManager::getContext();
                    Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup
                              (this_01,(TransformGroup *)this_00);
                  }
                  goto LAB_00985674;
                }
                if ((uVar7 >> 3 & 0xffffffff) * 8 + -8 == lVar21) break;
                lVar18 = *(long *)(this + 0x60);
                lVar21 = lVar21 + 8;
              }
            }
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
            pplVar19 = local_198;
            if (local_198 == local_190) {
              uVar17 = 1;
            }
            else {
              do {
                if (*pplVar19 != (long *)0x0) {
                  (**(code **)(**pplVar19 + 8))();
                }
                pplVar19 = pplVar19 + 1;
              } while (pplVar19 != local_190);
LAB_00985674:
              uVar17 = 1;
            }
          }
          else {
LAB_00985394:
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
            pplVar19 = local_198;
            if (local_198 == local_190) {
              uVar17 = 1;
            }
            else {
              do {
                if (*pplVar19 != (long *)0x0) {
                  (**(code **)(**pplVar19 + 8))();
                }
                pplVar19 = pplVar19 + 1;
              } while (pplVar19 != local_190);
              uVar17 = 1;
            }
          }
LAB_00985680:
          if (local_198 != (long **)0x0) {
            operator_delete(local_198);
          }
        }
        if (local_178 != (void *)0x0) {
          local_170 = local_178;
          operator_delete(local_178);
        }
        goto LAB_00985220;
      }
    }
  }
  uVar17 = 0;
LAB_00985220:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00985278:
  uVar7 = uVar7 + 1;
  if (local_15c[0] <= uVar7) goto LAB_0098530c;
  goto LAB_00985288;
}


