// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Java_com_giantssoftware_SoftKeyboard_nativeReportResult
// Entry Point: 00b23340
// Size: 136 bytes
// Signature: undefined Java_com_giantssoftware_SoftKeyboard_nativeReportResult(void)


void Java_com_giantssoftware_SoftKeyboard_nativeReportResult
               (long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x548))(param_1,param_3,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)&AndroidImeUtil::m_lastImeString);
  AndroidImeUtil::m_isImeOpen = 0;
  AndroidImeUtil::m_userDidCancel = param_4 != '\0';
                    /* WARNING: Could not recover jumptable at 0x00b233c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x550))(param_1,param_3,uVar1);
  return;
}


