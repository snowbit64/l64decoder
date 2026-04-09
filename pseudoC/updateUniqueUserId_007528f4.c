// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateUniqueUserId
// Entry Point: 007528f4
// Size: 324 bytes
// Signature: undefined updateUniqueUserId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::updateUniqueUserId() */

void EngineManager::updateUniqueUserId(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  undefined8 uVar4;
  undefined2 *puVar5;
  char *local_60;
  uchar auStack_58 [32];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = (ulong)(*(byte *)(in_x0 + 800) >> 1);
  if ((*(byte *)(in_x0 + 800) & 1) != 0) {
    uVar1 = *(ulong *)(in_x0 + 0x328);
  }
  if (uVar1 == 0) {
    if (((DAT_010530b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_010530b8), iVar3 != 0)) {
                    /* try { // try from 007529fc to 00752a07 has its CatchHandler @ 00752a38 */
      EngineManager((EngineManager *)&DAT_01052d78);
      __cxa_atexit(~EngineManager,&DAT_01052d78,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&DAT_010530b8);
    }
    uVar4 = CopyProtection::getNetworkKey();
    puVar5 = (undefined2 *)operator_new__(10);
    *(undefined8 *)(puVar5 + 1) = uVar4;
    *puVar5 = 0x7367;
    PBKDF2HashUtil::PBKDF2_SHA256
              (auStack_58,0x20,(uchar *)puVar5,10,(uchar *)"VYasvnx9xgo59w23EncWTTTyMeOjVunl",0x20,
               100);
    operator_delete__(puVar5);
    local_60 = (char *)0x0;
    StringUtil::base64Encode(auStack_58,0x20,false,&local_60);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(in_x0 + 800));
    if (local_60 != (char *)0x0) {
      operator_delete__(local_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


