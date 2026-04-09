// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateWander
// Entry Point: 0088dda8
// Size: 3100 bytes
// Signature: undefined __thiscall DogStateWander(DogStateWander * this, BehaviorContext * param_1)


/* DogStateWander::DogStateWander(BehaviorContext*) */

void __thiscall DogStateWander::DogStateWander(DogStateWander *this,BehaviorContext *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  BTSequence **ppBVar3;
  undefined8 *puVar4;
  BTParallel **ppBVar5;
  undefined8 *puVar6;
  long lVar7;
  BTRandomSelector *this_00;
  BTSequence *pBVar8;
  undefined8 *puVar9;
  BTParallel *this_01;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  byte local_a0;
  undefined5 local_9f;
  undefined uStack_9a;
  undefined2 uStack_99;
  undefined5 uStack_97;
  undefined local_92;
  undefined local_91;
  void *local_90;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  *(BehaviorContext **)(this + 0x20) = param_1;
  *(undefined ***)this = &PTR__DogStateWander_00fdcf88;
  *(char **)(this + 8) = "DogStateWander";
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  this_00 = (BTRandomSelector *)operator_new(0x70);
                    /* try { // try from 0088de14 to 0088de1f has its CatchHandler @ 0088ea1c */
  BTRandomSelector::BTRandomSelector(this_00,(BehaviorTree *)(param_1 + 0x68),false);
  *(BTRandomSelector **)(this + 0x18) = this_00;
  local_91 = 0;
  local_a0 = 0x1c;
  local_9f = 0x65646e6177;
  uStack_9a = 0x72;
  uStack_99 = 0x7544;
  uStack_97 = 0x6f69746172;
  local_92 = 0x6e;
                    /* try { // try from 0088de4c to 0088de5b has its CatchHandler @ 0088ea08 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&fStack_7c,&local_80
            );
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  local_92 = 0;
  local_a0 = 0x1a;
  local_9f = 0x6666696e73;
  uStack_9a = 0x44;
  uStack_99 = 0x7275;
  uStack_97 = 0x6e6f697461;
                    /* try { // try from 0088de94 to 0088dea3 has its CatchHandler @ 0088ea04 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&local_84,&local_88)
  ;
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
                    /* try { // try from 0088deb4 to 0088debb has its CatchHandler @ 0088ea38 */
  pBVar8 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088dec4 to 0088dec7 has its CatchHandler @ 0088e9f8 */
  BTSequence::BTSequence(pBVar8,*(BehaviorTree **)(this + 0x10));
  lVar14 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar14 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar3 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0088e8d8 to 0088e8f3 has its CatchHandler @ 0088ea38 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088e930 to 0088e95f has its CatchHandler @ 0088ea38 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0088df2c to 0088df2f has its CatchHandler @ 0088ea38 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar3 = pBVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar10;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar3 = pBVar8;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar3 + 1;
  }
                    /* try { // try from 0088df74 to 0088df7b has its CatchHandler @ 0088ea38 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar14 = *(long *)(this + 0x20);
                    /* try { // try from 0088df84 to 0088df87 has its CatchHandler @ 0088e9f4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc4a8;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  ppvVar1 = (void **)(pBVar8 + 0x28);
  *(undefined4 *)(puVar9 + 6) = 5;
  puVar9[5] = uVar11;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e008 to 0088e00b has its CatchHandler @ 0088ea38 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e050 to 0088e057 has its CatchHandler @ 0088ea38 */
  puVar9 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088e064 to 0088e067 has its CatchHandler @ 0088e9f0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = uVar11;
  *(float *)(puVar9 + 6) = fStack_7c;
  *(float *)((long)puVar9 + 0x34) = local_80;
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e0dc to 0088e0df has its CatchHandler @ 0088ea38 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e124 to 0088e12b has its CatchHandler @ 0088ea38 */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x20);
                    /* try { // try from 0088e134 to 0088e137 has its CatchHandler @ 0088e9ec */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar14;
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc688;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined4 *)(puVar9 + 7) = 0xffffffff;
  puVar9[6] = uVar11;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e1b8 to 0088e1bb has its CatchHandler @ 0088ea38 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e200 to 0088e207 has its CatchHandler @ 0088ea34 */
  this_01 = (BTParallel *)operator_new(0x58);
                    /* try { // try from 0088e210 to 0088e21b has its CatchHandler @ 0088e9e8 */
  BTParallel::BTParallel(this_01,*(BehaviorTree **)(this + 0x10),false,true);
  ppBVar5 = *(BTParallel ***)(pBVar8 + 0x30);
  if (ppBVar5 == *(BTParallel ***)(pBVar8 + 0x38)) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)ppBVar5 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088e8f4 to 0088e913 has its CatchHandler @ 0088ea34 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088e960 to 0088e98f has its CatchHandler @ 0088ea34 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0088e278 to 0088e27b has its CatchHandler @ 0088ea34 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar5 = (BTParallel **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar5 = this_01;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(BTParallel ***)(pBVar8 + 0x30) = ppBVar5 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar5 = this_01;
    *(BTParallel ***)(pBVar8 + 0x30) = ppBVar5 + 1;
  }
                    /* try { // try from 0088e2c0 to 0088e2c7 has its CatchHandler @ 0088ea34 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar14 = *(long *)(this + 0x20);
                    /* try { // try from 0088e2d0 to 0088e2d3 has its CatchHandler @ 0088e9dc */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar4 = *(undefined8 **)(this_01 + 0x30);
  puVar6 = *(undefined8 **)(this_01 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc548;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  ppvVar1 = (void **)(this_01 + 0x28);
  *(undefined *)(puVar9 + 6) = 0;
  puVar9[5] = uVar11;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e350 to 0088e353 has its CatchHandler @ 0088ea34 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(this_01 + 0x28) = pvVar10;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
    *(void **)(this_01 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e398 to 0088e39f has its CatchHandler @ 0088ea34 */
  puVar9 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088e3a8 to 0088e3ab has its CatchHandler @ 0088e9d8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = uVar11;
  puVar4 = *(undefined8 **)(this_01 + 0x30);
  puVar6 = *(undefined8 **)(this_01 + 0x38);
  *(undefined4 *)(puVar9 + 6) = 5;
  *(undefined *)((long)puVar9 + 0x34) = 0;
  *puVar9 = &PTR__BTBehavior_00fdc998;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e428 to 0088e42b has its CatchHandler @ 0088ea34 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(this_01 + 0x28) = pvVar10;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
    *(void **)(this_01 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e470 to 0088e477 has its CatchHandler @ 0088ea34 */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x20);
                    /* try { // try from 0088e480 to 0088e483 has its CatchHandler @ 0088e9d4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar14;
  puVar4 = *(undefined8 **)(this_01 + 0x30);
  puVar6 = *(undefined8 **)(this_01 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc728;
  uVar11 = *(undefined8 *)(lVar14 + 0xa0);
  puVar9[7] = 0xffffffff00000004;
  puVar9[6] = uVar11;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e508 to 0088e50b has its CatchHandler @ 0088ea34 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(this_01 + 0x28) = pvVar10;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
    *(void **)(this_01 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(this_01 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e550 to 0088e557 has its CatchHandler @ 0088ea30 */
  pBVar8 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088e560 to 0088e563 has its CatchHandler @ 0088e9d0 */
  BTSequence::BTSequence(pBVar8,*(BehaviorTree **)(this + 0x10));
  lVar14 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar14 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar3 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0088e914 to 0088e92f has its CatchHandler @ 0088ea30 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088e990 to 0088e9bf has its CatchHandler @ 0088ea30 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 0088e5c8 to 0088e5cb has its CatchHandler @ 0088ea30 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar3 = pBVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar10;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar3 = pBVar8;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar3 + 1;
  }
                    /* try { // try from 0088e610 to 0088e617 has its CatchHandler @ 0088ea30 */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x20);
                    /* try { // try from 0088e620 to 0088e623 has its CatchHandler @ 0088e9cc */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar14;
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc598;
  uVar11 = *(undefined8 *)(lVar14 + 0xa0);
  ppvVar1 = (void **)(pBVar8 + 0x28);
  *(undefined4 *)(puVar9 + 7) = 3;
  puVar9[6] = uVar11;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e6a8 to 0088e6ab has its CatchHandler @ 0088ea30 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e6f0 to 0088e6f7 has its CatchHandler @ 0088ea30 */
  puVar9 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088e708 to 0088e70b has its CatchHandler @ 0088e9c8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = uVar11;
  *(float *)(puVar9 + 6) = local_84;
  *(float *)((long)puVar9 + 0x34) = local_88;
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e784 to 0088e787 has its CatchHandler @ 0088ea30 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
                    /* try { // try from 0088e7cc to 0088e7d3 has its CatchHandler @ 0088ea30 */
  puVar9 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088e7dc to 0088e7df has its CatchHandler @ 0088e9c4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = 0xbf800000ffffffff;
  puVar9[6] = uVar11;
  puVar4 = *(undefined8 **)(pBVar8 + 0x30);
  puVar6 = *(undefined8 **)(pBVar8 + 0x38);
  *puVar9 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar6) {
    pvVar12 = *ppvVar1;
    uVar13 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar13 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar13 >> 2)) {
      uVar2 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
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
                    /* try { // try from 0088e858 to 0088e85b has its CatchHandler @ 0088ea30 */
      pvVar10 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar4 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar8 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
    *(void **)(pBVar8 + 0x38) = (void *)((long)pvVar10 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar9;
    *(undefined8 **)(pBVar8 + 0x30) = puVar4 + 1;
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


