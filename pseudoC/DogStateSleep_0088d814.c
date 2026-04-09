// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateSleep
// Entry Point: 0088d814
// Size: 1168 bytes
// Signature: undefined __thiscall DogStateSleep(DogStateSleep * this, BehaviorContext * param_1)


/* DogStateSleep::DogStateSleep(BehaviorContext*) */

void __thiscall DogStateSleep::DogStateSleep(DogStateSleep *this,BehaviorContext *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  BTSequence *this_00;
  undefined8 *this_01;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  byte local_98;
  undefined5 local_97;
  undefined3 uStack_92;
  undefined5 uStack_8f;
  undefined local_8a;
  void *local_88;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  *(BehaviorContext **)(this + 0x20) = param_1;
  local_8a = 0;
  *(char **)(this + 8) = "DogStateSleep";
  *(BehaviorContext **)(this + 0x10) = param_1 + 0x68;
  *(undefined ***)this = &PTR__DogStateSleep_00fdcf38;
  local_98 = 0x1a;
  local_97 = 0x7065656c73;
  uStack_92 = 0x727544;
  uStack_8f = 0x6e6f697461;
                    /* try { // try from 0088d894 to 0088d8a3 has its CatchHandler @ 0088dcd0 */
  BehaviorDataSource::findRange
            (*(BehaviorDataSource **)(param_1 + 0x98),(basic_string *)&local_98,&local_7c,&local_80)
  ;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  this_00 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088d8c4 to 0088d8c7 has its CatchHandler @ 0088dcbc */
  BTSequence::BTSequence(this_00,*(BehaviorTree **)(this + 0x10));
  *(BTSequence **)(this + 0x18) = this_00;
  this_01 = (undefined8 *)operator_new(0x38);
  uVar9 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088d8dc to 0088d8df has its CatchHandler @ 0088dcb0 */
  BTBehavior::BTBehavior((BTBehavior *)this_01);
  this_01[5] = uVar9;
  puVar2 = *(undefined8 **)(this_00 + 0x30);
  puVar4 = *(undefined8 **)(this_00 + 0x38);
  *(undefined4 *)(this_01 + 6) = 9;
  *(undefined *)((long)this_01 + 0x34) = 0;
  *this_01 = &PTR__BTBehavior_00fdc998;
  if (puVar2 == puVar4) {
    pvVar6 = *(void **)(this_00 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088dc90;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088dc94;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = this_01;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar6,uVar8);
    }
    *(void **)(this_00 + 0x28) = pvVar5;
    *(undefined8 **)(this_00 + 0x30) = puVar2 + 1;
    *(void **)(this_00 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar2 = this_01;
    *(undefined8 **)(this_00 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar7 = *(long *)(this + 0x20);
                    /* try { // try from 0088d9bc to 0088d9bf has its CatchHandler @ 0088dcac */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = lVar7;
  *puVar4 = &PTR__BTBehavior_00fdc728;
  uVar9 = *(undefined8 *)(lVar7 + 0xa0);
  puVar4[7] = 0xffffffff00000007;
  puVar4[6] = uVar9;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  if (puVar2 == *(undefined8 **)(lVar10 + 0x38)) {
    pvVar6 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088dc90;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088dc94;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar6,uVar8);
    }
    *(void **)(lVar10 + 0x28) = pvVar5;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
    *(void **)(lVar10 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
  }
  lVar7 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar9 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088daac to 0088daaf has its CatchHandler @ 0088dca8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar9;
  *(float *)(puVar4 + 6) = local_7c;
  *(float *)((long)puVar4 + 0x34) = local_80;
  *puVar4 = &PTR__BTBehavior_00fdc638;
  puVar2 = *(undefined8 **)(lVar7 + 0x30);
  if (puVar2 == *(undefined8 **)(lVar7 + 0x38)) {
    pvVar6 = *(void **)(lVar7 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088dc90;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088dc94;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar6,uVar8);
    }
    *(void **)(lVar7 + 0x28) = pvVar5;
    *(undefined8 **)(lVar7 + 0x30) = puVar2 + 1;
    *(void **)(lVar7 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar7 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar7 = *(long *)(this + 0x20);
                    /* try { // try from 0088db88 to 0088db8b has its CatchHandler @ 0088dca4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = lVar7;
  *puVar4 = &PTR__BTBehavior_00fdc9e8;
  uVar9 = *(undefined8 *)(lVar7 + 0xa0);
  puVar4[7] = 0xffffffff00000008;
  puVar4[6] = uVar9;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  if (puVar2 == *(undefined8 **)(lVar10 + 0x38)) {
    pvVar6 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_0088dc90:
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
LAB_0088dc94:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar6,uVar8);
    }
    *(void **)(lVar10 + 0x28) = pvVar5;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
    *(void **)(lVar10 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar10 + 0x30) = puVar2 + 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


