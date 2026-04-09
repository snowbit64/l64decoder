// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_15
// Entry Point: 008a867c
// Size: 236 bytes
// Signature: undefined _INIT_15(void)


void _INIT_15(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte local_40;
  undefined8 local_3f;
  undefined4 local_37;
  undefined local_33;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0x18;
  local_37 = 0x6d6f646e;
  local_3f._0_1_ = '/';
  local_3f._1_1_ = 'd';
  local_3f._2_1_ = 'e';
  local_3f._3_1_ = 'v';
  local_3f._4_1_ = '/';
  local_3f._5_1_ = 'u';
  local_3f._6_1_ = 'r';
  local_3f._7_1_ = 'a';
  local_33 = 0;
                    /* try { // try from 008a86c0 to 008a86cf has its CatchHandler @ 008a8768 */
  std::__ndk1::random_device::random_device
            ((random_device *)&AudioMathUtil::m_rd,(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  __cxa_atexit(std::__ndk1::random_device::~random_device,&AudioMathUtil::m_rd,&PTR_LOOP_00fd8de0);
  uVar2 = std::__ndk1::random_device::operator()((random_device *)&AudioMathUtil::m_rd);
  uVar2 = uVar2 & 0xffffffff;
  lVar3 = 1;
  AudioMathUtil::m_randomNumberGenerator = uVar2;
  do {
    uVar2 = (ulong)((int)lVar3 + ((uint)(uVar2 >> 0x1e) ^ (uint)uVar2) * 0x6c078965);
    (&AudioMathUtil::m_randomNumberGenerator)[lVar3] = uVar2;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x270);
  DAT_0107da68 = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


