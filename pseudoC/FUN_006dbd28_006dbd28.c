// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006dbd28
// Entry Point: 006dbd28
// Size: 252 bytes
// Signature: undefined FUN_006dbd28(void)


void FUN_006dbd28(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  GiantsAdsProvider *this;
  ushort local_78;
  void *local_68;
  ushort local_60;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  AdsProviderManager::getInstance();
  this = (GiantsAdsProvider *)AdsProviderManager::getAdsProvider();
  if ((ulong)((lVar2 - lVar1 >> 3) * -0x5555555555555555) < 2) {
    local_60 = 0;
    local_78 = 0;
                    /* try { // try from 006dbdb0 to 006dbdbf has its CatchHandler @ 006dbe34 */
    GiantsAdsProvider::setAdsRequestTime(this,(basic_string *)&local_60,(basic_string *)&local_78);
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    lVar1 = *param_1;
    if ((ulong)((param_1[1] - lVar1 >> 3) * -0x5555555555555555) < 3) {
      local_60 = 0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_60);
    }
                    /* try { // try from 006dbdd8 to 006dbde7 has its CatchHandler @ 006dbe24 */
    GiantsAdsProvider::setAdsRequestTime
              (this,(basic_string *)(lVar1 + 0x18),(basic_string *)&local_60);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


