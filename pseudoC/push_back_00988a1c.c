// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: push_back
// Entry Point: 00988a1c
// Size: 416 bytes
// Signature: undefined __thiscall push_back(__split_buffer<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&> * this, ConnectionShapeData * param_1)


/* std::__ndk1::__split_buffer<MeshSplitManager::ConnectionShapeData,
   std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&>::push_back(MeshSplitManager::ConnectionShapeData&&)
    */

void __thiscall
std::__ndk1::
__split_buffer<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&>
::push_back(__split_buffer<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>&>
            *this,ConnectionShapeData *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar8 = *(undefined8 **)(this + 0x10);
  if (puVar8 == *(undefined8 **)(this + 0x18)) {
    puVar1 = *(undefined8 **)this;
    __src = *(undefined8 **)(this + 8);
    if (__src < puVar1 || (long)__src - (long)puVar1 == 0) {
      uVar4 = ((long)puVar8 - (long)puVar1 >> 2) * -0x2492492492492492;
      if ((long)puVar8 - (long)puVar1 == 0) {
        uVar4 = 1;
      }
      if (0x924924924924924 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar4 * 0x1c);
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x1c);
      lVar6 = (long)puVar8 - (long)__src;
      puVar8 = puVar5;
      if (lVar6 != 0) {
        lVar6 = lVar6 / 0x1c;
        puVar8 = (undefined8 *)((long)puVar5 + lVar6 * 0x1c);
        lVar6 = lVar6 * 0x1c;
        puVar7 = puVar5;
        do {
          uVar9 = *(undefined8 *)((long)__src + 0xc);
          lVar6 = lVar6 + -0x1c;
          uVar11 = __src[1];
          uVar10 = *__src;
          *(undefined8 *)((long)puVar7 + 0x14) = *(undefined8 *)((long)__src + 0x14);
          *(undefined8 *)((long)puVar7 + 0xc) = uVar9;
          puVar7[1] = uVar11;
          *puVar7 = uVar10;
          puVar7 = (undefined8 *)((long)puVar7 + 0x1c);
          __src = (undefined8 *)((long)__src + 0x1c);
        } while (lVar6 != 0);
      }
      *(void **)this = pvVar2;
      *(undefined8 **)(this + 8) = puVar5;
      *(undefined8 **)(this + 0x10) = puVar8;
      *(void **)(this + 0x18) = (void *)((long)pvVar2 + uVar4 * 0x1c);
      if (puVar1 != (undefined8 *)0x0) {
        operator_delete(puVar1);
        puVar8 = *(undefined8 **)(this + 0x10);
      }
    }
    else {
      lVar3 = ((long)__src - (long)puVar1 >> 2) * 0x6db6db6db6db6db7;
      lVar6 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar6 = lVar3 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      pvVar2 = (void *)((long)__src + (lVar6 >> 1) * -0x1c);
      if (__n != 0) {
        memmove(pvVar2,__src,__n);
        __src = *(undefined8 **)(this + 8);
      }
      puVar8 = (undefined8 *)((long)pvVar2 + __n);
      *(void **)(this + 8) = (void *)((long)__src + (lVar6 >> 1) * -0x1c);
      *(undefined8 **)(this + 0x10) = puVar8;
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0xc);
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  *(undefined8 *)((long)puVar8 + 0x14) = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)((long)puVar8 + 0xc) = uVar9;
  puVar8[1] = uVar11;
  *puVar8 = uVar10;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 0x1c;
  return;
}


