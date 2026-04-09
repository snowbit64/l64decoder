// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DogStateFetch
// Entry Point: 00886f44
// Size: 3460 bytes
// Signature: undefined __thiscall DogStateFetch(DogStateFetch * this, BehaviorContext * param_1)


/* DogStateFetch::DogStateFetch(BehaviorContext*) */

void __thiscall DogStateFetch::DogStateFetch(DogStateFetch *this,BehaviorContext *param_1)

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
  
  *(BehaviorContext **)(this + 0x10) = param_1;
  *(BehaviorTree **)(this + 0x18) = (BehaviorTree *)(param_1 + 0x68);
  *(undefined ***)this = &PTR__DogStateFetch_00fdcad8;
  *(char **)(this + 8) = "DogStateFetch";
  this_00 = (BTSequence *)operator_new(0x50);
                    /* try { // try from 00886f90 to 00886f97 has its CatchHandler @ 00887d0c */
  BTSequence::BTSequence(this_00,(BehaviorTree *)(param_1 + 0x68));
  *(BTSequence **)(this + 0x20) = this_00;
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 00886fac to 00886faf has its CatchHandler @ 00887d00 */
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
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 0088708c to 0088708f has its CatchHandler @ 00887cfc */
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
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 00887164 to 00887167 has its CatchHandler @ 00887cf8 */
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
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 00887244 to 00887247 has its CatchHandler @ 00887cf4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = *(undefined8 *)(lVar9 + 0xb0);
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined *)(puVar4 + 6) = 1;
  *puVar4 = &PTR__BTBehavior_00fdc548;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar9 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00887324 to 00887327 has its CatchHandler @ 00887cf0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar6;
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  puVar3 = *(undefined8 **)(lVar9 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdcb28;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar9 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar9 + 0x28) = pvVar5;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
    *(void **)(lVar9 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 008873f8 to 008873fb has its CatchHandler @ 00887cec */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = *(undefined8 *)(lVar9 + 0xb0);
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined4 *)(puVar4 + 6) = 1;
  *puVar4 = &PTR__BTBehavior_00fdc4a8;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 008874d8 to 008874db has its CatchHandler @ 00887ce8 */
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
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 008875b0 to 008875b3 has its CatchHandler @ 00887ce4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar6 = *(undefined8 *)(lVar9 + 0xa0);
  puVar4[5] = lVar9;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined4 *)(puVar4 + 7) = 3;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 00887690 to 00887693 has its CatchHandler @ 00887ce0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = *(undefined8 *)(lVar9 + 0xb0);
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc548;
  *(undefined *)(puVar4 + 6) = 1;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar9 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x30);
  uVar6 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00887768 to 0088776b has its CatchHandler @ 00887cdc */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar6;
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  puVar3 = *(undefined8 **)(lVar9 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdcb78;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar9 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar9 + 0x28) = pvVar5;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
    *(void **)(lVar9 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
  }
  lVar9 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar6 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 0088783c to 0088783f has its CatchHandler @ 00887cd8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar6;
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  puVar3 = *(undefined8 **)(lVar9 + 0x38);
  *(undefined4 *)(puVar4 + 6) = 2;
  *(undefined *)((long)puVar4 + 0x34) = 0;
  *puVar4 = &PTR__BTBehavior_00fdc998;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar9 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar9 + 0x28) = pvVar5;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
    *(void **)(lVar9 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
  }
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 0088791c to 0088791f has its CatchHandler @ 00887cd4 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar6 = *(undefined8 *)(lVar9 + 0xa0);
  puVar4[5] = lVar9;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc728;
  puVar4[7] = 0xffffffff00000006;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar10 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x40);
  lVar9 = *(long *)(this + 0x10);
                    /* try { // try from 00887a00 to 00887a03 has its CatchHandler @ 00887cd0 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  uVar6 = *(undefined8 *)(lVar9 + 0xa0);
  puVar4[5] = lVar9;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar10 + 0x30);
  puVar3 = *(undefined8 **)(lVar10 + 0x38);
  *(undefined4 *)(puVar4 + 7) = 3;
  *puVar4 = &PTR__BTBehavior_00fdc598;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar10 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
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
  lVar9 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar6 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00887ae0 to 00887ae3 has its CatchHandler @ 00887ccc */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = uVar6;
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  puVar3 = *(undefined8 **)(lVar9 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc638;
  puVar4[6] = 0x459c4000453b8000;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar9 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) goto LAB_00887cb8;
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
      if (uVar1 >> 0x3d != 0) goto LAB_00887cbc;
      pvVar5 = operator_new(uVar1 << 3);
    }
    puVar2 = (undefined8 *)((long)pvVar5 + ((long)uVar8 >> 3) * 8);
    *puVar2 = puVar4;
    if (0 < (long)uVar8) {
      memcpy(pvVar5,pvVar7,uVar8);
    }
    *(void **)(lVar9 + 0x28) = pvVar5;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
    *(void **)(lVar9 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
  }
  lVar9 = *(long *)(this + 0x20);
  puVar4 = (undefined8 *)operator_new(0x38);
  uVar6 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00887bc0 to 00887bc3 has its CatchHandler @ 00887cc8 */
  BTBehavior::BTBehavior((BTBehavior *)puVar4);
  puVar4[5] = 0xbf800000ffffffff;
  puVar4[6] = uVar6;
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  puVar3 = *(undefined8 **)(lVar9 + 0x38);
  *puVar4 = &PTR__BTBehavior_00fdc6d8;
  if (puVar2 == puVar3) {
    pvVar7 = *(void **)(lVar9 + 0x28);
    uVar8 = (long)puVar2 - (long)pvVar7;
    uVar1 = ((long)uVar8 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
LAB_00887cb8:
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
LAB_00887cbc:
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
    *(void **)(lVar9 + 0x28) = pvVar5;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
    *(void **)(lVar9 + 0x38) = (void *)((long)pvVar5 + uVar1 * 8);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
      return;
    }
  }
  else {
    *puVar2 = puVar4;
    *(undefined8 **)(lVar9 + 0x30) = puVar2 + 1;
  }
  return;
}


