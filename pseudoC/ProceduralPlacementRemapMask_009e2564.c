// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementRemapMask
// Entry Point: 009e2564
// Size: 64 bytes
// Signature: undefined __thiscall ~ProceduralPlacementRemapMask(ProceduralPlacementRemapMask * this)


/* ProceduralPlacementRemapMask::~ProceduralPlacementRemapMask() */

void __thiscall
ProceduralPlacementRemapMask::~ProceduralPlacementRemapMask(ProceduralPlacementRemapMask *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 200);
  *(undefined ***)this = &PTR__ProceduralPlacementRemapMask_00fe2910;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0xd0) = pvVar1;
    operator_delete(pvVar1);
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


