// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementRaycastObjectsMask
// Entry Point: 009dbc50
// Size: 6644 bytes
// Signature: undefined __thiscall ProceduralPlacementRaycastObjectsMask(ProceduralPlacementRaycastObjectsMask * this, set * param_1, set * param_2, float param_3, uint param_4)


/* ProceduralPlacementRaycastObjectsMask::ProceduralPlacementRaycastObjectsMask(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   std::__ndk1::set<TransformGroup*, std::__ndk1::less<TransformGroup*>,
   std::__ndk1::allocator<TransformGroup*> >&, float, unsigned int) */

void __thiscall
ProceduralPlacementRaycastObjectsMask::ProceduralPlacementRaycastObjectsMask
          (ProceduralPlacementRaycastObjectsMask *this,set *param_1,set *param_2,float param_3,
          uint param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  TransformGroup *pTVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  basic_string *pbVar11;
  ulong uVar12;
  void **ppvVar13;
  undefined8 *puVar14;
  size_t sVar15;
  void **ppvVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined8 uVar21;
  ushort local_c0;
  void *local_b0;
  ushort local_a8;
  void *local_98;
  byte local_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined8 uStack_88;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_90 = 0;
  uStack_8f = 0;
  local_a8 = 0;
  local_c0 = 0;
                    /* try { // try from 009dbca0 to 009dbcaf has its CatchHandler @ 009dd6c8 */
  pbVar11 = (basic_string *)&local_c0;
  ProceduralPlacementMask::ProceduralPlacementMask
            ((ProceduralPlacementMask *)this,(basic_string *)&local_90,(basic_string *)&local_a8,
             pbVar11);
  uVar10 = (uint)pbVar11;
  if ((local_c0 & 1) != 0) {
    operator_delete(local_b0);
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  ppvVar13 = (void **)(this + 200);
  *ppvVar13 = (void *)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  puVar14 = (undefined8 *)(this + 0xe8);
  *puVar14 = this + 0xf0;
  *(undefined ***)this = &PTR__ProceduralPlacementRaycastObjectsMask_00fe2740;
  *(undefined8 *)(this + 0xf8) = 0;
  *(ProceduralPlacementRaycastObjectsMask **)(this + 0x100) = this + 0x108;
                    /* try { // try from 009dbd24 to 009dbd3b has its CatchHandler @ 009dd6c4 */
  getRaycastObjectsMaskSignature
            ((ProceduralPlacementRaycastObjectsMask *)param_1,param_2,(set *)(ulong)param_4,param_3,
             uVar10);
  if ((*(byte *)(this + 0x70) & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
  }
  *(undefined8 *)(this + 0x78) = uStack_88;
  *(ulong *)(this + 0x70) = CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  *(void **)(this + 0x80) = local_80;
  if (puVar14 != (undefined8 *)param_1) {
                    /* try { // try from 009dbd6c to 009dbd8f has its CatchHandler @ 009dd718 */
    std::__ndk1::
    __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>
              ((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
                *)puVar14,(__tree_const_iterator)*(undefined8 *)param_1,(int)param_1 + 8);
  }
  if ((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
       *)(this + 0x100) !=
      (__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
       *)param_2) {
    std::__ndk1::
    __tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<TransformGroup*,std::__ndk1::__tree_node<TransformGroup*,void*>*,long>>
              ((__tree<TransformGroup*,std::__ndk1::less<TransformGroup*>,std::__ndk1::allocator<TransformGroup*>>
                *)(this + 0x100),(__tree_const_iterator)*(undefined8 *)param_2,(int)param_2 + 8);
  }
  *(float *)(this + 0x118) = param_3;
  switch(param_4 - 2 >> 1 | param_4 << 0x1f) {
  case 0:
    puVar14 = *(undefined8 **)(this + 0xd0);
    if (puVar14 < *(undefined8 **)(this + 0xd8)) {
      uVar21 = NEON_fmov(0x3e800000,4);
      puVar17 = puVar14 + 1;
      *puVar14 = uVar21;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar14 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3dc to 009dd3e3 has its CatchHandler @ 009dd6b8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd408 to 009dd413 has its CatchHandler @ 009dd6b8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dbf5c to 009dbf5f has its CatchHandler @ 009dd6b8 */
      pvVar4 = operator_new(uVar8 << 3);
      uVar21 = NEON_fmov(0x3e800000,4);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = uVar21;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar17 < *(undefined8 **)(this + 0xd8)) {
      uVar21 = NEON_fmov(0xbe800000,4);
      break;
    }
    pvVar7 = *ppvVar13;
    sVar15 = (long)puVar17 - (long)pvVar7;
    uVar8 = ((long)sVar15 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd440 to 009dd447 has its CatchHandler @ 009dd6a4 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
    uVar12 = (long)uVar9 >> 2;
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd464 to 009dd46f has its CatchHandler @ 009dd6a4 */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 009dc298 to 009dc29b has its CatchHandler @ 009dd6a4 */
    pvVar4 = operator_new(uVar8 << 3);
    uVar21 = NEON_fmov(0xbe800000,4);
    puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
LAB_009dcc68:
    *puVar14 = uVar21;
    if (0 < (long)sVar15) {
      memcpy(pvVar4,pvVar7,sVar15);
    }
    *(void **)(this + 200) = pvVar4;
    *(undefined8 **)(this + 0xd0) = puVar14 + 1;
    *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
    if (pvVar7 == (void *)0x0) goto LAB_009dd2dc;
    goto LAB_009dd2d4;
  case 1:
    puVar14 = *(undefined8 **)(this + 0xd0);
    if (puVar14 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar14 + 1;
      *puVar14 = 0xbec00000be000000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar14 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3e4 to 009dd3eb has its CatchHandler @ 009dd6b4 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd414 to 009dd41f has its CatchHandler @ 009dd6b4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dbffc to 009dbfff has its CatchHandler @ 009dd6b4 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0xbec00000be000000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar17 < *(undefined8 **)(this + 0xd8)) {
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbe0000003ec00000;
      *(undefined8 **)(this + 0xd0) = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd448 to 009dd44f has its CatchHandler @ 009dd6a0 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd470 to 009dd47b has its CatchHandler @ 009dd6a0 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc2f0 to 009dc2f3 has its CatchHandler @ 009dd6a0 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar14 + 1;
      *puVar14 = 0xbe0000003ec00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar19;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar19 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar19 + 1;
      *puVar19 = 0x3e000000bec00000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd490 to 009dd497 has its CatchHandler @ 009dd694 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4ac to 009dd4b7 has its CatchHandler @ 009dd694 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc504 to 009dc507 has its CatchHandler @ 009dd694 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0x3e000000bec00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (*(undefined8 **)(this + 0xd8) <= puVar17) {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4cc to 009dd4d3 has its CatchHandler @ 009dd688 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4e8 to 009dd4f3 has its CatchHandler @ 009dd688 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc714 to 009dc717 has its CatchHandler @ 009dd688 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      uVar21 = 0x3ec000003e000000;
      goto LAB_009dcc68;
    }
    uVar21 = 0x3ec000003e000000;
    break;
  default:
    puVar14 = *(undefined8 **)(this + 0xd0);
    if (puVar14 < *(undefined8 **)(this + 0xd8)) {
      *puVar14 = 0;
      *(undefined8 **)(this + 0xd0) = puVar14 + 1;
      goto LAB_009dd2dc;
    }
    pvVar7 = *ppvVar13;
    sVar15 = (long)puVar14 - (long)pvVar7;
    uVar8 = ((long)sVar15 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3f4 to 009dd3fb has its CatchHandler @ 009dd6ac */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
    uVar12 = (long)uVar9 >> 2;
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd42c to 009dd437 has its CatchHandler @ 009dd6ac */
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 009dc160 to 009dc163 has its CatchHandler @ 009dd6ac */
    pvVar4 = operator_new(uVar8 << 3);
    puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
    *puVar14 = 0;
    if (0 < (long)sVar15) {
      memcpy(pvVar4,pvVar7,sVar15);
    }
    *(void **)(this + 200) = pvVar4;
    *(undefined8 **)(this + 0xd0) = puVar14 + 1;
    *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
    goto joined_r0x009dd2d0;
  case 3:
    puVar14 = *(undefined8 **)(this + 0xd0);
    if (puVar14 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar14 + 1;
      *puVar14 = 0xbe4000003d800000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar14 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3d4 to 009dd3db has its CatchHandler @ 009dd6bc */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3fc to 009dd407 has its CatchHandler @ 009dd6bc */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dbeac to 009dbeaf has its CatchHandler @ 009dd6bc */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0xbe4000003d800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar17 < *(undefined8 **)(this + 0xd8)) {
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3e400000bd800000;
      *(undefined8 **)(this + 0xd0) = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd438 to 009dd43f has its CatchHandler @ 009dd6a8 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd458 to 009dd463 has its CatchHandler @ 009dd6a8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc1e4 to 009dc1e7 has its CatchHandler @ 009dd6a8 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar14 + 1;
      *puVar14 = 0x3e400000bd800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar19;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar19 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar19 + 1;
      *puVar19 = 0x3d8000003ea00000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd488 to 009dd48f has its CatchHandler @ 009dd698 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4a0 to 009dd4ab has its CatchHandler @ 009dd698 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc454 to 009dc457 has its CatchHandler @ 009dd698 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0x3d8000003ea00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar17 < *(undefined8 **)(this + 0xd8)) {
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbea00000be400000;
      *(undefined8 **)(this + 0xd0) = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4c4 to 009dd4cb has its CatchHandler @ 009dd68c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4dc to 009dd4e7 has its CatchHandler @ 009dd68c */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc660 to 009dc663 has its CatchHandler @ 009dd68c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar14 + 1;
      *puVar14 = 0xbea00000be400000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar19;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar19 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar19 + 1;
      *puVar19 = 0x3ea00000bea00000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd500 to 009dd507 has its CatchHandler @ 009dd680 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd510 to 009dd51b has its CatchHandler @ 009dd680 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc824 to 009dc827 has its CatchHandler @ 009dd680 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0x3ea00000bea00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar17 < *(undefined8 **)(this + 0xd8)) {
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbd800000bee00000;
      *(undefined8 **)(this + 0xd0) = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd528 to 009dd52f has its CatchHandler @ 009dd678 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd538 to 009dd543 has its CatchHandler @ 009dd678 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc988 to 009dc98b has its CatchHandler @ 009dd678 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar14 + 1;
      *puVar14 = 0xbd800000bee00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar19;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (puVar19 < *(undefined8 **)(this + 0xd8)) {
      puVar17 = puVar19 + 1;
      *puVar19 = 0x3ee000003e400000;
      *(undefined8 **)(this + 0xd0) = puVar17;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd550 to 009dd557 has its CatchHandler @ 009dd670 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd560 to 009dd56b has its CatchHandler @ 009dd670 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcaec to 009dcaef has its CatchHandler @ 009dd670 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar17 = puVar14 + 1;
      *puVar14 = 0x3ee000003e400000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *(void **)(this + 200) = pvVar4;
      *(undefined8 **)(this + 0xd0) = puVar17;
      *(void **)(this + 0xd8) = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar17 = *(undefined8 **)(this + 0xd0);
      }
    }
    if (*(undefined8 **)(this + 0xd8) <= puVar17) {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd578 to 009dd57f has its CatchHandler @ 009dd668 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*(undefined8 **)(this + 0xd8) - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd588 to 009dd593 has its CatchHandler @ 009dd668 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcc54 to 009dcc57 has its CatchHandler @ 009dd668 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar14 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      uVar21 = 0xbee000003ee00000;
      goto LAB_009dcc68;
    }
    uVar21 = 0xbee000003ee00000;
    break;
  case 7:
    ppvVar16 = (void **)(this + 0xd8);
    puVar14 = (undefined8 *)(this + 0xd0);
    puVar17 = (undefined8 *)*puVar14;
    if (puVar17 < *ppvVar16) {
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3d8000003d800000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar17 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd3ec to 009dd3f3 has its CatchHandler @ 009dd6b0 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd420 to 009dd42b has its CatchHandler @ 009dd6b0 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc0ac to 009dc0af has its CatchHandler @ 009dd6b0 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3d8000003d800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0xbe400000bd800000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd450 to 009dd457 has its CatchHandler @ 009dd69c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd47c to 009dd487 has its CatchHandler @ 009dd69c */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc3a0 to 009dc3a3 has its CatchHandler @ 009dd69c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0xbe400000bd800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0xbe000000be400000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd498 to 009dd49f has its CatchHandler @ 009dd690 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4b8 to 009dd4c3 has its CatchHandler @ 009dd690 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc5ac to 009dc5af has its CatchHandler @ 009dd690 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbe000000be400000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0xbd8000003e800000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4d4 to 009dd4db has its CatchHandler @ 009dd684 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd4f4 to 009dd4ff has its CatchHandler @ 009dd684 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc770 to 009dc773 has its CatchHandler @ 009dd684 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0xbd8000003e800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0xbe000000bea00000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd508 to 009dd50f has its CatchHandler @ 009dd67c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd51c to 009dd527 has its CatchHandler @ 009dd67c */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dc8d4 to 009dc8d7 has its CatchHandler @ 009dd67c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbe000000bea00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0x3ea000003e000000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd530 to 009dd537 has its CatchHandler @ 009dd674 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd544 to 009dd54f has its CatchHandler @ 009dd674 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dca38 to 009dca3b has its CatchHandler @ 009dd674 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0x3ea000003e000000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0x3e4000003ea00000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd558 to 009dd55f has its CatchHandler @ 009dd66c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd56c to 009dd577 has its CatchHandler @ 009dd66c */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcb9c to 009dcb9f has its CatchHandler @ 009dd66c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3e4000003ea00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0xbea000003e400000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd580 to 009dd587 has its CatchHandler @ 009dd664 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd594 to 009dd59f has its CatchHandler @ 009dd664 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcce0 to 009dcce3 has its CatchHandler @ 009dd664 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0xbea000003e400000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0x3ec00000be000000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd5a0 to 009dd5b3 has its CatchHandler @ 009dd660 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcd94 to 009dcd97 has its CatchHandler @ 009dd660 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3ec00000be000000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0xbee0000000000000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd5b4 to 009dd5c7 has its CatchHandler @ 009dd65c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dce48 to 009dce4b has its CatchHandler @ 009dd65c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0xbee0000000000000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0xbec00000be800000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd5c8 to 009dd5db has its CatchHandler @ 009dd658 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcefc to 009dceff has its CatchHandler @ 009dd658 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbec00000be800000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0x3e800000bec00000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd5dc to 009dd5ef has its CatchHandler @ 009dd654 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dcfb0 to 009dcfb3 has its CatchHandler @ 009dd654 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0x3e800000bec00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0xbf000000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd5f0 to 009dd603 has its CatchHandler @ 009dd650 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dd064 to 009dd067 has its CatchHandler @ 009dd650 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0xbf000000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      puVar18 = puVar19 + 1;
      *puVar19 = 0xbe8000003ee00000;
      *puVar14 = puVar18;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar19 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd604 to 009dd617 has its CatchHandler @ 009dd64c */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dd118 to 009dd11b has its CatchHandler @ 009dd64c */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar18 = puVar17 + 1;
      *puVar17 = 0xbe8000003ee00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar18;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar18 = (undefined8 *)*puVar14;
      }
    }
    if (puVar18 < *ppvVar16) {
      puVar19 = puVar18 + 1;
      *puVar18 = 0x3ee000003ec00000;
      *puVar14 = puVar19;
    }
    else {
      pvVar7 = *ppvVar13;
      sVar15 = (long)puVar18 - (long)pvVar7;
      uVar8 = ((long)sVar15 >> 3) + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd618 to 009dd62b has its CatchHandler @ 009dd648 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar9 = (long)*ppvVar16 - (long)pvVar7;
      uVar12 = (long)uVar9 >> 2;
      if (uVar8 <= uVar12) {
        uVar8 = uVar12;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 009dd1cc to 009dd1cf has its CatchHandler @ 009dd648 */
      pvVar4 = operator_new(uVar8 << 3);
      puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
      puVar19 = puVar17 + 1;
      *puVar17 = 0x3ee000003ec00000;
      if (0 < (long)sVar15) {
        memcpy(pvVar4,pvVar7,sVar15);
      }
      *ppvVar13 = pvVar4;
      *puVar14 = puVar19;
      *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar19 = (undefined8 *)*puVar14;
      }
    }
    if (puVar19 < *ppvVar16) {
      *puVar19 = 0xbf000000bee00000;
      *puVar14 = puVar19 + 1;
      goto LAB_009dd2dc;
    }
    pvVar7 = *ppvVar13;
    sVar15 = (long)puVar19 - (long)pvVar7;
    uVar8 = ((long)sVar15 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* try { // try from 009dd62c to 009dd63f has its CatchHandler @ 009dd644 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = (long)*ppvVar16 - (long)pvVar7;
    uVar12 = (long)uVar9 >> 2;
    if (uVar8 <= uVar12) {
      uVar8 = uVar12;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 009dd288 to 009dd28b has its CatchHandler @ 009dd644 */
    pvVar4 = operator_new(uVar8 << 3);
    puVar17 = (undefined8 *)((long)pvVar4 + ((long)sVar15 >> 3) * 8);
    *puVar17 = 0xbf000000bee00000;
    if (0 < (long)sVar15) {
      memcpy(pvVar4,pvVar7,sVar15);
    }
    *puVar14 = puVar17 + 1;
    *ppvVar13 = pvVar4;
    *ppvVar16 = (void *)((long)pvVar4 + uVar8 * 8);
joined_r0x009dd2d0:
    if (pvVar7 != (void *)0x0) {
LAB_009dd2d4:
      operator_delete(pvVar7);
    }
    goto LAB_009dd2dc;
  }
  *puVar17 = uVar21;
  *(undefined8 **)(this + 0xd0) = puVar17 + 1;
LAB_009dd2dc:
                    /* try { // try from 009dd2dc to 009dd2eb has its CatchHandler @ 009dd71c */
  EngineManager::getInstance();
  pTVar5 = (TransformGroup *)Renderer::getRootNode();
  lVar6 = ProceduralPlacementManager::getTerrainNode(pTVar5);
  *(long *)(this + 0xe0) = lVar6 + 0x170;
                    /* try { // try from 009dd2f4 to 009dd2f7 has its CatchHandler @ 009dd6c0 */
  fVar20 = (float)BaseTerrain::getUnitsPerPixel();
                    /* try { // try from 009dd300 to 009dd37f has its CatchHandler @ 009dd720 */
  iVar2 = BaseTerrain::getHeightMapSize();
  iVar2 = (int)((fVar20 * (float)(ulong)(iVar2 - 1)) / param_3 + 0.5);
  *(int *)(this + 0x50) = iVar2;
  *(int *)(this + 0x54) = iVar2;
  iVar2 = (**(code **)(*(long *)this + 0x40))(this);
  iVar3 = (**(code **)(*(long *)this + 0x48))(this);
  pvVar7 = operator_new__((ulong)(uint)(iVar3 * iVar2) << 2);
  *(void **)(this + 0x58) = pvVar7;
  uVar8 = (**(code **)(*(long *)this + 0x40))(this);
  uVar9 = (**(code **)(*(long *)this + 0x48))(this);
  memset(pvVar7,0,(uVar8 & 0xffffffff) * (uVar9 & 0xffffffff) * 4);
                    /* try { // try from 009dd394 to 009dd39b has its CatchHandler @ 009dd720 */
  updateRegion();
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


