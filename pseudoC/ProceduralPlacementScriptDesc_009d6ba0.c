// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementScriptDesc
// Entry Point: 009d6ba0
// Size: 60 bytes
// Signature: undefined __thiscall ~ProceduralPlacementScriptDesc(ProceduralPlacementScriptDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementScriptDesc::~ProceduralPlacementScriptDesc() */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementScriptDesc::~ProceduralPlacementScriptDesc
          (ProceduralPlacementScriptDesc *this)

{
  std::__ndk1::
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  ::~__vector_base((__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                    *)(this + 0x18));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


