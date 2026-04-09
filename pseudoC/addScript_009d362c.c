// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addScript
// Entry Point: 009d362c
// Size: 264 bytes
// Signature: undefined __cdecl addScript(basic_string * param_1)


/* WARNING: Type propagation algorithm not settling */
/* ProceduralPlacementRule::addScript(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void ProceduralPlacementRule::addScript(basic_string *param_1)

{
  ProceduralPlacementScriptDesc *this;
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  basic_string local_68 [4];
  void *local_58;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_68);
  this = *(ProceduralPlacementScriptDesc **)(param_1 + 0x16);
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_40 = 0;
  if (this < *(ProceduralPlacementScriptDesc **)(param_1 + 0x18)) {
                    /* try { // try from 009d366c to 009d3677 has its CatchHandler @ 009d373c */
    ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc
              (this,(ProceduralPlacementScriptDesc *)local_68);
    *(ProceduralPlacementScriptDesc **)(param_1 + 0x16) = this + 0x30;
  }
  else {
                    /* try { // try from 009d3688 to 009d368f has its CatchHandler @ 009d3734 */
    std::__ndk1::
    vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
    ::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptDesc>
              ((vector<ProceduralPlacementRule::ProceduralPlacementScriptDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptDesc>>
                *)(param_1 + 0x14),(ProceduralPlacementScriptDesc *)local_68);
  }
  pvVar3 = local_50;
  pvVar4 = local_48;
  if (local_50 != (void *)0x0) {
    while (pvVar2 = pvVar4, pvVar2 != pvVar3) {
      if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -8));
      }
      if ((*(byte *)((long)pvVar2 + -0x30) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x20));
      }
      pvVar4 = (void *)((long)pvVar2 + -0x48);
      if ((*(byte *)((long)pvVar2 + -0x48) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x38));
      }
    }
    local_48 = pvVar3;
    operator_delete(local_50);
  }
  if (((byte)local_68[0]._0_1_ & 1) != 0) {
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


