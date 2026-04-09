// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: emplace_back<BrepWedge,int>
// Entry Point: 00b72360
// Size: 344 bytes
// Signature: void __thiscall emplace_back<BrepWedge,int>(vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> * this, BrepWedge * param_1, int * param_2)


/* void std::__ndk1::vector<Brep::SharedWedge, std::__ndk1::allocator<Brep::SharedWedge>
   >::emplace_back<BrepWedge, int>(BrepWedge&&, int&&) */

void __thiscall
std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::
emplace_back<BrepWedge,int>
          (vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *this,
          BrepWedge *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *__src;
  size_t __n;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 < *(undefined8 **)(this + 0x10)) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar8 = *(undefined8 *)param_1;
    iVar2 = *param_2;
    *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar5[1] = uVar9;
    *puVar5 = uVar8;
    *(short *)((long)puVar5 + 0x14) = (short)iVar2;
    *(undefined8 **)(this + 8) = puVar5 + 3;
  }
  else {
    __src = *(void **)this;
    __n = (long)puVar5 - (long)__src;
    uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x10) - (long)__src >> 3;
    uVar7 = lVar6 * 0x5555555555555556;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x18);
    iVar2 = *param_2;
    uVar8 = *(undefined8 *)param_1;
    puVar5 = (undefined8 *)((long)pvVar4 + ((long)__n >> 3) * 8);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    puVar5[1] = *(undefined8 *)(param_1 + 8);
    *puVar5 = uVar8;
    *(undefined4 *)(puVar5 + 2) = uVar3;
    *(short *)((long)puVar5 + 0x14) = (short)iVar2;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar5 - __n),__src,__n);
    }
    *(void **)this = (void *)((long)puVar5 - __n);
    *(undefined8 **)(this + 8) = puVar5 + 3;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x18);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}


