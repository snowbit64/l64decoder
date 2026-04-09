// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseErrors
// Entry Point: 00ee911c
// Size: 260 bytes
// Signature: undefined __thiscall ParseErrors(ParseErrors * this, vector param_1)


/* Luau::ParseErrors::ParseErrors(std::__ndk1::vector<Luau::ParseError,
   std::__ndk1::allocator<Luau::ParseError> >) */

void __thiscall Luau::ParseErrors::ParseErrors(ParseErrors *this,long **param_2)

{
  long lVar1;
  ulong uVar2;
  long **pplVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  pplVar3 = (long **)(this + 8);
  *pplVar3 = (long *)0x0;
  *(undefined ***)this = &PTR__ParseErrors_01016938;
  *pplVar3 = *param_2;
  *(long **)(this + 0x10) = param_2[1];
  *(long **)(this + 0x18) = param_2[2];
  *param_2 = (long *)0x0;
  param_2[1] = (long *)0x0;
  param_2[2] = (long *)0x0;
  puVar4 = (undefined8 *)(this + 0x20);
  *puVar4 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  uVar2 = *(long *)(this + 0x10) - (long)*pplVar3;
  if (uVar2 == 0x30) {
    (**(code **)(**pplVar3 + 0x10))();
                    /* try { // try from 00ee91ac to 00ee91b3 has its CatchHandler @ 00ee9224 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)puVar4);
  }
  else {
                    /* try { // try from 00ee91c8 to 00ee91d7 has its CatchHandler @ 00ee9220 */
    format("%d parse errors",&local_50,(ulong)(uint)((int)(uVar2 >> 4) * -0x55555555));
    if ((*(byte *)puVar4 & 1) != 0) {
      operator_delete(*(void **)(this + 0x30));
    }
    *(undefined8 *)(this + 0x28) = uStack_48;
    *puVar4 = local_50;
    *(undefined8 *)(this + 0x30) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


