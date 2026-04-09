// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cloneFirstCharacterSet
// Entry Point: 0074ab2c
// Size: 156 bytes
// Signature: undefined __cdecl cloneFirstCharacterSet(TransformGroup * param_1, TransformGroup * param_2)


/* CloneUtil::cloneFirstCharacterSet(TransformGroup*, TransformGroup*) */

uint CloneUtil::cloneFirstCharacterSet(TransformGroup *param_1,TransformGroup *param_2)

{
  long lVar1;
  CharacterSet *pCVar2;
  ulong uVar3;
  __tree_node **local_50;
  __tree_node *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar2 = (CharacterSet *)findCharacterSet(param_1);
  if (pCVar2 != (CharacterSet *)0x0) {
    local_48 = (__tree_node *)0x0;
    uStack_40 = 0;
    local_50 = &local_48;
                    /* try { // try from 0074ab70 to 0074ab8b has its CatchHandler @ 0074abc8 */
    ScenegraphUtil::mapTree(param_1,param_2,(map *)&local_50);
    uVar3 = cloneAndBindCharacterSet(pCVar2,(map *)&local_50);
    pCVar2 = (CharacterSet *)(uVar3 & 0xffffffff);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
    ::destroy((__tree<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::__map_value_compare<TransformGroup*,std::__ndk1::__value_type<TransformGroup*,TransformGroup*>,std::__ndk1::less<TransformGroup*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<TransformGroup*,TransformGroup*>>>
               *)&local_50,local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (uint)pCVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


