// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vformat
// Entry Point: 00ee25fc
// Size: 208 bytes
// Signature: undefined __thiscall vformat(Luau * this, char * param_1, __va_list param_2)


/* Luau::vformat(char const*, std::__va_list) */

void __thiscall Luau::vformat(Luau *this,char *param_1,__va_list param_2)

{
  long lVar1;
  int iVar2;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *in_x8;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)param_1;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
                    /* try { // try from 00ee263c to 00ee26a3 has its CatchHandler @ 00ee26cc */
  local_60 = uVar4;
  uStack_58 = uVar5;
  uStack_50 = uVar6;
  uStack_48 = uVar7;
  iVar2 = __vsnprintf_chk(0,0,0,0xffffffffffffffff,this,&local_60,in_x6,in_x7,uVar4,uVar5,uVar6,
                          uVar7,uVar4,uVar5,uVar6,uVar7);
  if (0 < iVar2) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)in_x8,(char)iVar2);
    lVar3 = in_x8[2];
    if ((*(byte *)in_x8 & 1) == 0) {
      lVar3 = (long)in_x8 + 1;
    }
    local_60 = uVar4;
    uStack_58 = uVar5;
    uStack_50 = uVar6;
    uStack_48 = uVar7;
    __vsnprintf_chk(lVar3,iVar2 + 1,0,0xffffffffffffffff,this,&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


