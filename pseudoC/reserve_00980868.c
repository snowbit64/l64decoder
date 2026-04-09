// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reserve
// Entry Point: 00980868
// Size: 420 bytes
// Signature: undefined __thiscall reserve(vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>> * this, ulong param_1)


/* std::__ndk1::vector<MeshSplitManager::LoadedSplitShape,
   std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
::reserve(vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
          *this,ulong param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  LoadedSplitShape *pLVar9;
  LoadedSplitShape *this_00;
  long lVar10;
  
  pLVar9 = *(LoadedSplitShape **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)pLVar9 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    if (0x2e8ba2e8ba2e8ba < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    lVar10 = *(long *)(this + 8);
    pvVar5 = operator_new(param_1 * 0x58);
    lVar3 = (lVar10 - (long)pLVar9) / 0x58;
    pvVar1 = (void *)((long)pvVar5 + param_1 * 0x58);
    pvVar6 = (void *)((long)pvVar5 + lVar3 * 0x58);
    if (lVar10 - (long)pLVar9 == 0) {
      *(void **)this = pvVar6;
      *(void **)(this + 8) = pvVar6;
      *(void **)(this + 0x10) = pvVar1;
    }
    else {
      lVar7 = 0;
      do {
        lVar2 = lVar10 + lVar7;
        lVar4 = lVar7 + lVar3 * 0x58;
        lVar7 = lVar7 + -0x58;
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x58) = *(undefined8 *)(lVar2 + -0x58);
        uVar8 = *(undefined8 *)(lVar2 + -0x50);
        *(undefined4 *)((long)pvVar5 + lVar4 + -0x48) = *(undefined4 *)(lVar2 + -0x48);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x50) = uVar8;
        uVar8 = *(undefined8 *)(lVar2 + -0x44);
        *(undefined4 *)((long)pvVar5 + lVar4 + -0x3c) = *(undefined4 *)(lVar2 + -0x3c);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x44) = uVar8;
        uVar8 = *(undefined8 *)(lVar2 + -0x38);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x38) = uVar8;
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        uVar8 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x28) = 0;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)(lVar2 + -0x30) = 0;
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)((long)pvVar5 + lVar4 + -0x10) = uVar8;
        *(undefined8 *)((long)pvVar5 + lVar4 + -8) = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)(lVar2 + -8) = 0;
        *(undefined8 *)(lVar2 + -0x38) = 0;
      } while ((LoadedSplitShape *)(lVar10 + lVar7) != pLVar9);
      *(void **)(this + 0x10) = pvVar1;
      pLVar9 = *(LoadedSplitShape **)this;
      this_00 = *(LoadedSplitShape **)(this + 8);
      *(long *)this = (long)pvVar5 + lVar7 + lVar3 * 0x58;
      *(void **)(this + 8) = pvVar6;
      while (this_00 != pLVar9) {
        this_00 = this_00 + -0x58;
        MeshSplitManager::LoadedSplitShape::~LoadedSplitShape(this_00);
      }
    }
    if (pLVar9 != (LoadedSplitShape *)0x0) {
      operator_delete(pLVar9);
      return;
    }
  }
  return;
}


