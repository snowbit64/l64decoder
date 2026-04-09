// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTriangleColShapeToCache
// Entry Point: 0098dc3c
// Size: 380 bytes
// Signature: undefined __thiscall addTriangleColShapeToCache(Bt2PhysicsColShapeCache * this, ulonglong param_1, btBvhTriangleMeshShape * param_2)


/* Bt2PhysicsColShapeCache::addTriangleColShapeToCache(unsigned long long, btBvhTriangleMeshShape*)
    */

void __thiscall
Bt2PhysicsColShapeCache::addTriangleColShapeToCache
          (Bt2PhysicsColShapeCache *this,ulonglong param_1,btBvhTriangleMeshShape *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  
  puVar4 = (undefined8 *)(this + 8);
  puVar5 = (undefined8 *)*puVar4;
  puVar2 = puVar4;
  if (puVar5 == (undefined8 *)0x0) {
LAB_0098dd00:
    puVar5 = (undefined8 *)*puVar4;
  }
  else {
    puVar4 = (undefined8 *)(this + 8);
    do {
      while (puVar2 = puVar5, uVar3 = puVar2[4], uVar3 == param_1) {
        if (*(char *)((long)puVar2 + 0x34) != '\0') goto LAB_0098dcb0;
        fVar7 = *(float *)(puVar2 + 5);
        bVar1 = fVar7 == 1.0;
        if (bVar1) {
          fVar7 = *(float *)((long)puVar2 + 0x2c);
          bVar1 = fVar7 == 1.0;
          if (!bVar1) goto LAB_0098dc9c;
          if (1.0 < *(float *)(puVar2 + 6)) goto LAB_0098dcb0;
          fVar7 = *(float *)(puVar2 + 6);
        }
        else {
LAB_0098dc9c:
          if (!bVar1 && 1.0 <= fVar7) goto LAB_0098dcb0;
        }
        if (1.0 <= fVar7) goto LAB_0098dd00;
LAB_0098dccc:
        puVar4 = puVar2 + 1;
        puVar5 = (undefined8 *)*puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_0098dd00;
      }
      if (uVar3 <= param_1) {
        if (uVar3 < param_1) goto LAB_0098dccc;
        goto LAB_0098dd00;
      }
LAB_0098dcb0:
      puVar4 = puVar2;
      puVar5 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
    puVar5 = (undefined8 *)*puVar2;
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(0x40);
    uVar6 = NEON_fmov(0x3f800000,4);
    puVar5[4] = param_1;
    *(undefined *)((long)puVar5 + 0x34) = 0;
    *(undefined4 *)(puVar5 + 6) = 0x3f800000;
    puVar5[7] = param_2;
    puVar5[5] = uVar6;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = puVar2;
    *puVar4 = puVar5;
    puVar2 = puVar5;
    if (**(long **)this != 0) {
      *(long *)this = **(long **)this;
      puVar2 = (undefined8 *)*puVar4;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)puVar2);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  puVar4 = (undefined8 *)operator_new(0x20);
  puVar4[2] = 0;
  puVar4[3] = puVar5;
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  *(undefined4 *)(puVar4 + 1) = 1;
  *puVar4 = &PTR__BaseUserData_00fe0b90;
  return;
}


