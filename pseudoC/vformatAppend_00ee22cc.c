// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vformatAppend
// Entry Point: 00ee22cc
// Size: 216 bytes
// Signature: undefined __cdecl vformatAppend(basic_string * param_1, char * param_2, __va_list param_3)


/* Luau::vformatAppend(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, char const*, std::__va_list) */

void Luau::vformatAppend(basic_string *param_1,char *param_2,__va_list param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  puVar4 = (undefined8 *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  uStack_58 = puVar4[3];
  uStack_60 = puVar4[2];
  iVar3 = vsnprintf((char *)0x0,0,param_2,&local_70);
  if (0 < iVar3) {
    uVar1 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 2);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)param_1,(char)uVar1 + (char)iVar3);
    lVar5 = *(long *)(param_1 + 4);
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    uStack_58 = puVar4[3];
    uStack_60 = puVar4[2];
    if ((*(byte *)param_1 & 1) == 0) {
      lVar5 = (long)param_1 + 1;
    }
    iVar3 = vsnprintf((char *)(lVar5 + uVar1),(ulong)(iVar3 + 1),param_2,&local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


