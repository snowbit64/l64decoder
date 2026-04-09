// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findDynamicReflectionMap
// Entry Point: 00a25e8c
// Size: 80 bytes
// Signature: undefined __thiscall findDynamicReflectionMap(ReflectionRenderController * this, GsShape * param_1)


/* ReflectionRenderController::findDynamicReflectionMap(GsShape const*) const */

ReflectionRenderController * __thiscall
ReflectionRenderController::findDynamicReflectionMap
          (ReflectionRenderController *this,GsShape *param_1)

{
  ReflectionRenderController **ppRVar1;
  ReflectionRenderController **ppRVar2;
  ReflectionRenderController **ppRVar3;
  
  ppRVar2 = (ReflectionRenderController **)(this + 0x40);
  ppRVar3 = (ReflectionRenderController **)*ppRVar2;
  ppRVar1 = ppRVar2;
  if (ppRVar3 != (ReflectionRenderController **)0x0) {
    do {
      if (ppRVar3[4] >= param_1) {
        ppRVar1 = ppRVar3;
      }
      ppRVar3 = (ReflectionRenderController **)ppRVar3[ppRVar3[4] < param_1];
    } while (ppRVar3 != (ReflectionRenderController **)0x0);
    if ((ppRVar1 != ppRVar2) && (ppRVar1[4] <= param_1)) {
      return ppRVar1[5];
    }
  }
  return *(ReflectionRenderController **)(*(long *)(this + 8) + 0xa0);
}


