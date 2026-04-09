// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: seekoff
// Entry Point: 0075e5a4
// Size: 192 bytes
// Signature: undefined __cdecl seekoff(longlong param_1, seekdir param_2, uint param_3)


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::seekoff(long long,
   std::__ndk1::ios_base::seekdir, unsigned int) */

undefined  [16]
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::seekoff
          (longlong param_1,seekdir param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  __off_t _Var4;
  undefined auVar5 [16];
  
  if (*(long **)(param_1 + 0x80) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0075edd0();
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x30))();
  if ((*(long *)(param_1 + 0x78) != 0) && (((ulong)param_2 == 0 || (0 < iVar1)))) {
    iVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
    uVar3 = 0;
    _Var4 = -1;
    if ((iVar2 != 0) || (2 < param_3)) goto LAB_0075e63c;
    _Var4 = (long)iVar1 * (ulong)param_2;
    if (iVar1 < 1) {
      _Var4 = 0;
    }
    iVar1 = fseeko(*(FILE **)(param_1 + 0x78),_Var4,param_3);
    if (iVar1 == 0) {
      _Var4 = ftello(*(FILE **)(param_1 + 0x78));
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      goto LAB_0075e63c;
    }
  }
  uVar3 = 0;
  _Var4 = -1;
LAB_0075e63c:
  auVar5._8_8_ = _Var4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


