// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00ec9604
// Size: 324 bytes
// Signature: undefined __thiscall __append(vector<aabbtree::AABBTreeImpl::Node,std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node>> * this, ulong param_1)


/* std::__ndk1::vector<aabbtree::AABBTreeImpl::Node,
   std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node> >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<aabbtree::AABBTreeImpl::Node,std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node>>::__append
          (vector<aabbtree::AABBTreeImpl::Node,std::__ndk1::allocator<aabbtree::AABBTreeImpl::Node>>
           *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *__src;
  size_t __n;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  puVar3 = *(undefined4 **)(this + 8);
  if ((ulong)(*(long *)(this + 0x10) - (long)puVar3 >> 6) < param_1) {
    lVar7 = (long)puVar3 - *(long *)this >> 6;
    uVar1 = lVar7 + param_1;
    if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar5 = *(long *)(this + 0x10) - *(long *)this;
    uVar6 = (long)uVar5 >> 5;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffffbf < uVar5) {
      uVar1 = 0x3ffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar2 = operator_new(uVar1 << 6);
    }
    puVar4 = (undefined4 *)((long)pvVar2 + lVar7 * 0x40);
    puVar3 = puVar4;
    do {
      *puVar3 = 0;
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 0xc) = 0;
      *(undefined8 *)(puVar3 + 10) = 0;
      *(undefined8 *)(puVar3 + 0xe) = 0;
      puVar3 = puVar3 + 0x10;
    } while (puVar3 != puVar4 + param_1 * 0x10);
    __src = *(void **)this;
    __n = *(long *)(this + 8) - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = *(void **)this;
    }
    *(void **)this = (void *)((long)puVar4 - __n);
    *(undefined4 **)(this + 8) = puVar4 + param_1 * 0x10;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + uVar1 * 0x40);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    puVar4 = puVar3;
    if (param_1 != 0) {
      puVar4 = puVar3 + param_1 * 0x10;
      do {
        *puVar3 = 0;
        *(undefined8 *)(puVar3 + 4) = 0;
        *(undefined8 *)(puVar3 + 2) = 0;
        *(undefined8 *)(puVar3 + 8) = 0;
        *(undefined8 *)(puVar3 + 6) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined8 *)(puVar3 + 0xe) = 0;
        puVar3 = puVar3 + 0x10;
      } while (puVar3 != puVar4);
    }
    *(undefined4 **)(this + 8) = puVar4;
  }
  return;
}


