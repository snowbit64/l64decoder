// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __emplace_back_slow_path<>
// Entry Point: 00987bc0
// Size: 468 bytes
// Signature: void __emplace_back_slow_path<>(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__ndk1::vector<MeshSplitManager::LoadedSplitShape,
   std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape> >::__emplace_back_slow_path<>() */

void std::__ndk1::
     vector<MeshSplitManager::LoadedSplitShape,std::__ndk1::allocator<MeshSplitManager::LoadedSplitShape>>
     ::__emplace_back_slow_path<>(void)

{
  ulong uVar1;
  LoadedSplitShape *pLVar2;
  undefined8 uVar3;
  LoadedSplitShape **in_x0;
  void *pvVar4;
  long lVar5;
  LoadedSplitShape *pLVar6;
  LoadedSplitShape *pLVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  LoadedSplitShape *pLVar12;
  
  pLVar12 = *in_x0;
  pLVar2 = in_x0[1];
  lVar5 = (long)pLVar2 - (long)pLVar12 >> 3;
  uVar1 = lVar5 * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = (long)in_x0[2] - (long)pLVar12 >> 3;
  uVar9 = lVar8 * 0x5d1745d1745d1746;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x1745d1745d1745c < (ulong)(lVar8 * 0x2e8ba2e8ba2e8ba3)) {
    uVar1 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x58);
  }
  pLVar7 = (LoadedSplitShape *)((long)pvVar4 + lVar5 * 8);
  pLVar6 = (LoadedSplitShape *)((long)pvVar4 + uVar1 * 0x58);
  *(undefined8 *)(pLVar7 + 0x50) = 0;
  *(undefined8 *)(pLVar7 + 0x38) = 0;
  *(undefined8 *)(pLVar7 + 0x30) = 0;
  *(undefined8 *)(pLVar7 + 0x48) = 0;
  *(undefined8 *)(pLVar7 + 0x40) = 0;
  *(undefined8 *)(pLVar7 + 0x28) = 0;
  *(undefined8 *)(pLVar7 + 0x20) = 0;
  if (pLVar2 == pLVar12) {
    *in_x0 = pLVar7;
    in_x0[1] = pLVar7 + 0x58;
    in_x0[2] = pLVar6;
  }
  else {
    lVar5 = 0;
    do {
      lVar8 = lVar5 + -0x58;
      *(undefined8 *)(pLVar7 + lVar5 + -0x58) = *(undefined8 *)(pLVar2 + lVar5 + -0x58);
      uVar11 = *(undefined8 *)(pLVar2 + lVar5 + -0x50);
      *(undefined4 *)(pLVar7 + lVar5 + -0x48) = *(undefined4 *)(pLVar2 + lVar5 + -0x48);
      *(undefined8 *)(pLVar7 + lVar5 + -0x50) = uVar11;
      uVar11 = *(undefined8 *)(pLVar2 + lVar5 + -0x44);
      *(undefined4 *)(pLVar7 + lVar5 + -0x3c) = *(undefined4 *)(pLVar2 + lVar5 + -0x3c);
      *(undefined8 *)(pLVar7 + lVar5 + -0x44) = uVar11;
      uVar10 = *(undefined8 *)(pLVar2 + lVar5 + -0x38);
      *(undefined8 *)(pLVar7 + lVar5 + -0x28) = 0;
      *(undefined8 *)(pLVar7 + lVar5 + -0x20) = 0;
      uVar11 = *(undefined8 *)(pLVar2 + lVar5 + -0x30);
      uVar3 = *(undefined8 *)(pLVar2 + lVar5 + -0x28);
      *(undefined8 *)(pLVar7 + lVar5 + -0x38) = uVar10;
      *(undefined8 *)(pLVar7 + lVar5 + -0x30) = uVar11;
      *(undefined8 *)(pLVar7 + lVar5 + -0x28) = uVar3;
      *(undefined8 *)(pLVar7 + lVar5 + -0x20) = *(undefined8 *)(pLVar2 + lVar5 + -0x20);
      *(undefined8 *)(pLVar2 + lVar5 + -0x30) = 0;
      *(undefined8 *)(pLVar2 + lVar5 + -0x28) = 0;
      *(undefined8 *)(pLVar2 + lVar5 + -0x20) = 0;
      *(undefined8 *)(pLVar7 + lVar5 + -0x10) = 0;
      *(undefined8 *)(pLVar7 + lVar5 + -8) = 0;
      uVar11 = *(undefined8 *)(pLVar2 + lVar5 + -0x10);
      *(undefined8 *)(pLVar7 + lVar5 + -0x18) = *(undefined8 *)(pLVar2 + lVar5 + -0x18);
      *(undefined8 *)(pLVar7 + lVar5 + -0x10) = uVar11;
      *(undefined8 *)(pLVar7 + lVar5 + -8) = *(undefined8 *)(pLVar2 + lVar5 + -8);
      *(undefined8 *)(pLVar2 + lVar5 + -0x18) = 0;
      *(undefined8 *)(pLVar2 + lVar5 + -0x10) = 0;
      *(undefined8 *)(pLVar2 + lVar5 + -8) = 0;
      *(undefined8 *)(pLVar2 + lVar5 + -0x38) = 0;
      lVar5 = lVar8;
    } while (pLVar2 + lVar8 != pLVar12);
    pLVar2 = *in_x0;
    pLVar12 = in_x0[1];
    in_x0[2] = pLVar6;
    *in_x0 = pLVar7 + lVar8;
    in_x0[1] = pLVar7 + 0x58;
    while (pLVar12 != pLVar2) {
      pLVar12 = pLVar12 + -0x58;
      MeshSplitManager::LoadedSplitShape::~LoadedSplitShape(pLVar12);
    }
  }
  if (pLVar2 == (LoadedSplitShape *)0x0) {
    return;
  }
  operator_delete(pLVar2);
  return;
}


