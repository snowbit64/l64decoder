// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~VulkanProgramObject
// Entry Point: 00abb99c
// Size: 420 bytes
// Signature: undefined __thiscall ~VulkanProgramObject(VulkanProgramObject * this)


/* VulkanProgramObject::~VulkanProgramObject() */

void __thiscall VulkanProgramObject::~VulkanProgramObject(VulkanProgramObject *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__VulkanProgramObject_00fe61e8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x1c0),*(__tree_node **)(this + 0x1c8));
  pvVar1 = *(void **)(this + 0x1a8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1b0) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x180),*(__tree_node **)(this + 0x188));
  pvVar1 = *(void **)(this + 0x168);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x170) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x140),*(__tree_node **)(this + 0x148));
  pvVar1 = *(void **)(this + 0x128);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x130) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x100),*(__tree_node **)(this + 0x108));
  pvVar1 = *(void **)(this + 0xe8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x60);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(this + 0x50);
    if (*(void **)(this + 0x50) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x30);
        if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x18));
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x48);
    }
    *(void **)(this + 0x50) = pvVar1;
    operator_delete(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(this + 0x38);
    if (*(void **)(this + 0x38) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x30);
        if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x18));
        }
        pvVar2 = pvVar3;
      } while (pvVar3 != pvVar1);
      pvVar3 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = *(void **)(this + 0x20);
  if (*(void **)(this + 0x20) != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x30);
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != pvVar1);
    pvVar3 = *(void **)(this + 0x18);
  }
  *(void **)(this + 0x20) = pvVar1;
  operator_delete(pvVar3);
  return;
}


