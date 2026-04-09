// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateFollow
// Entry Point: 00887f7c
// Size: 3728 bytes
// Signature: undefined __thiscall DogStateFollow(DogStateFollow * this, BehaviorContext * param_1)


/* DogStateFollow::DogStateFollow(BehaviorContext*) */

void __thiscall DogStateFollow::DogStateFollow(DogStateFollow *this,BehaviorContext *param_1)

{
  ulong uVar1;
  BTModifyResult **ppBVar2;
  undefined8 *puVar3;
  BTSelector **ppBVar4;
  BTSequence **ppBVar5;
  long lVar6;
  BTSequence *pBVar7;
  BTModifyResult *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  BTSelector *this_01;
  void *pvVar10;
  undefined8 uVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte local_98;
  undefined7 local_97;
  undefined4 uStack_90;
  undefined local_8c;
  void *local_88;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  *(BehaviorContext **)(this + 0x10) = param_1;
  *(BehaviorTree **)(this + 0x18) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DogStateFollow_00fdcbc8;
  *(char **)(this + 8) = "DogStateFollow";
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00887fe0 to 00887fe7 has its CatchHandler @ 00888e78 */
  BTSequence::BTSequence(pBVar7,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x20) = pBVar7;
  this_00 = (BTModifyResult *)operator_new(0x40);
                    /* try { // try from 00887ffc to 00888003 has its CatchHandler @ 00888e6c */
  BTModifyResult::BTModifyResult(this_00,*(BehaviorTree **)(this + 0x18),1);
  lVar14 = *(long *)(this + 0x20);
  ppBVar2 = *(BTModifyResult ***)(lVar14 + 0x30);
  if (ppBVar2 == *(BTModifyResult ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar2 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00888d24;
      pvVar10 = operator_new(uVar1 << 3);
    }
    ppBVar2 = (BTModifyResult **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar2 = this_00;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar10;
    *(BTModifyResult ***)(lVar14 + 0x30) = ppBVar2 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar2 = this_00;
    *(BTModifyResult ***)(lVar14 + 0x30) = ppBVar2 + 1;
  }
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 008880c0 to 008880c3 has its CatchHandler @ 00888e68 */
  BTSequence::BTSequence(pBVar7,*(BehaviorTree **)(this + 0x18));
  BTModifyResult::setChild(this_00,(BTBehavior *)pBVar7);
  puVar8 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 008880e0 to 008880e3 has its CatchHandler @ 00888e5c */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = lVar14;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar8 = &PTR__BTBehavior_00fdcc18;
  uVar11 = *(undefined8 *)(lVar14 + 0xa0);
  *(undefined4 *)(puVar8 + 7) = 3;
  *(undefined *)((long)puVar8 + 0x3c) = 1;
  puVar8[6] = uVar11;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00888d1c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_00888d24;
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
  puVar8 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 008881c8 to 008881cb has its CatchHandler @ 00888e58 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = lVar14;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar8 = &PTR__BTBehavior_00fdc598;
  uVar11 = *(undefined8 *)(lVar14 + 0xa0);
  *(undefined4 *)(puVar8 + 7) = 3;
  puVar8[6] = uVar11;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_00888d1c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
LAB_00888d24:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
  local_8c = 0;
  local_98 = 0x16;
  local_97 = 0x52776f6c6c6f66;
  uStack_90 = 0x65676e61;
                    /* try { // try from 008882c4 to 008882db has its CatchHandler @ 00888e44 */
  BehaviorDataSource::findRangeDefault
            (*(BehaviorDataSource **)(*(long *)(this + 0x10) + 0x98),(basic_string *)&local_98,
             &fStack_7c,&local_80,3.0,5.0);
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008882f0 to 008882f7 has its CatchHandler @ 00888e98 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 00888300 to 00888303 has its CatchHandler @ 00888e40 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  *puVar9 = &PTR__BTBehavior_00fdc4a8;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar9[5] = uVar11;
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00888d34 to 00888d47 has its CatchHandler @ 00888e98 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00888d78 to 00888db3 has its CatchHandler @ 00888e98 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888380 to 00888383 has its CatchHandler @ 00888e98 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008883cc to 008883d3 has its CatchHandler @ 00888e98 */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 008883e0 to 008883e3 has its CatchHandler @ 00888e3c */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  *(float *)(puVar9 + 5) = local_80;
  *puVar9 = &PTR__BTBehavior_00fdcc68;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined2 *)(puVar9 + 7) = 0x101;
  puVar9[6] = uVar11;
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888468 to 0088846b has its CatchHandler @ 00888e98 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008884b4 to 008884bb has its CatchHandler @ 00888e98 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 008884c4 to 008884c7 has its CatchHandler @ 00888e38 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar14;
  *puVar9 = &PTR__BTBehavior_00fdc4f8;
  puVar9[6] = *(undefined8 *)(lVar14 + 0xb0);
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888544 to 00888547 has its CatchHandler @ 00888e98 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00888590 to 00888597 has its CatchHandler @ 00888e98 */
  puVar9 = (undefined8 *)operator_new(0x40);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 008885a0 to 008885a3 has its CatchHandler @ 00888e34 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  puVar9[5] = lVar14;
  *puVar9 = &PTR__BTBehavior_00fdc598;
  uVar11 = *(undefined8 *)(lVar14 + 0xa0);
  *(undefined4 *)(puVar9 + 7) = 3;
  puVar9[6] = uVar11;
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888620 to 00888623 has its CatchHandler @ 00888e98 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088866c to 00888673 has its CatchHandler @ 00888e98 */
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar14 = *(long *)(this + 0x10);
                    /* try { // try from 0088867c to 0088867f has its CatchHandler @ 00888e30 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  *puVar9 = &PTR__BTBehavior_00fdc548;
  uVar11 = *(undefined8 *)(lVar14 + 0xb0);
  *(undefined *)(puVar9 + 6) = 1;
  puVar9[5] = uVar11;
  puVar3 = *(undefined8 **)(lVar15 + 0x30);
  if (puVar3 == *(undefined8 **)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888700 to 00888703 has its CatchHandler @ 00888e98 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar9;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar15 + 0x28) = pvVar10;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar9;
    *(undefined8 **)(lVar15 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00888748 to 0088874f has its CatchHandler @ 00888e8c */
  this_01 = (BTSelector *)operator_new(0x50);
                    /* try { // try from 00888758 to 0088875b has its CatchHandler @ 00888e2c */
  BTSelector::BTSelector(this_01,*(BehaviorTree **)(this + 0x18));
  lVar14 = *(long *)(this + 0x20);
  ppBVar4 = *(BTSelector ***)(lVar14 + 0x30);
  if (ppBVar4 == *(BTSelector ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar4 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00888d48 to 00888d4b has its CatchHandler @ 00888e8c */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00888db4 to 00888dbf has its CatchHandler @ 00888e8c */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 008887c0 to 008887c3 has its CatchHandler @ 00888e8c */
      pvVar10 = operator_new(uVar1 << 3);
    }
    ppBVar4 = (BTSelector **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar4 = this_01;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar10;
    *(BTSelector ***)(lVar14 + 0x30) = ppBVar4 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar4 = this_01;
    *(BTSelector ***)(lVar14 + 0x30) = ppBVar4 + 1;
  }
                    /* try { // try from 00888808 to 0088880f has its CatchHandler @ 00888e94 */
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00888818 to 0088881b has its CatchHandler @ 00888e28 */
  BTSequence::BTSequence(pBVar7,*(BehaviorTree **)(this + 0x18));
  ppBVar5 = *(BTSequence ***)(this_01 + 0x30);
  if (ppBVar5 == *(BTSequence ***)(this_01 + 0x38)) {
    pvVar12 = *(void **)(this_01 + 0x28);
    uVar13 = (long)ppBVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00888d4c to 00888d5f has its CatchHandler @ 00888e94 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00888dc0 to 00888de3 has its CatchHandler @ 00888e94 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888880 to 00888883 has its CatchHandler @ 00888e94 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    ppBVar5 = (BTSequence **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar5 = pBVar7;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(this_01 + 0x28) = pvVar10;
    *(BTSequence ***)(this_01 + 0x30) = ppBVar5 + 1;
    *(void **)(this_01 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar5 = pBVar7;
    *(BTSequence ***)(this_01 + 0x30) = ppBVar5 + 1;
  }
                    /* try { // try from 008888c8 to 008888cf has its CatchHandler @ 00888e94 */
  puVar8 = (undefined8 *)operator_new(0x30);
                    /* try { // try from 008888d4 to 008888d7 has its CatchHandler @ 00888e1c */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  *(undefined4 *)(puVar8 + 5) = 0x3f000000;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  *puVar8 = &PTR__BTBehavior_00fdccb8;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888950 to 00888953 has its CatchHandler @ 00888e94 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00888998 to 0088899f has its CatchHandler @ 00888e94 */
  puVar8 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 008889a8 to 008889ab has its CatchHandler @ 00888e18 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar8[5] = uVar11;
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  *(undefined4 *)(puVar8 + 6) = 4;
  *(undefined *)((long)puVar8 + 0x34) = 0;
  *puVar8 = &PTR__BTBehavior_00fdc998;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888a2c to 00888a2f has its CatchHandler @ 00888e94 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00888a78 to 00888a7f has its CatchHandler @ 00888e90 */
  pBVar7 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00888a88 to 00888a8b has its CatchHandler @ 00888e14 */
  BTSequence::BTSequence(pBVar7,*(BehaviorTree **)(this + 0x18));
  ppBVar5 = *(BTSequence ***)(this_01 + 0x30);
  if (ppBVar5 == *(BTSequence ***)(this_01 + 0x38)) {
    pvVar12 = *(void **)(this_01 + 0x28);
    uVar13 = (long)ppBVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00888d60 to 00888d77 has its CatchHandler @ 00888e90 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00888de4 to 00888e07 has its CatchHandler @ 00888e90 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888ae8 to 00888aeb has its CatchHandler @ 00888e90 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    ppBVar5 = (BTSequence **)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *ppBVar5 = pBVar7;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(this_01 + 0x28) = pvVar10;
    *(BTSequence ***)(this_01 + 0x30) = ppBVar5 + 1;
    *(void **)(this_01 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar5 = pBVar7;
    *(BTSequence ***)(this_01 + 0x30) = ppBVar5 + 1;
  }
                    /* try { // try from 00888b30 to 00888b37 has its CatchHandler @ 00888e90 */
  puVar8 = (undefined8 *)operator_new(0x30);
                    /* try { // try from 00888b3c to 00888b3f has its CatchHandler @ 00888e10 */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  *(undefined4 *)(puVar8 + 5) = 0x3e4ccccd;
  *puVar8 = &PTR__BTBehavior_00fdccb8;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888bc0 to 00888bc3 has its CatchHandler @ 00888e90 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
                    /* try { // try from 00888c18 to 00888c1f has its CatchHandler @ 00888e90 */
  puVar8 = (undefined8 *)operator_new(0x38);
  uVar11 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00888c28 to 00888c2b has its CatchHandler @ 00888e0c */
  BTBehavior::BTBehavior((BTBehavior *)puVar8);
  puVar3 = *(undefined8 **)(pBVar7 + 0x30);
  puVar9 = *(undefined8 **)(pBVar7 + 0x38);
  puVar8[5] = uVar11;
  *(undefined4 *)(puVar8 + 6) = 0;
  *(undefined *)((long)puVar8 + 0x34) = 0;
  *puVar8 = &PTR__BTBehavior_00fdc998;
  if (puVar3 == puVar9) {
    pvVar12 = *(void **)(pBVar7 + 0x28);
    uVar13 = (long)puVar3 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00888c9c to 00888c9f has its CatchHandler @ 00888e90 */
      pvVar10 = operator_new(uVar1 << 3);
    }
    puVar3 = (undefined8 *)((long)pvVar10 + ((long)uVar13 >> 3) * 8);
    *puVar3 = puVar8;
    if (0 < (long)uVar13) {
      memcpy(pvVar10,pvVar12,uVar13);
    }
    *(void **)(pBVar7 + 0x28) = pvVar10;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
    *(void **)(pBVar7 + 0x38) = (void *)((long)pvVar10 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar3 = puVar8;
    *(undefined8 **)(pBVar7 + 0x30) = puVar3 + 1;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


