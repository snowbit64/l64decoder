// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocate
// Entry Point: 00a2bd58
// Size: 1116 bytes
// Signature: undefined __thiscall allocate(RenderQueueItemAllocator * this, uint param_1, bool param_2, uint param_3, UvDensitySet * param_4, RenderQueueItem * * param_5, RenderQueueItemSortKey * * param_6)


/* RenderQueueItemAllocator::allocate(unsigned int, bool, unsigned int, UvDensitySet const&,
   RenderQueueItem*&, RenderQueueItemSortKey*&) */

void __thiscall
RenderQueueItemAllocator::allocate
          (RenderQueueItemAllocator *this,uint param_1,bool param_2,uint param_3,
          UvDensitySet *param_4,RenderQueueItem **param_5,RenderQueueItemSortKey **param_6)

{
  uint uVar1;
  GsMaterial **ppGVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  MaterialShaderManager *this_00;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  GsMaterial *this_01;
  long lVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar13 = *(long *)(this + 0x38);
  ppGVar2 = (GsMaterial **)(lVar13 + 0x178);
  if (*(short *)(lVar13 + 0x196) != 1) {
    ppGVar2 = (GsMaterial **)(*(long *)(lVar13 + 0x178) + (ulong)param_1 * 8);
  }
  this_01 = *ppGVar2;
  uVar9 = GsMaterial::getLodLevel(this_01,*(float *)(this + 0x10));
  uVar12 = GsMaterial::getMaterialAttributesHash(this_01,**(uint **)(this + 0x30),uVar9);
  if (uVar12 != 0) {
    uVar9 = param_3 | 0x400;
    uVar10 = GsMaterial::getRequiredVertexAttributes();
    if ((uVar10 & (uVar9 ^ 0xffffffff)) == 0) {
      this_00 = (MaterialShaderManager *)MaterialShaderManager::getInstance();
      uStack_c8 = *(undefined8 *)(this + 0x20);
      local_d0 = uVar12;
      lVar13 = MaterialShaderManager::getShader(this_00,(MaterialShaderHash *)&local_d0,uVar9);
      if (lVar13 != 0) {
        uVar4 = *(ushort *)(lVar13 + 0xc);
        iVar11 = GsShape::getExtraStructBufferRows();
        iVar11 = iVar11 + (uint)uVar4;
        *(int *)this = *(int *)this + iVar11;
        std::__ndk1::vector<RenderQueueItem,std::__ndk1::allocator<RenderQueueItem>>::emplace_back<>
                  ();
        std::__ndk1::vector<RenderQueueItemSortKey,std::__ndk1::allocator<RenderQueueItemSortKey>>::
        emplace_back<>();
        *param_5 = (RenderQueueItem *)(*(long *)(*(long *)(this + 0x58) + 8) + -0xf0);
        *param_6 = (RenderQueueItemSortKey *)(*(long *)(*(long *)(this + 0x60) + 8) + -0x28);
        lVar14 = *(long *)(*(long *)(this + 0x58) + 8);
        lVar17 = *(long *)(*(long *)(this + 0x60) + 8);
        *(undefined4 *)(lVar14 + -0xc0) = 0;
        lVar16 = *(long *)(this + 0x38);
        *(long *)(lVar14 + -0x68) = lVar16;
        *(GsMaterial **)(lVar14 + -0x60) = this_01;
        uVar19 = *(undefined8 *)(this + 0x14);
        *(uint *)(lVar14 + -0x90) = uVar9;
        *(undefined8 *)(lVar14 + -0x78) = 0;
        *(undefined8 *)(lVar14 + -0x70) = 0;
        *(undefined8 *)(lVar14 + -0x38) = 0;
        *(undefined8 *)(lVar14 + -0x40) = 0;
        *(undefined8 *)(lVar14 + -0x28) = 0;
        *(undefined8 *)(lVar14 + -0x30) = 0;
        *(undefined4 *)(lVar14 + -0x54) = 1;
        *(int *)(lVar14 + -0x50) = iVar11;
        *(undefined8 *)(lVar14 + -0x20) = uVar19;
        uStack_98 = *(undefined8 *)(lVar16 + 0xe0);
        local_a0 = *(undefined8 *)(lVar16 + 0xd8);
        uStack_b8 = *(undefined8 *)(lVar16 + 0xc0);
        local_c0 = *(undefined8 *)(lVar16 + 0xb8);
        uStack_a8 = *(undefined8 *)(lVar16 + 0xd0);
        uStack_b0 = *(undefined8 *)(lVar16 + 200);
        local_88._0_4_ = (float)*(undefined8 *)(lVar16 + 0xf0);
        uVar19 = *(undefined8 *)(*(long *)(this + 0x48) + 0x354);
        local_90 = CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20) -
                            (float)((ulong)uVar19 >> 0x20),
                            (float)*(undefined8 *)(lVar16 + 0xe8) - (float)uVar19);
        local_88 = CONCAT44((int)((ulong)*(undefined8 *)(lVar16 + 0xf0) >> 0x20),
                            (float)local_88 - *(float *)(*(long *)(this + 0x48) + 0x35c));
        ShaderStructLayout::setMatrix3x4((float *)(lVar14 + -0xf0),(Matrix4x4 *)&local_c0);
        bVar8 = GsMaterial::getIsAlphaTested();
        uVar9 = 0x80000000;
        if (!param_2) {
          uVar9 = 0;
        }
        uVar9 = uVar9 | (int)((ulong)((*(long **)(this + 0x58))[1] - **(long **)(this + 0x58)) >> 4)
                        * -0x11111111 - 1U & 0x3fffffff;
        *(uint *)(lVar17 + -4) = uVar9 | *(uint *)(lVar17 + -4) & 0x40000000;
        uVar10 = 0x40000000;
        if ((bVar8 & 1 | 0.0 < *(float *)(this + 0x14)) == 0) {
          uVar10 = 0;
        }
        *(uint *)(lVar17 + -4) = uVar9 | uVar10;
        uVar19 = *(undefined8 *)(this_01 + 0x168);
        *(long *)(lVar17 + -0x28) = lVar13;
        *(undefined8 *)(lVar17 + -0x18) = uVar19;
        *(undefined8 *)(lVar17 + -0x20) = *(undefined8 *)(this + 8);
        *(undefined4 *)(lVar17 + -8) = *(undefined4 *)(this + 0x10);
        if ((*(long *)(this + 0x88) != 0) && ((*(int *)(this + 0x28) == 0 & (bVar8 ^ 0xff)) == 0)) {
          fVar20 = *(float *)(*(long *)(this + 0x38) + 0x1b0);
          lVar14 = Geometry::getBoundingVolume();
          RenderQueueUtil::prepareTextureUsage
                    (this_01,param_4,*(float *)(this + 0x10),*(float *)(this + 0x98),
                     *(float *)(this + 0xa0),*(float *)(this + 0x9c),*(ulonglong *)(this + 0x90),
                     fVar20,fVar20 / *(float *)(lVar14 + 0x18),*(unordered_map **)(this + 0x88));
        }
      }
      uVar12 = (ulong)(lVar13 != 0);
    }
    else if ((DAT_02112c92 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0
         )) {
                    /* try { // try from 00a2c178 to 00a2c183 has its CatchHandler @ 00a2c1b4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: \'%s\' (%s) doesn\'t have all required vertex attributes for material \'%s\'.\n"
                         ,*(undefined8 *)(*(long *)(this + 0x38) + 8),
                         *(undefined8 *)(*(long *)(this + 0x40) + 0x18),*(undefined8 *)(this_01 + 8)
                        );
      while (uVar10 != 0) {
        uVar1 = uVar10 - 1 & uVar10;
        uVar3 = uVar1 ^ uVar10;
        uVar10 = uVar1;
        if ((uVar3 & uVar9) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar11 != 0)) {
                    /* try { // try from 00a2c100 to 00a2c107 has its CatchHandler @ 00a2c1b8 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          uVar19 = NEON_cnt((ulong)uVar3,1);
          uVar18 = NEON_uaddlv(uVar19,1);
          if ((int)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) == 1) {
            bVar7 = (uVar3 & 0xffff0000) != 0;
            uVar1 = uVar3 >> 0x10;
            if (!bVar7) {
              uVar1 = uVar3;
            }
            uVar15 = (uint)bVar7;
            uVar3 = uVar15 << 4 | 8;
            uVar6 = uVar1 >> 8;
            if (uVar1 < 0x100) {
              uVar3 = uVar15 << 4;
              uVar6 = uVar1;
            }
            uVar1 = uVar3 | 4;
            uVar15 = uVar6 >> 4;
            if (uVar6 < 0x10) {
              uVar1 = uVar3;
              uVar15 = uVar6;
            }
            uVar3 = uVar1 | 2;
            uVar6 = uVar15 >> 2;
            if (uVar15 < 4) {
              uVar3 = uVar1;
              uVar6 = uVar15;
            }
            uVar1 = (uVar6 + uVar3) - 1;
          }
          else {
            uVar1 = 0;
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             " - Geometry lacks %s data, which is required by the material.\n",
                             (&VertexDeclarationDesc::
                               getVertexAttributeName(VertexDeclarationDesc::VERTEX_ATTRIBUTES)::
                               names)[uVar1]);
        }
      }
      uVar12 = 0;
      DAT_02112c92 = 1;
    }
    else {
      uVar12 = 0;
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}


