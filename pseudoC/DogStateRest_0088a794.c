// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateRest
// Entry Point: 0088a794
// Size: 3548 bytes
// Signature: undefined __thiscall DogStateRest(DogStateRest * this, BehaviorContext * param_1)


/* DogStateRest::DogStateRest(BehaviorContext*) */

void __thiscall DogStateRest::DogStateRest(DogStateRest *this,BehaviorContext *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  BTSequence **ppBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  BTRandomSelector *this_00;
  BTSequence *pBVar9;
  undefined8 *puVar10;
  void *pvVar11;
  void *pvVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  byte local_a0;
  undefined8 local_9f;
  undefined4 uStack_97;
  undefined uStack_93;
  undefined2 uStack_92;
  undefined uStack_90;
  undefined2 uStack_8f;
  undefined uStack_8d;
  undefined4 uStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  *(BehaviorContext **)(this + 0x20) = param_1;
  uStack_8d = 0;
  *(char **)(this + 8) = "DogStateRest";
  *(BehaviorContext **)(this + 0x10) = param_1 + 0x68;
  *(undefined ***)this = &PTR__DogStateRest_00fdce48;
  local_a0 = 0x24;
  uStack_8f = 0x6e6f;
  uStack_97 = 0x75447473;
  uStack_93 = 0x72;
  uStack_92 = 0x7461;
  uStack_90 = 0x69;
  local_9f._0_1_ = 'w';
  local_9f._1_1_ = 'a';
  local_9f._2_1_ = 'n';
  local_9f._3_1_ = 'd';
  local_9f._4_1_ = 'e';
  local_9f._5_1_ = 'r';
  local_9f._6_1_ = 'R';
  local_9f._7_1_ = 'e';
                    /* try { // try from 0088a818 to 0088a827 has its CatchHandler @ 0088b5c4 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&fStack_7c,&local_80
            );
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  uStack_93 = 0;
  local_a0 = 0x18;
  uStack_97 = 0x6e6f6974;
  local_9f._0_1_ = 'r';
  local_9f._1_1_ = 'e';
  local_9f._2_1_ = 's';
  local_9f._3_1_ = 't';
  local_9f._4_1_ = 'D';
  local_9f._5_1_ = 'u';
  local_9f._6_1_ = 'r';
  local_9f._7_1_ = 'a';
                    /* try { // try from 0088a864 to 0088a873 has its CatchHandler @ 0088b5c0 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_a0,&local_84,&local_88)
  ;
  if ((local_a0 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT21(uStack_8f,uStack_90))));
  }
  this_00 = (BTRandomSelector *)operator_new(0x70);
                    /* try { // try from 0088a894 to 0088a89b has its CatchHandler @ 0088b5b4 */
  BTRandomSelector::BTRandomSelector(this_00,*(BehaviorTree **)(this + 0x10),false);
  *(BTRandomSelector **)(this + 0x18) = this_00;
  pBVar9 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088a8b0 to 0088a8b3 has its CatchHandler @ 0088b5b0 */
  BTSequence::BTSequence(pBVar9,*(BehaviorTree **)(this + 0x10));
  lVar15 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar15 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar14 = (long)ppBVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b568;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *ppBVar3 = pBVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(lVar15 + 0x28) = pvVar11;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar3 = pBVar9;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088a978 to 0088a97b has its CatchHandler @ 0088b5a4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = uVar13;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  ppvVar1 = (void **)(pBVar9 + 0x28);
  *(float *)(puVar10 + 6) = fStack_7c;
  *(float *)((long)puVar10 + 0x34) = local_80;
  *puVar10 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088aa50 to 0088aa53 has its CatchHandler @ 0088b5a0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = lVar15;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc688;
  uVar13 = *(undefined8 *)(lVar15 + 0xb0);
  *(undefined4 *)(puVar10 + 7) = 0xffffffff;
  puVar10[6] = uVar13;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088ab2c to 0088ab2f has its CatchHandler @ 0088b59c */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = lVar15;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc598;
  uVar13 = *(undefined8 *)(lVar15 + 0xa0);
  *(undefined4 *)(puVar10 + 7) = 3;
  puVar10[6] = uVar13;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088ac08 to 0088ac0b has its CatchHandler @ 0088b598 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc548;
  uVar13 = *(undefined8 *)(lVar15 + 0xb0);
  *(undefined *)(puVar10 + 6) = 0;
  puVar10[5] = uVar13;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  fVar8 = local_84;
  fVar7 = local_88;
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088ace4 to 0088ace7 has its CatchHandler @ 0088b594 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = uVar13;
  *(float *)(puVar10 + 6) = fVar8;
  *(float *)((long)puVar10 + 0x34) = fVar7;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088adb8 to 0088adbb has its CatchHandler @ 0088b590 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = 0xbf800000ffffffff;
  puVar10[6] = uVar13;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  pBVar9 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088ae8c to 0088ae8f has its CatchHandler @ 0088b58c */
  BTSequence::BTSequence(pBVar9,*(BehaviorTree **)(this + 0x10));
  lVar15 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar15 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar14 = (long)ppBVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b568;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *ppBVar3 = pBVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(lVar15 + 0x28) = pvVar11;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar3 = pBVar9;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088af4c to 0088af4f has its CatchHandler @ 0088b588 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = lVar15;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc598;
  uVar13 = *(undefined8 *)(lVar15 + 0xa0);
  ppvVar1 = (void **)(pBVar9 + 0x28);
  *(undefined4 *)(puVar10 + 7) = 3;
  puVar10[6] = uVar13;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  fVar8 = local_84;
  fVar7 = local_88;
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088b034 to 0088b037 has its CatchHandler @ 0088b584 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = uVar13;
  *(float *)(puVar10 + 6) = fVar8;
  *(float *)((long)puVar10 + 0x34) = fVar7;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088b104 to 0088b107 has its CatchHandler @ 0088b580 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = 0xbf800000ffffffff;
  puVar10[6] = uVar13;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  pBVar9 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088b1d8 to 0088b1db has its CatchHandler @ 0088b57c */
  BTSequence::BTSequence(pBVar9,*(BehaviorTree **)(this + 0x10));
  lVar15 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar15 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar15 + 0x38)) {
    pvVar12 = *(void **)(lVar15 + 0x28);
    uVar14 = (long)ppBVar3 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_0088b568:
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
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *ppBVar3 = pBVar9;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(lVar15 + 0x28) = pvVar11;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar15 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar3 = pBVar9;
    *(BTSequence ***)(lVar15 + 0x30) = ppBVar3 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x40);
  lVar15 = *(long *)(this + 0x20);
                    /* try { // try from 0088b298 to 0088b29b has its CatchHandler @ 0088b578 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = lVar15;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc598;
  uVar13 = *(undefined8 *)(lVar15 + 0xa0);
  ppvVar1 = (void **)(pBVar9 + 0x28);
  *(undefined4 *)(puVar10 + 7) = 8;
  puVar10[6] = uVar13;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088b380 to 0088b383 has its CatchHandler @ 0088b574 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = uVar13;
  *(float *)(puVar10 + 6) = local_84;
  *(float *)((long)puVar10 + 0x34) = local_88;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_0088b554;
    if (uVar2 <= (ulong)((long)uVar14 >> 2)) {
      uVar2 = (long)uVar14 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_0088b55c;
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  uVar13 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088b454 to 0088b457 has its CatchHandler @ 0088b570 */
  BTBehavior::BTBehavior((BTBehavior *)puVar10);
  puVar10[5] = 0xbf800000ffffffff;
  puVar10[6] = uVar13;
  puVar4 = *(undefined8 **)(pBVar9 + 0x30);
  puVar5 = *(undefined8 **)(pBVar9 + 0x38);
  *puVar10 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar5) {
    pvVar12 = *ppvVar1;
    uVar14 = (long)puVar4 - (long)pvVar12;
    uVar2 = ((long)uVar14 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_0088b554:
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
      pvVar11 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
LAB_0088b55c:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar11 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar11 + ((long)uVar14 >> 3) * 8);
    *puVar4 = puVar10;
    if (0 < (long)uVar14) {
      memcpy(pvVar11,pvVar12,uVar14);
    }
    *(void **)(pBVar9 + 0x28) = pvVar11;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
    *(void **)(pBVar9 + 0x38) = (void *)((long)pvVar11 + uVar2 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar4 = puVar10;
    *(undefined8 **)(pBVar9 + 0x30) = puVar4 + 1;
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


