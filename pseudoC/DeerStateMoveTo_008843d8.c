// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeerStateMoveTo
// Entry Point: 008843d8
// Size: 1040 bytes
// Signature: undefined __thiscall DeerStateMoveTo(DeerStateMoveTo * this, BehaviorContext * param_1)


/* DeerStateMoveTo::DeerStateMoveTo(BehaviorContext*) */

void __thiscall DeerStateMoveTo::DeerStateMoveTo(DeerStateMoveTo *this,BehaviorContext *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BTSequence *this_00;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  *(BehaviorContext **)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(char **)(this + 8) = "DeerStateMoveTo";
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DeerStateMoveTo_00fdc778;
  this_00 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088442c to 00884433 has its CatchHandler @ 00884800 */
  BTSequence::BTSequence(this_00,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x18) = this_00;
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x20);
                    /* try { // try from 00884448 to 0088444b has its CatchHandler @ 008847f4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  *(undefined4 *)(puVar4 + 6) = 2;
  puVar2 = *(undefined8 **)(this_00 + 0x30);
  puVar3 = *(undefined8 **)(this_00 + 0x38);
  puVar4[5] = *(undefined8 *)(lVar9 + 0xb0);
  *puVar4 = &PTR__BTBehavior_00fdc4a8;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(this_00 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_008847d8;
    if (uVar1 <= (ulong)((long)uVar8 >> 2)) {
      uVar1 = (long)uVar8 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_008847dc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(this_00 + 0x28) = pvVar5;
    *(undefined8 **)(this_00 + 0x30) = puVar2 + 1;
    *(void **)(this_00 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(this_00 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x20);
                    /* try { // try from 00884528 to 0088452b has its CatchHandler @ 008847f0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar6 = *(undefined8 *)(lVar9 + 0xb0);
  puVar4[5] = lVar9;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc4f8;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_008847d8;
    if (uVar1 <= (ulong)((long)uVar8 >> 2)) {
      uVar1 = (long)uVar8 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_008847dc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar10 + 0x28) = pvVar5;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
    *(void **)(lVar10 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x20);
                    /* try { // try from 00884600 to 00884603 has its CatchHandler @ 008847ec */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = *(undefined8 *)(lVar9 + 0xb0);
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined *)(puVar4 + 6) = 0;
  *puVar4 = &PTR__BTBehavior_00fdc548;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_008847d8;
    if (uVar1 <= (ulong)((long)uVar8 >> 2)) {
      uVar1 = (long)uVar8 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) goto LAB_008847dc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar10 + 0x28) = pvVar5;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
    *(void **)(lVar10 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar9 = *(long *)(this + 0x20);
                    /* try { // try from 008846dc to 008846df has its CatchHandler @ 008847e8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar6 = *(undefined8 *)(lVar9 + 0xa0);
  puVar4[5] = lVar9;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined4 *)(puVar4 + 7) = 4;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_008847d8:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)uVar8 >> 2)) {
      uVar1 = (long)uVar8 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
LAB_008847dc:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar10 + 0x28) = pvVar5;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
    *(void **)(lVar10 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      return;
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
  }
  return;
}


