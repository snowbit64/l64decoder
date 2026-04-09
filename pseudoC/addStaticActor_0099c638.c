// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addStaticActor
// Entry Point: 0099c638
// Size: 88 bytes
// Signature: undefined __thiscall addStaticActor(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, vector * param_2)


/* Bt2ScenegraphPhysicsContext::addStaticActor(TransformGroup*, std::__ndk1::vector<GsShape*,
   std::__ndk1::allocator<GsShape*> > const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addStaticActor
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,vector *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)param_2;
  if (*(long *)(param_2 + 8) != lVar1) {
    uVar2 = 0;
    do {
      addStaticActor(this,*(GsShape **)(lVar1 + uVar2 * 8));
      lVar1 = *(long *)param_2;
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < (ulong)(*(long *)(param_2 + 8) - lVar1 >> 3));
  }
  return;
}


