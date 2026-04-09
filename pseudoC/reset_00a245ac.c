// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 00a245ac
// Size: 116 bytes
// Signature: undefined __thiscall reset(ReflectionRenderController * this, RenderArgs * param_1, CullingArgs * param_2)


/* ReflectionRenderController::reset(RenderArgs const*, CullingArgs const*) */

void __thiscall
ReflectionRenderController::reset
          (ReflectionRenderController *this,RenderArgs *param_1,CullingArgs *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 0x20);
  *(RenderArgs **)(this + 0x10) = param_1;
  *(CullingArgs **)(this + 0x18) = param_2;
  lVar3 = *(long *)(this + 0x28);
  if (*(long *)(this + 0x28) != lVar1) {
    do {
      pvVar2 = *(void **)(lVar3 + -0x18);
      lVar4 = lVar3 + -0x60;
      if (pvVar2 != (void *)0x0) {
        *(void **)(lVar3 + -0x10) = pvVar2;
        operator_delete(pvVar2);
      }
      lVar3 = lVar4;
    } while (lVar4 != lVar1);
    *(long *)(this + 0x28) = lVar1;
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
  ::destroy((__tree<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::__map_value_compare<GsShape_const*,std::__ndk1::__value_type<GsShape_const*,ITextureObject*>,std::__ndk1::less<GsShape_const*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<GsShape_const*,ITextureObject*>>>
             *)(this + 0x38),*(__tree_node **)(this + 0x40));
  *(ReflectionRenderController **)(this + 0x38) = this + 0x40;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}


