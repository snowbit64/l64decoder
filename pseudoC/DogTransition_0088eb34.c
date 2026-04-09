// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogTransition
// Entry Point: 0088eb34
// Size: 1900 bytes
// Signature: undefined __thiscall DogTransition(DogTransition * this, BehaviorContext * param_1, CONDITION_TYPE param_2, float param_3, bool param_4)


/* DogTransition::DogTransition(BehaviorContext*, DogTransition::CONDITION_TYPE, float, bool) */

void __thiscall
DogTransition::DogTransition
          (DogTransition *this,BehaviorContext *param_1,CONDITION_TYPE param_2,float param_3,
          bool param_4)

{
  void **ppvVar1;
  ulong uVar2;
  BTModifyResult **ppBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  BTSequence *pBVar6;
  BTModifyResult *pBVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  long lVar13;
  
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  *(CONDITION_TYPE *)(this + 0x28) = param_2;
  *(float *)(this + 0x2c) = param_3;
  this[0x30] = (DogTransition)param_4;
  *(undefined8 *)(this + 0x20) = uVar10;
  *(undefined ***)this = &PTR__DogTransition_00fdcfd8;
  *(BehaviorContext **)(this + 8) = param_1;
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088eb8c to 0088eb93 has its CatchHandler @ 0088f2d0 */
  BTSequence::BTSequence(pBVar6,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x18) = pBVar6;
  pBVar7 = (BTModifyResult *)operator_new(0x40);
                    /* try { // try from 0088eba8 to 0088ebaf has its CatchHandler @ 0088f2cc */
  BTModifyResult::BTModifyResult(pBVar7,*(BehaviorTree **)(this + 0x10),1);
  lVar13 = *(long *)(this + 0x18);
  ppBVar3 = *(BTModifyResult ***)(lVar13 + 0x30);
  if (ppBVar3 == *(BTModifyResult ***)(lVar13 + 0x38)) {
    pvVar11 = *(void **)(lVar13 + 0x28);
    uVar12 = (long)ppBVar3 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f29c;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTModifyResult **)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *ppBVar3 = pBVar7;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(lVar13 + 0x28) = pvVar9;
    *(BTModifyResult ***)(lVar13 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar13 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *ppBVar3 = pBVar7;
    *(BTModifyResult ***)(lVar13 + 0x30) = ppBVar3 + 1;
  }
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088ec6c to 0088ec6f has its CatchHandler @ 0088f2c0 */
  BTSequence::BTSequence(pBVar6,*(BehaviorTree **)(this + 0x10));
  BTModifyResult::setChild(pBVar7,(BTBehavior *)pBVar6);
  puVar8 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 8);
                    /* try { // try from 0088ec8c to 0088ec8f has its CatchHandler @ 0088f2bc */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  *(undefined4 *)(puVar8 + 6) = 0xffffffff;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  ppvVar1 = (void **)(pBVar6 + 0x28);
  puVar8[5] = *(undefined8 *)(lVar13 + 0xa8);
  *puVar8 = &PTR__BTBehavior_00fdca38;
  if (puVar4 == puVar5) {
    pvVar11 = *ppvVar1;
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f288;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar8 = (undefined8 *)operator_new(0x30);
  lVar13 = *(long *)(this + 8);
                    /* try { // try from 0088ed68 to 0088ed6b has its CatchHandler @ 0088f2b8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar13 + 0xb0);
  *puVar8 = &PTR__BTBehavior_00fdd038;
  puVar8[5] = uVar10;
  if (puVar4 == puVar5) {
    pvVar11 = *ppvVar1;
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f288;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar8 = (undefined8 *)operator_new(0x40);
  lVar13 = *(long *)(this + 8);
                    /* try { // try from 0088ee38 to 0088ee3b has its CatchHandler @ 0088f2b4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  *(undefined4 *)(puVar8 + 7) = 3;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar13 + 0xa0);
  puVar8[5] = lVar13;
  puVar8[6] = uVar10;
  *puVar8 = &PTR__BTBehavior_00fdc598;
  if (puVar4 == puVar5) {
    pvVar11 = *ppvVar1;
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f288;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar8 = (undefined8 *)operator_new(0x38);
  lVar13 = *(long *)(this + 8);
                    /* try { // try from 0088ef10 to 0088ef13 has its CatchHandler @ 0088f2b0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  *(undefined *)(puVar8 + 6) = 1;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  puVar8[5] = *(undefined8 *)(lVar13 + 0xb0);
  *puVar8 = &PTR__BTBehavior_00fdc548;
  if (puVar4 == puVar5) {
    pvVar11 = *ppvVar1;
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f288;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  pBVar7 = (BTModifyResult *)operator_new(0x40);
                    /* try { // try from 0088efe8 to 0088efef has its CatchHandler @ 0088f2ac */
  BTModifyResult::BTModifyResult(pBVar7,*(BehaviorTree **)(this + 0x10),1);
  lVar13 = *(long *)(this + 0x18);
  ppBVar3 = *(BTModifyResult ***)(lVar13 + 0x30);
  if (ppBVar3 == *(BTModifyResult ***)(lVar13 + 0x38)) {
    pvVar11 = *(void **)(lVar13 + 0x28);
    uVar12 = (long)ppBVar3 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_0088f29c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTModifyResult **)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *ppBVar3 = pBVar7;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(lVar13 + 0x28) = pvVar9;
    *(BTModifyResult ***)(lVar13 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar13 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *ppBVar3 = pBVar7;
    *(BTModifyResult ***)(lVar13 + 0x30) = ppBVar3 + 1;
  }
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088f0ac to 0088f0af has its CatchHandler @ 0088f2a8 */
  BTSequence::BTSequence(pBVar6,*(BehaviorTree **)(this + 0x10));
  BTModifyResult::setChild(pBVar7,(BTBehavior *)pBVar6);
  puVar8 = (undefined8 *)operator_new(0x30);
  uVar10 = *(undefined8 *)(this + 8);
                    /* try { // try from 0088f0cc to 0088f0cf has its CatchHandler @ 0088f2a4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = uVar10;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar8 = &PTR__BTBehavior_00fdd088;
  if (puVar4 == puVar5) {
    pvVar11 = *(void **)(pBVar6 + 0x28);
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088f288;
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088f290;
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar8 = (undefined8 *)operator_new(0x30);
  uVar10 = *(undefined8 *)(this + 8);
                    /* try { // try from 0088f19c to 0088f19f has its CatchHandler @ 0088f2a0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = uVar10;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar8 = &PTR__BTBehavior_00fdcb78;
  if (puVar4 == puVar5) {
    pvVar11 = *(void **)(pBVar6 + 0x28);
    uVar12 = (long)puVar4 - (long)pvVar11;
    uVar2 = ((long)uVar12 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_0088f288:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar12 >> 2)) {
      uVar2 = (long)uVar12 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar12) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
LAB_0088f290:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar9 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar9 + ((long)uVar12 >> 3) * 8);
    *puVar4 = puVar8;
    if (0 < (long)uVar12) {
      memcpy(pvVar9,pvVar11,uVar12);
    }
    *(void **)(pBVar6 + 0x28) = pvVar9;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar9 + uVar2 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
      return;
    }
  }
  else {
    *puVar4 = puVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  return;
}


