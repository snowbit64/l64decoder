// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortAndMergeDefaultPassQueueItems
// Entry Point: 00a2d018
// Size: 1656 bytes
// Signature: undefined __thiscall sortAndMergeDefaultPassQueueItems(RenderQueueItemAllocator * this, ICommandBuffer * param_1, IVertexBuffer * param_2, IStructBuffer * param_3, GeometryRenderInfo * param_4, uint param_5)


/* RenderQueueItemAllocator::sortAndMergeDefaultPassQueueItems(ICommandBuffer*, IVertexBuffer*,
   IStructBuffer*, GeometryRenderInfo const&, unsigned int) */

void __thiscall
RenderQueueItemAllocator::sortAndMergeDefaultPassQueueItems
          (RenderQueueItemAllocator *this,ICommandBuffer *param_1,IVertexBuffer *param_2,
          IStructBuffer *param_3,GeometryRenderInfo *param_4,uint param_5)

{
  float *pfVar1;
  RenderQueueItemSortKey *pRVar2;
  int *piVar3;
  RenderQueueItemSortKey *pRVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  RenderPathManager *this_00;
  long lVar9;
  long lVar10;
  void *__dest;
  Logger *this_01;
  long *plVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  void *__src;
  ulong uVar19;
  long lVar20;
  int *piVar21;
  uint uVar22;
  ulong uVar23;
  void **ppvVar24;
  ulong uVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  ulong uVar29;
  MaterialShader **ppMVar30;
  int iVar31;
  int iVar32;
  long local_90;
  SortForRendering aSStack_80 [8];
  SortForRendering aSStack_78 [8];
  SortForRendering aSStack_70 [8];
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  this_00 = (RenderPathManager *)RenderPathManager::getInstance();
  lVar9 = RenderPathManager::getRenderPassMaterialAttributes(this_00,**(uint **)(this + 0x30));
  MaterialShaderManager::getInstance();
  if (*(char *)(lVar9 + 5) == '\0') {
    std::__ndk1::
    __sort<RenderQueueItemSortKey::SortForRendering<false,true>&,RenderQueueItemSortKey*>
              (**(RenderQueueItemSortKey ***)(this + 0x60),
               (*(RenderQueueItemSortKey ***)(this + 0x60))[1],aSStack_80);
  }
  else {
    pRVar2 = **(RenderQueueItemSortKey ***)(this + 0x60);
    pRVar4 = (*(RenderQueueItemSortKey ***)(this + 0x60))[1];
    if ((*(char *)(lVar9 + 2) == '\0') && (*(int *)(this + 0x28) != 4)) {
      std::__ndk1::
      __sort<RenderQueueItemSortKey::SortForRendering<false,false>&,RenderQueueItemSortKey*>
                (pRVar2,pRVar4,aSStack_70);
    }
    else {
      std::__ndk1::
      __sort<RenderQueueItemSortKey::SortForRendering<true,false>&,RenderQueueItemSortKey*>
                (pRVar2,pRVar4,aSStack_78);
    }
  }
  lVar9 = **(long **)(this + 0x60);
  uVar23 = ((*(long **)(this + 0x60))[1] - lVar9 >> 3) * -0x3333333333333333;
  if (param_3 == (IStructBuffer *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = (**(code **)(*(long *)param_3 + 0x10))(param_3,param_1,0,*(undefined4 *)this,1);
  }
  uVar22 = (uint)uVar23;
  lVar10 = (**(code **)(*(long *)param_2 + 0x10))(param_2,param_1,0,uVar22 << 2,1);
  (*(undefined8 **)(this + 0x50))[1] = **(undefined8 **)(this + 0x50);
  if (uVar22 != 0) {
    uVar29 = 0;
    iVar32 = 0;
    iVar27 = 0;
    iVar26 = 0;
    do {
      lVar28 = **(long **)(this + 0x58);
      uVar25 = (ulong)*(uint *)(lVar9 + uVar29 * 0x28 + 0x24) & 0x3fffffff;
      iVar8 = *(int *)(lVar28 + uVar25 * 0xf0 + 0x30);
      if (iVar8 == 0) {
        lVar18 = lVar28 + uVar25 * 0xf0;
        uVar16 = *(uint *)(lVar18 + 0x34);
        *(int *)(lVar18 + 0xa4) = (int)uVar29;
        *(int *)(lVar18 + 0xa8) = iVar32;
        *(uint *)(lVar18 + 0x34) = uVar16 + 1;
        *(IVertexBuffer **)(lVar18 + (ulong)uVar16 * 8 + 0x38) = param_2;
        *(int *)(lVar10 + uVar29 * 4) = iVar32;
      }
      else {
        lVar18 = lVar28 + uVar25 * 0xf0;
        *(int *)(lVar18 + 0xa4) = (int)uVar29;
        *(int *)(lVar18 + 0xa8) = iVar32;
        *(int *)(lVar10 + uVar29 * 4) = iVar32;
        if (iVar8 == 1) {
          piVar21 = (int *)(lVar28 + uVar25 * 0xf0 + 200);
          iVar8 = *piVar21;
          iVar31 = iVar8;
          if (param_5 < (uint)(iVar8 + iVar26)) {
            iVar31 = param_5 - iVar26;
            iVar27 = (iVar27 - iVar31) + iVar8;
            *piVar21 = iVar31;
          }
          if (iVar31 != 0) {
            ppvVar24 = *(void ***)(this + 0x50);
            iVar8 = *(int *)(lVar28 + uVar25 * 0xf0 + 0xc4);
            piVar3 = (int *)ppvVar24[1];
            if (piVar3 == (int *)ppvVar24[2]) {
              __src = *ppvVar24;
              uVar14 = (long)piVar3 - (long)__src;
              uVar19 = ((long)uVar14 >> 4) + 1;
              if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar19 <= (ulong)((long)uVar14 >> 3)) {
                uVar19 = (long)uVar14 >> 3;
              }
              if (0x7fffffffffffffef < uVar14) {
                uVar19 = 0xfffffffffffffff;
              }
              if (uVar19 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                            );
              }
              __dest = operator_new(uVar19 * 0x10);
              piVar3 = (int *)((long)__dest + ((long)uVar14 >> 4) * 0x10);
              piVar3[2] = iVar31;
              piVar3[3] = iVar32;
              *piVar3 = iVar26;
              piVar3[1] = iVar8;
              if (0 < (long)uVar14) {
                memcpy(__dest,__src,uVar14);
              }
              *ppvVar24 = __dest;
              ppvVar24[1] = piVar3 + 4;
              ppvVar24[2] = (void *)((long)__dest + uVar19 * 0x10);
              if (__src != (void *)0x0) {
                operator_delete(__src);
              }
            }
            else {
              *piVar3 = iVar26;
              piVar3[1] = iVar8;
              piVar3[2] = iVar31;
              piVar3[3] = iVar32;
              ppvVar24[1] = piVar3 + 4;
            }
          }
          iVar8 = *piVar21;
          *(int *)(lVar28 + uVar25 * 0xf0 + 0xc4) = iVar26;
          iVar26 = iVar8 + iVar26;
        }
      }
      if (iVar27 != 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00a2d4b0 to 00a2d4b7 has its CatchHandler @ 00a2d6a0 */
          this_01 = (Logger *)operator_new(0x38);
                    /* try { // try from 00a2d4bc to 00a2d4bf has its CatchHandler @ 00a2d690 */
          Logger::Logger(this_01);
          LogManager::getInstance()::singletonLogManager = this_01;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "WARNING: culling instances that do not fit into the instance struct buffer (need %u limit %u; will expand next frame)\n"
                          ,(ulong)(iVar27 + param_5),(ulong)param_5);
      }
      if (local_90 != 0) {
        lVar18 = lVar28 + uVar25 * 0xf0;
        uVar16 = iVar32 << 2;
        ppMVar30 = (MaterialShader **)(lVar9 + uVar29 * 0x28);
        pfVar1 = (float *)(local_90 + (ulong)uVar16 * 4);
        iVar32 = *(uint *)(lVar18 + 0xa0) + iVar32;
        GsShape::writeToStructBuffer
                  (*(GsShape **)(lVar18 + 0x88),pfVar1,*(uint *)(lVar18 + 0xa0),*ppMVar30);
        GsMaterial::writeToStructBuffer
                  (*(GsMaterial **)(lVar18 + 0x90),pfVar1,*(uint *)(lVar18 + 0xa0),*ppMVar30,
                   *(GsShape **)(lVar18 + 0x88),*(RenderArgs **)(this + 0x48),
                   *(float *)(lVar18 + 0xd0),*(float *)(lVar18 + 0xd4));
        uVar6 = *(ushort *)(lVar18 + 0xda);
        if (((uVar6 & 0x7fff) != 0) &&
           (uVar19 = (ulong)*(ushort *)
                             (*ppMVar30 +
                             (ulong)*(ushort *)(lVar28 + uVar25 * 0xf0 + 0xd8) * 2 + 0xe),
           uVar19 != 0xffff)) {
          if ((short)uVar6 < 0) {
            memcpy(pfVar1 + uVar19,*(void **)(lVar28 + uVar25 * 0xf0 + 0xe0),
                   (ulong)(uVar6 & 0x7fff) << 2);
          }
          else {
            uVar14 = 0;
            do {
              lVar20 = uVar14 * 4;
              uVar14 = uVar14 + 1;
              *(undefined4 *)(local_90 + (uVar19 + uVar16) * 4 + lVar20) =
                   *(undefined4 *)(lVar28 + uVar25 * 0xf0 + 0xe0 + lVar20);
            } while (uVar14 < ((ulong)*(ushort *)(lVar18 + 0xda) & 0x7fff));
          }
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != (uVar23 & 0xffffffff));
  }
  if (param_3 != (IStructBuffer *)0x0) {
    (**(code **)(*(long *)param_3 + 0x18))(param_3,param_1);
  }
  (**(code **)(*(long *)param_2 + 0x18))(param_2,param_1);
  if (uVar22 != 0) {
    uVar16 = 0;
    plVar15 = *(long **)(this + 0x58);
    do {
      uVar5 = *(uint *)(lVar9 + (ulong)uVar16 * 0x28 + 0x24);
      uVar17 = uVar16;
      if ((int)uVar5 < 0) {
        uVar29 = (ulong)uVar5 & 0x3fffffff;
        lVar10 = *plVar15;
        uVar5 = uVar16 + 1;
        if ((uVar5 < uVar22) &&
           (uVar12 = *(uint *)(lVar9 + (ulong)uVar5 * 0x28 + 0x24), (int)uVar12 < 0)) {
          lVar18 = ((uVar23 & 0xffffffff) - 1) - (ulong)uVar5;
          plVar11 = (long *)(lVar9 + (ulong)uVar16 * 0x28);
          piVar21 = (int *)(lVar10 + uVar29 * 0xf0 + 200);
          lVar28 = plVar11[3];
          puVar13 = (uint *)(lVar9 + 0x4c + (ulong)uVar5 * 0x28);
          uVar5 = uVar16;
          do {
            uVar17 = uVar5;
            if ((((lVar28 != *(long *)(puVar13 + -0xd)) || (*plVar11 != *(long *)(puVar13 + -0x13)))
                || (plVar11[1] != *(long *)(puVar13 + -0x11))) ||
               ((plVar11[2] != *(long *)(puVar13 + -0xf) ||
                (*piVar21 = *piVar21 + *(int *)(lVar10 + (ulong)(uVar12 & 0x3fffffff) * 0xf0 + 200),
                uVar17 = uVar22 - 1, lVar18 == 0)))) break;
            uVar12 = *puVar13;
            uVar17 = uVar5 + 1;
            lVar18 = lVar18 + -1;
            puVar13 = puVar13 + 10;
            uVar5 = uVar17;
          } while ((int)uVar12 < 0);
        }
        *(uint *)(lVar10 + uVar29 * 0xf0 + 0x9c) = (uVar17 - uVar16) + 1;
      }
      uVar16 = uVar17 + 1;
    } while (uVar16 < uVar22);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


