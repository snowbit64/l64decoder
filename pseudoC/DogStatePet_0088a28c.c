// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStatePet
// Entry Point: 0088a28c
// Size: 1048 bytes
// Signature: undefined __thiscall DogStatePet(DogStatePet * this, BehaviorContext * param_1)


/* DogStatePet::DogStatePet(BehaviorContext*) */

void __thiscall DogStatePet::DogStatePet(DogStatePet *this,BehaviorContext *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  BTSequence *this_00;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  *(BehaviorContext **)(this + 0x20) = param_1;
  *(char **)(this + 8) = "DogStatePet";
  *(BehaviorTree **)(this + 0x10) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DogStatePet_00fdcdf8;
  this_00 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 0088a2dc to 0088a2e3 has its CatchHandler @ 0088a6bc */
  BTSequence::BTSequence(this_00,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x18) = this_00;
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar9 = *(undefined8 *)(this + 0x20);
                    /* try { // try from 0088a2f8 to 0088a2fb has its CatchHandler @ 0088a6b0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar9;
  puVar2 = *(undefined8 **)(this_00 + 0x30);
  puVar3 = *(undefined8 **)(this_00 + 0x38);
  *(undefined4 *)(puVar4 + 6) = 3;
  *(undefined *)((long)puVar4 + 0x34) = 0;
  *puVar4 = &PTR__BTBehavior_00fdc998;
  if (puVar2 == puVar3) {
    pvVar6 = *(void **)(this_00 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088a694;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088a698;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
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
    *puVar2 = puVar4;
    *(undefined8 **)(this_00 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar7 = *(long *)(this + 0x20);
                    /* try { // try from 0088a3d8 to 0088a3db has its CatchHandler @ 0088a6ac */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar9 = *(undefined8 *)(lVar7 + 0xa0);
  puVar4[5] = lVar7;
  puVar4[6] = uVar9;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc728;
  puVar4[7] = 0xffffffff00000009;
  if (puVar2 == puVar3) {
    pvVar6 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088a694;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088a698;
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
  lVar10 = *(long *)(this + 0x18);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar7 = *(long *)(this + 0x20);
                    /* try { // try from 0088a4bc to 0088a4bf has its CatchHandler @ 0088a6a8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar9 = *(undefined8 *)(lVar7 + 0xa0);
  puVar4[5] = lVar7;
  puVar4[6] = uVar9;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined4 *)(puVar4 + 7) = 3;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar2 == puVar3) {
    pvVar6 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_0088a694;
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
      if (uVar1 >> 0x3d != 0) goto LAB_0088a698;
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
                    /* try { // try from 0088a59c to 0088a59f has its CatchHandler @ 0088a6a4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = 0x43fa0000ffffffff;
  puVar4[6] = uVar9;
  puVar2 = *(undefined8 **)(lVar7 + 0x30);
  puVar3 = *(undefined8 **)(lVar7 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc6d8;
  if (puVar2 == puVar3) {
    pvVar6 = *(void **)(lVar7 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar6;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_0088a694:
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
LAB_0088a698:
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
    *(void **)(lVar7 + 0x28) = pvVar5;
    *(undefined8 **)(lVar7 + 0x30) = puVar2 + 1;
    *(void **)(lVar7 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
      return;
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar7 + 0x30) = puVar2 + 1;
  }
  return;
}


