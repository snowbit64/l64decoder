// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateGoToDoghouse
// Entry Point: 008894f4
// Size: 3140 bytes
// Signature: undefined __thiscall DogStateGoToDoghouse(DogStateGoToDoghouse * this, BehaviorContext * param_1)


/* DogStateGoToDoghouse::DogStateGoToDoghouse(BehaviorContext*) */

void __thiscall
DogStateGoToDoghouse::DogStateGoToDoghouse(DogStateGoToDoghouse *this,BehaviorContext *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  BTModifyResult **ppBVar3;
  BTSequence **ppBVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  BTSelector *this_00;
  BTModifyResult *this_01;
  undefined8 *puVar9;
  BTSequence *pBVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  byte local_a0;
  undefined8 local_9f;
  undefined7 uStack_97;
  undefined uStack_90;
  undefined2 uStack_8f;
  undefined uStack_8d;
  uint uStack_8c;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  *(undefined ***)this = &PTR__DogStateGoToDoghouse_00fdcda8;
  uVar13 = *(undefined8 *)(param_1 + 0xb0);
  *(BehaviorTree **)(this + 0x18) = (BehaviorTree *)(param_1 + 0x68);
  *(BehaviorContext **)(this + 0x20) = param_1;
  *(char **)(this + 8) = "DogStateGoToDoghouse";
  *(undefined8 *)(this + 0x10) = uVar13;
  this_00 = (BTSelector *)operator_new(0x50);
                    /* try { // try from 00889564 to 0088956b has its CatchHandler @ 0088a19c */
  BTSelector::BTSelector(this_00,(BehaviorTree *)(param_1 + 0x68));
  *(BTSelector **)(this + 0x28) = this_00;
  this_01 = (BTModifyResult *)operator_new(0x40);
                    /* try { // try from 00889580 to 00889587 has its CatchHandler @ 0088a198 */
  BTModifyResult::BTModifyResult(this_01,*(BehaviorTree **)(this + 0x18),2);
  puVar9 = (undefined8 *)operator_new(0x38);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00889598 to 0088959b has its CatchHandler @ 0088a184 */
  BTBehavior::BTBehavior((BTBehavior *)puVar9);
  *puVar9 = &PTR__BTBehavior_00fdc4a8;
  uVar13 = *(undefined8 *)(lVar15 + 0xb0);
  *(undefined4 *)(puVar9 + 6) = 3;
  puVar9[5] = uVar13;
  BTModifyResult::setChild(this_01,(BTBehavior *)puVar9);
  lVar15 = *(long *)(this + 0x28);
  ppBVar3 = *(BTModifyResult ***)(lVar15 + 0x30);
  if (ppBVar3 == *(BTModifyResult ***)(lVar15 + 0x38)) {
    pvVar14 = *(void **)(lVar15 + 0x28);
    uVar16 = (long)ppBVar3 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar12 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTModifyResult **)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *ppBVar3 = this_01;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(lVar15 + 0x28) = pvVar12;
    *(BTModifyResult ***)(lVar15 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *ppBVar3 = this_01;
    *(BTModifyResult ***)(lVar15 + 0x30) = ppBVar3 + 1;
  }
  uStack_8c = uStack_8c & 0xffffff00;
  local_a0 = 0x26;
  uStack_8f = 0x6f69;
  uStack_8d = 0x6e;
  uStack_97 = 0x61727544657375;
  uStack_90 = 0x74;
  local_9f._0_1_ = 's';
  local_9f._1_1_ = 'i';
  local_9f._2_1_ = 't';
  local_9f._3_1_ = 'D';
  local_9f._4_1_ = 'o';
  local_9f._5_1_ = 'g';
  local_9f._6_1_ = 'h';
  local_9f._7_1_ = 'o';
                    /* try { // try from 008896a0 to 008896af has its CatchHandler @ 0088a170 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&fStack_7c,&local_80
            );
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  local_a0 = 0x22;
  uStack_97 = 0x696d69786f7250;
  uStack_90 = 0x74;
  local_9f._0_1_ = 'd';
  local_9f._1_1_ = 'o';
  local_9f._2_1_ = 'g';
  local_9f._3_1_ = 'h';
  local_9f._4_1_ = 'o';
  local_9f._5_1_ = 'u';
  local_9f._6_1_ = 's';
  local_9f._7_1_ = 'e';
  uStack_8f = 0x79;
                    /* try { // try from 008896e4 to 008896ef has its CatchHandler @ 0088a16c */
  BehaviorDataSource::findValue
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&local_84);
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
                    /* try { // try from 00889700 to 00889707 has its CatchHandler @ 0088a1a8 */
  pBVar10 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00889710 to 00889713 has its CatchHandler @ 0088a160 */
  BTSequence::BTSequence(pBVar10,*(BehaviorTree **)(this + 0x18));
  lVar15 = *(long *)(this + 0x28);
  ppBVar4 = *(BTSequence ***)(lVar15 + 0x30);
  if (ppBVar4 == *(BTSequence ***)(lVar15 + 0x38)) {
    pvVar14 = *(void **)(lVar15 + 0x28);
    uVar16 = (long)ppBVar4 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0088a054 to 0088a077 has its CatchHandler @ 0088a1a8 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088a0b0 to 0088a0eb has its CatchHandler @ 0088a1a8 */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889778 to 0088977b has its CatchHandler @ 0088a1a8 */
      pvVar12 = operator_new(uVar2 << 3);
    }
    ppBVar4 = (BTSequence **)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *ppBVar4 = pBVar10;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(lVar15 + 0x28) = pvVar12;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar4 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *ppBVar4 = pBVar10;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar4 + 1;
  }
                    /* try { // try from 008897c0 to 008897c7 has its CatchHandler @ 0088a1a8 */
  puVar11 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008897d4 to 008897d7 has its CatchHandler @ 0088a15c */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  *(float *)(puVar11 + 5) = local_84;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdcc68;
  uVar13 = *(undefined8 *)(lVar15 + 0xb0);
  ppvVar1 = (void **)(pBVar10 + 0x28);
  *(undefined2 *)(puVar11 + 7) = 0;
  puVar11[6] = uVar13;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889858 to 0088985b has its CatchHandler @ 0088a1a8 */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 008898a0 to 008898a7 has its CatchHandler @ 0088a1a8 */
  puVar11 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 008898b0 to 008898b3 has its CatchHandler @ 0088a158 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = lVar15;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc598;
  uVar13 = *(undefined8 *)(lVar15 + 0xa0);
  *(undefined4 *)(puVar11 + 7) = 3;
  puVar11[6] = uVar13;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889934 to 00889937 has its CatchHandler @ 0088a1a8 */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 0088997c to 00889983 has its CatchHandler @ 0088a1a8 */
  puVar11 = (undefined8 *)operator_new(0x38);
  fVar8 = fStack_7c;
  fVar7 = local_80;
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00889990 to 00889993 has its CatchHandler @ 0088a154 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = uVar13;
  *(float *)(puVar11 + 6) = fVar8;
  *(float *)((long)puVar11 + 0x34) = fVar7;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc638;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889a08 to 00889a0b has its CatchHandler @ 0088a1a8 */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889a50 to 00889a57 has its CatchHandler @ 0088a1a8 */
  puVar11 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00889a60 to 00889a63 has its CatchHandler @ 0088a150 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = 0xbf800000ffffffff;
  puVar11[6] = uVar13;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc6d8;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889adc to 00889adf has its CatchHandler @ 0088a1a8 */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889b24 to 00889b2b has its CatchHandler @ 0088a1ac */
  pBVar10 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00889b34 to 00889b37 has its CatchHandler @ 0088a14c */
  BTSequence::BTSequence(pBVar10,*(BehaviorTree **)(this + 0x18));
  lVar15 = *(long *)(this + 0x28);
  ppBVar4 = *(BTSequence ***)(lVar15 + 0x30);
  if (ppBVar4 == *(BTSequence ***)(lVar15 + 0x38)) {
    pvVar14 = *(void **)(lVar15 + 0x28);
    uVar16 = (long)ppBVar4 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0088a078 to 0088a0a3 has its CatchHandler @ 0088a1ac */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* try { // try from 0088a0ec to 0088a133 has its CatchHandler @ 0088a1ac */
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889b9c to 00889b9f has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    ppBVar4 = (BTSequence **)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *ppBVar4 = pBVar10;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(lVar15 + 0x28) = pvVar12;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar4 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *ppBVar4 = pBVar10;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar4 + 1;
  }
                    /* try { // try from 00889be4 to 00889beb has its CatchHandler @ 0088a1ac */
  puVar11 = (undefined8 *)operator_new(0x38);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00889bf4 to 00889bf7 has its CatchHandler @ 0088a148 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = lVar15;
  *puVar11 = &PTR__BTBehavior_00fdc4f8;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  ppvVar1 = (void **)(pBVar10 + 0x28);
  puVar11[6] = *(undefined8 *)(lVar15 + 0xb0);
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889c74 to 00889c77 has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889cbc to 00889cc3 has its CatchHandler @ 0088a1ac */
  puVar11 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00889ccc to 00889ccf has its CatchHandler @ 0088a144 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = lVar15;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc598;
  uVar13 = *(undefined8 *)(lVar15 + 0xa0);
  *(undefined4 *)(puVar11 + 7) = 3;
  puVar11[6] = uVar13;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889d50 to 00889d53 has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889d98 to 00889d9f has its CatchHandler @ 0088a1ac */
  puVar11 = (undefined8 *)operator_new(0x38);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 00889da8 to 00889dab has its CatchHandler @ 0088a140 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc548;
  uVar13 = *(undefined8 *)(lVar15 + 0xb0);
  *(undefined *)(puVar11 + 6) = 1;
  puVar11[5] = uVar13;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889e28 to 00889e2b has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889e70 to 00889e77 has its CatchHandler @ 0088a1ac */
  puVar11 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00889e84 to 00889e87 has its CatchHandler @ 0088a13c */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = uVar13;
  *(float *)(puVar11 + 6) = fStack_7c;
  *(float *)((long)puVar11 + 0x34) = local_80;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc638;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889efc to 00889eff has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
                    /* try { // try from 00889f44 to 00889f4b has its CatchHandler @ 0088a1ac */
  puVar11 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00889f54 to 00889f57 has its CatchHandler @ 0088a138 */
  BTBehavior::BTBehavior((BTBehavior *)puVar11);
  puVar11[5] = 0xbf800000ffffffff;
  puVar11[6] = uVar13;
  puVar9 = *(undefined8 **)(pBVar10 + 0x30);
  puVar5 = *(undefined8 **)(pBVar10 + 0x38);
  *puVar11 = &PTR__BTBehavior_00fdc6d8;
  if (puVar9 == puVar5) {
    pvVar14 = *ppvVar1;
    uVar16 = (long)puVar9 - (long)pvVar14;
    uVar2 = ((long)uVar16 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar16 >> 2)) {
      uVar2 = (long)uVar16 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar16) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar12 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
                    /* try { // try from 00889fd0 to 00889fd3 has its CatchHandler @ 0088a1ac */
      pvVar12 = operator_new(uVar2 << 3);
    }
    puVar9 = (undefined8 *)((long)pvVar12 + ((long)uVar16 >> 3) * 8);
    *puVar9 = puVar11;
    if (0 < (long)uVar16) {
      memcpy(pvVar12,pvVar14,uVar16);
    }
    *(void **)(pBVar10 + 0x28) = pvVar12;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
    *(void **)(pBVar10 + 0x38) = (void *)((long)pvVar12 + uVar2 * 8);
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  else {
    *puVar9 = puVar11;
    *(undefined8 **)(pBVar10 + 0x30) = puVar9 + 1;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


