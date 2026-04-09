// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startEffect
// Entry Point: 0074c134
// Size: 688 bytes
// Signature: undefined __thiscall startEffect(CollisionEffectManager * this, ContactReport * param_1, EffectModel * param_2, bool param_3)


/* CollisionEffectManager::startEffect(CollisionEffectManager::ContactReport const&,
   CollisionEffectManager::EffectModel const&, bool) */

void __thiscall
CollisionEffectManager::startEffect
          (CollisionEffectManager *this,ContactReport *param_1,EffectModel *param_2,bool param_3)

{
  float *pfVar1;
  uint uVar2;
  EffectModel **ppEVar3;
  long lVar4;
  pair pVar5;
  long *plVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  void *__src;
  long **pplVar12;
  float fVar13;
  float fVar14;
  ulong local_98;
  ulong uStack_90;
  ulong *local_80;
  long local_78;
  ulong uVar6;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar6 = *(ulong *)param_1;
  uStack_90 = *(ulong *)(param_1 + 8);
  local_98 = uStack_90;
  if (uVar6 <= uStack_90) {
    local_98 = uVar6;
  }
  if (uStack_90 <= uVar6) {
    uStack_90 = uVar6;
  }
  local_80 = &local_98;
  pVar5 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,CollisionEffectManager::PlayingEffectKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>,std::__ndk1::equal_to<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::vector<CollisionEffectManager::EffectInstance,std::__ndk1::allocator<CollisionEffectManager::EffectInstance>>>>>
          ::
          __emplace_unique_key_args<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<TransformGroup_const*,TransformGroup_const*>const&>,std::__ndk1::tuple<>>
                    ((pair *)(this + 0x38),(piecewise_construct_t *)&local_98,(tuple *)&DAT_005178dc
                     ,(tuple *)&local_80);
  uVar6 = (ulong)pVar5;
  if ((ulong)(*(long *)(uVar6 + 0x28) - (long)*(void **)(uVar6 + 0x20)) < 0x41) {
    uVar8 = *(ulong *)(this + 0x30);
    plVar7 = (long *)(param_2 + 0x18);
    if (!param_3) {
      plVar7 = (long *)(param_2 + 0x30);
    }
    *(ulong *)(this + 0x30) = uVar8 * 0x5851f42d4c957f2d + -0x2152ecc841109800;
    uVar11 = (uint)(uVar8 >> 0x20);
    uVar2 = uVar11 >> 0xd ^ (uint)(uVar8 >> 0x1b);
    uVar11 = uVar11 >> 0x1b;
    uVar9 = (ulong)(uVar2 >> uVar11 | uVar2 << 0x20 - uVar11);
    uVar10 = (plVar7[1] - *plVar7 >> 3) * -0x5555555555555555;
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = uVar9 / uVar10;
    }
    pplVar12 = (long **)(*plVar7 + (uVar9 - uVar8 * uVar10) * 0x18);
    pfVar1 = (float *)(param_2 + 4);
    if (!param_3) {
      pfVar1 = (float *)(param_2 + 8);
    }
    plVar7 = (long *)(**(code **)(**pplVar12 + 0x78))();
    fVar13 = *pfVar1;
    fVar14 = (float)NEON_fminnm((*(float *)(param_1 + 0x38) - fVar13) /
                                (*(float *)(param_2 + 0x10) - fVar13),0x3f800000);
    fVar13 = (float)NEON_fminnm((*(float *)(param_1 + 0x38) - fVar13) /
                                (*(float *)(param_2 + 0x14) - fVar13),0x3f800000);
    fVar14 = (float)NEON_fmadd(*(float *)((long)pplVar12 + 0xc) - *(float *)(pplVar12 + 1),
                               fVar14 + 1.0,*(float *)(pplVar12 + 1));
    fVar13 = (float)NEON_fmadd(*(float *)((long)pplVar12 + 0x14) - *(float *)(pplVar12 + 2),
                               fVar13 + 1.0,*(float *)(pplVar12 + 2));
    Sample::setVolume((Sample *)plVar7,fVar14);
    Sample::setPitch((Sample *)plVar7,fVar13);
    Sample::setPosition((Sample *)plVar7,(float *)(param_1 + 0x10));
    (**(code **)(*plVar7 + 0x18))(fVar14,0,0,plVar7,0,0);
    ppEVar3 = *(EffectModel ***)(uVar6 + 0x28);
    if (ppEVar3 == *(EffectModel ***)(uVar6 + 0x30)) {
      __src = *(void **)(uVar6 + 0x20);
      uVar9 = (long)ppEVar3 - (long)__src;
      uVar8 = ((long)uVar9 >> 4) + 1;
      if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar8 <= (ulong)((long)uVar9 >> 3)) {
        uVar8 = (long)uVar9 >> 3;
      }
      if (0x7fffffffffffffef < uVar9) {
        uVar8 = 0xfffffffffffffff;
      }
      if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar8 * 0x10);
      ppEVar3 = (EffectModel **)((long)__dest + ((long)uVar9 >> 4) * 0x10);
      *ppEVar3 = param_2;
      ppEVar3[1] = (EffectModel *)plVar7;
      if (0 < (long)uVar9) {
        memcpy(__dest,__src,uVar9);
      }
      *(void **)(uVar6 + 0x20) = __dest;
      *(EffectModel ***)(uVar6 + 0x28) = ppEVar3 + 2;
      *(void **)(uVar6 + 0x30) = (void *)((long)__dest + uVar8 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppEVar3 = param_2;
      ppEVar3[1] = (EffectModel *)plVar7;
      *(EffectModel ***)(uVar6 + 0x28) = ppEVar3 + 2;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


