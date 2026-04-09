// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc>
// Entry Point: 009d6bdc
// Size: 424 bytes
// Signature: void __thiscall __push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc>(vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>> * this, ProceduralPlacementScriptDesc * param_1)


/* void std::__ndk1::vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,
   std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>
   >::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc>(ProceduralPlacementRule::ProceduralPlacementScriptDesc&&)
    */

void __thiscall
std::__ndk1::
vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc>
          (vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
           *this,ProceduralPlacementScriptDesc *param_1)

{
  ulong uVar1;
  ProceduralPlacementScriptDesc *pPVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var7;
  long lVar8;
  ulong uVar9;
  ProceduralPlacementScriptDesc *this_00;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var10;
  __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
  *p_Var11;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar9 = lVar8 * 0x5555555555555556;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
    uVar1 = 0x555555555555555;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x30);
  }
  this_00 = (ProceduralPlacementScriptDesc *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 009d6ca0 to 009d6cab has its CatchHandler @ 009d6d84 */
  ProceduralPlacementRule::ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc
            (this_00,param_1);
  p_Var11 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
              **)this;
  p_Var10 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
              **)(this + 8);
  pPVar2 = this_00 + 0x30;
  p_Var7 = p_Var11;
  if (p_Var10 != p_Var11) {
    do {
      this_00 = this_00 + -0x30;
      p_Var10 = p_Var10 + -0x30;
                    /* try { // try from 009d6cc8 to 009d6cd3 has its CatchHandler @ 009d6d88 */
      ProceduralPlacementRule::ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc
                (this_00,(ProceduralPlacementScriptDesc *)p_Var10);
    } while (p_Var10 != p_Var11);
    p_Var11 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
                **)this;
    p_Var7 = *(__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
               **)(this + 8);
  }
  *(ProceduralPlacementScriptDesc **)this = this_00;
  *(ProceduralPlacementScriptDesc **)(this + 8) = pPVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x30);
  if (p_Var7 != p_Var11) {
    p_Var10 = p_Var7 + -0x18;
    do {
      __vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
      ::~__vector_base(p_Var10);
      if (((byte)p_Var10[-0x18] & 1) != 0) {
        operator_delete(*(void **)(p_Var10 + -8));
      }
      p_Var7 = p_Var10 + -0x18;
      p_Var10 = p_Var10 + -0x30;
    } while (p_Var7 != p_Var11);
  }
  if (p_Var11 !=
      (__vector_base<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
       *)0x0) {
    operator_delete(p_Var11);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


