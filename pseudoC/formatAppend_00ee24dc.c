// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatAppend
// Entry Point: 00ee24dc
// Size: 288 bytes
// Signature: undefined __cdecl formatAppend(basic_string * param_1, char * param_2, ...)


/* Luau::formatAppend(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, char const*, ...) */

void Luau::formatAppend(basic_string *param_1,char *param_2,...)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  ppuStack_c8 = &local_d0;
  puStack_c0 = &local_100;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_b8 = 0xffffff80ffffffd0;
  uStack_58 = 0xffffff80ffffffd0;
  local_100 = in_x2;
  local_f8 = in_x3;
  uStack_f0 = in_x4;
  local_e8 = in_x5;
  uStack_e0 = in_x6;
  local_d8 = in_x7;
  local_d0 = (undefined *)register0x00000008;
  local_70 = (undefined *)register0x00000008;
  ppuStack_68 = ppuStack_c8;
  puStack_60 = puStack_c0;
  iVar3 = vsnprintf((char *)0x0,0,param_2,&local_70);
  if (0 < iVar3) {
    uVar1 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 2);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_1,(char)uVar1 + (char)iVar3);
    lVar4 = *(long *)(param_1 + 4);
    if ((*(byte *)param_1 & 1) == 0) {
      lVar4 = (long)param_1 + 1;
    }
    ppuStack_68 = ppuStack_c8;
    local_70 = local_d0;
    uStack_58 = uStack_b8;
    puStack_60 = puStack_c0;
    iVar3 = vsnprintf((char *)(lVar4 + uVar1),(ulong)(iVar3 + 1),param_2,&local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


