// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~__split_buffer
// Entry Point: 009d74e0
// Size: 116 bytes
// Signature: undefined __thiscall ~__split_buffer(__split_buffer<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>&> * this)


/* std::__ndk1::__split_buffer<ProceduralPlacementRule::ProceduralPlacementScriptDesc,
   std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>&>::~__split_buffer()
    */

void __thiscall
std::__ndk1::
__split_buffer<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>&>
::~__split_buffer(__split_buffer<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>&>
                  *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  while (lVar2 != lVar1) {
    *(long *)(this + 0x10) = lVar2 + -0x30;
    __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
    ::~__vector_base((__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                      *)(lVar2 + -0x18));
    if ((*(byte *)(lVar2 + -0x30) & 1) != 0) {
      operator_delete(*(void **)(lVar2 + -0x20));
    }
    lVar2 = *(long *)(this + 0x10);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
    return;
  }
  return;
}


