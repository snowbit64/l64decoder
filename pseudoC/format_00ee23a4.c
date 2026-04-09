// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: format
// Entry Point: 00ee23a4
// Size: 284 bytes
// Signature: undefined __cdecl format(char * param_1, ...)


/* Luau::format(char const*, ...) */

void Luau::format(char *param_1,...)

{
  long lVar1;
  int iVar2;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *in_x8;
  long lVar3;
  undefined8 in_d0;
  undefined auStack_110 [8];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long local_48;
  
  puStack_c0 = auStack_110;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ppuStack_c8 = &local_d0;
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  uStack_b8 = 0xffffff80ffffffc8;
  uStack_58 = 0xffffff80ffffffc8;
                    /* try { // try from 00ee242c to 00ee2493 has its CatchHandler @ 00ee24c0 */
  local_108 = in_x1;
  uStack_100 = in_x2;
  local_f8 = in_x3;
  uStack_f0 = in_x4;
  local_e8 = in_x5;
  uStack_e0 = in_x6;
  local_d8 = in_x7;
  local_d0 = (undefined *)register0x00000008;
  local_70 = (undefined *)register0x00000008;
  ppuStack_68 = ppuStack_c8;
  puStack_60 = puStack_c0;
  iVar2 = __vsnprintf_chk(0,0,0,0xffffffffffffffff,param_1,&local_70,in_x6,in_x7,in_d0);
  if (0 < iVar2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)in_x8,(char)iVar2);
    lVar3 = in_x8[2];
    if ((*(byte *)in_x8 & 1) == 0) {
      lVar3 = (long)in_x8 + 1;
    }
    ppuStack_68 = ppuStack_c8;
    local_70 = local_d0;
    uStack_58 = uStack_b8;
    puStack_60 = puStack_c0;
    __vsnprintf_chk(lVar3,iVar2 + 1,0,0xffffffffffffffff,param_1,&local_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


