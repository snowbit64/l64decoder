// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateSeekAttention
// Entry Point: 0088b8d8
// Size: 7544 bytes
// Signature: undefined __thiscall DogStateSeekAttention(DogStateSeekAttention * this, BehaviorContext * param_1)


/* DogStateSeekAttention::DogStateSeekAttention(BehaviorContext*) */

void __thiscall
DogStateSeekAttention::DogStateSeekAttention(DogStateSeekAttention *this,BehaviorContext *param_1)

{
  ulong uVar1;
  BTSequence **ppBVar2;
  BTRandomSelector *this_00;
  BTSequence *pBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void **ppvVar9;
  BehaviorContext *pBVar10;
  void **ppvVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  BehaviorContext **ppBVar16;
  
  *(char **)(this + 8) = "DogStateSeekAttention";
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  ppBVar16 = (BehaviorContext **)(this + 0x20);
  *ppBVar16 = param_1;
  *(undefined ***)this = &PTR__DogStateSeekAttention_00fdcee8;
  this_00 = (BTRandomSelector *)operator_new(0x70);
                    /* try { // try from 0088b934 to 0088b93f has its CatchHandler @ 0088d738 */
  BTRandomSelector::BTRandomSelector(this_00,(BehaviorTree *)(param_1 + 0x68),false);
  *(BTRandomSelector **)(this + 0x18) = this_00;
  pBVar3 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088b954 to 0088b957 has its CatchHandler @ 0088d730 */
  BTSequence::BTSequence(pBVar3,*(BehaviorTree **)(this + 0x10));
  lVar14 = *(long *)(this + 0x18);
  ppBVar2 = *(BTSequence ***)(lVar14 + 0x30);
  if (ppBVar2 == *(BTSequence ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar2 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    ppBVar2 = (BTSequence **)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *ppBVar2 = pBVar3;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar6;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar2 = pBVar3;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088ba18 to 0088ba1b has its CatchHandler @ 0088d718 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  ppvVar9 = (void **)(pBVar3 + 0x28);
  *(undefined4 *)(puVar4 + 6) = 2;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = *(undefined8 *)(pBVar10 + 0xb0);
  *puVar4 = &PTR__BTBehavior_00fdc4a8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088baf4 to 0088baf7 has its CatchHandler @ 0088d714 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar8 = *(undefined8 *)(pBVar10 + 0xb0);
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc4f8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088bbc4 to 0088bbc7 has its CatchHandler @ 0088d710 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  *(undefined4 *)(puVar4 + 7) = 3;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088bc9c to 0088bc9f has its CatchHandler @ 0088d70c */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  *(undefined *)(puVar4 + 6) = 1;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = *(undefined8 *)(pBVar10 + 0xb0);
  *puVar4 = &PTR__BTBehavior_00fdc548;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088bd74 to 0088bd77 has its CatchHandler @ 0088d708 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = pBVar10;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *(undefined4 *)(puVar4 + 6) = 0;
  *(undefined *)((long)puVar4 + 0x34) = 0;
  *puVar4 = &PTR__BTBehavior_00fdc998;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088be48 to 0088be4b has its CatchHandler @ 0088d704 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = pBVar10;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc638;
  puVar4[6] = 0x453b800044fa0000;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088bf20 to 0088bf23 has its CatchHandler @ 0088d700 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = 0xbf800000ffffffff;
  puVar4[6] = pBVar10;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc6d8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  pBVar3 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088bffc to 0088bfff has its CatchHandler @ 0088d6f8 */
  BTSequence::BTSequence(pBVar3,*(BehaviorTree **)(this + 0x10));
  lVar14 = *(long *)(this + 0x18);
  ppBVar2 = *(BTSequence ***)(lVar14 + 0x30);
  if (ppBVar2 == *(BTSequence ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar2 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    ppBVar2 = (BTSequence **)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *ppBVar2 = pBVar3;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar6;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar2 = pBVar3;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c0bc to 0088c0bf has its CatchHandler @ 0088d6f4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  ppvVar9 = (void **)(pBVar3 + 0x38);
  puVar4 = (undefined8 *)*ppvVar9;
  ppvVar11 = (void **)(pBVar3 + 0x28);
  puVar15 = (undefined8 *)(pBVar3 + 0x30);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = *(undefined8 *)(pBVar10 + 0xb0);
  *puVar5 = &PTR__BTBehavior_00fdc4a8;
  *(undefined4 *)(puVar5 + 6) = 2;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c1a8 to 0088c1ab has its CatchHandler @ 0088d6ec */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xb0);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc4f8;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c280 to 0088c283 has its CatchHandler @ 0088d6e4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  *(undefined4 *)(puVar5 + 7) = 4;
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc598;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c360 to 0088c363 has its CatchHandler @ 0088d6dc */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = *(undefined8 *)(pBVar10 + 0xb0);
  puVar4 = (undefined8 *)*ppvVar9;
  *(undefined *)(puVar5 + 6) = 1;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc548;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x30);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c440 to 0088c443 has its CatchHandler @ 0088d6d4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = pBVar10;
  puVar7 = (undefined8 *)*puVar15;
  puVar4 = (undefined8 *)*ppvVar9;
  *puVar5 = &PTR__BTBehavior_00fdcb28;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c514 to 0088c517 has its CatchHandler @ 0088d6cc */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = *(undefined8 *)(pBVar10 + 0xb0);
  puVar4 = (undefined8 *)*ppvVar9;
  *(undefined4 *)(puVar5 + 6) = 1;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc4a8;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c5f4 to 0088c5f7 has its CatchHandler @ 0088d6c4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xb0);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc4f8;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c6cc to 0088c6cf has its CatchHandler @ 0088d6bc */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  *(undefined4 *)(puVar5 + 7) = 3;
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc598;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c7ac to 0088c7af has its CatchHandler @ 0088d6b4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = *(undefined8 *)(pBVar10 + 0xb0);
  puVar4 = (undefined8 *)*ppvVar9;
  *(undefined *)(puVar5 + 6) = 1;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc548;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x30);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c88c to 0088c88f has its CatchHandler @ 0088d6ac */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = pBVar10;
  puVar7 = (undefined8 *)*puVar15;
  puVar4 = (undefined8 *)*ppvVar9;
  *puVar5 = &PTR__BTBehavior_00fdcb78;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088c960 to 0088c963 has its CatchHandler @ 0088d6a4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = pBVar10;
  puVar4 = (undefined8 *)*ppvVar9;
  *(undefined4 *)(puVar5 + 6) = 2;
  *(undefined *)((long)puVar5 + 0x34) = 0;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc998;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088ca40 to 0088ca43 has its CatchHandler @ 0088d69c */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar7 = (undefined8 *)*puVar15;
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc728;
  puVar5[7] = 0xffffffff00000006;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088cb24 to 0088cb27 has its CatchHandler @ 0088d694 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  *(undefined4 *)(puVar5 + 7) = 3;
  puVar4 = (undefined8 *)*ppvVar9;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar7 = (undefined8 *)*puVar15;
  puVar5[5] = pBVar10;
  puVar5[6] = uVar8;
  *puVar5 = &PTR__BTBehavior_00fdc598;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088cc04 to 0088cc07 has its CatchHandler @ 0088d68c */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar5[5] = pBVar10;
  puVar4 = (undefined8 *)*ppvVar9;
  puVar5[6] = 0x453b800044fa0000;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc638;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d634;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  puVar5 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088ccdc to 0088ccdf has its CatchHandler @ 0088d684 */
  BTBehavior::BTBehavior((BTBehavior *)puVar5);
  puVar4 = (undefined8 *)*ppvVar9;
  puVar5[5] = 0xbf800000ffffffff;
  puVar5[6] = pBVar10;
  puVar7 = (undefined8 *)*puVar15;
  *puVar5 = &PTR__BTBehavior_00fdc6d8;
  if (puVar7 == puVar4) {
    pvVar12 = *ppvVar11;
    uVar13 = (long)puVar7 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_0088d634:
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
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar7 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar7 = puVar5;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *ppvVar9 = (void *)((long)pvVar6 + uVar1 * 8);
    *ppvVar11 = pvVar6;
    *puVar15 = puVar7 + 1;
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar7 = puVar5;
    *puVar15 = puVar7 + 1;
  }
  pBVar3 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088cdc0 to 0088cdc3 has its CatchHandler @ 0088d67c */
  BTSequence::BTSequence(pBVar3,*(BehaviorTree **)(this + 0x10));
  lVar14 = *(long *)(this + 0x18);
  ppBVar2 = *(BTSequence ***)(lVar14 + 0x30);
  if (ppBVar2 == *(BTSequence ***)(lVar14 + 0x38)) {
    pvVar12 = *(void **)(lVar14 + 0x28);
    uVar13 = (long)ppBVar2 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    ppBVar2 = (BTSequence **)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *ppBVar2 = pBVar3;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(lVar14 + 0x28) = pvVar6;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
    *(void **)(lVar14 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *ppBVar2 = pBVar3;
    *(BTSequence ***)(lVar14 + 0x30) = ppBVar2 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088ce80 to 0088ce83 has its CatchHandler @ 0088d670 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  ppvVar9 = (void **)(pBVar3 + 0x28);
  puVar4[5] = *(undefined8 *)(pBVar10 + 0xb0);
  *(undefined4 *)(puVar4 + 6) = 1;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc4a8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088cf5c to 0088cf5f has its CatchHandler @ 0088d66c */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar8 = *(undefined8 *)(pBVar10 + 0xb0);
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc4f8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d02c to 0088d02f has its CatchHandler @ 0088d668 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  *(undefined4 *)(puVar4 + 7) = 3;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d104 to 0088d107 has its CatchHandler @ 0088d664 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = *(undefined8 *)(pBVar10 + 0xb0);
  *(undefined *)(puVar4 + 6) = 1;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc548;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d1dc to 0088d1df has its CatchHandler @ 0088d660 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = pBVar10;
  *(undefined4 *)(puVar4 + 6) = 2;
  *(undefined *)((long)puVar4 + 0x34) = 0;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc998;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d2b4 to 0088d2b7 has its CatchHandler @ 0088d65c */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[7] = 0xffffffff00000006;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc728;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x40);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d388 to 0088d38b has its CatchHandler @ 0088d658 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  *(undefined4 *)(puVar4 + 7) = 3;
  uVar8 = *(undefined8 *)(pBVar10 + 0xa0);
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  puVar4[5] = pBVar10;
  puVar4[6] = uVar8;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d460 to 0088d463 has its CatchHandler @ 0088d654 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = pBVar10;
  puVar4[6] = 0x453b800044fa0000;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc638;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088d64c;
    if (uVar1 <= (ulong)((long)uVar13 >> 2)) {
      uVar1 = (long)uVar13 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar13) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_0088d63c;
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x38);
  pBVar10 = *ppBVar16;
                    /* try { // try from 0088d530 to 0088d533 has its CatchHandler @ 0088d650 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = 0xbf800000ffffffff;
  puVar4[6] = pBVar10;
  puVar5 = *(undefined8 **)(pBVar3 + 0x30);
  puVar7 = *(undefined8 **)(pBVar3 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc6d8;
  if (puVar5 == puVar7) {
    pvVar12 = *ppvVar9;
    uVar13 = (long)puVar5 - (long)pvVar12;
    uVar1 = ((long)uVar13 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_0088d64c:
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
      pvVar6 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
LAB_0088d63c:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar6 = operator_new(uVar1 << 3);
    }
    puVar5 = (undefined8 *)((long)pvVar6 + ((long)uVar13 >> 3) * 8);
    *puVar5 = puVar4;
    if (0 < (long)uVar13) {
      memcpy(pvVar6,pvVar12,uVar13);
    }
    *(void **)(pBVar3 + 0x28) = pvVar6;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
    *(void **)(pBVar3 + 0x38) = (void *)((long)pvVar6 + uVar1 * 8);
    if (pvVar12 != (void *)0x0) {
      operator_delete(pvVar12);
      return;
    }
  }
  else {
    *puVar5 = puVar4;
    *(undefined8 **)(pBVar3 + 0x30) = puVar5 + 1;
  }
  return;
}


