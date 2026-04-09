// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeerStateIdle
// Entry Point: 008830e4
// Size: 3784 bytes
// Signature: undefined __thiscall DeerStateIdle(DeerStateIdle * this, BehaviorContext * param_1)


/* DeerStateIdle::DeerStateIdle(BehaviorContext*) */

void __thiscall DeerStateIdle::DeerStateIdle(DeerStateIdle *this,BehaviorContext *param_1)

{
  void **ppvVar1;
  ulong uVar2;
  BTSequence **ppBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  BTRandomSelector *this_00;
  BTSequence *pBVar6;
  undefined8 *puVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  *(BehaviorContext **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(char **)(this + 8) = "DeerStateIdle";
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DeerStateIdle_00fdc5e8;
  this_00 = (BTRandomSelector *)operator_new(0x70);
                    /* try { // try from 0088313c to 00883147 has its CatchHandler @ 00884010 */
  BTRandomSelector::BTRandomSelector(this_00,(BehaviorTree *)(param_1 + 0x68),false);
  *(BTRandomSelector **)(this + 0x18) = this_00;
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088315c to 0088315f has its CatchHandler @ 00884008 */
  BTSequence::BTSequence(pBVar6,*(BehaviorTree **)(this + 0x10));
  lVar12 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar12 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar12 + 0x38)) {
    pvVar9 = *(void **)(lVar12 + 0x28);
    uVar11 = (long)ppBVar3 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883fa8;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *ppBVar3 = pBVar6;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(lVar12 + 0x28) = pvVar8;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar12 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *ppBVar3 = pBVar6;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 0088321c to 0088321f has its CatchHandler @ 00883ff0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  *(undefined4 *)(puVar7 + 6) = 1;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  ppvVar1 = (void **)(pBVar6 + 0x28);
  puVar7[5] = *(undefined8 *)(lVar12 + 0xb0);
  *puVar7 = &PTR__BTBehavior_00fdc4a8;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 008832f8 to 008832fb has its CatchHandler @ 00883fec */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar7[5] = uVar10;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar7 = &PTR__BTBehavior_00fdc638;
  puVar7[6] = 0x459c4000457a0000;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 008833d0 to 008833d3 has its CatchHandler @ 00883fe8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  *(undefined4 *)(puVar7 + 7) = 0xffffffff;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xb0);
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  *puVar7 = &PTR__BTBehavior_00fdc688;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 008834a8 to 008834ab has its CatchHandler @ 00883fe4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  *(undefined *)(puVar7 + 6) = 0;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  puVar7[5] = *(undefined8 *)(lVar12 + 0xb0);
  *puVar7 = &PTR__BTBehavior_00fdc548;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 0088357c to 0088357f has its CatchHandler @ 00883fe0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  *(undefined4 *)(puVar7 + 7) = 3;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  *puVar7 = &PTR__BTBehavior_00fdc598;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00883654 to 00883657 has its CatchHandler @ 00883fdc */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar7[5] = uVar10;
  puVar7[6] = 0x459c4000457a0000;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar7 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00883724 to 00883727 has its CatchHandler @ 00883fd8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar7[5] = 0xbf800000ffffffff;
  puVar7[6] = uVar10;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar7 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 008837f8 to 008837fb has its CatchHandler @ 00883fd4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  *puVar7 = &PTR__BTBehavior_00fdc728;
  puVar7[7] = 0xffffffff00000002;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 008838d4 to 008838d7 has its CatchHandler @ 00883fcc */
  BTSequence::BTSequence(pBVar6,*(BehaviorTree **)(this + 0x10));
  lVar12 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar12 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar12 + 0x38)) {
    pvVar9 = *(void **)(lVar12 + 0x28);
    uVar11 = (long)ppBVar3 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883fa8;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *ppBVar3 = pBVar6;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(lVar12 + 0x28) = pvVar8;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar12 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *ppBVar3 = pBVar6;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 00883994 to 00883997 has its CatchHandler @ 00883fc8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  ppvVar1 = (void **)(pBVar6 + 0x28);
  *(undefined4 *)(puVar7 + 7) = 3;
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  *puVar7 = &PTR__BTBehavior_00fdc598;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00883a70 to 00883a73 has its CatchHandler @ 00883fc4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar7[5] = uVar10;
  puVar7[6] = 0x459c4000457a0000;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar7 = &PTR__BTBehavior_00fdc638;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x38);
  uVar10 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00883b40 to 00883b43 has its CatchHandler @ 00883fc0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar7[5] = 0xbf800000ffffffff;
  puVar7[6] = uVar10;
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  *puVar7 = &PTR__BTBehavior_00fdc6d8;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 00883c1c to 00883c1f has its CatchHandler @ 00883fbc */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  *puVar7 = &PTR__BTBehavior_00fdc728;
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  puVar7[7] = 0xffffffff00000004;
  if (puVar4 == puVar5) {
    pvVar9 = *ppvVar1;
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  pBVar6 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00883cf8 to 00883cfb has its CatchHandler @ 00883fb4 */
  BTSequence::BTSequence(pBVar6,*(BehaviorTree **)(this + 0x10));
  lVar12 = *(long *)(this + 0x18);
  ppBVar3 = *(BTSequence ***)(lVar12 + 0x30);
  if (ppBVar3 == *(BTSequence ***)(lVar12 + 0x38)) {
    pvVar9 = *(void **)(lVar12 + 0x28);
    uVar11 = (long)ppBVar3 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_00883fa8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    ppBVar3 = (BTSequence **)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *ppBVar3 = pBVar6;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(lVar12 + 0x28) = pvVar8;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
    *(void **)(lVar12 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *ppBVar3 = pBVar6;
    *(BTSequence ***)(lVar12 + 0x30) = ppBVar3 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 00883dc0 to 00883dc3 has its CatchHandler @ 00883fb0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  puVar7[7] = 0xffffffff00000002;
  *puVar7 = &PTR__BTBehavior_00fdc728;
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  if (puVar4 == puVar5) {
    pvVar9 = *(void **)(pBVar6 + 0x28);
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00883f94;
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00883f9c;
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  puVar7 = (undefined8 *)operator_new(0x40);
  lVar12 = *(long *)(this + 0x20);
                    /* try { // try from 00883e98 to 00883e9b has its CatchHandler @ 00883fac */
  BTBehavior::BTBehavior((BTBehavior *)puVar7);
  puVar4 = *(undefined8 **)(pBVar6 + 0x30);
  puVar5 = *(undefined8 **)(pBVar6 + 0x38);
  uVar10 = *(undefined8 *)(lVar12 + 0xa0);
  *puVar7 = &PTR__BTBehavior_00fdc728;
  puVar7[5] = lVar12;
  puVar7[6] = uVar10;
  puVar7[7] = 0xffffffff00000005;
  if (puVar4 == puVar5) {
    pvVar9 = *(void **)(pBVar6 + 0x28);
    uVar11 = (long)puVar4 - (long)pvVar9;
    uVar2 = ((long)uVar11 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_00883f94:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar11 >> 2)) {
      uVar2 = (long)uVar11 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
LAB_00883f9c:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar8 = operator_new(uVar2 << 3);
    }
    puVar4 = (undefined8 *)((long)pvVar8 + ((long)uVar11 >> 3) * 8);
    *puVar4 = puVar7;
    if (0 < (long)uVar11) {
      memcpy(pvVar8,pvVar9,uVar11);
    }
    *(void **)(pBVar6 + 0x28) = pvVar8;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
    *(void **)(pBVar6 + 0x38) = (void *)((long)pvVar8 + uVar2 * 8);
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
      return;
    }
  }
  else {
    *puVar4 = puVar7;
    *(undefined8 **)(pBVar6 + 0x30) = puVar4 + 1;
  }
  return;
}


