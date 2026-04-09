// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: insert
// Entry Point: 009837a4
// Size: 896 bytes
// Signature: undefined __thiscall insert(vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>> * this, __wrap_iter param_1, MovingShapeData * param_2)


/* std::__ndk1::vector<MeshSplitManager::MovingShapeData,
   std::__ndk1::allocator<MeshSplitManager::MovingShapeData>
   >::insert(std::__ndk1::__wrap_iter<MeshSplitManager::MovingShapeData const*>,
   MeshSplitManager::MovingShapeData const&) */

undefined8 * __thiscall
std::__ndk1::
vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>>
::insert(vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>>
         *this,__wrap_iter param_1,MovingShapeData *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  MovingShapeData *pMVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  void *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  void *local_58;
  vector<MeshSplitManager::MovingShapeData,std::__ndk1::allocator<MeshSplitManager::MovingShapeData>>
  *local_50;
  long local_48;
  
  puVar14 = (undefined8 *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = *(long *)this;
  puVar4 = *(undefined8 **)(this + 8);
  lVar10 = (long)puVar14 - lVar3 >> 2;
  if (puVar4 < *(undefined8 **)(this + 0x10)) {
    puVar15 = puVar14;
    if (puVar14 == puVar4) {
      uVar13 = *(undefined8 *)param_2;
      lVar3 = lVar3 + lVar10 * 4;
      puVar14[1] = *(undefined8 *)(param_2 + 8);
      *puVar14 = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar3 + 0x10) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x20);
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = uVar13;
      *(MovingShapeData **)(this + 8) = (MovingShapeData *)((long)puVar14 + 0x2c);
    }
    else {
      pMVar5 = (MovingShapeData *)((long)puVar4 + (-0x2c - (long)puVar14));
      lVar6 = (long)pMVar5 / 0x2c;
      puVar11 = puVar4;
      for (puVar12 = (undefined8 *)((long)puVar14 + lVar6 * 0x2c); puVar12 < puVar4;
          puVar12 = (undefined8 *)((long)puVar12 + 0x2c)) {
        uVar13 = *puVar12;
        puVar11[1] = puVar12[1];
        *puVar11 = uVar13;
        uVar13 = puVar12[2];
        puVar11[3] = puVar12[3];
        puVar11[2] = uVar13;
        uVar13 = puVar12[4];
        *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(puVar12 + 5);
        puVar11[4] = uVar13;
        puVar11 = (undefined8 *)((long)puVar11 + 0x2c);
      }
      *(undefined8 **)(this + 8) = puVar11;
      if (pMVar5 != (MovingShapeData *)0x0) {
        puVar4 = (undefined8 *)((long)puVar4 - 0xc);
        lVar6 = lVar6 * 0x2c;
        do {
          lVar7 = lVar6 + -0x2c;
          uVar13 = *(undefined8 *)((long)puVar14 + lVar6 + -0x2c);
          puVar4[-3] = *(undefined8 *)((long)puVar14 + lVar6 + -0x24);
          puVar4[-4] = uVar13;
          uVar13 = *(undefined8 *)((long)puVar14 + lVar6 + -0x1c);
          puVar4[-1] = *(undefined8 *)((long)puVar14 + lVar6 + -0x14);
          puVar4[-2] = uVar13;
          uVar13 = *(undefined8 *)((long)puVar14 + lVar6 + -0xc);
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((long)puVar14 + lVar6 + -4);
          *puVar4 = uVar13;
          puVar4 = (undefined8 *)((long)puVar4 + -0x2c);
          lVar6 = lVar7;
        } while (lVar7 != 0);
        puVar11 = *(undefined8 **)(this + 8);
      }
      puVar4 = (undefined8 *)(param_2 + (ulong)(puVar14 <= param_2 && param_2 < puVar11) * 0x2c);
      lVar3 = lVar3 + lVar10 * 4;
      uVar13 = *puVar4;
      puVar14[1] = puVar4[1];
      *puVar14 = uVar13;
      uVar13 = puVar4[2];
      *(undefined8 *)(lVar3 + 0x18) = puVar4[3];
      *(undefined8 *)(lVar3 + 0x10) = uVar13;
      uVar13 = puVar4[4];
      *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(puVar4 + 5);
      *(undefined8 *)(lVar3 + 0x20) = uVar13;
    }
  }
  else {
    uVar9 = ((long)puVar4 - lVar3 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
    if (0x5d1745d1745d174 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = (long)*(undefined8 **)(this + 0x10) - lVar3 >> 2;
    uVar8 = lVar3 * 0x5d1745d1745d1746;
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    local_50 = this + 0x10;
    if (0x2e8ba2e8ba2e8b9 < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar9 = 0x5d1745d1745d174;
    }
    if (uVar9 == 0) {
      local_70 = (void *)0x0;
    }
    else {
      if (0x5d1745d1745d174 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_70 = operator_new(uVar9 * 0x2c);
    }
    local_68 = (undefined8 *)((long)local_70 + lVar10 * 4);
    local_58 = (void *)((long)local_70 + uVar9 * 0x2c);
    local_60 = local_68;
                    /* try { // try from 009839d0 to 009839db has its CatchHandler @ 00983b24 */
    FUN_00988e78(&local_70,param_2);
    puVar15 = local_68;
    puVar12 = *(undefined8 **)this;
    for (puVar4 = puVar14; puVar12 != puVar4; puVar4 = (undefined8 *)((long)puVar4 + -0x2c)) {
      uVar13 = *(undefined8 *)((long)puVar4 + -0x2c);
      *(undefined8 *)((long)local_68 + -0x24) = *(undefined8 *)((long)puVar4 + -0x24);
      *(undefined8 *)((long)local_68 + -0x2c) = uVar13;
      uVar13 = *(undefined8 *)((long)puVar4 + -0x1c);
      *(undefined8 *)((long)local_68 + -0x14) = *(undefined8 *)((long)puVar4 + -0x14);
      *(undefined8 *)((long)local_68 + -0x1c) = uVar13;
      uVar13 = *(undefined8 *)((long)puVar4 + -0xc);
      *(undefined4 *)((long)local_68 + -4) = *(undefined4 *)((long)puVar4 + -4);
      *(undefined8 *)((long)local_68 + -0xc) = uVar13;
      local_68 = (undefined8 *)((long)local_68 + -0x2c);
    }
    puVar4 = *(undefined8 **)(this + 8);
    if (puVar4 != puVar14) {
      do {
        uVar13 = *puVar14;
        local_60[1] = puVar14[1];
        *local_60 = uVar13;
        uVar13 = puVar14[2];
        local_60[3] = puVar14[3];
        local_60[2] = uVar13;
        puVar12 = puVar14 + 4;
        uVar1 = *(undefined4 *)(puVar14 + 5);
        puVar14 = (undefined8 *)((long)puVar14 + 0x2c);
        local_60[4] = *puVar12;
        *(undefined4 *)(local_60 + 5) = uVar1;
        local_60 = (undefined8 *)((long)local_60 + 0x2c);
      } while (puVar14 != puVar4);
      puVar14 = *(undefined8 **)(this + 8);
    }
    local_70 = *(void **)this;
    *(undefined8 **)this = local_68;
    *(undefined8 **)(this + 8) = local_60;
    uVar13 = *(undefined8 *)(this + 0x10);
    *(void **)(this + 0x10) = local_58;
    local_60 = puVar14;
    if ((long)puVar14 - (long)local_70 != 0) {
      local_60 = (undefined8 *)
                 ((long)puVar14 +
                 ((((long)puVar14 - (long)local_70) - 0x2cU) / 0x2c ^ 0xffffffffffffffff) * 0x2c);
    }
    local_68 = (undefined8 *)local_70;
    local_58 = (void *)uVar13;
    if (local_70 != (void *)0x0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar15;
}


