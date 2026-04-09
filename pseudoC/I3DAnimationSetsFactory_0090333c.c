// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DAnimationSetsFactory
// Entry Point: 0090333c
// Size: 120 bytes
// Signature: undefined __thiscall ~I3DAnimationSetsFactory(I3DAnimationSetsFactory * this)


/* I3DAnimationSetsFactory::~I3DAnimationSetsFactory() */

void __thiscall I3DAnimationSetsFactory::~I3DAnimationSetsFactory(I3DAnimationSetsFactory *this)

{
  void *pvVar1;
  KeyframedTransformation *this_00;
  Clip *this_01;
  
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  this_00 = *(KeyframedTransformation **)(this + 0x10);
  if (this_00 != (KeyframedTransformation *)0x0) {
    KeyframedTransformation::~KeyframedTransformation(this_00);
    operator_delete(this_00);
  }
  this_01 = *(Clip **)(this + 8);
  if (this_01 != (Clip *)0x0) {
    Clip::~Clip(this_01);
    operator_delete(this_01);
  }
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,unsigned_int>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,unsigned_int>>>
             *)(this + 0x20),*(__tree_node **)(this + 0x28));
  return;
}


