// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ProceduralPlacementScriptDesc
// Entry Point: 009d6d9c
// Size: 356 bytes
// Signature: undefined __thiscall ProceduralPlacementScriptDesc(ProceduralPlacementScriptDesc * this, ProceduralPlacementScriptDesc * param_1)


/* ProceduralPlacementRule::ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc(ProceduralPlacementRule::ProceduralPlacementScriptDesc
   const&) */

void __thiscall
ProceduralPlacementRule::ProceduralPlacementScriptDesc::ProceduralPlacementScriptDesc
          (ProceduralPlacementScriptDesc *this,ProceduralPlacementScriptDesc *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte local_b0;
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)this);
  puVar3 = (undefined8 *)(this + 0x18);
  *puVar3 = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (*(long *)(param_1 + 0x20) != *(long *)(param_1 + 0x18)) {
    uVar4 = 0;
    do {
                    /* try { // try from 009d6e34 to 009d6e3b has its CatchHandler @ 009d6f30 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_b0);
                    /* try { // try from 009d6e44 to 009d6e4b has its CatchHandler @ 009d6f18 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_98);
                    /* try { // try from 009d6e54 to 009d6e5b has its CatchHandler @ 009d6f00 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_80);
      if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
        std::__ndk1::
        vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
        ::__push_back_slow_path<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
                  ((ProceduralPlacementScriptArgDesc *)puVar3);
      }
      else {
                    /* try { // try from 009d6e68 to 009d6e83 has its CatchHandler @ 009d6f38 */
        std::__ndk1::
        vector<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc,std::__ndk1::allocator<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc>>
        ::__construct_one_at_end<ProceduralPlacementRule::ProceduralPlacementScriptArgDesc_const&>
                  ((ProceduralPlacementScriptArgDesc *)puVar3);
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar2 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 3) * -0x71c71c71c71c71c7;
    } while (uVar4 <= uVar2 && uVar2 - uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


