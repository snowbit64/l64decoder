// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullPath
// Entry Point: 00b3494c
// Size: 320 bytes
// Signature: undefined __thiscall getFullPath(NativeFileLoader * this, char * param_1, bool param_2, basic_string * param_3)


/* NativeFileLoader::getFullPath(char const*, bool, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
NativeFileLoader::getFullPath
          (NativeFileLoader *this,char *param_1,bool param_2,basic_string *param_3)

{
  NativeFileLoader NVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  NativeFileLoader *pNVar5;
  NativeFileLoader *__s2;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  NVar1 = this[0x28];
  uVar6 = (ulong)((byte)NVar1 >> 1);
  if (((byte)NVar1 & 1) != 0) {
    uVar6 = *(ulong *)(this + 0x30);
  }
  if (uVar6 == 0) {
    if (param_2) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)param_3);
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_3,(basic_string *)(this + 0x10));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)param_3);
    }
    uVar4 = 1;
    goto LAB_00b34a60;
  }
  if (param_2) {
    pNVar5 = this + 0x10;
    NVar1 = *pNVar5;
    uVar6 = (ulong)((byte)NVar1 >> 1);
    if (((byte)NVar1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x18);
    }
    if (uVar6 != 0) {
      __s2 = *(NativeFileLoader **)(this + 0x20);
LAB_00b349ec:
      if (((byte)NVar1 & 1) == 0) {
        __s2 = pNVar5 + 1;
      }
      iVar3 = strncmp(param_1,(char *)__s2,uVar6);
      if (iVar3 == 0) goto LAB_00b34a0c;
    }
    uVar4 = 0;
  }
  else {
    pNVar5 = this + 0x40;
    NVar1 = *pNVar5;
    uVar6 = (ulong)((byte)NVar1 >> 1);
    if (((byte)NVar1 & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x48);
    }
    if (uVar6 != 0) {
      __s2 = *(NativeFileLoader **)(this + 0x50);
      goto LAB_00b349ec;
    }
LAB_00b34a0c:
    FUN_006cadd8(&local_60,this + 0x28,param_1 + uVar6);
    if ((*(byte *)param_3 & 1) != 0) {
      operator_delete(*(void **)(param_3 + 4));
    }
    uVar4 = 1;
    *(undefined8 *)(param_3 + 2) = uStack_58;
    *(undefined8 *)param_3 = local_60;
    *(undefined8 *)(param_3 + 4) = local_50;
  }
LAB_00b34a60:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


