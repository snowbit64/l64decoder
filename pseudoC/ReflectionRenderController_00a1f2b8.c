// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ReflectionRenderController
// Entry Point: 00a1f2b8
// Size: 136 bytes
// Signature: undefined __thiscall ~ReflectionRenderController(ReflectionRenderController * this)


/* ReflectionRenderController::~ReflectionRenderController() */

void __thiscall
ReflectionRenderController::~ReflectionRenderController(ReflectionRenderController *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  std::__ndk1::
  __tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
  ::destroy((__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar1 = pvVar3;
  pvVar2 = *(void **)(this + 0x28);
  if (*(void **)(this + 0x28) != pvVar3) {
    do {
      pvVar1 = *(void **)((long)pvVar2 + -0x18);
      pvVar4 = (void *)((long)pvVar2 + -0x60);
      if (pvVar1 != (void *)0x0) {
        *(void **)((long)pvVar2 + -0x10) = pvVar1;
        operator_delete(pvVar1);
      }
      pvVar2 = pvVar4;
    } while (pvVar4 != pvVar3);
    pvVar1 = *(void **)(this + 0x20);
  }
  *(void **)(this + 0x28) = pvVar3;
  operator_delete(pvVar1);
  return;
}


