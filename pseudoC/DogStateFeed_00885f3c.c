// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateFeed
// Entry Point: 00885f3c
// Size: 2808 bytes
// Signature: undefined __thiscall DogStateFeed(DogStateFeed * this, BehaviorContext * param_1)


/* DogStateFeed::DogStateFeed(BehaviorContext*) */

void __thiscall DogStateFeed::DogStateFeed(DogStateFeed *this,BehaviorContext *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  undefined8 *puVar3;
  BTParallel **ppBVar4;
  BTSequence **ppBVar5;
  long lVar6;
  BTSequence *pBVar7;
  undefined8 *puVar8;
  BTParallel *this_00;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  byte local_98;
  undefined8 local_97;
  undefined4 local_8f;
  undefined local_8b;
  void *local_88;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  *(BehaviorContext **)(this + 0x10) = param_1;
  *(BehaviorTree **)(this + 0x18) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DogStateFeed_00fdc948;
  *(char **)(this + 8) = "DogStateFeed";
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00885f9c to 00885fa3 has its CatchHandler @ 00886a8c */
  BTSequence::BTSequence(pBVar7,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x20) = pBVar7;
  local_8b = 0;
  local_98 = 0x18;
  local_8f = 0x6e6f6974;
  local_97._0_1_ = 'f';
  local_97._1_1_ = 'e';
  local_97._2_1_ = 'e';
  local_97._3_1_ = 'd';
  local_97._4_1_ = 'D';
  local_97._5_1_ = 'u';
  local_97._6_1_ = 'r';
  local_97._7_1_ = 'a';
                    /* try { // try from 00885fd8 to 00885fe7 has its CatchHandler @ 00886a78 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(*(long *)(this + 0x10) + 0x98),(basic_string *)&local_98,
             &fStack_7c,&local_80);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00886000 to 00886007 has its CatchHandler @ 00886aa8 */
  puVar8 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 00886010 to 00886013 has its CatchHandler @ 00886a74 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  *puVar8 = &PTR__BTBehavior_00fdc4a8;
  uVar11 = *(undefined8 *)(lVar13 + 0xb0);
  *(undefined4 *)(puVar8 + 6) = 4;
  puVar8[5] = uVar11;
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00886968 to 00886973 has its CatchHandler @ 00886aa8 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 008869ac to 008869cf has its CatchHandler @ 00886aa8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886094 to 00886097 has its CatchHandler @ 00886aa8 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008860e0 to 008860e7 has its CatchHandler @ 00886aa8 */
  puVar8 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 008860f0 to 008860f3 has its CatchHandler @ 00886a70 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = lVar13;
  *puVar8 = &PTR__BTBehavior_00fdc4f8;
  puVar8[6] = *(undefined8 *)(lVar13 + 0xb0);
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886170 to 00886173 has its CatchHandler @ 00886aa8 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar13 = *(long *)(this + 0x20);
                    /* try { // try from 008861bc to 008861c3 has its CatchHandler @ 00886aa8 */
  puVar8 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 008861d0 to 008861d3 has its CatchHandler @ 00886a6c */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = uVar11;
  *(float *)(puVar8 + 6) = fStack_7c;
  *(float *)((long)puVar8 + 0x34) = local_80;
  *puVar8 = &PTR__BTBehavior_00fdc638;
  puVar3 = *(undefined8 **)(lVar13 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar13 + 0x38)) {
    pvVar12 = *(void **)(lVar13 + 0x28);
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886250 to 00886253 has its CatchHandler @ 00886aa8 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(lVar13 + 0x28) = pvVar10;
    *(undefined8 **)(lVar13 + 0x30) = puVar3 + 1;
    *(void **)(lVar13 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(lVar13 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00886298 to 0088629f has its CatchHandler @ 00886aa0 */
  this_00 = (BTParallel *)operator_new(0x58);
                    /* try { // try from 008862a8 to 008862b3 has its CatchHandler @ 00886a68 */
  BTParallel::BTParallel(this_00,*(BehaviorTree **)(this + 0x18),false,true);
  lVar13 = *(long *)(this + 0x20);
  ppBVar4 = *(BTParallel ***)(lVar13 + 0x30);
  if (ppBVar4 == *(BTParallel ***)(lVar13 + 0x38)) {
    pvVar12 = *(void **)(lVar13 + 0x28);
    uVar14 = (long)ppBVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00886974 to 00886977 has its CatchHandler @ 00886aa0 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 008869d0 to 008869db has its CatchHandler @ 00886aa0 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886318 to 0088631b has its CatchHandler @ 00886aa0 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar4 = (BTParallel **)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *ppBVar4 = this_00;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(lVar13 + 0x28) = pvVar10;
    *(BTParallel ***)(lVar13 + 0x30) = ppBVar4 + 1;
    *(void **)(lVar13 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar4 = this_00;
    *(BTParallel ***)(lVar13 + 0x30) = ppBVar4 + 1;
  }
                    /* try { // try from 00886360 to 00886367 has its CatchHandler @ 00886aa4 */
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00886370 to 00886373 has its CatchHandler @ 00886a5c */
  BTSequence::BTSequence(pBVar7,*(BehaviorTree **)(this + 0x18));
  ppBVar5 = *(BTSequence ***)(this_00 + 0x30);
  if (ppBVar5 == *(BTSequence ***)(this_00 + 0x38)) {
    pvVar12 = *(void **)(this_00 + 0x28);
    uVar14 = (long)ppBVar5 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00886978 to 0088698b has its CatchHandler @ 00886aa4 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 008869dc to 008869ff has its CatchHandler @ 00886aa4 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008863d8 to 008863db has its CatchHandler @ 00886aa4 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar5 = (BTSequence **)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *ppBVar5 = pBVar7;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(this_00 + 0x28) = pvVar10;
    *(BTSequence ***)(this_00 + 0x30) = ppBVar5 + 1;
    *(void **)(this_00 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar5 = pBVar7;
    *(BTSequence ***)(this_00 + 0x30) = ppBVar5 + 1;
  }
                    /* try { // try from 00886420 to 00886427 has its CatchHandler @ 00886aa4 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 00886430 to 00886433 has its CatchHandler @ 00886a50 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar8 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc548;
  uVar11 = *(undefined8 *)(lVar13 + 0xb0);
  *(undefined *)(puVar9 + 6) = 1;
  puVar9[5] = uVar11;
  if (puVar3 == puVar8) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008864b4 to 008864b7 has its CatchHandler @ 00886aa4 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 008864fc to 00886503 has its CatchHandler @ 00886aa4 */
  puVar9 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 0088650c to 0088650f has its CatchHandler @ 00886a4c */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = uVar11;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar8 = *(undefined8 **)(pBVar7 + 0x38);
  *(undefined4 *)(puVar9 + 6) = 1;
  *(undefined *)((long)puVar9 + 0x34) = 1;
  *puVar9 = &PTR__BTBehavior_00fdc998;
  if (puVar3 == puVar8) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886590 to 00886593 has its CatchHandler @ 00886aa4 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 008865dc to 008865e3 has its CatchHandler @ 00886aac */
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 008865ec to 008865ef has its CatchHandler @ 00886a48 */
  BTSequence::BTSequence(pBVar7,*(BehaviorTree **)(this + 0x18));
  ppBVar5 = *(BTSequence ***)(this_00 + 0x30);
  if (ppBVar5 == *(BTSequence ***)(this_00 + 0x38)) {
    pvVar12 = *(void **)(this_00 + 0x28);
    uVar14 = (long)ppBVar5 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088698c to 008869ab has its CatchHandler @ 00886aac */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 00886a00 to 00886a2f has its CatchHandler @ 00886aac */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0088664c to 0088664f has its CatchHandler @ 00886aac */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar5 = (BTSequence **)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *ppBVar5 = pBVar7;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(this_00 + 0x28) = pvVar10;
    *(BTSequence ***)(this_00 + 0x30) = ppBVar5 + 1;
    *(void **)(this_00 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar5 = pBVar7;
    *(BTSequence ***)(this_00 + 0x30) = ppBVar5 + 1;
  }
                    /* try { // try from 00886694 to 0088669b has its CatchHandler @ 00886aac */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 008866a4 to 008866a7 has its CatchHandler @ 00886a3c */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar13;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar8 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc9e8;
  uVar11 = *(undefined8 *)(lVar13 + 0xa0);
  ppvVar1 = (void **)(pBVar7 + 0x28);
  puVar9[7] = 0xffffffff00000005;
  puVar9[6] = uVar11;
  if (puVar3 == puVar8) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886730 to 00886733 has its CatchHandler @ 00886aac */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00886778 to 0088677f has its CatchHandler @ 00886aac */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 00886788 to 0088678b has its CatchHandler @ 00886a38 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar8 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdca38;
  uVar11 = *(undefined8 *)(lVar13 + 0xa8);
  *(undefined4 *)(puVar9 + 6) = 1;
  puVar9[5] = uVar11;
  if (puVar3 == puVar8) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00886808 to 0088680b has its CatchHandler @ 00886aac */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00886850 to 00886857 has its CatchHandler @ 00886aac */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar13 = *(long *)(this + 0x10);
                    /* try { // try from 00886860 to 00886863 has its CatchHandler @ 00886a34 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar13;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar8 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc598;
  uVar11 = *(undefined8 *)(lVar13 + 0xa0);
  *(undefined4 *)(puVar9 + 7) = 3;
  puVar9[6] = uVar11;
  if (puVar3 == puVar8) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008868e8 to 008868eb has its CatchHandler @ 00886aac */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar14 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar10,pvVar12,uVar14);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


