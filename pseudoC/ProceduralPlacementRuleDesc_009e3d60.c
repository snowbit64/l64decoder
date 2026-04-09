// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementRuleDesc
// Entry Point: 009e3d60
// Size: 260 bytes
// Signature: undefined __thiscall ~ProceduralPlacementRuleDesc(ProceduralPlacementRuleDesc * this)


/* ProceduralPlacementRule::ProceduralPlacementRuleDesc::~ProceduralPlacementRuleDesc() */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementRuleDesc::~ProceduralPlacementRuleDesc
          (ProceduralPlacementRuleDesc *this)

{
  void *pvVar1;
  void *pvVar2;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var3;
  long *plVar4;
  void *pvVar5;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var6;
  ulong uVar7;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var8;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__ProceduralPlacementRuleDesc_00fe2af8;
  if (pvVar2 != *(void **)(this + 0x48)) {
    uVar7 = 0;
    pvVar1 = *(void **)(this + 0x48);
    pvVar5 = pvVar2;
    do {
      pvVar2 = pvVar1;
      plVar4 = *(long **)((long)pvVar2 + uVar7 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
        pvVar2 = *(void **)(this + 0x48);
        pvVar5 = *(void **)(this + 0x50);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      pvVar1 = pvVar2;
    } while (uVar7 < (ulong)((long)pvVar5 - (long)pvVar2 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
  p_Var8 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
             **)(this + 0x30);
  if (p_Var8 != (__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                 *)0x0) {
    p_Var3 = p_Var8;
    if (*(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
          **)(this + 0x38) != p_Var8) {
      p_Var3 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                 **)(this + 0x38) + -0x18;
      do {
        std::__ndk1::
        __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
        ::~__vector_base(p_Var3);
        if (((byte)p_Var3[-0x18] & 1) != 0) {
          operator_delete(*(void **)(p_Var3 + -8));
        }
        p_Var6 = p_Var3 + -0x18;
        p_Var3 = p_Var3 + -0x30;
      } while (p_Var6 != p_Var8);
      p_Var3 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                 **)(this + 0x30);
    }
    *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
      **)(this + 0x38) = p_Var8;
    operator_delete(p_Var3);
  }
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}


