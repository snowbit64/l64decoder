// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAbsPath
// Entry Point: 009d20f8
// Size: 464 bytes
// Signature: undefined __thiscall getAbsPath(ProceduralPlacementManager * this, basic_string * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProceduralPlacementManager::getAbsPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementManager::getAbsPath(ProceduralPlacementManager *this,basic_string *param_1)

{
  ProceduralPlacementManager PVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *in_x8;
  ProceduralPlacementManager *pPVar5;
  byte local_50;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  PVar1 = *this;
  pPVar5 = *(ProceduralPlacementManager **)(this + 0x10);
  *in_x8 = 0;
  in_x8[1] = 0;
  in_x8[2] = 0;
  if (((byte)PVar1 & 1) == 0) {
    pPVar5 = this + 1;
  }
  FileManager::s_singletonFileManager[96] = 0;
  if (*pPVar5 == (ProceduralPlacementManager)0x24) {
                    /* try { // try from 009d2160 to 009d2197 has its CatchHandler @ 009d22fc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)in_x8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)in_x8);
    FileManager::s_singletonFileManager[96] = 1;
  }
  else {
    uVar4 = PathUtil::isAbsolutePath((char *)pPVar5);
    if ((uVar4 & 1) == 0) {
      if (((DAT_02111d80 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_02111d80), iVar3 != 0)) {
        DAT_02111cc0 = 0;
        DAT_02111cb8 = 0;
        DAT_02111c18 = &PTR__ProceduralPlacementManager_00fe2310;
        DAT_02111cb0 = &DAT_02111cb8;
        DAT_02111d38 = 0;
        DAT_02111d40 = 0;
        uRam0000000002111c28 = 0;
        _DAT_02111c20 = 0;
        uRam0000000002111c38 = 0;
        _DAT_02111c30 = 0;
        DAT_02111d30 = &DAT_02111d38;
        uRam0000000002111c48 = 0;
        _DAT_02111c40 = 0;
        uRam0000000002111c58 = 0;
        _DAT_02111c50 = 0;
        uRam0000000002111c68 = 0;
        _DAT_02111c60 = 0;
        uRam0000000002111c78 = 0;
        _DAT_02111c70 = 0;
        uRam0000000002111c88 = 0;
        _DAT_02111c80 = 0;
        uRam0000000002111c98 = 0;
        _DAT_02111c90 = 0;
        uRam0000000002111ca8 = 0;
        _DAT_02111ca0 = 0;
        uRam0000000002111cd0 = 0;
        _DAT_02111cc8 = 0;
        uRam0000000002111ce0 = 0;
        _DAT_02111cd8 = 0;
        uRam0000000002111cf0 = 0;
        _DAT_02111ce8 = 0;
        DAT_02111d00 = 0;
        _DAT_02111cf8 = 0;
        uRam0000000002111d10 = 0;
        _DAT_02111d08 = 0;
        uRam0000000002111d1a = 0;
        _DAT_02111d12 = 0;
        uRam0000000002111d18 = 0;
        DAT_02111d48 = 0x7fffffff;
        DAT_02111d50 = 0x7fffffff;
        uRam0000000002111d5c = 0;
        _DAT_02111d54 = 0;
        uRam0000000002111d6c = 0;
        _DAT_02111d64 = 0;
        DAT_02111d73._0_1_ = 0;
        DAT_02111d73._1_7_ = 0;
        __cxa_atexit(~ProceduralPlacementManager,&DAT_02111c18,&PTR_LOOP_00fd8de0);
        __cxa_guard_release(&DAT_02111d80);
      }
                    /* try { // try from 009d21ac to 009d21bb has its CatchHandler @ 009d22f8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_50);
                    /* try { // try from 009d21bc to 009d21cb has its CatchHandler @ 009d22c8 */
      PathUtil::buildAbsolutePath((basic_string *)&local_50,(char *)pPVar5,(basic_string *)in_x8);
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)in_x8);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


