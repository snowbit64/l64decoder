// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00755334
// Size: 348 bytes
// Signature: undefined __thiscall init(HardwareScalability * this, Properties * param_1, char * param_2, IRenderDevice * param_3, PERFORMANCE_CLASS param_4)


/* HardwareScalability::init(Properties*, char const*, IRenderDevice*,
   HardwareScalability::PERFORMANCE_CLASS) */

void __thiscall
HardwareScalability::init
          (HardwareScalability *this,Properties *param_1,char *param_2,IRenderDevice *param_3,
          PERFORMANCE_CLASS param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  size_t __n;
  char *pcVar4;
  char *__dest;
  ulong uVar5;
  bool local_74 [4];
  undefined8 local_70;
  size_t local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0xe8));
  *(Properties **)(this + 0x100) = param_1;
  lVar3 = (**(code **)(*(long *)param_3 + 0x28))(param_3);
  pcVar4 = *(char **)(lVar3 + 0x40);
  __n = strlen(pcVar4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_70 | 1);
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_007553f4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (char *)operator_new(uVar5);
    local_70 = uVar5 | 1;
    local_68 = __n;
    local_60 = __dest;
  }
  memcpy(__dest,pcVar4,__n);
LAB_007553f4:
  __dest[__n] = '\0';
                    /* try { // try from 007553f8 to 00755413 has its CatchHandler @ 00755490 */
  StringUtil::replace((basic_string *)&local_70,"  "," ");
  local_74[0] = false;
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
                    /* try { // try from 00755430 to 00755447 has its CatchHandler @ 00755494 */
  uVar2 = GPUPeformanceClassUtil::detectGPUPerformanceClass(pcVar4,(bool *)(this + 0x12),local_74);
  *(undefined4 *)(this + 0x14) = uVar2;
  initAndroidProfile(this,param_4);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


